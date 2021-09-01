#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/* Write A simple Program which Demonstrate Pointer To 3-d Array.
1. Display all the items in array using nesting of For loops.*/
void print_nested_for( int array [4][4][4]){
	int (*ptr)[4][4] = array;
	printf("1. Display all the items in array using nesting of For loops ::\n");
	for ( int i = 0; i < 4; i++){
        for ( int j = 0; j < 4; j++){			
		     for ( int k = 0; k < 4; k++){			
			    printf("%2d ",*(*(*(ptr + i) + j) + k));
			 }
			 printf("\t\t");
		}
		printf("\n");
	}
	printf("\n------------------------------------------------------------------");
	printf("-------------------------\n");
}



/* Write A simple Program which Demonstrate Pointer To 3-d Array.
 2.Write same program which used less number of For Loops. */
void print_less_for( int array [4][4][4]){
	int *ptr;
	int i = 0;
	printf("\n\n2.Write same program which used less number of For Loops\n");
	for( ptr = array; ptr <= &array[3][3][3]; ptr++){
		if( i%4 == 0 && i!= 0){
			printf("\t\t");
		}
		if( i%16 == 0 && i!= 0){
			printf("\n");
		}
		printf("%2d ",*ptr);
		i++;
	}
	printf("\n\n------------------------------------------------------------------");
	printf("-------------------------\n");
}


int main()
{
  int array[4][4][4]={ 
                       {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}},  
  	                   {{17,18,19,20},{21,22,23,24},{25,26,27,28},{29,30,31,32}},
  	                   {{33,34,35,36},{37,38,39,40},{41,42,43,44},{45,46,47,48}},
  	                   {{49,50,51,52},{52,53,54,55},{56,57,58,59},{60,61,62,63}}, 
                     };
    
    print_nested_for(array);
    print_less_for(array);
	return 0;
}
