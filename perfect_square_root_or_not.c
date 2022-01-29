#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    int ivar;
    float fvar;
  //printf("Enter an integer number: ");
    scanf("%d",&num);
    
    fvar=sqrt((double)num);
    ivar=fvar;
    if(ivar==fvar)
        printf("True");
    else
        printf("False");
        
    return 0;
}
    
