#include <iostream>

using namespace std;

int main()
{
    int n,sym,sum=0;
    cin>> n;
    string str;
    cin>>str;
    if(str.length()!=n)
    {
        cout<<"wrong input";
        return 0;
    }
    while(n%2!=1)
    {
        string s1 = str.substr (0,n/2);
        string s2 = str.substr (n/2,n/2);
        if(s1.compare(s2) == 0)
           {
            sum++;
           }
        n=n/2;

    }
    cout<<sum;
    return 0;
}
