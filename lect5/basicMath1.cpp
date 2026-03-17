 #include<bits/stdc++.h>
 using namespace std;

 int Count(int n){
    int count = 0;
    while(n>0)
    {
        int lastDigit = n%10;
        count ++;
        n=n/10;
    }
    return count;
 }
 int main()
 {
    int n ;
    cout<<"enter numbers:";
    cin>>n;
    
    int result = Count(n);
    cout<<"number of digits="<<result;
   
    return 0;
 }