#include <stdio.h>


void main(){

char input[30];

scanf("%s",input);

int i;

char output[30];
int count =0;

for ( i=0; i<30; i++){

     if ( !isupper(input[i]) ){

        output[count] = input[i];
	count ++;

     }




}

printf("%s \n", output);










}
