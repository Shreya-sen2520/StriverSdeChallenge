int help(vector<int>& v, int val) {   

 int low = 0;  

  int high = v.size() - 1;

   

while (low <= high) {     

   int mid = (low + high) / 2;        

if (v[mid] <= val) {      

      low = mid + 1;  

       }       

 else {  

           high = mid - 1;  

       }  

   }  

   return low;  

}

 

int median(vector<vector<int>>& matrix, int n, int m) {

   int low = 1;  

   int high = 1e9;

 

   while (low <= high) {   

     int mid = (low + high) / 2;  

       int count = 0;  

       for (int i = 0; i < n; i++) {  

           count += help(matrix[i], mid);  

       }  

       if (count <= (n*m) / 2) {  

           low = mid + 1;  

       }  

       else {  

           high = mid - 1;  

       }  

   }  

   return low;  

}  


