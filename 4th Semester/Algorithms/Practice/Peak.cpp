#include <bits/stdc++.h>
using namespace std;

int FindPeakIndex(int arr[], int n)
{
    int start = 0, end = n - 1, mid;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (start == end)
        {
            return start;
        }
        else if (arr[mid] >= arr[mid + 1] && arr[mid] >= arr[mid - 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            end = mid - 1;
            continue;
        }
        else
        {
            start = mid + 1;
            continue;
        }
    }
}

int FindPeakIndexVector(const std::vector<int> &arr)
{
    int start = 0, end = arr.size() - 1, mid;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (start == end)
        {
            return start;
        }
        else if (arr[mid] >= arr[mid + 1] && arr[mid] >= arr[mid - 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            end = mid - 1;
            continue;
        }
        else
        {
            start = mid + 1;
            continue;
        }
    }
}


int main()
{
    int n;
    cin >> n;
    // ARRAY
    //-------------------------------
    // int arr[n];
    // for (size_t i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int i = FindPeakIndex(arr, n);
    // cout << arr[i] << endl;
    vector<int> v;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}
