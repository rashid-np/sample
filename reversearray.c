#include<stdio.h>
int main()
{
    int a[100];
    int i,n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Array is : ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }

}