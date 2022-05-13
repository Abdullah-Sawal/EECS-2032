#include <stdio.h>
#include <string.h>

void main(){

             char a1[26] = "abcdefghijklmnopqrstuvwxyz";

	     char a2[30];

	     scanf("%s",a2);

	     int len;

	     len = strlen(a2);

	     int i,j;
	     int count;

	     for (i=0;i<len;i++){
                     for (j=0; j<26;j++){

                            if ( a2[i] == a1[j] && a2[i+1] == a1[j+1] && a2[i+2] == a1[j+2]){


                                   count = 1;
				   break;

			    }
		     }
	     }

                      if ( count == 1){

                      printf("Yes \n");



		      }

		      else {

                             printf("No \n");



		      }



}
