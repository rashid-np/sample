#include<stdio.h>
int main()
{
    int a[100],sum=0;
    int i,j,n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
        sum=sum+a[i];
    }
    printf("The sum of array is %d",sum);
    return 0;

}