//Write a program which throws an exception of type char* and another of type int.
//Write a try --- catch block which can catch both the exception

#include<iostream>
using namespace std;

void func(int a) {
    try {
        if (a > 0)
            throw a;
        else
            throw 'a';
    } catch (int a) {
        cout << "Catch a integer and that integer is:" << a<<endl;
    } catch (char a) {
        cout << "Catch a character and that character is:" << a<<endl;
    }
}

int main() {
    
    cout << "Testing multiple catches:"<<endl;
    func(7);
    func(0);
    
    return 0;
}
