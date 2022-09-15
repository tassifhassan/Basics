#include <iostream>
using namespace std;


// Function declaration
void sayHi(string name, int age);

int main()
{
    // Functions Call
    sayHi("Mike", 60);
    sayHi("Tom", 45);
    sayHi("steve", 19);
    return 0;


}
// Functions definition
void sayHi(string name, int age){
    cout << "Hello " << name << ", you are " << age << endl;

}