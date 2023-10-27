#include<bits/stdc++.h>
using namespace std;
    
//using reverse function prior done
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
bool palin(int n)
{
    if(n==rev2(n))
    return true;
    else
    false;

}

int main()
{
    cout<<palin(12321);
return 0;
}