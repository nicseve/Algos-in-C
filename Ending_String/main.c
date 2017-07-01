#include <stdio.h>

int strend(char *s, char *t){
	while(*s++ == *t++ && *s!='\0');
	if(*s == '\0') return 1;
	return 0;
	}


int strlens(char *s){
	int i = 0;
	while(*s++) i++;
	return i;
	}

int main(int argc, char **argv)
{
	int t = 0;
	int len1 = 0;
	int len2 = 0;
	char *s1;
	char *s2;

	if(argc >= 3){
		s1 = (*++argv);
		s2 = (*++argv);


		len1 = strlens(s1);
		len2 = strlens(s2);
		int index = len1 - len2;


		if(index > 0){ t = strend(&s1[index],s2); }
	}

	printf("%d\n",t);

	return 0;
}
