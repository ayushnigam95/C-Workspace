#include <iostream>

using namespace std;

int main()
{

    int arr[] = {7,8,9,10,5,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp;

    for (int k = 1; k <= n; k++){
    for(int i = 0;i < n-1; i++){

        if(arr[i+1] < arr[i]){
            temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }

    }
    }

    //for(int i = 0;i < n;i++)
      //  cout<<arr[i];

     int i = 0;
     int j = n-1;

     while (i<j){
        cout<<arr[j--]<<" ";
        cout<<arr[i++]<<" ";
     }
     if(n % 2 != 0)
        cout<<arr[i];



    return 0;

}
