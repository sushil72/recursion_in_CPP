#include<iostream>
using namespace std;
int binarysearch(int arr[], int target, int s, int e)
{
    
    if(s>e)
    return -1;
    int m=s+(e-s)/2;
    if(target==arr[m])
    return m;

    if(arr[m]>target)
    {
       return binarysearch(arr,target,s,m-1);
    }
    else
    return binarysearch(arr,target,m+1,e);
}
int main()
{
    int arr[]={1,2,5,6,7,8};
    int target=1;
    int ans=binarysearch(arr,target,0,5);
    cout<<ans;
return 0;
}