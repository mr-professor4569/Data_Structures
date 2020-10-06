#include <bits/stdc++.h>

// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Function to Rearrange positive and negative
// numbers in a array
void RearrangePosNeg(int arr[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];

        // if current element is positive
        // do nothing
        if (key > 0)
            continue;

        /* if current element is negative,
        shift positive elements of arr[0..i-1],
        to one position to their right */
        j = i - 1;
        while (j >= 0 && arr[j] > 0) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // Put negative element at its right position
        arr[j + 1] = key;
    }
}

/* Driver program to test above functions */
int main()
{
    int arr[] = { -12, 11, -13, -5, 6, -7, 5, -3, -6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    RearrangePosNeg(arr, n);
    printArray(arr, n);

    return 0;
}
