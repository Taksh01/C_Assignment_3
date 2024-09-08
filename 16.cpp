#include <iostream>
using namespace std;
int main()
{
    int size, index, n;
    string fname;
    cout << "Enter string: ";
    getline(cin, fname);

    cout << "Enter size of copied string you want: ";
    cin >> size;
    char name[size];

    cout << "enter index value from where you want:  ";
    cin >> index;

    // copy takes 2 arguments (1) how much letter to copy (2) from where i.e. index
    fname.copy(name, size, index);

    name[size] = '\0';
    cout << name;
}