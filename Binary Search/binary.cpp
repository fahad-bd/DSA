#include<bits/stdc++.h>
using namespace std;

int arr[10000];

int bsearch(int key, int n)
{
    int l=0, r=n-1, ans=-1;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(arr[mid] > key)
        {
            r = mid - 1;
            ans = mid;
        }
        else{
            l = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int key; cin>>key;

    cout<<bsearch(key,n)<<endl;
    
    return 0;
}