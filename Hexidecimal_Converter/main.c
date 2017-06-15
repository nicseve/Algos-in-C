#include <stdio.h>
#include <ctype.h>
#define MAX 100


char a[MAX];
int temp;


void htoi(char *h, int l){
	int i;
	int p = 0;
	
	for(i = 0; i < l; i++){
		if (isxdigit(h[i])){
			(printf("%c is a hexidecimal with hexidecimal value: %x and has been added to sum.\n",h[i], h[i]));
			p += h[i];}
		else{
			(printf("%c is not a proper hexidecimal.\n", h[i]));}
	}
	
	printf("Total of hexidecimals in string as hexidecimal is: %x\n",p);
	printf("Total of hexidecimals in string as integer is: %d \n",p);
}


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
			s[i] = ch;
			i++;
			}
		
		}
	s[i] = '\0';
	htoi(s,i);
	return i;
	}

int main(int argc, char **argv)
{
	while (1){
		readln(a,MAX);
		}
	
	return 0;
}
