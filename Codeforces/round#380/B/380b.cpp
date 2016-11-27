#include<iostream>

using namespace std;

    bool youren[1001][1001]={0};
    short zuo[1001][1001]={0};
    short you[1001][1001]={0};
    short shang[1001][1001]={0};
    short xia[1001][1001]={0};

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    for (int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>youren[i][j];
    for (int i=0;i<n;i++)
    {
        bool tempzuo=false;
        for(int j=0;j<m;j++)
        {
            if(tempzuo)
                zuo[i][j]=1;
            else if(youren[i][j])
                tempzuo=true;
        }
    }
    for (int i=0;i<n;i++)
    {
        bool tempyou=false;
        for(int j=m-1;j>=0;j--)
        {
            if(tempyou)
                you[i][j]=1;
            else if(youren[i][j])
                tempyou=true;
        }
    }
    for (int j=0;j<m;j++)
    {
        bool tempshang=false;
        for(int i=0;i<n;i++)
        {
            if(tempshang)
                shang[i][j]=1;
            else if(youren[i][j])
                tempshang=true;
        }
    }
    for (int j=0;j<m;j++)
    {
        bool tempxia=false;
        for(int i=n-1;i>=0;i--)
        {
            if(tempxia)
                xia[i][j]=1;
            else if(youren[i][j])
                tempxia=true;
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if (!youren[i][j])
                sum=sum+shang[i][j]+xia[i][j]+zuo[i][j]+you[i][j];
        }
    cout<<sum<<endl;
}
