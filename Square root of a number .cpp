long long int floorSqrt(long long int x) 
{
    if(x==0||x==1){
        return x;
    }
    long long int i=1,result=1;
    while(result<=x){
        i++;
        result=i*i;
    }
    return i-1;
}
