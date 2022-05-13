#include <stdio.h>

void main(){

 int r,c;

 scanf("%d%d",&r,&c);

 int array1[r][c];
 int array2[r][c];

 int i,j;

   for (i=0;i<r;i++){
        for (j=0;j<c;j++){

             scanf("%d",&array1[i][j]);
}
}

  int a,b;

  for (a=0;a<r;a++){
      for (b=0;b<c;b++){

     scanf("%d",&array2[a][b]);
  }
  }

     int d,e;
     int count =0;

     for(d=0;d<r;d++){
       for(e=0;e<c;e++){
                
           if(array1[d][e] < array2[d][e]){
             
		   count =1;
	   }


       }
     }
   if (count == 0){

   printf("Yes \n");

   }

else {

printf("No \n");


}
 

}
