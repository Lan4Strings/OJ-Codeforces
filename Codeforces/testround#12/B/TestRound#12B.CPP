#include<cstdlib>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

const int MAXN=500005;
class left2right
{
public:
    int left;
    int right;
};

bool cmp(left2right a,left2right b)
{
    if (a.right<b.right)
        return a.right<b.right;
    else
        return b.right>a.right;
}

left2right M[500005];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>M[i].left>>M[i].right;
    }
    sort(M,M+n,cmp);
    int lR=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(M[i].left>lR)
        {
            sum++;
            lR=M[i].right;
        }
    }
    printf("%d",sum);
    return 0;
}

