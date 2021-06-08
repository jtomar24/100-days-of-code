#include <bits/stdc++.h>
#include<stdio>
using namespace std;



int main()
{
    int ss,mm,hr;
    char t12;
    scanf("%02d:%02d:%02d%c",ss,mm,hr,t12);
    if (strcmp(t12,"PM")==0 && hh!=12) hh += 12 ;
    if (strcmp(t12,"AM")==0 && hh==12) hh = 0 ;
        
    printf("%02d:%02d:%02d", hh, mm, ss) ;
    return 0;
}
