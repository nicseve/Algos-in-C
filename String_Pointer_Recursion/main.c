#include <stdio.h>


int countX(char *s){
	printf("%s\n",s);
	if(*s == '\0'){
		return 0;}

	if(s[0] == 'x')
		return 1 + countX(&s[1]);

	return countX(&s[1]);
	}

int main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n",countX(*++argv));
	return 0;
}
