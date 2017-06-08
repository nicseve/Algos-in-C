#include <stdio.h>
#include <stdlib.h>


#define upperMax 100
#define lowerMax (-100)

int main(int argc, char **argv){
	long int upper;
	long int lower;
	long int step;
	int i;
	int j;
	int t;
	int ctemp;
	int ftemp;
	char buf[BUFSIZ];
	char *p;
  
	
	printf("This program converts Celsius temperatures to Farenheit.\n Please start by entering an upper limit for the Celsius temperature range less than 100 C:");
	
	if (fgets(buf, sizeof(buf), stdin) != NULL)
	{
		i = strtol(buf, &p, 10);
		
		if (buf[0] != '\n' && (*p == '\n' || *p == '\0') && i < upperMax){
			printf ("Valid temperature of %d entered", i); 
			upper = i;
		}
		else  printf ("The number was %d, followed by %s or was greater than upperMax", i, p);
	
	}  
  

	printf("\nPlease enter a lower limit for the Celsius temperature greater than or equal to -100 C:");
	
	if (fgets(buf, sizeof(buf), stdin) != NULL)
	{
		j = strtol(buf, &p, 10);
		
		if (buf[0] != '\n' && (*p == '\n' || *p == '\0') && j >= lowerMax){
			printf ("Valid temperature of %d entered\n", j); 
			lower = j;
		}
		else  printf ("The number was %d, followed by %s or was less than lowerMax\n", j, p);
	
	}  
		
	
	printf("\nPlease enter by how much the temperature should increment during conversion of total range:");
	if (fgets(buf, sizeof(buf), stdin) != NULL)
	{
		t = strtol(buf, &p, 10);
    
		if (buf[0] != '\n' && (*p == '\n' || *p == '\0') && step < upper-lower ){
			printf ("Valid step of %d entered\n", t); 
			step = t;
		}
		else  printf ("The number was %d, followed by %s\n", t, p);
	 

	}
	    printf("     Conversion Table     \n");
		
	 for (i=0; ctemp <= upper; i+= step ){
		ctemp = lower + i;
		
		if (ctemp > upper)
		{
		printf("Conversion complete!\n");
		break;
		}
		else
		{
		ftemp = (ctemp*1.8) + 32;
		printf("Celcius: %d  Farenheit: %d\n", ctemp, ftemp);
		}
	} 

	
	/*while (ctemp <= upper){
		ctemp = lower + step;
		ftemp = (ctemp*1.8) + 32;
		step += step;
		printf("Celcius: %d  Farenheit: %d\n", ctemp, ftemp);
		}*/

} 
	
	

