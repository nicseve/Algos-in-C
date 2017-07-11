#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int array_size = 0;

struct wnode {
	char *word;
	int array_size;
	struct wnode *left;
	struct wnode *right;
	int *lines_array;
	int count;
	int pos;
	};


	void treeprint(struct wnode *p){

	if(p != NULL){
		treeprint(p->left);
		int i = 0;
		printf("\nWord: %s ", p->word);
		while(i < (p->pos)  ){
		printf("  Line Number: %d\n ", p->lines_array[i]);
		i++;}
		treeprint(p->right);
		}
	}



struct wnode *talloc(void){
	return(struct wnode *) malloc(sizeof(struct wnode));
	}


char *strdups(char *s){
	char *p;

	p = (char *) malloc(strlen(s) + 1);
	if( p != NULL)
		strcpy(p, s);
	return p;
	}




//CODE SOURCE STACK OV
int file_size(char *NAME){
	int size = 0;
	FILE *fp = fopen(NAME,"r");
	fseek(fp, 0, SEEK_END); // seek to end of file
	size = ftell(fp); // get current file pointer
	fseek(fp, 0, SEEK_SET); // seek back to beginning of file
// proceed with allocating memory and reading the file
	return size;
	}



struct wnode *talloc(void);
char *strdups(char *);


struct wnode *addword(struct wnode *p, char *w,int line_num){
	int cond;

	if(p == NULL){
		p = talloc();
		p->word = strdups(w);
		p->pos = 0;
		p->count = 1;
		p->lines_array = (int*)malloc(sizeof(int) * array_size);
		p->lines_array[ (p->pos)++ ] = line_num;
		p->left = p->right = NULL;

	} else if ((cond = strcmp(w,p->word)) == 0 ){
		p->count++;
		if(p->lines_array[p->pos - 1] != line_num){
			p->lines_array[ (p->pos)++ ] = line_num-1;}
		}
	else if (cond < 0)
		p->left = addword(p->left,w,line_num);
	else
		p->right = addword(p->right,w,line_num);
	return p;
}




void read_words (char *NAME,int f_size) {
	int lnum = 1;
	char line[50] = "";
	char x[512];
	int k = 0;
	struct wnode *word;

	FILE *fptr = fopen(NAME,"r");


	while ( fgets (line, sizeof(line), fptr) != 0){

		for(int i = 0; line[i] != '\0'  ; i++){

			if(line[i+1] == '\0'){
				x[k++] = tolower(line[i]);
				x[k] = '\0';   //REFACTOR INTO SUBROUTINE

				array_size = f_size/sizeof(line);
				word = addword(word,x,lnum);

				while( k > 0){
					x[k--] = 0;
					}
				}

			if( line[i] != ' '){

				x[k++] = tolower(line[i]);
				//write letter to temp array
				}

			else if( isspace(line[i])  && k > 0 ){
				x[k] = '\0';

				word = addword(word,x,lnum);

				while( k > 0){
					x[k--] = 0;
					}
			//write word array to tree here and clear
			 //clear temp word array
			}
		}
	lnum++;
	}
	treeprint(word);
}




void lineCount (char NAME[]) {
	char line[50] = "";
	FILE *fptr = fopen(NAME, "r");
	int count = 0;
	if (fptr == NULL) {
		perror("Error");
	}

	else{
		while ( fgets (line, sizeof(line), fptr) != 0){
				//printf("\n%s",line);
				count ++;
		}
		fclose (fptr);
	}
	printf("\nLinecount = %d\n", count);
}


void userFile(){
	int f_size = 0;
	char NAME[50] = "";

	printf("Please enter a valid filename.\n");

	while(strcmp(NAME,"") == 0 || strcmp(NAME,"\n") == 0 ){
		fgets(NAME, sizeof(NAME), stdin);

		if (strcmp(NAME,"\n") == 0){
			NAME[strcspn(NAME, "\n")] = 0;
		}
		else {
			printf("Processing...\n");

		}

	}
	NAME[strcspn(NAME, "\n")] = 0;
	f_size = file_size(NAME);
	//lineCount(NAME);
	read_words(NAME,f_size);
};





int main(int argc, char **argv){

	userFile();


	return 0;
	}