#include <stdio.h>
#define MAX 100


int getLine(char line[], int maxline);

void reverse(char *w, int u){
	int i = 0;
	for(; i < u-1 ; i++) {
		int temp = w[i];
		w[i] = w[u-2];
		w[u-2] = temp;
		u--;
	}
}


int getLine(char s[], int lim)
{
	int c, i;
	
	for (i=0; i<lim-1 && (c=getchar()) != EOF &&  c!='\n'; i++) {
		s[i] = c;
	}
	
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
} 

int main(int argc, char **argv)
{
	char line[MAX];
	int len;
	
	while ( (len = getLine(line, MAX)) > 0) {
		reverse(line, len); //CALLS REVERSE FUNCTION TO REVERSE LINE
		printf("%s\n",line);
	}
	
	return 0;
}
