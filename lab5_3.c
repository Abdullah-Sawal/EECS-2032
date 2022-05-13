 #include <stdio.h>

void main(){

	int r,c;

	scanf("%d",&r);
	scanf("%d",&c);

	int array1[r][c];
	int array2[r][c];

        int i;
	int j;
	for (i=0; i<r;i++){
             for (j = 0; j<c;j++){

              scanf("%d",&array1[i][j]);
	 

	     } 

	}

			


        int a;
	int b;
	
           for (a=0;a<r;a++){
                  for (b=0; b<c; b++){
                    
                    scanf("%d",&array2[a][b]);



}
}

          
          
       int x,y,k;
       int count = 0;
       

         for (x=0;x<r;x++){

		 k=c-1;
              
              for (y=0;y<c;y++){

 

		if ( array1[x][y] != array2[x][k]){

                   count ++;
		   k--;
		   break;

		}

		else if (array1[x][y] == array2[x][k])  {

		k--;

		}


}

}

     


       printf("The number of offending rows is %d \n",count);

}
