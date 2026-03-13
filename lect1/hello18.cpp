#include<bits/stdc++.h>
using namespace std;


//PASS BY VALUE 
void doSomething(int num){
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
//EXPLANATION :-
//isne pehle 10 print kiya then num ki copy ko upar bheja or jab bhi increament hua to vo add hota gya jab tak vo function execute ho raha tha jaise hi vapas aaya to num ki org. value vapas aa gyii na ki copied value..