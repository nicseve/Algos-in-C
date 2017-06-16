#include <stdio.h>
#include <ctype.h>
#define MAX 100
char u[MAX];
char v[MAX];

int readln(char s[], int maxlen) {
	char ch;
	int i;
	int chars_remain;
	i = 0;
	chars_remain = 1;
	while(chars_remain){
		ch = getchar();
		
		if ((ch=='\n') || (ch == EOF)){
				chars_remain = 0;
		} else if (i < maxlen -1) {
			s[i] = tolower(ch);
			i++;
			}
		
		}
	s[i] = '\0';
	return i;
	}
	
	
void squeeze(char *s1, char*s2){
	int i,j,k;
	i=j=k=0;
	
	for(i = k = 0; s1[i] != '\0'; i++)
		{
		for(j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
         ;
		if (s2[j] == '\0')
         s1[k++] = s1[i];
		}
		s1[k] = 0;
		printf("new: %s\n",s1); 
  
	}
	
void any(char *s1, char*s2){
	int i,j,k;
	char r[MAX];
	r[0] = 0;
	for(i=0; (s1[i]) != 0; i++){
		for(j= k = 0; s2[j] != 0 && s2[j] != s1[i]; j++){
			;}
			
		if (s2[j] == s1[i] && s2[j] != ' '){
			for(;r[k] != 0 && s1[i] != r[k]; k++)
				;
				if (r[k] == 0) {
				printf("First instance of matching char %c in %s at index: %d\n",s1[i],s1,i);
				r[k] = s1[i];}
			} 
		
		}
	if (r[0] == 0){
		printf("No matching characters found\n");
		}
		
	
}	



int main(int argc, char **argv)
{
	printf("Please enter a string:\n");
	readln(u,MAX);
	printf("Please enter a second string:\n");
	readln(v,MAX);
	any(u,v);
	//squeeze(u,v);
	
	return 0;
}
