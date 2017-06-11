#include <stdio.h>


int A [3] [2] = { 
	{1,0},
	{0,1},
	{1,0}
};

int B [2] [3] = {
	{1,1,0},
	{0,1,1},
	};
	
	
	size_t total1 = sizeof(A);  //CALCULATES TOTAL SIZES OF ARRAYS
	size_t total2 = sizeof(B);
	
	
	
void matrixP(int r, int c, int r2, int c2, int a[r] [c], int b[r2] [c2]){

	if (c != r2){  //TESTS IF THE SIZES OF THE ARRAYS ALLOW FOR MULTIPLICATION BY COMPARING #COLUMNS IN A GIVEN ARRAY TO #ROWS IN THE OTHER
		
		printf("Matrices cannot be multiplied. A Columns: %d, B Rows: %d",c, r2);
	}
	
	else{
		
		int C [r] [c2]; //SIZE OF RESULTING ARRAY IS DECLARED HERE 
		
		for(int i = 0; i < r; i++){   //MATRIX MULTIPLYING ALGO
			for(int j = 0; j < c2; j++){
				for(int t=0; t < c; t ++){
					C [i][j] = C[i][j] || ((a[i][t]) && (b[t][j]));
				}
			}
		}
		
		//PRINT ARRAY C
		printf("C [\n");   
		for(int u = 0; u < r; u++){
		
			if (u >= 1){printf("\n");
			}
			
			for(int k = 0; k < c2; k++){
				printf(" %d,",C [u][k]);
			}
		}
		printf("]\n");
	}

}
	
	
int main(int argc, char **argv)
{
	size_t column1 = sizeof(A[0])/sizeof(A[0] [0]); //CALCULATES #COLUMNS OF ARRAYS MUST BE INITALIZED AT RUN-TIME RATHER THAN COMPILE TIME
	size_t column2 = sizeof(B[0])/sizeof(B[0] [0]); 
	
	size_t row1 = total1/sizeof(A[0]); //CALCULATES #ROWS OF ARRAYS MUST BE INITALIZED AT RUN-TIME RATHER THAN COMPILE TIME
	size_t row2 = total2/sizeof(B[0]);
	
	matrixP(row1, column1, row2, column2, A, B);  //Multiplying function called here with int dimensions of both arrays and arrays
	
	
	return 0;

}