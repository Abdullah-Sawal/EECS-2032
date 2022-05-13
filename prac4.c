#include <stdio.h>
#include <string.h>


void main (){

	int num;

	scanf("%d",&num);

	char string[500][20];

	int i;
	int result;

	for (i=0;i<num;i++){

	scanf("%s",&string[i]);
	
	}

         int j,k;
	 int x=0;

	 for (i=0;i<num;i++){
              for (j=0;j<num;j++){

		   result = strcmp(string[i],string[j]);

             if (( result  == 0)  && (i != j)){

                  x=1;
	     }
	      }

	 }

          if (x == 1 ){

            printf("Repeated \n");
	  }

	  else {
 
            printf("Not repeated \n");

	  }

}
