#include<bits/stdc++.h>
using namespace std;

//WAP that takes input of age and prints if you are adult or not

int main(){

    int age;
    cout << "enter your age :";
    cin>> age;
    if (age >0 && age <18)
    {
        printf("you are not adult");
    }
    else if(age >18)
    {
        printf("you are an adult");
    }
    else{
        printf("invalid number entered");
    }
    return 0;

}