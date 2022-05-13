#include <stdio.h>

int power (int a,int b ){

int i,x;
x=a; 

for (i=0;i<b-1;i++){
    
x=x*a;

}

return x;
}

void main(){

int out;

out = power(10,9);

printf("%d \n",out);




}
