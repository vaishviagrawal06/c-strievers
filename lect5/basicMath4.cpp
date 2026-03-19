//AMSTRONG NUMBER:-
//is a number that is equal to the sum of its digits raised to the power of the number of digits.

/*
153= 1+ 125+ 27 = 153
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,org,rem,result=0,dig=0;
    cout<<"enter number:";
    cin>>n;

    org = n;

    int temp = n;
    while(temp!=0)
    {
        dig++;
        temp /=10;
    }

    temp = n;
    while(temp != 0)
    {
        rem = temp%10;
        result = result + pow(rem,dig);
        temp/=10;
    }

    if(result == org)
    cout<<"AMSTRONG NUMBER";
    else
    cout<<"NOT AN AMSTRONG NUMBER";

    return 0;
}
