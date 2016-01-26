/****************************************\
   Allah is Almighty
   Coder-Boxtroll
   sakibhossain.nstu@gmail.com
/*****************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define re(x) return x
#define rep(i,j) for(int i=0;i<x;i++)
#define per(i,j) for(int i=x;i>=0;i--)
#define po(i,j) pow(i+0.0,j)
#define pb(x) push_back(x)
#define pf printf
#define sf scanf
#define all(x) x.begin(), x.end()
#define clr(x) x.erase(all(x))
#define sum(x) accumulate(all(x),0)
#define vi(x) vector<int>x
#define vs(x) vector<string>x
#define ca(x) pf("Case %d: ",x)
#define ne pf("\n")
#define SET(x) memset(x, 0, sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
template <class T> T Max(T a, T b) { return a>b?a:b;}
template <class T> T Min(T a, T b) { return a<b?a:b;}
bool sor(const string &a,const string &b)
{
    return a.size()>b.size();
}
int main()
{
vs(A);
int n,flag;
string s;
char B[10000], *C=B;
cin>>n;
getchar();
for(int i=0;i<n;i++)
{
    gets(B);
    while((C=strtok(C," "))!=NULL)
    {
        s=C;
        A.pb(s);
        C=NULL;
    }
    C=B;
    stable_sort(A.begin(),A.end(),sor);
    int k;
    for( k=0;k<A.size();k++) {
        cout<<A[k];
        if(k==A.size()-1)
        cout<<endl;
        else
            cout<<" ";
    }
    clr(A);
}
return 0;
}


