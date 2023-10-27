#include <bits/stdc++.h>
using namespace std;
int globalcount = 0;
void countZero(int n)
{
    if (n == 0)
        return;
    int rem = n % 10;
    if (rem == 0)
        globalcount++;
    countZero(n / 10);
}
//2nd
int  countZero1(int n, int count)
{
    if (n == 0)
        return count;
    int rem = n % 10;
    if (rem == 0)
        ++count;   
    return  countZero1((n / 10),count);  
    
   
}
int main()
{
    int count=0;
    cout<<countZero1(30204,count);
    
   
    return 0;
}