int Search(vector<int> vec, int K) {
    int low=0;
    int high=vec.size();
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(vec[mid]==K){
        return mid;
    }
    if (vec[low] <= vec[mid]){
        if (K >= vec[low] && K <= vec[mid]){
            return search(vec,K);
        }
    }
    
}
