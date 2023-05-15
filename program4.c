#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Check(int iNo)
{
if((iNo%5)==0)
{
    return 1;
}
else{
    return 0;
}

}





int main()
{
int iValue=0;
BOOL bRet= FALSE;
printf("ENTER NUMBER :\n");
scanf("%d",&iValue);
bRet= Check(iValue);
if(bRet==TRUE)
{

    printf(" %d is divisible by  5",iValue);

}
else
{
printf(" %d  is not   divisible by  5",iValue);

}
return 0;
}


