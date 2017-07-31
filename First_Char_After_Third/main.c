#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


char* oneTwo( char *s, char*n ){
	int k, p;
	p = 0;
	for(int i = 0; i < strlen(s) - 2; i++){
		k = i;
		char temp = s[i];
		while(k < i+2){
			n[p++] = s[k+1];
			k++;
		}
		i = k;
		n[p++] = temp;
		}
	n[p] = '\0';
	return n;
	}


int main(int argc, char **argv)
{
	char *p,*s1;
	int c;

	if(argc >= 2){

		s1 = *++argv;
	    c = strlen(s1);
		printf("%d  %s\n",c, s1);
		char n[c];
		p = oneTwo(s1,n);
		printf("%s\n",p);

		}

	return 0;
}
