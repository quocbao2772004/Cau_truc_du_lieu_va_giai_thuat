#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int x[23];
int n,k,a[10001];
bool check()
{
    int sum=0;
    for(int i=1;i<=n;i++)
    if(x[i])
    {
        sum+=a[i];
    }
    if(sum==k)return 1;
    return 0;
}
void thu(int i,int& c)
{
    for(int j=0;j<=1;j++)
    {
        x[i]=j;
        if(i==n)
        {
            if(check())
            {
                c++;
                for(int k=1;k<=n;k++)
                if(x[k])
                {
                    cout<<a[k]<<" ";
                }
                cout<<endl;
            }
        }
        else thu(i+1,c);
    }
}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    int c=0;
    thu(1,c);
    cout<<c;
    return 0;
}
