#include<bits/stdc++.h>
using namespace std;
int count = 0;
void print(int count)
{
    if(count ==3)
    return;
    count++;
    cout<<count<<endl;
 print();
}

int main()
{
    print();
    return 0;
}