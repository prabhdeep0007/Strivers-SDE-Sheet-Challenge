#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mini=prices[0],profit=0,n=prices.size();
    for(int i=1;i<n;i++)
    {
      profit=max(profit,prices[i]-mini);
      mini=min(mini,prices[i]);  
    }
    return profit;
}