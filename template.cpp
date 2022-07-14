#include<bits/stdc++.h> //all general header file
#include<ext/pb_ds/assoc_container.hpp> //orderd set , policy based DS
#include<ext/pb_ds/tree_policy.hpp> //orderd set , policy based DS
using namespace std;
using namespace __gnu_pbds; //orderd set , policy based DS

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
const ll MOD = 1e9+7;
const ll INF = 9e18;
const ll MAX = 2e5+5;

#define pb                      push_back
#define ppb                     pop_back
#define mp                      make_pair
#define PQ                      priority_queue
#define fi                      first
#define se                      second 
#define all(x)                  x.begin(), x.end()
#define allr(x)                 x.rbegin(), x.rend()
#define sz(x)                   ((int)(x).size())
#define sortall(x)              sort(all(x))
#define sortallr(x)             sort(allr(x))
#define revS(s)                 reverse(all(s))
#define setbits                 __builtin_popcountll 
#define zerobits                __builtin_ctzll 
#define lcm(a,b)                a/__gcd(a,b)*b
#define mset(a,v)               memset(a,v,sizeof(a))
#define nl                      '\n'
#define test                    int T; cin>>T; while(T--)
#define lp(i,s,e)               for(int i=s;i<e;i++)
#define lpr(i,s,e)              for(int i=e-1;i>=s;i--)
#define stlp(it,stl)            for(__typeof(stl.begin()) it=stl.begin();it!=stl.end();it++)cout<<*it<<" "
#define stlpr(it,stl)           for(__typeof(stl.rbegin()) it=stl.rbegin();it!=stl.rend();it++)cout<<*it<<" "
#define II                      ({ ll TEMP; cin>>TEMP; TEMP; })
#define SI                      ({ string TEMP; cin>>TEMP; TEMP; })
#define AI(a)                   ({ int n=sizeof(a)/sizeof(a[0]); lp(I,0,n)a[I]=II; })
#define AO(a)                   ({ int n=sizeof(a)/sizeof(a[0]); lp(I,0,n){cout<<(I?" ":"")<<a[I];}})
#define VI(v)                   ({ lp(I,0,v.size())v[I]=II; })
#define VO(v)                   ({ lp(I,0,v.size()){cout<<(I?" ":"")<<v[I];}}) 
#define PI                      3.1415926535897932384626

//debug
template<class T> void _print(T x){cerr<<x;}
template<class T, class V> void _print(pair <T, V> p) {cerr << "{ "; _print(p.fi); cerr << ", "; _print(p.se); cerr << " }";}
template<class T> void _print(vector<T> &v){cerr << "[ ";for(auto i : v){_print(i); cerr<<' ';}cerr << ']';}
template<class T> void _print(set<T> &a){cerr<<'['<<' ';for(auto i : a){_print(i);cerr<<' ';}cerr<<']';}//print in ascending order
template<class T> void _print(set <T, greater<T> > &a){cerr<<"[ ";for(auto i : a){_print(i);cerr<<' ';}cerr<<']';}//print in de-scending order
template<class T> void _print(multiset<T> &a){cerr<<'['<<' ';for(auto i : a){_print(i);cerr<<' ';}cerr<<']';}//print in ascending order
template<class T> void _print(multiset <T, greater<T> > &a){cerr<<"[ ";for(auto i : a){_print(i);cerr<<' ';}cerr<<']';}//print in de-scending order
template<class T> void _print(unordered_set<T> &a){cerr<<'['<<' ';for(auto i : a){_print(i);cerr<<' ';}cerr<<']';}
template<class T> void _print(vector<vector<T>> &a){cerr << "[ ";for(auto i : a){_print(i); cerr<<' ';}cerr << ']';}
template<class T, class V> void _print(vector<pair<T, V> > &a){cerr << "[ ";for(auto i : a){cerr<<'{';_print(i.fi); cerr<<", ";_print(i.se);cerr<<"} ";}cerr << ']';}
template<class T, class V> void _print(map<T, V> &a){cerr<<"[ ";for(auto i: a){_print(i);cerr<<' ';}cerr<<" ]";}
template<class T, class V> void _print(unordered_map<T, V> &a){cerr<<"[ ";for(auto i: a){_print(i);cerr<<' ';}cerr<<" ]";}


//template for policy based DS 
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


//calculation power

long long binMultiply(long long a, long long b){
    long long ans = 0;
    while(b>0){
        if(b&1){
            ans = (ans + a) % MOD;
        }
        a = (a + a) % MOD;
        b = b >> 1;
    }
    return ans;
}

long long power(long long a, long long b){
    long long ans = 1;
    while(b>0){
        if(b&1){
            ans = binMultiply(ans, a);
        }
        a = binMultiply(a,a);
        b = b >> 1;
    }
    return ans;
}

//function for test palindrome or not
bool palindrome(string s){
    string st=s;
    revS(st);
    if(st==s)return true;
    else return false;
}

//function for prime number
//in solve function first need to call prime_sieve(n)
//then need to examine isPrime[i] prime or not with loop
vector<ll>isPrime(5000011,1); 
void prime_sieve(ll n){
    isPrime[0]=0, isPrime[1]=0;
    for(ll i=2; i<=n; i+=2){
        if(i==2)continue;
        isPrime[i]=0;
    }
    for(ll i=3; i*i<=n; i+=2){
        if(isPrime[i]==1){
            for(ll j=i*i; j<=n; j+=2*i){
                isPrime[j]=0;
            }
        }
    }
}

//functon for input & output from text file
void IO(){
    //Speed, it will execuite in online judge
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //input output, it will not execute in online judge
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    //output for debug in error.txt, it will not execute in online judge
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif

    //debug, it will not execute in online judge
    #ifndef ONLINE_JUDGE
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
    //test 
    //solve();

    //setbits
    int n = 5;
    cout<<"Set bits: "<<setbits(n)<<endl;

    //zerobits
    n = 16;
    cout<<"Zero bits: "<<zerobits(n)<<endl;

    //test
    cout<<"test: "; 
    int t=0;
    test{
        cout<<++t<<" ";
    }
    cout<<endl;

    //for loop 0 to n
    cout<<"lp: ";
    lp(i,0,5) cout<<i<<" ";
    cout<<endl;
    

    //for loop n-1 to 0
    cout<<"lpr: ";
    lpr(i,0,5) cout<<i<<" ";
    cout<<endl;

    // debug pair
    pair<string,int> p;
    p.fi="Fahad"; //fi = first
    p.se=7; //se = second
    debug(p);
    p = mp("Ahammed",1);
    debug(p);
    p = {"abc",2};
    debug(p);
    cout<<endl;

    //debug vector
    vector<int> v;
    v.pb(1); //pb = push_back
    v.pb(2);
    v.pb(3);
    debug(v);

    vector<string> v1;
    v1.pb("Bisimmillah");
    v1.pb("Start");
    debug(v1);

    //debug set
    set<int> se1;
    se1.insert(4);
    se1.insert(5);
    se1.insert(6);
    debug(se1);
    se1.erase(se1.begin());
    debug(se1);//ascending

    set<string> se2;
    se2.insert("Fahad");
    se2.insert("Ahammed");
    debug(se2);//ascending

               //de-cending

    //debug multiset
    multiset<int> set3;
    set3.insert(11);
    set3.insert(12);
    set3.insert(13);
    set3.insert(11);
    debug(set3);//ascending

                //de-cending

    multiset<string> set4;
    set4.insert("Fahad");
    set4.insert("Fahad");
    debug(set4);

    //debug unoreder set
    unordered_set<int> set5;
    set5.insert(21);
    set5.insert(31);
    set5.insert(11);
    debug(set5);
    set5.insert(1);
    debug(set5);

    //debug vector of vector
    vector<vector<int>> vv1;
    vector<int> temp;
    temp.pb(1);
    temp.pb(2);
    temp.pb(3);
    vv1.pb(temp);

    vector<int>temp1;
    temp1.pb(9);
    temp1.pb(8);
    temp1.pb(7);
    vv1.pb(temp1);

    debug(vv1);

    //debug vector of pair
    vector<pair<string, int>> vp1;
    vp1.pb({"Apple", 1});
    vp1.pb({"Banana", 2});
    vp1.pb({"Mango", 3});
    debug(vp1);

    //debug map
    map<int, string> m1;
    m1[1]="abc";
    m1[5]="cdc";
    m1[3]="yrt";
    m1.insert({7,"poi"});
    debug(m1);

    //debug unordered map
    unordered_map<int, string> m2;
    m2[1]="abc";
    m2[5]="cdc";
    m2[3]="yrt";
    m2.insert({7,"poi"});
    debug(m2);


    //policy based DS
    /*
    input: 
    7
    1 1
    1 2
    1 4
    2 1
    1 8
    1 16
    3 4
    output:
    2 2
    */
    cout<<"Ordered set: ";
    cin>>t;
    ordered_set<int> s;

    while(t--){
         int c;
        cin>>c;
        if(c==1){
            int a;
            cin>>a;
            s.insert(a);
        }
        else if(c==2){
            int a;
            cin>>a;
            cout<<*s.find_by_order(a)<<endl;//number of items strickly smaller than a
        }
        else{
            int a;
            cin>>a;
            cout<<s.order_of_key(a)<<endl;//a th element in the set
        }
    }
    cout<<endl;

    //stlp and stlpr function 
    cout<<"stlp: ";
    stlp(i,s)cout<<*i<<" ";
    cout<<"\nstlpr: ";
    stlpr(i,s)cout<<*i<<" ";
    cout<<endl;

    // II, SI, AI, VI, AO, VO
    cout<<"Array input and output: \n";
    int n1=II;
    int arrr[n1];
    AI(arrr);
    AO(arrr);
    cout<<endl;
    cout<<"Vector input and output: \n";
    int n2 = II;
    vector<int>v3(n2);
    VI(v3);
    VO(v3);
    cout<<endl;

    return 0;
}

void solve()
{

}