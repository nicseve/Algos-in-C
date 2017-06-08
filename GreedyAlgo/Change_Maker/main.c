#include <stdio.h>

int denom[] = {25,10,5,1};
int len = sizeof(denom)/sizeof(*denom);
int i, d, change, temp;
//int amo = 113;

void maker(int tot, int mon[] ){
	i = d = change = 0;
	for(; i < len; i++){
		while (tot >= mon[i]){
			d += 1;
			tot -= mon[i];
			//printf("\nSingle denomination of %d cents used. Amount left is %d cents.\n ", mon[i], tot);
		}
	printf("\nTotal number of demoninations worth %d cents used is %d.\n",mon[i], d);
	change += d;
	d = 0;
	}
	printf("\nTotal number of coins needed starting with largest denominiation possible is %d.\n", change);
	
	}


int main(int argc, char **argv)
{

	printf ("Please input a total amount of cents: ");
	while (scanf("%d", &temp) != 1)
	{
    while (getchar() != '\n');
    printf ("Please try again and input a valid amount.");
	}

  printf ("\nAmount of %d cents entered.\n", temp);
	
	
	
	maker(temp,denom);
	return 0;
}
