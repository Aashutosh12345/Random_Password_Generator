#include<stdio.h>
#include<malloc.h>
int myrand(int,int);
int main()
{
 int n,n1,n2,n3,n4,n5,ch,i,m1,m2,m3,n6,p1,a1,p2,a2,p3,a3,p4,a4,choice;
 do
 {
  printf("\nThe random password between 12 to 32 characters is :\n\n");
  n=myrand(12,32);
  char array[n];
  n1=myrand(97,122);
  array[0]=n1;
  for(i=1;i<n-1;i++)
  {
     p1=myrand(48,57);
     a1=myrand(1,n);
     array[a1]=p1;
     p2=myrand(97,122);
     do
     {
         a2=myrand(1,n);
     }while(a2==a1);
     array[a2]=p2;
     p3=myrand(65,90);
     do
     {
         a3=myrand(1,n);
     }while(a2==a3);
     array[a3]=p3;
     p4=myrand(1,3);
     do
     {
         a4=myrand(1,n);
     }while(a4==a3);
     switch(p4)
     {
       case 1: m1=myrand(33,47);
               array[a4]=m1;
               break;
       case 2: m2=myrand(91,96);
               array[a4]=m2;
               break;
       case 3: m3=myrand(123,127);
               array[a4]=m3;
               break;
     }
   ch=myrand(1,4);
   while(i==a1||i==a2||i==a3||i==a4)
     i++;
   switch(ch)
   {
     case 1: n5=myrand(48,57);
             array[i]=n5;
             break;
     case 2: n3=myrand(97,122);
             array[i]=n3;
             break;
     case 3: n4=myrand(65,90);
             array[i]=n4;
             break;
     case 4: n6=myrand(1,3);
             switch(n6)
             {
                 case 1: m1=myrand(33,47);
                         array[i]=m1;
                         break;
                 case 2: m2=myrand(91,96);
                         array[i]=m2;
                         break;
                 case 3: m3=myrand(123,127);
                         array[i]=m3;
                         break;
             }
   }
  }
  n2=myrand(65,90);
  array[n-1]=n2;
  for(i=0;i<n;i++)
   printf("%c",array[i]);
  printf("\n\nDo you want to get one more random password ? (1.Yes/2.No) :");
  scanf("%d",&choice);
 }while(choice==1);
}
int myrand(int x,int y)
{
  int *a,b;
  a=(int*)malloc(sizeof(int));
  b=(int)a%(y-x+1)+x;
  return b;
}
