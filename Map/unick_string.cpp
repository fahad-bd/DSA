#include<iostream>
using namespace std;
int main()
{
    map<string, int> m;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        m[s]++;
    }

    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}