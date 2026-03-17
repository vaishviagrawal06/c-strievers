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
    Count(n);
 }