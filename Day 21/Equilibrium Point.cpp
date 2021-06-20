class Solution{
public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    
    
    int equilibriumPoint(long long a[], int n) {
    if(n==1)
    {
        return 1;
    }
    long long psum[n]={0};
    psum[0]=a[0];
    for(int i=1;i<n;i++)
    {
        psum[i]=a[i]+psum[i-1];
    }
    for(int i=1;i<n;i++)
    {
        if(psum[i-1]==psum[n-1]-psum[i])
        {
            return i+1;
        }
    }
    return -1;
    }

};
