//Cuadrado magico
#include <ncurses.h>
#include <stdio.h>
int main(){
	int n,i,j,k,suma=0,sumaprueba=0;
	int magico[20][20]={0};
	printf("Cuadrado magico de orden:\n");
	scanf("%d",&n);
	for (i=0;i<=n-1;i++)
	    {printf("\n");
	    for (j=0;j<=n-1;j++)
	      printf("%3d", magico[i][j]);
	    }
	    getch();
	  //Aplicamos algoritmo
	  j= (n-1)/2; //Columna Central
	  i=n-1;  //Ultimo renglón
	  for(k=1;k<=n*n;k++)//Sembramos valor por valor
	  {
	  	magico[i][j]= k;
	  	i++;
	  	j++;
	   	if(i==n)
	  	    i=0;//Si desborda en renglon, se coloca en el primer renglon
	  	if(j==n)
	  	    j=0;//Si desborda en renglon, se coloca en la primera columna
		if(magico[i][j]>0)	//Si esta ocupada la casilla
		  {//Se disminuye englon en 2 y columna en uno
		  i-=2;
		  j--;
          }
		if(i<0) //Caso especial cuando se vuelven indices negativos
		 {
		i=n-2;
		j=n-1;
			}
    	}
    	
printf("\nCuadrado Magico\n");		     
	  	    
	for (i=0;i<=n-1;i++)
	    {printf("\n");
	    for (j=0;j<=n-1;j++)
	      printf("%3d", magico[i][j]);
	    }	    
 
    getch();
return 0;
	
}