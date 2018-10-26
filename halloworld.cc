#include <iostream>
#include <string>
using namespace std;
int main()
{
    string user_input;
    cout << "Input something" << endl;
    getline(cin, user_input);
    //cout << "你好!" << endl;
    cout << "You just typed in: " << user_input << endl;
    return 0;
}
