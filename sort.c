#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[] )
{
     int a[argc-1]; 
     int i, j, temp, n,k=0 ;
     for(j=1; j<argc; j++)
     {
	a[k]=atoi(argv[j]);
	k+=1;
     }
     //printf("%d\n",a[2]);
     for(j=0;j<argc-1;j++)
     {
          for(i=0; i<argc-2; i++)
          {
               if(a[i]>a[i+1])
               {
                     temp=a[i];
                     a[i]=a[i+1];
                     a[i+1]=temp;
               } 
          }
     }
     for ( i = 0 ; i <argc-1 ; i++ )
     printf ( "%d ", a[i] ) ;
     printf("\n");
 }
