#include <stdio.h>


int count = 0;

//Pointer & Array Instructional 
void swap(int *c,int j, int u){// *c is a pointer variable pointing at &b[0] (address of first element of array b); j and u increment to change 'where' C points too 
	int capJ = *(c+j); //Assigns int capJ the value of the element in array b at the j incremented address; Alternative syntax: c[j];
	*(c+j) = c[u]; //Takes value given by pointer at address b + j increment and assigns it to value given by b + u increment//Modifying what, not where.
	*(c+u) = capJ;
	}
	
	
void bubble(int*b, int s){
	int i = 0;
	for(; i < s; i++ ){
		for(int j = 0; j < s-i-1; j++){
			if(b[j] > b[j+1]){
				swap(b, j, j+1);
				count++;
			}
		}
		
	}	
}

int main(int argc, char **argv)
{
	int b[] = {1,2,3,0};
	int len = sizeof(b)/sizeof(*b);
	
	
	printf("*** Original Array ***\n");
	for(int i = 0; i < len; i++){
		printf("%d\n",b[i]);
	}
	
	
	bubble(b,len);
	
	printf("\n*** Bubble Sorted Array ***\n");
	for(int i = 0; i < len; i++){
		printf("%d\n",*(b+i));
	}
	
	printf("\nNumber of array elements: %d", len);
	printf("\nNumber of array element swaps: %d\n\n", count);

	return 0;
}
