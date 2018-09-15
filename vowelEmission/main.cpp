#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
     char dev[] = "ayushnigam";
     string str = "wifi";
     //char dev2[] = str;
     //int n = sizeof(dev)/sizeof dev[0];
     int n1 = sizeof(str)/sizeof str[0];

     std::cout<<str.length();

     for(int i = 0;i <= str.length();i++){
        cout<<str[i];
     }

    return 0;
}
