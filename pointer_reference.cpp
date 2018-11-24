#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
    int size = 5;
    int& a = size;
    int* b = &size;
    cout << a << endl;
    cout << typeid(a).name() << endl;
    cout << b << endl;
    cout << typeid(b).name() << endl;
  //string name;
  //cout << "What is your name? ";
  //getline (cin, name);
  //cout << "Hello, " << name << "!\n";
}
