#include <stdio.h>

void main(){

char input[50];
char output[50];

int count =0;
int i;



scanf("%[^\n]s",&input);


for(i=0;i<50;i++){

if (input[i] != ' '  && input[i] != '	'){


	output[count] = input[i];
	count ++;

	


}

}

printf("%s \n",output);

}















