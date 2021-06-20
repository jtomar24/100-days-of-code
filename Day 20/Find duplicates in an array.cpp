class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        int m[n]={0};
        vector<int> dup;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
           // cout<<m[arr[i]]<<" ";
        }
        for(int i=0;i<n;i++)
        {
            if(m[i]>1)
            {
               dup.push_back(i);
            }
        }
        if(dup.empty())
        {
            dup.push_back(-1);
        }
        return dup;
    }
};
