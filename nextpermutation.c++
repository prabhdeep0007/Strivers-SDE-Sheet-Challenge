#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
    if(n<=1) return nums;
    int k;
    for( k=n-2;k>=0;k--)
    {
        if(nums[k]<nums[k+1])
        {
            break;
        }
    }
    if (k < 0) {
      reverse(nums.begin(), nums.end());
      return nums;
    } else {
      for (int a = n - 1; a < n; a--) {
        if (nums[a] > nums[k]) {
          swap(nums[a], nums[k]);
          break;
        }
      }
    }
    reverse(nums.begin()+k+1,nums.end());
    return nums;
}