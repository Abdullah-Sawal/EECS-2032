#include <stdio.h>


void main(){

char input[50];
char output[50];

scanf("%s",&input);
int k=0;
int i;

for(i=0;i<50;i++){

output[k] =input[i];
output[k+1] = ' ';
k=k+2;


}
printf("%s\n",output);
}
