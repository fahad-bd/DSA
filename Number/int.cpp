#include<bits/stdc++.h> 
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
const ll MOD = 1e9+7;
const ll INF = 9e18;
const ll MAX = 2e5+5;

#define pb             push_back
#define ppb            pop_back
#define mp             make_pair
#define fi             first
#define se             second 
#define all(x)         x.begin(), x.end()
#define rall(x)        x.end(), x.begin()
#define sz(x)          ((int)(x).size())
#define sortall(x)     sort(all(x))
#define setbits        __builtin_popcountll 
#define zerobits       __builtin_ctzll 
#define test           int T; cin>>T; while(T--)
#define lp(i,s,e)      for(int i=s;i<e;i++)
#define lpr(i,s,e)     for(int i=e-1;i>=s;i--)
#define stlp(it,stl)   for(__typeof(stl.begin()) it=stl.begin();it!=stl.end();it++)//cout<<*it<<" "
#define stlpr(it,stl)  for(__typeof(stl.rbegin()) it=stl.rbegin();it!=stl.rend();it++)//cout<<*it<<" "
#define II             ({ ll TEMP; cin>>TEMP; TEMP; })
#define SI             ({ string TEMP; cin>>TEMP; TEMP; })
#define AI(a)          ({ int n=sizeof(a)/sizeof(a[0]); lp(I,0,n)a[I]=II; })
#define AO(a)          ({ int n=sizeof(a)/sizeof(a[0]); lp(I,0,n){cout<<(I?" ":"")<<a[I];}})
#define VI(v)          ({ lp(I,0,v.size())v[I]=II; })
#define VO(v)          ({ lp(I,0,v.size()){cout<<(I?" ":"")<<v[I];}}) 
#define mset(a,v)      memset(a,v,sizeof(a))
#define nline          printf("\n")
#define PI             3.1415926535897932384626

template<class T> void _print(T x){cerr<<x;}
template<class T, class V> void _print(pair <T, V> p) {cerr << "{ "; _print(p.fi); cerr << ", "; _print(p.se); cerr << " }";}
template<class T> void _print(vector<T> &v){cerr << "[ ";for(auto i : v){_print(i); cerr<<' ';}cerr << ']';}
template<class T> void _print(set<T> &a){cerr<<'['<<' ';for(auto i : a){_print(i);cerr<<' ';}cerr<<']';}
template<class T> void _print(multiset<T> &a){cerr<<'['<<' ';for(auto i : a){_print(i);cerr<<' ';}cerr<<']';}
template<class T> void _print(unordered_set<T> &a){cerr<<'['<<' ';for(auto i : a){_print(i);cerr<<' ';}cerr<<']';}
template<class T> void _print(vector<vector<T>> &a){cerr << "[ ";for(auto i : a){_print(i); cerr<<' ';}cerr << ']';}
template<class T, class V> void _print(vector<pair<T, V> > &a){cerr << "[ ";for(auto i : a){cerr<<'{';_print(i.fi); cerr<<", ";_print(i.se);cerr<<"} ";}cerr << ']';}
template<class T, class V> void _print(map<T, V> &a){cerr<<"[ ";for(auto i: a){_print(i);cerr<<' ';}cerr<<" ]";}
template<class T, class V> void _print(unordered_map<T, V> &a){cerr<<"[ ";for(auto i: a){_print(i);cerr<<' ';}cerr<<" ]";}
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void IO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
    #endif

    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif

    #ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x <<" = "; _print(x); cerr << endl;
    #else
    #define debug(x)
    #endif
}

void solve(){
    int a = INT_MAX;
    cout<<a<<endl;

    
}


int main()
{
    IO();
    //test 
    solve();

    return 0;
}