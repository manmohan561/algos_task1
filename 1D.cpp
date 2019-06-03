#include <iostream>
#include <vector>
using namespace std;
vector <int> input(int n)
{
    vector <int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    return a;
}

int main()
{
    int n,x,r,y,s1=0,s2=0;
    cin>>n>>r>>x>>y;
    vector <int> a;
    vector <int> b;
    a=input(n);
    b=input(n);
    for(int i=0;i<n;i++)
    {
        if(a[i]==1&&b[i]==1)
           s1+=x;
        else if(a[i]==1&&b[i]==0)
            s2+=y;
    }
    if(s1>s2)
        cout<<"promoted";
    else if(s1<s2)
         cout<<"demoted";
    else if(s1==s2)
        cout<<"no change";

    return 0;
}
