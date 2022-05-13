#include <stdio.h>


void main(){

FILE *file;
char input[100];
char c;
int counter=0;
char ch;

scanf("%s",&input);

file = fopen(input,"r");

while ((c=fgetc(file)) != EOF){

if (c == '\n'){

ch = fgetc(file);

if (ch == '\n'){

	counter ++;

}

else if (ch == ' ' || ch == '\t'){

while (ch == ' ' || ch == '\t'){

	ch = fgetc(file);
		if (ch == '\n'){

                 counter ++;
		 break;

		}
}



}

}

}
printf("%d\n",counter);
}
