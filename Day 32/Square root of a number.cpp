long long int floorSqrt(long long int x) 
{
    // Your code goes here
    long long int i,sq;
  
    for(i=1;i<=x;i++)
    {    sq=i*i;
        if(sq==x)
        {
            return i;
            break;
        }
        if(sq>x)
        {
            return i-1;
            break;
        }
    }}

