//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
double cToF(int C)
{
   int F=(C*9.0)/5.0+32;
}
int main()
{
    int T;//number of testcases
    int C,F;
    cin >> T; //input number of testcases
    while(T--){
        cin >> C;//input temperature in celscius
        cout << floor(cToF(C)) << endl; //print the output
    }
    return 0;
}  // } Driver Code Ends
