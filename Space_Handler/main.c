#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define lim 500

void reverse(char *w, int u){
	printf("u: %d\n", u);
	int i = 1;
	int j = u;
	for(; i < j-1 ; i++){
		int temp = w[i-1];
		printf("TEMP: %c\n", temp);
		w[j] = w[i];
		//printf("wj: %c\n", w[j]);
		w[i] = temp;
		j--;
	}	
} 


void process(char *s,int u){
	//printf("u: %d\n", u);
	//printf("s[1]: %c,s[2]: %c,s[3]: %d\n", s[1],s[2],s[3]);
	s[u] = '\0';
	int len = u-1;
	//reverse(s,u);
	printf("Length of line:%s is %d\n",s,len);
	for(; u >= 0; u--){
		s[u] = '\0';
	}
}



int main(int argc, char **argv)
{
	int c, i;
	char s[500];
	
	printf("Usage: Counts length of input and returns line by line.\n");
	for (i = 1; i< lim-1 && (c=getchar()) != EOF; i++){
		if (c == ' ' || c == '\t'){
			while ((c = getchar()) == ' ' || c == '\t');
	
			if (c == '\n') {
				process(s,i);
				i = 0;
				
				//REFACTORED INTO SUBROUTINE 'PROCESS'
				//s[i] = '\0';
				//int len = i;
				//printf("Length of line:%s is %d\n",s,(len));
		
				//for(; i >= 0; i--){
				//s[i] = '\0';
				//}
			
			}
			else{
				s[i] = ' ';
				i++;
			}
		}
		
		else if (c == '\n'){
			process(s,i);
			i = 0;
			//REFACTORED INTO SUBROUTINE 'PROCESS'
			//s[i] = '\0'; //Terminate string
			//int len = i; 
			
			//reverse(s, len); //pass string and lenght to reversing function
			//s[i] = '\0'; //Terminate string
			//printf("Length of line:%s is %d\n",s,(len));
			
			//for(; i >= 0; i--){
				//s[i] = '\0';
			//}
		}
		
		s[i] = c; 
	}

	return 0;
}

