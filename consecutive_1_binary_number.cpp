//Write a program to find the maximum consecutive 1's in a binary array
#include<stdio.h>

int maximun_consecutive_ones(int arr[],int n)
{
    int res=0,curr=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0){
                curr=0;
        }
        else
        {
            curr++;
            if(res<curr){
                res=curr;
            }
        }
    }
    return res;
}

int main()
{
    int arr[]={1,1,0,1,1,1,0,1,1};

    int n = sizeof(arr)/sizeof(arr[0]);

    int m = maximun_consecutive_ones(arr,n);

    printf("maximum ones : %d",m);
}
