
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long n;
        cin>>n;
        long arr[n];
        for(long j=0;j<n;j++)
        {
            cin>>arr[j];
        }
       for(long j=n-1;j>=0;j--)
       {
           cout<<arr[j]<<" ";
       }
       cout<<endl;
    }
	
	return 0;
}
