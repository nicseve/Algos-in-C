#include <stdio.h>
#include <math.h>

//SORTS UNSORTED ARRAY INTO ASCENDING ORDER AND FINDS FIRST INSTANCE OF LARGEST INTEGER IN SORTED ARRAY. USES BOTH INSERTION SORT AND BINARY SEARCH


char u[] = {8,5,21,11,7,21,21,4,11}; 
int len = sizeof(u)/sizeof(*u);
int i = 0;
int j = 0;


	void b_search(char p[],int x){
		int j = len-1;
		while (i < j)
		{
			printf("i: %d, j:%d\n",i,j);
			int m = (i + j)/2 ;
			
			printf("M:%d\n", m);
			
			if (x > p[m])
			{
				i = m + 1;
			}
			
			else
			{
				j = m;
			}
		}
		printf("i:%d, j: %d", i, j);
		if (x == p[i])
		{
		printf("First instance of largest number %d in ordered array is at index %d\n", p[i],i);
		}
		
	}
	
	void insert(char array[], int rInd, int value)
	{
		int i = rInd;
		
		for(; (i >= 0) && (array[i] > value); i--)
		{
			array[i+1] = array[i];
		}
			array[i+1] = value;	
	}
	
	/*void objCount(char b[]) 
	{
		int w = 18;
		int sum = 0;
		int i = -1;
		while (sum <= w && i < len){
			i++;
			sum += b[i];
		}
		sum -= b[i];
		printf("Given the max weight of %d, the max number of elements is %d a total weight of %d.\n",w, i, sum);
	}*/
	
	
	void selection (char a[])
	{
			int i = 0;
		
			for(; i < len-1; i++)
			{
				insert(a, i, a[i+1]);	
			}
		
			for(int j = 0; j < len; j++)
			{
				printf("array[%d], %d\n",j,a[j]);
			}
			b_search(u, a[len-1]);
			//objCount(array);

	}
	
		
int main(int argc, char **argv)
{
	selection(u);
	return 0;
}
