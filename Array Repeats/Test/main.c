#include <stdio.h>
#include <string.h>

int nums[] = {1,1,2,3,5,6,6,9,21,21,34,68,72,72,97,97};
int len = sizeof(nums)/sizeof(*nums);

void counter (int s[]){
	int i = 0;
	int j = 0;
	int *repeats[20] = {NULL};
	int lenR = sizeof(repeats)/sizeof(*repeats);
	
	for (int i = 0; i < len; i++) 
	{

				printf("Array[%d]: %d\n",i, nums[i]);
			
	}
	
	printf("\nSearching array for repeated digits...\n\n");
	
	while ((i < len-1)) 
	{
		printf("s[%d]: %d  s[%d]:%d\n",i,s[i],i+1,s[i+1]);
		if ( s[i] == s[i+1] )
		{
			printf("MATCH FOUND\n");
			if(repeats[0] == 0)
			{
				repeats[i] = s[i];
			}
			else
			{
				while( j < lenR)
				{
					if (nums[i] == repeats[j]) 
					{
						break;
					}
					else
					{
						repeats[i] = nums[i];
					}
					j+=1;
				}
			}
		}
		i+=1;
	}
		
		printf("\n*** List of Repeats ***\n");
		for (int i = 0; i < lenR; i++) 
		{
			if (repeats[i] != 0)
			{
				printf("%d\n", repeats[i]);
			}
		}
}
	

int main(int argc, char **argv)
{
	counter(nums);
	return 0;
}
