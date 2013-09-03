#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int a,b,c,i,f,e;
int main(){
    printf("dame el primer numero\n\n");
    scanf("%d",&a);
    printf("dame el segundo numero\n\n");
    scanf("%d",&b);
    c=a+b;
    printf("dame nuevo numero\n\n");
    scanf("%d",&i);
    printf("dame el segundo numero nuevo\n\n");
    scanf("%d",&f);
    system("pause");
    e=f+i;
    {
          if(c>e){ printf("tu primer suma es mayor%d",c);}
          
          if(c>e) printf("tu segunda suma es mayor%d",e);
          else printf("niguno es mayor");}
          
          
          
          
   system("pause");
   return 0;
}
