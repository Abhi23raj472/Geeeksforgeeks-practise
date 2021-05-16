#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;

	else
		return gcd(b, a % b);
}
void arrayRotate(int arr[], int d, int n)
{
	d = d % n;
	int g_c_d = gcd(d, n);
	for (int i = 0; i < g_c_d; i++) {
		int temp = arr[i];
		int j = i;
		while (1) {
			int k = j + d;
			if (k >= n)
				k = k - n;

			if (k == i)
				break;

			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
	}
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    
	    int n,d;
	    cin>>n>>d;
	    int arr[n];
	    for(int i=0;i<n;i++){
		    cin>>arr[i];
	    }
	    arrayRotate(arr,d,n);
	    printArray(arr,n);
        
    }
}
