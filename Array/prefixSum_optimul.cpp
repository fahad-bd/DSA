/*
Given 2d array a of N*N integers. Given Q queries and in each query given a,b,c and d print sum of square
represented by (a,b) as top left point and (c,d) as bottom right point

Constraints
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a,b,c,d <= N

input:
3
3 6 2
8 9 2
3 4 1
2
1 1 2 2
1 2 3 3

output:
26
24
*/
#include<iostream>
using namespace std;
const int N = 1e3+10;
int arr[N][N];
long long pf[N][N];

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
            pf[i][j]=arr[i][j]+arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
        }
    }

    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        cout<<endl<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1]<<endl;

    }
    return 0;
}