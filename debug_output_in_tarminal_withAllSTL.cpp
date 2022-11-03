//                            In the name of Allah
#include<bits/stdc++.h> 
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
const ll MOD = 1e9+7;
const ll INF = 9e18;
const ll MAX = 2e5+5;

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
template<class T> void _print(T x){cout<<x;}
template<class T, class V> void _print(pair <T, V> p) {cout << "{ "; _print(p.first); cout << ", "; _print(p.second); cout << " }";}
template<class T> void _print(list<T> &l){cout << "[ ";for(auto i : l){_print(i); cout<<' ';}cout << ']';}
template<class T> void _print(deque<T> &d){cout << "[ ";for(auto i : d){_print(i); cout<<' ';}cout << ']';}
template<class T> void _print(vector<T> &v){cout << "[ ";for(auto i : v){_print(i); cout<<' ';}cout << ']';}
template<class T> void _print(stack<T> s){cout << "[ ";while(!s.empty()){_print(s.top()); s.pop(); cout<<' ';}cout << ']';}
template<class T> void _print(queue<T> q){cout << "[ ";while(!q.empty()){_print(q.front()); q.pop(); cout<<' ';}cout << ']';}
template<class T> void _print(priority_queue<T> q){cout << "[ ";while(!q.empty()){_print(q.top()); q.pop(); cout<<' ';}cout << ']';}
template<class T> void _print(set<T> &a){cout<<'['<<' ';for(auto i : a){_print(i);cout<<' ';}cout<<']';}
template<class T> void _print(multiset<T> &a){cout<<'['<<' ';for(auto i : a){_print(i);cout<<' ';}cout<<']';}
template<class T> void _print(unordered_set<T> &a){cout<<'['<<' ';for(auto i : a){_print(i);cout<<' ';}cout<<']';}
template<class T> void _print(unordered_multiset<T> &a){cout<<'['<<' ';for(auto i : a){_print(i);cout<<' ';}cout<<']';}
template<class T> void _print(vector<vector<T>> &a){cout << "[ ";for(auto i : a){_print(i); cout<<' ';}cout << ']';}
template<class T, class V> void _print(vector<pair<T, V> > &a){cout << "[ ";for(auto i : a){cout<<'{';_print(i.first); cout<<", ";_print(i.second);cout<<"} ";}cout << ']';}
template<class T, class V> void _print(map<T, V> &a){cout<<"[ ";for(auto i: a){_print(i);cout<<' ';}cout<<" ]";}
template<class T, class V> void _print(multimap<T, V> &a){cout<<"[ ";for(auto i: a){_print(i);cout<<' ';}cout<<" ]";}
template<class T, class V> void _print(unordered_map<T, V> &a){cout<<"[ ";for(auto i: a){_print(i);cout<<' ';}cout<<" ]";}
template<class T, class V> void _print(unordered_multimap<T, V> &a){cout<<"[ ";for(auto i: a){_print(i);cout<<' ';}cout<<" ]";}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------

void IO()
{
    #ifndef ONLINE_JUDGE
    #define debug(x) cout<<"[Dedug] "; cout << #x <<" = "; _print(x); cout << '\n';
    #else
    #define debug(x)
    #endif
}

void solve();

int main()
{
    IO();
    int __=1;
    //cin>>t;
    while(__--)
    solve();
    return 0;
}

void solve()
{
    cout<<"pair"<<endl;
    pair<int,int>p;
    p = {1,5};
    debug(p);

    cout<<"list:"<<endl;
    list<int>li;
    li.push_back(1);
    li.push_back(4);
    li.push_front(2);
    li.push_front(3);
    debug(li);

    list<char>liC;
    liC.push_back('f');
    liC.push_back('a');
    liC.push_back('h');
    liC.push_back('a');
    liC.push_back('d');
    debug(liC);

    cout<<"vector"<<endl;
    vector<int>ve;
    ve.push_back(1);
    ve.push_back(2);
    ve.push_back(3);
    ve.push_back(4);
    ve.push_back(5);
    debug(ve);

    vector<char>veC;
    veC.push_back('f');
    veC.push_back('a');
    veC.push_back('h');
    veC.push_back('a');
    veC.push_back('d');
    debug(veC);

    cout<<"vector of vector"<<endl;
    vector<vector<int>>vv;
    for(int i=0;i<5;i++){
        vector<int>temp;
        for(int j=0;j<5;j++){
            temp.push_back(i*j);
        }
        vv.push_back(temp);
    }
    debug(vv);

    cout<<"vector of pair"<<endl;
    vector<pair<int,char>>vp;
    for(int i=0;i<5;i++){
        pair<int, char>p;
        p = {i,'a'+i};
        vp.push_back(p);
    }
    debug(vp);

    cout<<"deque"<<endl;
    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.emplace_back(5);
    dq.emplace_front(5);
    dq.push_front(100);
    debug(dq);

    deque<char>dqC;
    dqC.push_back('a');
    dqC.push_back('h');
    dqC.push_back('a');
    dqC.push_back('d');
    dqC.push_front('f');
    debug(dqC);

    cout<<"queue"<<endl;
    queue<int>qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    debug(qu);

    queue<char>quC;
    quC.push('f');
    quC.push('h');
    quC.push('a');
    quC.push('d');
    debug(quC);

    cout<<"priority queue"<<endl;
    priority_queue<int>prQ;
    prQ.push(1);
    prQ.push(2);
    prQ.push(3);
    prQ.push(4);
    prQ.push(5);
    debug(prQ);

    priority_queue<char>prqC;
    prqC.push('f');
    prqC.push('a');
    prqC.push('h');
    prqC.push('a');
    prqC.push('d');
    debug(prqC);

    cout<<"stack"<<endl;
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    debug(st);

    stack<char>stC;
    stC.push('f');
    stC.push('f');
    stC.push('f');
    debug(stC);

    //unique data colaction with ordered
    cout<<"set"<<endl;
    set<int>s;
    s.insert(12);
    s.insert(2);
    s.insert(122);
    debug(s);

    set<char>sc;
    sc.insert('z');
    sc.insert('d');
    sc.insert('a');
    sc.insert('h');
    sc.insert('k');
    debug(sc);

    set<string>ss;
    ss.insert("fahad");
    debug(ss);

    //unique but un ordered
    cout<<"unordered set"<<endl;
    unordered_set<int>us;
    us.insert(10);
    us.insert(11);
    us.insert(8);
    debug(us);

    unordered_set<char>scC;
    scC.insert('z');
    scC.insert('d');
    scC.insert('a');
    scC.insert('h');
    scC.insert('k');
    debug(scC);

    //doplicate are allowes and ordere
    cout<<"multiset"<<endl;
    multiset<int>ms;
    ms.insert(2);
    ms.insert(2);
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(3);
    debug(ms);

    multiset<char>msC;
    msC.insert('b');
    msC.insert('b');
    msC.insert('a');
    debug(msC);

    cout<<"unordered multiset"<<endl;
    unordered_multiset<int>unms;
    unms.insert(2);
    unms.insert(2);
    unms.insert(1);
    unms.insert(1);
    unms.insert(17);
    debug(unms);

    cout<<"map"<<endl;
    map<int, int>m;
    m[1]++;
    m[2]++;
    debug(m);

    map<int,char>mC;
    mC[1]='f';
    mC[2]='f';
    debug(mC);

    cout<<"unordered map"<<endl;
    unordered_map<int, int>um;
    um.insert({10,1});
    um.insert({5,3});
    um.insert({11,1});
    debug(um);

    cout<<"multimap"<<endl;
    multimap<int,int>mm;
    mm.insert({1,2});
    mm.insert({1,2});
    debug(mm);

    cout<<"unordered multimap"<<endl;
    unordered_multimap<int, char>umm;
    umm.insert({2,'d'});
    umm.insert({12,'a'});
    umm.insert({102,'a'});
    umm.insert({5,'b'});
    debug(umm);
}
