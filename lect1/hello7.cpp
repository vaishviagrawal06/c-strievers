#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin>> age;
    if(age<18)
    {
        printf("not eligible for age");

    }

    else if( age>=18 && age <=54)
    {
        printf("eligible for job");
    }

    else if( age>=55 && age <=57)
    {
        printf("eligible for job,but retirement soon");
    }
    else if(age>57) {
        printf(" retirement time");
    }
}