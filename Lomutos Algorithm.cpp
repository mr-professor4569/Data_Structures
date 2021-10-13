#include<bits/stdc++.h>
using namespace std;

// sadflkajsldfk
// /alskdjflkjasldkjflaskd
// alskhjfh
// alsjkdhfl;aksd;lhkf alskd

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);


        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// alskjdfl / alskdjfl  


/* Function to print an array */

// Driver program to test above functions
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
