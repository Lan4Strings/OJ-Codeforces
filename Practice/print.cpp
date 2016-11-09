#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;
int n;
void print(int A[], int len,string P)
{
    if (len==0)
    {
        cout<<P<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        char c=char(A[i])+'0';
        print(A,len-1,P+c);
    }
}

int main()
{
    int l;
    cin>>n>>l;
    int A[10]={};
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    string P;
    print(A,l,P);
    return 0;
}
