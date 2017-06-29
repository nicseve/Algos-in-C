
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

	void b_search(int p[],int rInd,int value,int len){
		int j = rInd;
		int i = j;
		while (i >= 0)
		{
				for(int i = 0; i < len;i++){
					printf(" %d ",p[i]);
				}
			printf("\nEnding Index of Sub-Array: %d\n", i);
			printf("Key: %d\n", value);
			int m = (i)/2 ;
			printf("Guess Index: %d\n\n", m);


			if(i <= 1){
				while(value < p[j] && j >=0){
					p[j+1] = p[j];
					j--;
				}
				p[j+1] = value;
				break;
			}

			if(value >= p[m]){
				if (value < p[m+1]) {
					printf("Insertion point located after index %d\n",m);
					while(j > m){
						printf("Moving elements...\n");
						p[j+1] = p[j];
						j--;
					}
					p[m+1] = value;
					break;
				}
				i = m;

				}


			if (value <= p[m])
			{
				if (value >= p[m-1]) {
					printf("Insertion point located after index %d\n",m-1);
					while(j > m-1){
						printf("Moving elements...\n");
						p[j+1] = p[j];
						j--;
					}
					p[m] = value;
					break;
				}
				i = m -1;
			}

		}

	}



	void insertion(int a[],int size)
	{
			int i = 0; //First index

			for(; i < size-1; i++) {
					b_search(a,i , a[i+1],size);
			}

	}


int main(int argc, char **argv)
{
	int k = 1;
	int n[100];
	int size = 0;

	while (k < argc)
	{
		char *null;
		while ( k < argc && (n[size] = strtol(argv[k], &null, 10)) > 0  && !null[0] ){
			k++;
			size++;
			}


	insertion(n,size);
	printf("\n***Final Sorted Array***\n");
	for(int i = 0; i < size;i++){
		printf(" %d ",n[i]);
		}
	return 0;
}
}
