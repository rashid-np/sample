#include<stdio.h>
int main()
{
    int a[100],count=0;
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
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j]){
                count++;
                break;
            }
        }
    }
    printf("Total Number of duplicate element is : %d ",count);
}