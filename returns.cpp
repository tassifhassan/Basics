#include <iostream>
using namespace std;
double cube(double num){
    return num * num * num;

}
int main()
{
    double randomNumber;
    cout << "Enter a number" << endl;
    cin >> randomNumber;
    cout << cube(randomNumber) << endl;
    
    return 0;

}