#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 100

typedef struct t_bin {   //DECLARE BIN DATA STRUCT TYPE
	int s[MAX];
	int tot;
	} bin;

/*
int count //TOTAL NUMBER OF BINS CREATED


-BEST FLAG ALGO

int best(int *sizes, int size of sizes array) { //BEST FIT FUNCTION

	int bf = 100; //initializer and fail test value because bf can never be >=100 if a bin exists to accomodate denom
	int loc = 0;

	 //CALED FROM SWITCH CASE -FLAG BEST
	for (int i = 0; i < LENGTH OF SIZES; i++){

						 //LOOP THROUGH SIZE ARRAY AND THROW EACH TO BEST ALGO TO BE PLACED IN TIGHEST FIT BIN

		for (int i = 0;  i < count; i++ ) { //CYCLE THROUGH ARRAY OF BIN STRUCTS AND RECORD BEST FIT
			if ( (bins[i].total + size) > 100)
				continue
			else
				if ( (int tf = 100 - (bins[i].total + size) ) < bf )
					bf = tf
					loc = i
		}

		if (bf == 100)   //LOOP EXITED BECAUSE ALL BINS FULL. CREATE NEW BIN AND ADD DENOM
			Bin[i] = (Bin[i] *)malloc(sizeof(Bin));
			add size to new bin array
			and new bin total
			count++

		else  //ADD DENOM TO BIN AND PRINTF bin[loc] and bin[loc].tot
			bins[loc].d[next free position] = size
			bins[loc].tot += size

	}


}



-NEXT FLAG ALGO


int last; //KEEP TRACK OF LAST USED BIN
last = 0; //initialize at 0;

 for i in range of sizes //LOOP AND THROW TO NEXT

	next(size[i]); // CALL NEXT FUNCTION or NEST NEXT FUNCTION TO REDUCE NEED FOR GLOBAL VARIABLE LAST


	//CHECK IF LAST BIN CAN USED FIT CURRENT GIVEN SIZE
	void next(size)
		if bin[last].total + size <= 100
			bin[last].denom[next position] = size;
			bin[last].total += size;
		else:   //CREATE NEW BIN STRUCT AND ADD SIZE TO DENOM ARRY AND UPDATE TOTAL WITH SIZE
			create struct bin[last+1]
			bin[last+1].denoms = size  add size to new bin array
			bin[last+1].total += size
			count++ //INCREMENT TOTAL NUMBER OF BINS
			last += 1 //last used bin was new bin because bin at last was full  */


void hello(int s[],int p){
	printf("Hello world!\n");
	printf("Length of Array: %d\n",p);
	}

void goodbye(){
	printf("goodbye world\n");
	}

int main(int argc, char **argv)
{

	int k = 1;
	int n[100];
	int size = 0;
	int bins_created = 0;

	while (k < argc)
	{
		char *null;
		while ( k < argc && (n[size] = strtol(argv[k], &null, 10)) > 0  && !null[0] ){
			if (n[size] > 100){
				printf("error\n");
				exit(1);
			}
			k++;
			size++;
			}

		if( !bins_created ){
			//CREATE ARRAY OF BINS
			bin bins[size];

			//DECLARE POINTER B TO POINT AT ADDRESS OF BINS ARRAY
			bin *b;
			b = bins;
			for (int i = 0; i < size; i++){
				bins[i].tot = n[i];
				printf("%d\n",bins[i].tot);}

			//for (int i = 0; i < size; i++){
				//printf("%d\n",b->tot);
				//b++;}

			bins_created = 1;
		}

		if ( (k != argc) && (strcmp(argv[k], "-hello")) == 0){
			hello(n,size);
			k++;
			}

		if(  (k != argc) && (strcmp(argv[k],"-goodbye")) == 0){
			goodbye();
			k++;
			}

		if(k == argc)
			break;

		if(k != argc)
			printf("Fatal error: not valid input");
			exit(1);

		}

	return 0;
}
