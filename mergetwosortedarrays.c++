#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& a, vector<int>& b, int m, int n) {
	int i=0,j=0;
	vector<int> ans;
   while(i<m && j<n){
     if (a[i] <= b[j]) {
       ans.push_back(a[i]);
	   i++;
     }
	 else
	 {
		 ans.push_back(b[j]);
		 j++;
	 }
   }
   while(i<m)
   {
	   ans.push_back(a[i]);
	   i++;
   }
   while(j<n)
   {
	   ans.push_back(b[j]);
	   j++;
   }
    return ans;
}