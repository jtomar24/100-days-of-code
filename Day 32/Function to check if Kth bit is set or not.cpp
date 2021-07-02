// Function to check if Kth bit is set or not
bool checkKthBit(int n, int k){
    
    // Your code here
    // It can be a one liner logic!! Think of it!!
    int i,c=1,r=0;
    long int a[10000];
    for(i=0;n>0;i++)    
    {    
     a[i]=n%2;    
     n=n/2;    
    } 
    r=a[k] && c;
    if(r==1){
      return true;  
    }
    else
    {
        return false;
    }
}
