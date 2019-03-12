#include<bits/stdc++.h>
using namespace std;
void Min_Heapify(int A[],int n,int i)
{
    int Min=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n&&A[l]<A[i])  
    {
        Min=l;
    }
    if(r<n&&A[r]<A[Min]) 
    {
        Min=r;
    }
    if(Min!=i)
    {
        swap(A[i],A[Min]);
        Min_Heapify(A,n,Min);
    }
}
void Build_Min_Heap(int A[],int n)
{
    for(int i=n/2-1;i>=0;i--) 
    {
        Min_Heapify(A,n,i);
    }
}
void HeapSort(int A[],int n)
{
    Build_Min_Heap(A,n);
    for(int i=n-1;i>=0;i--)
    {
        swap(A[0],A[i]);
        Min_Heapify(A,i,0);
    }
}
int main()
{
    int n;
    cout<<"ENTER SIZE OF ARRAY::"<<endl;
    cin>>n;
    int A[n];
    cout<<"ENTER ELEMENT OF ARRAY::"<<endl;
    for(int i=0;i<n;i++) cin>>A[i];
    HeapSort(A,n);
    cout << "SORTED ARRAY IS/MIN HEAP::\n";
    for(int i=0;i<n;i++) cout<<A[i]<<" ";
    cout<<endl;
}
