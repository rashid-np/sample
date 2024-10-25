#include<stdio.h>
int main()

{
    int i=0,j=0,k=0,result[50],arry1[20],arry2[20],size1,size2;
    printf("Enter the size of the array 1: ");
    scanf("%d",&size1);
    printf("Enter the Elements of first array: ");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arry1[i]);
    }
    printf("Enter the size of the array 2: ");
    scanf("%d",&size2);
    printf("Enter the Elements of second array: ");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&arry2[i]);
    }
    i=0;
    while(i<size1 && j<size2)
    {
        if(arry1[i]<arry2[j]){
            result[k]=arry1[i];
            k++;
            i++;
        }
        else{
             result[k]=arry2[j];
            k++;
            j++;

        }
    }
        while(i<size1)
        {
            result[k]=arry1[i];
            k++;
            i++;
        }
        while(j<size2)
        {
            result[k]=arry2[j];
            k++;
            j++;
        }
    
    printf("Merged array is : ");
    for(i=0;i<size1+size2;i++)
    {
        printf("%d",result[i]);
    }
return 0;
}
