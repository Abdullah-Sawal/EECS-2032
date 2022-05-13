#include <stdio.h>
#include <string.h>

void main(){

	char input[100];

scanf("%s",&input);

int len;

len = strlen(input);

int i,result;

for (i=0;i<len-1;i++){

 if (input[i] == 'Z' && input[i+1] == 'Z'){

     result = i;

 }


}

printf("%d \n",result);

}
