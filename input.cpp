#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello " << name << endl;

    int age;
    cout << "Enter Your Age: ";
    cin >> age;
    cout << "You are " << age << " years old" << endl;
    return 0;
    
}