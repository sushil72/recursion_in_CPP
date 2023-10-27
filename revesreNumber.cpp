#include <bits/stdc++.h>
using namespace std;
int y = 0;
void reverse(int n)
{
    if (n == 0)
        return;
    y = y * 10 + (n % 10);
    reverse(n / 10);
}
int helper(int n, int digits)
{
    if(n%10==n)
    return n;
    int rem=n%10;
    return rem*pow(10,digits-1)+helper(n/10,digits-1);  
     
}
int  rev2(int n)
{
    int digits=(int)log10(n)+1;
    int ans=helper(n,digits);
    // cout<<digits;
    return ans;
    
}

int main()
{
    // reverse(1842);
    // cout << y;
    cout<<rev2(1234);
    return 0;
}