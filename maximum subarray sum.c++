#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long msf=INT_MIN,csf=0;
    for(int i=0;i<n;i++)
    {
        if(csf<0) csf=0;
        csf+=arr[i];
        msf=max(msf,csf);
    }
   return msf>0?msf:0;
}