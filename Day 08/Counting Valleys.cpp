#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    
    int valleyCounter = 0, altitude = 0;

        for (int i = 0; i < n; i++) {
            char ch = a[i];
            if (ch == 'U') {
                
                if (altitude == -1) {
                    valleyCounter++;
                }
                altitude++;

            } else {

                altitude--;
            }
        }
        cout<<valleyCounter;
        return 0;
}
