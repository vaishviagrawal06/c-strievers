#include<bits/stdc++.h>
using namespace std;

void printLowerLeft(int n)
{
    for (int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter value of n : ";
    cin>> n;
    printLowerLeft(n);

}