#include <stdio.h>


void main(){

char input[30];
int i;

scanf("%s",input);

int j;

int index;


for(j=0;j<30;j++){

	if( input[j] == '.'){
               
		index = j;
	}
}

char output[30];
int count = 0;
int k;

for ( k=index+1;k<30-index;k++){

          if (input[k] == '\0'){
               break;
  }

        output[count] = input[k];
         count = count +1; 
 

          
}

output[count] = '.';
count = count +1;

int z;
for (z=0; z<index;z++){
 output[count] = input[z];
 count = count +1;
}


printf("%s \n",output);



}
