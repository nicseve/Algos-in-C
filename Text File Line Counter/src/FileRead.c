#include <stdio.h>
#include <string.h>
#include "ref.h"

//#define FILENAME "mem.txt"

void lineCount (char NAME[]) {
	char line[50] = "";
	//printf("STR Function: %lu \n Length of Filename: %lu\n", strcspn(NAME, "\n"), strlen(NAME));
	//NAME[strcspn(NAME, "\n")] = 0;
	//LEARN TO COMPARE CHAR ELEMENTS TO STRING LITERALS
	FILE *fptr = fopen(NAME, "r");
	int count = 0;
	if (fptr == NULL) {
		perror("Error");
	}
	
	else{
		while ( fgets (line, sizeof(line), fptr) != 0){
				printf("\n%s",line);
				count ++;
		}
		fclose (fptr);
	}
	printf("\nLinecount = %d\n", count);
}	
	
	
void userFile(){
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
	lineCount(NAME);
};


int main(int argc, char **argv){
	
	userFile();
	return 0;
	}