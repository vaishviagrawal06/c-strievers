#include<bits/stdc++.h>
using namespace std;
void something(int arr[],int n){

    arr[0] +=100;
    cout<<"value inside func."<<arr[0]<<endl;
}

int main()
{
    int n =5;
    int arr[n];
    for(int i =0 ; i<n;i++){
        cin>>arr[i];
    }
something(arr,n);
cout<< "value inside int main: "<<arr[0]<<endl;
return 0;

}