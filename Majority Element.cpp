#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int findCandidate(int arr[], int n)
    {
        
        int maj_indx=0, c=1;
        for(int i=1; i<n; i++){
            if(arr[maj_indx] == arr[i])
            c++;
            else c--;
            if(c==0){
                maj_indx=i;
                c=1;
            }
        }
        return arr[maj_indx];
        
    }
    bool isMaj(int arr[], int n, int cand){
        int c=0;
        for(int i=0; i<n; i++){
            if(arr[i] == cand) c++;
        }
        return (c>n/2)? true: false;
    }
    int majorityElement(int a[], int size)
    {
        
       int cand = findCandidate(a, size); 
      
       /* Print the candidate if it is Majority*/
        if (isMaj(a, size, cand)) 
            return cand;
        else
            return -1;
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
