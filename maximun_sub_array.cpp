//Write a program to find the maximum subarray sum

#include<stdio.h>
int max_sum(int arr[],int n)
{
    int sum=0,res=-1;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i+1;i<n;i++)
        {

            sum+=arr[i]+arr[j];

            if(sum>res){
                res=sum;
            }
        }
    }
    return res;
}
int main()
{
    int n,arr[20],i;
    printf("enter the size of an array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int maximum = max_sum(arr,n);

    printf("maximum element : %d",maximum);
}
