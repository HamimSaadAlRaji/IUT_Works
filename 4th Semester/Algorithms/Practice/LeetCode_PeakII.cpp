//Link : https://leetcode.com/problems/find-a-peak-element-ii/

#include <bits/stdc++.h>
using namespace std;

int findMidColumn(vector<vector<int>>& mat, int mid){
    int max = INT_MIN;
    int maxIndex = 0;
    for (int i = 0; i < mat.size(); i++)
    {
        if (mat[i][mid] > max)
        {
            max = mat[i][mid];
            maxIndex = i;
        }
    }
    return maxIndex;
}
 vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int start = 0;
        int end = mat[0].size() - 1;
        int mid;
        while(start<=end){
            int mid = (start+end)/2;
            int maxIndex = findMidColumn(mat, mid);
            int right = mat[maxIndex][mid+1];
            int left = mat[maxIndex][mid-1];

            if(mat[maxIndex][mid] >= right && mat[maxIndex][mid] >= left){
                return {maxIndex, mid};
            }
            else if(mat[maxIndex][mid] < left){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }

        }
    }


int main()
{
    int n;
    cin >> n;   
    vector<vector<int>> mat(n, vector<int>(n));
    for (size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    vector<int> ans = findPeakGrid(mat);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}
