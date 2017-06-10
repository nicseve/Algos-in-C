#include <stdio.h>


#define lim 500

int main(int argc, char **argv)
{
	int c, i;
	char s[500];
	
	for (i=0; i< lim-1 && (c=getchar()) != EOF; ++i){
		s[i] = c;
		
	if (c == '\n'){
		s[i] = c;
		i++;
		s[i] = '\0';
		
		printf("Length of line: %d\n",(i-1));
		printf("%s",s);

		for (; i >=0 ; --i){
			s[i] = 0;
		}
		i = 0;
	}
	}

	return 0;
}
