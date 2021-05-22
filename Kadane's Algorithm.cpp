#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int a[], int n){
        int max_so_far=0,max_ending_here = 0;
        for(int i=0;i<n;i++){
            max_ending_here = max_ending_here + a[i];
            if(max_ending_here < 0){
                max_ending_here = 0;
            }
            else if(max_so_far < max_ending_here){
                 max_so_far = max_ending_here;
            }
        }
        return max_so_far;
	}
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends