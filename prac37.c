#include <stdio.h>


void main(){

char vowel[] = "aeiouAEIOU";
char input[50];
char output[50];

scanf("%s",&input);

int i,j;
int count =0;

for (i=0;i<50;i++){
    for(j=0;j<10;j++){
  if (input[i] == vowel[j]){

   output[count] = vowel[j];
   count ++;

  }


    }

}



printf("%s \n",output);


}
