// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(char*);

int main()
{
   
    char str[100];
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%s",str);
    cout<< getMaxOccuringChar(str)<<endl;
    }
}// } Driver Code Ends


// Function to get maximum occuring 
// character in given string str
char getMaxOccuringChar(char* str)
{
    // Your code here
    int i;
    int H[256]={0};
    for(i=0;str[i]!='\0';i++)
    {
     H[str[i]]++;   
    }
    int max=-1;
    char c;
     for(i=0;i<256;i++)
     {
        if(H[i]>max)
        {
            max=H[i];
           c=i;
        }
     }return c;
}
