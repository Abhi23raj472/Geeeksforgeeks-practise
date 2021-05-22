int peakElement(int arr[], int n)
{
   for(int i=0;i<n;i++){
       if(n==0){
           return 1;
       }
       if(arr[0]>=arr[1]){
           return 0;
       }
       if(arr[n-1]>arr[n-2]){
           return n-1;
       }
       for(int i=0;i<n-1;i++){
           if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
               return i;
           }
       }
       
   }
}
