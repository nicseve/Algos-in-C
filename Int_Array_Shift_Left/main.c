#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void shiftLeft(int *a,int size){

	int i = size - 1;
	int k = 0;

	for(; i > k; i--){
		int temp = a[i];
		a[i] = a[k];
		a[k] = temp;
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
	}


	shiftLeft(n,size);

	for(int i = 0; i < size; i++){
		printf("%d ",n[i]);
		}
	printf("\n");

	return 0;
}
