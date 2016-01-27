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
#define ca(x) pf("Case %d: ",x)
#define ne pf("\n")
#define SET(x) memset(x, 0, sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
#define ok pf("ok");
template <class T> T Max(T a, T b) { return a>b?a:b;}
template <class T> T Min(T a, T b) { return a<b?a:b;}
bool less(const string &a,const string &b)
{
    return a.size()<b.size();
}
int t,a,b,c,d,m,n,o,p;
int gcd(int p,int q)
{
    p=abs(p);
    q=abs(q);

    int t,g;
    if(p<q)
    {
        t=p;
        p=q;
        q=t;
    }
    if(p==0 || q==0)
        g=p;
    else
    {
        while(p!=0)
        {
            t=p;
            p=q % p;
            q=t;
        }
        g= q;
    }
    return g;
}
void sm()
{
    n=b*d;
    m=a*d+c*b;
    int g=gcd(m,n);
    o=m/g;
    p=n/g;
}
void sb()
{
    n=b*d;
    m=a*d-c*b;
    int g=gcd(m,n);

    o=m/g;
    p=n/g;
}
void ml()
{
    n=b*d;
    m=a*c;
    int g=gcd(m,n);
    o=m/g;
    p=n/g;
}
void di()
{
    n=b*c;
    m=a*d;
    int g=gcd(m,n);
    o=m/g;
    p=n/g;
}
int main()
{
char ch;
cin>>t;
for(int i=0;i<t;i++)
{
    scanf("%d / %d %c %d / %d",&a,&b,&ch,&c,&d);
    if(ch=='+')
        sm();
    else if(ch=='-')
        sb();
    else if(ch=='*')
        ml();
    else
        di();
    printf("%d/%d = %d/%d\n",m,n,o,p);
}
return 0;
}
