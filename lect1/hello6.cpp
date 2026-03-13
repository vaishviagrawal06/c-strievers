#include<bits/stdc++.h>
using namespace std;

int main()
{
    int marks;
    cout<<"enter marks(0-100): ";
    cin >>marks;
    if(marks >0 && marks <25)
    {
        printf("F");
    }
    else if(marks >=25 && marks <=44){
        printf("E");
    }
    else if(marks >=45 && marks <=49){
        printf("D");
    }
    else if(marks >=50 && marks <=59){
        printf("C");
    }
    else if(marks >=60 && marks <=79){
        printf("B");
    }
    else if(marks >=80 && marks <=100){
        printf("A");
    }
    return 0;

}