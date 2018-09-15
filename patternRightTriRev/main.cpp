#include <iostream>

using namespace std;


//int printpattern(int n);

int printpattern (int n){


int j;
int k = 0;
for(int i = 1;i <= n;i++){


    if(i % 2 != 0){
        for(j = k + 1;j < k + i; j++)
            cout<<j<<"*";
        cout<<j++<<endl;

        k = j;

    }
    else{
        k = k + i -1;


        for(j = k; j > k + 1 - i;j--)
            cout<<j<<"*";
        cout<<j<<endl;
    }




}
return 0;


}


int main()
{
    //cout << "Hello world!" << endl;
       int n = 4;
cin>>n;
    printpattern(n);

    return 0;
}
