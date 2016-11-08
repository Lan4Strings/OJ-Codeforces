#include<iostream>

using namespace std;

int main()
{
    long long k;
    long long a,b;
    cin>>k;
    cin>>a;
    cin>>b;
    long long min_need,max_need;
    min_need=(k-a%k)%k;
    max_need=(k-b%k)%k;
    int zeros=0;

    long long al,br;
    al=a+min_need;
    br=b+max_need;
    if (al-a>=0) zeros++;
    if (br-b<=0) zeros++;
    long long num,numout;
    num=(br-al)/k+1;
    numout=num+zeros-2;
    cout<<numout<<endl;
    return 0;
}
