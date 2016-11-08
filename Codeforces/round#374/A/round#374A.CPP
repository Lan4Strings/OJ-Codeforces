#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sumoutput=0;
    int answer[100]={0};
    char str[100];
    cin>>str;
    for(int i=0;i<n;i++)
    {
        char ch=str[i];
        if(ch=='B')
        {
            answer[sumoutput]++;
            continue;
        }
        if(ch=='W')
        {
            if(answer[sumoutput]==0)
            {
                continue;
            }
            else
            {
                sumoutput++;
            }
        }
    }
    if(answer[sumoutput]==0)
        sumoutput--;
    cout<<sumoutput+1<<endl;
    for(int i=0;i<=sumoutput;i++)
    {
        cout<<answer[i]<<' ';
    }
    cout<<endl;
    return 0;
}
