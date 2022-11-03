//                            In the name of Allah
#include<bits/stdc++.h> 
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
const ll MOD = 1e9+7;
const ll INF = 9e18;
const ll MAX = 2e5+5;

template<class T> void _print(T x){cerr<<x;}
template<class T, class V> void _print(pair <T, V> p) {cerr << "{ "; _print(p.first); cerr << ", "; _print(p.second); cerr << " }";}
template<class T> void _print(list<T> &l){cerr << "[ ";for(auto i : l){_print(i); cerr<<' ';}cerr << ']';}
template<class T> void _print(deque<T> &d){cerr << "[ ";for(auto i : d){_print(i); cerr<<' ';}cerr << ']';}
template<class T> void _print(vector<T> &v){cerr << "[ ";for(auto i : v){_print(i); cerr<<' ';}cerr << ']';}
template<class T> void _print(stack<T> s){cerr << "[ ";while(!s.empty()){_print(s.top()); s.pop(); cerr<<' ';}cerr << ']';}
template<class T> void _print(queue<T> q){cerr << "[ ";while(!q.empty()){_print(q.front()); q.pop(); cerr<<' ';}cerr << ']';}
template<class T> void _print(priority_queue<T> q){cerr << "[ ";while(!q.empty()){_print(q.top()); q.pop(); cerr<<' ';}cerr << ']';}
template<class T> void _print(set<T> &a){cerr<<'['<<' ';for(auto i : a){_print(i);cerr<<' ';}cerr<<']';}
template<class T> void _print(multiset<T> &a){cerr<<'['<<' ';for(auto i : a){_print(i);cerr<<' ';}cerr<<']';}
template<class T> void _print(unordered_set<T> &a){cerr<<'['<<' ';for(auto i : a){_print(i);cerr<<' ';}cerr<<']';}
template<class T> void _print(unordered_multiset<T> &a){cerr<<'['<<' ';for(auto i : a){_print(i);cerr<<' ';}cerr<<']';}
template<class T> void _print(vector<vector<T>> &a){cerr << "[ ";for(auto i : a){_print(i); cerr<<' ';}cerr << ']';}
template<class T, class V> void _print(vector<pair<T, V> > &a){cerr << "[ ";for(auto i : a){cerr<<'{';_print(i.first); cerr<<", ";_print(i.second);cerr<<"} ";}cerr << ']';}
template<class T, class V> void _print(map<T, V> &a){cerr<<"[ ";for(auto i: a){_print(i);cerr<<' ';}cerr<<" ]";}
template<class T, class V> void _print(multimap<T, V> &a){cerr<<"[ ";for(auto i: a){_print(i);cerr<<' ';}cerr<<" ]";}
template<class T, class V> void _print(unordered_map<T, V> &a){cerr<<"[ ";for(auto i: a){_print(i);cerr<<' ';}cerr<<" ]";}
template<class T, class V> void _print(unordered_multimap<T, V> &a){cerr<<"[ ";for(auto i: a){_print(i);cerr<<' ';}cerr<<" ]";}


void IO()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #define debug(x) cerr << #x <<" = "; _print(x); cerr << '\n';
    #else
    #define debug(x)
    #endif
}

void solve();

//main 
int main()
{
    IO();
    int __ = 1;
    //cin>>__;
    while(__--)
    solve();
    return 0;
}

void solve()
{
    
}
