#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i =0;i<n-2;i++)
    {
        int min = i;
        for(int j = i;j<n-1;j++)
        {
            if (arr[j]<arr[min]){
                min = j;
            }
        }

        // swap

        int temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

    }
}
int main()
{
    int n;
    cout << "enter number of values :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {6,4,2,8,3,1};
//   int n = 6;
//     for(int i = 0 ;i<=n-2;i++)
//     {
//         int min = i;
//         for(int j = i;j<=n-1;j++)
//         {
//             if(arr[j]<arr[min])
//             min =j;
//         }
//           //swap
//     int temp = arr[i];
//     arr[i]=arr[min];
//     arr[min]=temp;
//     }
//     for(int i =0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }