#include <stdio.h>


	char u[] = {8,5,7,4,11}; 
	int len = sizeof(u)/sizeof(*u);

/*void swap(int s, int t){
	int temp = s;
	int temp2 = t;
	s = t;
	t = temp;
	//printf("s now equals %d  and t now equals %d\n, s was originally %d and t was originally %d,",s,temp,temp,temp2);
	}*/
	
	void insert(char array[], int rInd, int value)
	{
		int i = rInd;
		
		for(; (i >= 0) && (array[i] > value); i--)
		{
			array[i+1] = array[i];
		}
			array[i+1] = value;	
	}
	
	void objCount(char b[]) 
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
	}
	
	
	void selection (char array[])
	{
			int i = 0;
		
			for(; i < len-1; i++)
			{
				insert(array, i, array[i+1]);	
			}
		
			for(int j = 0; j < len; j++)
			{
				printf("array[%d], %d\n",j,array[j]);
			}
			
			objCount(array);

	}
	
		
int main(int argc, char **argv)
{
	selection(u);
	return 0;
}
