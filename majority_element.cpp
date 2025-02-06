//Write a program to find the majority element in an array

// Boyer more majority voting element

#include<stdio.h>
int maj_element(int arr[],int n)
{
    int res=0,count=1;

    for(int i=1;i<n;i++)
    {
        if(arr[res]==arr[i])
        {
            count++;
        }
        else{
            count--;
        }
        if(count==0)
        {
            res=i;
            count=1;
        }
    }
    return arr[res];
}
int is_maj(int arr[],int n,int c)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==c)
        {
            count++;
        }
    }
    if(count>(n/2))
    {
        return 1;
    }
    else{
        return 0;
    }
}
void print_maj_element(int arr[],int n)
{
    int candidate = maj_element(arr,n);

    int cand = is_maj(arr,n,candidate);

    if(cand){
        printf("%d",candidate);
    }
    else{
        printf("%d",candidate);
    }
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

    print_maj_element(arr,n);

    return 0;
}
