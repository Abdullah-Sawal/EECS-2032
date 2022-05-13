#include <stdio.h>
#include <string.h>


void main () {
  
	char array[100];

	scanf("%s",&array);

	int length;

	length = strlen(array);

	int i,j;
	int count =0;


	for (i=0; i<length-3;i++){

		for (j=i+1;j<length-3;j++){


                         if (array[i] == array[j] && array[i+1] == array[j+1] && array[i+2] == array[j+2]){

                                  count = 1;
				  break;


			 }


		}
	}

            if (count == 1){


              printf("Yes \n");


	    }

	    else {

             printf("No \n");


	    }


}

