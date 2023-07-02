#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &A, int n)
{
int MOD = 1e9+7;
    long long sum = 1ll*((n*(n+1))/2);
    long long sum_of_squares = ((1ll*(n*(n+1)*((2*n)+1)))/6)%MOD;
    long long actual_sum=0,actual_sum_of_square=0;
    for(int ele:A){
        actual_sum+=1ll*ele;
        actual_sum_of_square+=1ll*(ele*ele)%MOD;
    } 
    long long rmm = 1ll*(actual_sum - sum); //extra-missing 
    long long rsmms = 1ll*(actual_sum_of_square-sum_of_squares);// extra^2-missing^2;
    long long rpm=(rsmms/rmm); 
    long long r = 1ll*(rmm+rpm)/2;
    long long m = rpm-r;
    return {m,r};
	
}
