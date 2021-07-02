int transitionPoint(int arr[], int n) {
    // code here
    //int c=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            //c++;
            return i;
        }
        
    }
    //return c;
    return -1;
}
