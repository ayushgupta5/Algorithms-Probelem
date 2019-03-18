#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,k,j;
    cout<<"ENTER NUMBER OF TESTCASES::"<<endl;
    cin>>t;
    while(t--)
    {
        cout<<"ENTER SIZE OF THE ARRAY::"<<endl;
        cin>>n;
        int a[n],b[n];
        cout<<"ENTER ELEMENT OF THE ARRAY::"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        k=INT_MIN;
        for(i=0;i<n;i++)
        {
            if(k<a[i])
            {
                k=a[i];
            }
        }
        int c[k+1];
        for(i=0;i<k+1;i++)
        {
            c[i]=0;
        }
        for(i=0;i<n;i++)
        {
            b[i]=0;
        }
        for(j=0;j<n;j++)
        {
            c[a[j]]++;
        }
        for(i=1;i<=k;i++)
        {
            c[i]+=c[i-1];
        }
        cout<<"COUNT ARRAY IS::";
        for(i=0;i<=k;i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<endl;
        for(j=n-1;j>=0;j--)
        {
            b[c[a[j]]-1]=a[j];
            c[a[j]]--;
        }
        cout<<"SORTED ELEMENTS ARE::";
        for(j=0;j<n;j++)
        {
            cout<<b[j]<<" ";
        }
        cout<<endl;
    }
}
