#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    string str = "cheese";
    string stp = "bites";
    string lp = "";
    lp = str + stp;
    cout<<lp + str[0];
    return 0;
}
