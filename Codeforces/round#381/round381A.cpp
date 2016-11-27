#include<iostream>

using namespace std;

int main()
{
    long long n,a,b,c;
    cin>>n;cin>>a;cin>>b;cin>>c;
    /*
    if(n==1)
    {
        cout<<3*a<<endl;
        return 0;
    }
    if(n==2)
    {
        cout<<2*a<<endl;
        return 0;
    }
    if(n==3)
    {
        cout<<a<<endl;
        return 0;
    }
    if(n==4)
    {
        cout<<0<<endl;
        return 0;
    }
    if(n==5)
    {
        if(3*a<=a+b)
            cout<<3*a<<endl;
        else
            cout<<a+b<<endl;
        return 0;
    }
    */
    long long need=(4-n%4)%4;
    if (need==0)
    {
        cout<<0<<endl;
        return 0;
    }
    if (need==1)
    {
        if(a<=b+c && a<=3*c)
        {
            cout<<a<<endl;
            return 0;
        }

        if(b+c<=a && b+c<=3*c)
        {
            cout<<b+c<<endl;
            return 0;
        }

        if(3*c<=a && 3*c<=b+c)
        {
            cout<<3*c<<endl;
            return 0;
        }
    }
    if (need==2)
    {
        if(2*a<=b && 2*a<=2*c && 2*a<=a+b+c)
        {
            cout<<2*a<<endl;
            return 0;
        }
        if(b<=2*a && b<=2*c && b<=a+b+c)
        {
            cout<<b<<endl;
            return 0;
        }
        if(2*c<=2*a && 2*c<=b && 2*c<=a+b+c)
        {
            cout<<2*c<<endl;
            return 0;
        }
        if(a+b+c<=2*a && a+b+c<=b && a+b+c<=2*c)
        {
            cout<<a+b+c<<endl;
            return 0;
        }
    }
    if(need==3)
    {
        if(3*a<=c && 3*a<=a+b)
        {
            cout<<3*a<<endl;
            return 0;
        }
        if(a+b<=3*a && a+b<=c)
        {
            cout<<a+b<<endl;
            return 0;
        }
        if(c<=3*a && c<=a+b)
        {
            cout<<c<<endl;
            return 0;
        }

    }
    return 0;
}
