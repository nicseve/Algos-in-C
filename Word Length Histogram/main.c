#include <stdio.h>

int c,max,wc; //CHAR AND CURRENT LONGEST WORD LENGTH
int count = 0; //CHAR COUNTER
 

	void oneword() {
		
		while((c = getchar()) != EOF ){
			
			if (c != ' ' && c != '\n' && c!= '\t'){ //SCREENS FOR VARIOUS BREAKS IN INPUT
				++count; //INCREMENTS LETTER COUNT OF CURRENT WORD
				//putchar(c);
				}
				
			else{
				wc+=1; //INCREMENT WORD COUNT
				printf("\nWord %d length %d: %.*s",wc,count, count, "***********************************************++");
				//PRINT COUNT # OF ASTRISKS
				if (max < count) { 
					max = count; // COMPARES LETTER COUNT OF RECENTLY PRINTED WORD TO CURRENT MAX
				}
				
				if(c == ' ' || c == '\t' || c == '\n'){
					c = '\0';
					
					while((c = getchar()) == ' ' || (c == '\t') || (c == '\n') ){;}
					
					if (c == EOF) { break;} //CHECKS IF EOF REACHED AFTER LOOP AND BREAKS IF TRUE
					
					//putchar(c); //PRINTS FIRST CHAR AFTER LOOP THAT ISNT ONE OF ABOVE CRITERIA
					count = 1; //STARTS CHAR COUNT AGAIN
				}
		}
		
	}
	
	printf("\nLongest word is %d chars.\n", max); 
	}
	
 int main()
{
	oneword();
	return 0;
	
}