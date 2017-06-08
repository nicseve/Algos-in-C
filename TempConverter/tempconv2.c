#include <stdio.h>
#include <stdlib.h>

#define upperMax 100
#define lowerMax -100


int main(int argc, char **argv){
	
	int lower = -101;
	int upper = 101;
	int step = 0;
	int i;
	int j;
	int t;
	char *p;
	char buf[BUFSIZ];
	
	
	while(lower < lowerMax || lower > upperMax){
		printf("\nThis is a Celsius to Farenheit temperature converter!\n\n Please start by entering a lower bound Celsius temperature where -100 <= temp <= 100:\n");
		
		if (fgets(buf, sizeof(buf), stdin) != NULL)
	{
		i = strtol(buf, &p, 10);
		
		if (buf[0] != '\n' && (*p == '\n' || *p == '\0')){
			printf ("Valid temperature of %d entered\n", i); 
			lower = i;
		}
		else  printf ("The temperature was %d, followed by %s or was out of specfied range %d <= temp <= %d.\n", i, p, -100, 100);
	
	}  
		
		
		}
		while(upper > upperMax || upper <= lower ){
		printf("Please enter an upper bound Celsius temperature where %d <= temp <= 100:\n",lower);
		
		if (fgets(buf, sizeof(buf), stdin) != NULL)
	{
		j = strtol(buf, &p, 10);
		
		if (buf[0] != '\n' && (*p == '\n' || *p == '\0')){
			printf ("Valid temperature of %d entered\n", j); 
			upper = j;
		}
		else  printf ("The temperature was %d, followed by %s or was out of specfied range %d <= temp <= %d.\n", j, p, lower, 100);
	
	}  
		
		
		}
		
		int diff;
		diff = upper - lower;
		
		while(step >= upper-lower || step <= 0 ){
		printf("Please enter an amount to increment the Celsius temperature by during conversion where 0 < amount < %d:\n",diff);
		
		if (fgets(buf, sizeof(buf), stdin) != NULL)
	{
		t = strtol(buf, &p, 10);
		
		if (buf[0] != '\n' && (*p == '\n' || *p == '\0')){
			printf ("Valid amount of %d entered\n", t); 
			step = t;
		}
		else 
		printf ("The amount was %d, followed by %s or was out of specfied range where amount > %d\n", t, p, diff);
	
	}  
		
		
		}

		int ctemp = lower;
		printf("    *** Conversion Table ***    \n");
		
		while(ctemp <= upper){
			int ftemp = ctemp*1.8 + 32;
			printf("Celsius: %d  Farenheit: %d\n", ctemp,ftemp);
			ctemp += step;
			}
			
		printf("Conversion complete!\n");
	
	
	}