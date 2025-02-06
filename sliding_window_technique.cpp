//Write a program to find a subarray with a given sum using the sliding window technique

//efficent solution

#include <iostream>
using namespace std;

bool isSubSum(int arr[], int n, int sum) {

    int s = 0, currSum = 0;

    for (int e = 0; e < n; e++)

    {
        currSum += arr[e];

        while (currSum > sum && s <= e)

       {
            currSum -= arr[s];

            s++;
        }

        if (currSum == sum)

            return true;
    }
    return false; // No such subarray found

}



int main() {

    int arr[] = {1, 4, 20, 3, 10, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 33;

    if (isSubSum(arr, n, sum))

        cout << "Subarray with the given sum exists\n";

    else

        cout << "No subarray with the given sum exists\n";

    return 0;

}
