//binary search function

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll binarySearch(vector<ll> arr,ll l, ll h, ll target){
    while(l <= h){
        ll mid = l + (h - l) / 2;
        if(arr[mid] == target) return mid;
        if(arr[mid] < target) l = mid + 1;
        else h = mid - 1;
    }
    return -1;
}