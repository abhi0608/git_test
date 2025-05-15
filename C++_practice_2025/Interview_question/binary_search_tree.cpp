#include<iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        
        int mid = l + (r - l) / 2;
        // If the element is present at the middle itself
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present in right
        // subarray
        return binarySearch(arr, mid + 1, r, x);
    }
    // We reach here when element is not present in array
    return -1;
}

int main()
{
    int arr1[] = { 7, 1, 5, 2, 3, 6 };
    int l=0;
    int r=sizeof(arr1)/sizeof(arr1[0])-1;
    cout<<binarySearch(arr1,l,r,6)<<endl;
    return 0;
}