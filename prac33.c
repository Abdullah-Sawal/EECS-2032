#include <stdio.h>

void main(){

	int n;
	scanf("%d",&n);
	
	int array1[n][n];

        int a,b;

	for (a=0;a<n;a++){
            for (b=0;b<n;b++){


             scanf("%d",&array1[a][b]);



	    }



	}
	

        int i;

	for (i=0;i<n;i++){

         printf("%d ",array1[i][i]);


	}
       printf("\n");

       int j,k;
       int count =n-1;

       for (j=0;j<n;j++){

         printf("%d ",array1[j][count]);
	 count --;
        

       }
printf("\n");

   int r,c;


   scanf("%d%d",&r,&c);

   int array2[r][c];
   


   int m,u;

   for (m=0;m<r;m++){

        for (u=0;u<c;u++){



               scanf("%d",&array2[m][u]);
	}

   }


   int z;

   for (z=0;z<r && z<c;z++){
   printf("%d",array2[z][z]);
    
   }

   printf("\n");

   int t;
   int counter = c-1;

   for (t=0;t<r && t<c;t++){

      printf("%d",array2[t][counter]);
		      counter --;


   }
printf("\n");


}
