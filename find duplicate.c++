#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	map<int,int> m;
	for(auto i:arr)
	{
		if(m[i]) return i;
		else m[i]=1;
	}
}
