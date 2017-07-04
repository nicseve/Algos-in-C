#include <stdio.h>
#include <string.h>

void strncpys(char *s, char *t, int n){
	int i = 0;
	while(i < n && (*s++ = *t++)) i++;
	*s = '\0';
	}

void strncats(char *s, char *t, int n){
	while(*s++);
	int i = 0;
	--s;
	while(i < n && (*s++ = *t++)) i++;
	*s = '\0';
	}

int strncmps(char *s, char *t, int n){
	int i = 1;
	while(i < n && *s++ == *t++) i++;
	if(*s == '\0') return 0;
	return *s - *t;
	}


int main(int argc, char **argv)
{

	//char a[100];
	char v[] = "Oakp";
	char u[] = "Oaxy";
	//strncpys(a,v,4);
	//strncats(v,u,2);
	int t = strncmps(v,u,3);
	printf("%d\n",t);
	printf("%s\n",v);
	return 0;
}
