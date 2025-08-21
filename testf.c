#include<stdio.h>
void main()
{
  int hh,min,sec,totsec;
   

  printf("enter hour?");
  scanf("%d",&hh);
  
  printf("enter minute?");
  scanf("%d",&min);
  
  printf("enter second?");
  scanf("%d",&sec);
  
 totsec=(hh*3600)+ (min*60)+ sec;
 
 printf("total seconds= %d \n",totsec);
}
  
  
  
  
  
  
