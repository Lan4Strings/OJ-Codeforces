#include<iostream>

int abs(int a)
{
    if (a<0)
        return -a;
    else
        return a;
}


using namespace std;
int main()
{
    int n=0;
    cin>>n;
    short A[100001][2]={};
    short diff[100001]={};
    int sum=0;
    for (int i=0;i<n;i++)
    {
        cin>>A[i][0]>>A[i][1];
        diff[i]=A[i][0]-A[i][1];
        sum+=diff[i];
    }
    int temp=abs(sum);
    int nu=0,tempk=0;
    for(int i=0;i<n;i++)
    {
        tempk=abs(sum-2*diff[i]);
        if (tempk>temp)
        {
            temp=tempk;
            nu=i+1;
        }
    }
    cout<<nu<<endl;
	return 0;
}
