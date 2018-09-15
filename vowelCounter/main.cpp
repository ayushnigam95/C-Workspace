#include <iostream>

using namespace std;




int main()
{
    //cout << "Hello world!" << endl;

    char strp[] = "baros before hoes";
    //char arrv[] = "aeiouAEIOU";
    int counter[] = {0,0,0,0,0};
    //cout<<arrv;

    int n = sizeof(strp)/sizeof(strp[0]);
    //int k = 0;
    for(int i = 0; i < n; i++ ){
        switch (strp[i]){

        case 'a': case 'A':
            counter[0]++;
            break;
        case 'e': case 'E':
            counter[1]++;
            break;
        case 'i': case 'I':
            counter[2]++;
            break;
        case 'o': case 'O':
            counter[3]++;
            break;
        case 'u': case 'U':
            counter[4]++;
            break;

        default:
            break;


        }

    }

    for(int i = 0; i < 5; i++){
        cout<<counter[i]<<" ";
    }

    return 0;
}
