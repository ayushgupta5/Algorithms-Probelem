#include<bits/stdc++.h>
using namespace std;
int power(long long int x,long long int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return x;
    }
    else
    {
        if(n%2==0)
        {
            return power(x,n/2)*power(x,n/2);
        }
        else
        {
            return x*power(x,n/2)*power(x,n/2);
        }
    }
}
int main()
{
    long long int a,b,t;
    cout<<"ENTER NUMBER OF TEST CASES::"<<endl;
    cin>>t;
    while(t--)
    {
        cout<<"ENTER DIGIT AND POWER::"<<endl;
        cin>>a>>b;
        cout<<power(a,b)<<endl;;
        return 0;
    }
}
