#include <iostream>
#include <string>
using namespace std;

string ReadName()
{
    string Name = "";
    cout <<"Please Enter Your Name sir!" << endl;
    getline(cin, Name);
    return Name;
}
void PrintName(string Name) {
    cout << "\n Your Name is: " << Name << endl;
}

int main()
{
    PrintName(ReadName());
    return 0;

}

