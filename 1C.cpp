#include <iostream>

using namespace std;

int hcf(int p, int q, int r)
{
        int gcf=1,flag=0, count;
        for(count=1; flag==0;count++)
        {
                if(p%count==0&&q%count==0&&r%count==0)
                        gcf=count;
                if(count>p&&count>q&&count>r)
                {
                        flag=1;
                }
        }
        return gcf;
}
void printArray(int a[])
{
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int a[6]={10,8,7,16,9,43};
    int b[4];
    printArray(a);
    cout << "Enter the products as (1,y) for 1<=y<=4" << endl;
    for(int i=0;i<4;i++)
    {
        cin>>b[i];
    }
    a[0]=hcf(b[0],b[1],b[2]);
    a[1]=b[0]/a[0];
    a[2]=b[1]/a[0];
    a[3]=b[2]/a[0];
    a[4]=b[3]/a[0];
    a[5]=93-a[0]-a[1]-a[2]-a[3]-a[4];
    cout<<"Given Sequence :";
    printArray(a);
    return 0;
}
