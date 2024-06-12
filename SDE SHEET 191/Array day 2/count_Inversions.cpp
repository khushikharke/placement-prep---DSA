#include <bits/stdc++.h>

int merge(int low, int mid, int high, vector<int> &arr)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;

    int cnt = 0;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }

        temp.push_back(arr[right]);
        cnt = mid - left + 1;
        right++;
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high)
{
    int cnt = 0;
    if (low >= high)
    {
        return cnt;
    }
    int mid = (low + high) / 2;
    cnt += mergeSort(arr, low, mid);      // left half
    cnt += mergeSort(arr, mid + 1, high); // right half
    cnt += merge(arr, low, mid, high);    // merging sorted halves
    return cnt;
}
long long getInversions(long long *arr, int n)
{
    return mergeSort(*arr, 0, n - 1);
}