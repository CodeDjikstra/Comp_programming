// Lower bound binary search function

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll lowerBound(vector<ll> arr,ll l, ll h, ll target){
    while(l < h){
        ll mid = l + (h - l) / 2;
        if(arr[mid] < target) l = mid + 1;
        else h = mid;
    }
    return l-1;
}
