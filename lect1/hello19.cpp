#include<bits/stdc++.h>
using namespace std;


//PASS BY REFERNCE :- means mujhe org.value ko hi change karna hai to i will use & sign

void doSomething(int &num){
    cout<<num<<endl;
    num = num+5;
     cout<<num<<endl;
    num = num+5;
     cout<<num<<endl;
    // num = num+5;
}

int main()
{

    int num = 10;
    doSomething(num);
     cout<<num<<endl;
}