#include <stdio.h>

void main(){

FILE *file;
char word[100];
char filename[100];
char c;
int count;

scanf("%s",&filename);
scanf("%s",&word);

file = fopen(filename,"r");

int i;

while( (c=fgetc(file)) != EOF){


for (i=0;i<100;i++){

	if( c == word[i]){

       c=fgetc(file);
       count ++;

	}

}



		}
printf("%d",count);
}
