//Write a program to find the maximum length even-odd subarray

#include <stdio.h>

#include <algorithm>



int maxEvenOddOptimized(int arr[], int n) {

    int res = 1, curr = 1;



    for (int i = 1; i < n; i++)

   {

        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))

        {

            curr++;

            res = std::max(res, curr);

        }

        else

       {

            curr = 1;

        }

    }



    return res;

}



int main() {

    int arr[] = {5, 10, 20, 6, 3, 8, 7, 1, 6, 12};

    int n = sizeof(arr) / sizeof(arr[0]);



    int result = maxEvenOddOptimized(arr, n);

    printf("Length of the longest alternating even-odd subarray (Optimized): %d\n", result);



    return 0;

}

