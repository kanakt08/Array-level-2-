//Write a program to find the sum of any subarray using the prefix sum array

#include <iostream>
using namespace std;
void computePrefixSum(int arr[], int n, int prefix[])
{
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
}

int getSubarraySum(int prefix[], int L, int R) {
    if (L == 0)
        return prefix[R];
    else
        return prefix[R] - prefix[L - 1];

}

int main() {

    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int prefix[n];

    computePrefixSum(arr, n, prefix);

    int L = 1, R = 4; // Example query (0-based index)

    cout << "Sum of subarray from index " << L << " to " << R << " is: " << getSubarraySum(prefix, L, R) << endl;

    return 0;

}
