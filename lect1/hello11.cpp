#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "vaishvi";
    int len = s.size();

    s[len-1]='v';  //changing the value of last index
cout<<s[len-1];  // last character of string 

// cout<<s[3];  // is index par khon sa character store hai 
return 0;
}