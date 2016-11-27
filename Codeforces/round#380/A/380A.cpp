#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int star=0;
    char ch[105]={};
    bool tf[105]={};
    for(int i=1;i<=n;i++)
    {
        cin>>ch[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(ch[i]=='o')
        {
            if(ch[i+1]=='g' && ch[i+2]=='o')
            {
                cout<<"***";
                i=i+3;
                while(i<=n && ch[i]=='g' && ch[i+1]=='o')
                {
                    i=i+2;
                }
                i--;
            }
            else
                cout<<'o';
        }
        else
            cout<<ch[i];
    }

    return 0;

}
