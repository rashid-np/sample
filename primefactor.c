#include<stdio.h>
int main()

{
    int i,n,j;
    printf("Enter a Number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            int isprime=1;
            for(j=2;j<i/2;j++){
                    if(i%j==0)
                    isprime=0;
            }
            if(isprime==1 && i==4)
            printf("%d",i);
        }
    }
return 0;
}