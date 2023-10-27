#include<bits/stdc++.h>
using namespace std;
    vector<string> sayDigit(int n)
    {
        vector<string> v ;
        string str=to_string(n);
        reverse(str.begin(),str.end());
        n=stoi(str);  
        map<int,string> map;
        
    map[0]="zero";
    map[1]="one";
    map[2]="two";
    map[3]="three";
    map[4]="four";
    map[5]="five";
    map[6]="six";
    map[7]="seven";
    map[8]="eight";
    map[9]="nine";
    
    while(n)
    {
        int x=n%10;
        v.push_back(map[x]);
        n/=10;
    }
    return v;
    }

    //recursion method 
    string sayDigit1(int n,string output)
    {

        string atr[10]={"zero","one","two", "three" , "four", "five", "six", "seven", "eight","nine"};
        if(n==0)
        {
            return "";
        }
        else
        {
            int x=n%10;
            output=output+atr[x];
            output+=" ";
            string str= sayDigit1(n/10,output);
        }
        return output;
        

    }
int main()
{
    // vector<string>v=sayDigit(123);

    // for(int i=0;i<v.size();i++)
    // cout<<v.at(i)<<" ";
    
    string s=sayDigit1(123,s);
    cout<<s;

return 0;
}