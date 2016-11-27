#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;cin>>m;
    int a[105];
    int sum=0;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int l[105],r[105];
    for (int i=0;i<m;i++)
    {
        cin>>l[i];
        cin>>r[i];
        int trysum=0;
        for(int j=l[i];j<=r[i];j++)
            trysum+=a[j];
        if (trysum>0)
            sum+=trysum;
    }
    cout<<sum<<endl;
    return 0;
}
