#include <stdio.h>

void main(){

FILE *file;
char input[1024];
int counter =0;
char c;

scanf("%s",&input);

file = fopen(input,"r");

if (file == NULL){

printf("error");

}

while ( c != EOF){

c = fgetc(file);
if (c == '\n'){
counter ++;
}
}

printf("%d\n",counter);
}
