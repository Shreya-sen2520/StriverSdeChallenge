int search(int* arr, int n, int key) {
    int l=0,h=n-1;
    while(l<=h){
        int m=(l+h)/2;
        if(arr[m]==key)return m;
        if(arr[l]<=arr[m]){
            if(key>=arr[l] and key<arr[m]){
                h=m-1;
            }else{
                l=m+1;
            }
        }
        else if(arr[l]>=arr[m]){
            if(key>arr[m] and key<=arr[h]){
                l=m+1;
            }else{
                h=m-1;
            }
        }
    }
    return -1;
}
