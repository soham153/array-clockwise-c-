#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    // cout<<"enter size of arrary"<<endl;
    cin>>n;
   vector<int> arr(n);
    // cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];        
    }
    // cout<<"elements to shift:"<<endl;
    cin>>k;
    
    for(int i=0;i<k;i++)
    {
        int last=arr[n-1];
        for(int j=n-1;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=last;
    }
    // cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    // cout<<endl<<k<<endl;
    
    
    return 0;
}