int uniquePaths(int m, int n){
    int a=n+m-2;
    int r=m-1;
    double result=1;
    for(int i=1;i<=r;i++){
        result=result*(a-r+i)/i;
    }
    return result;
}
