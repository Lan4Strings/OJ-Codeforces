#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string str[100];
    string ans;
    for(int i=0;i<n;i++)
        cin>>str[i];
    cin>>ans;
    int shorter_num=0,same_num=0;
    for(int i=0;i<n;i++)
    {
        if(str[i].length()<ans.length())
        {
            shorter_num++;
        }
        else
        if(str[i].length()==ans.length())
        {
            same_num++;
        }
    }
    int best=shorter_num+1;
    int worst=shorter_num+same_num;
    if(best<=k)
        cout<<best<<' ';
    else
    {
        cout<<best+int((best-1)/k)*5<<' ';
    }
    if(worst<=k)
        cout<<worst<<endl;
    else
    {
        cout<<worst+int((worst-1)/k)*5<<endl;
    }
    return 0;
}
