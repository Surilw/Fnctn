#include <iostream>
using namespace std;
void happyBirthday(std::string name, int age);
int main()
{
    std::string name = "Bro";
    int age = 31;
    happyBirthday(name,age);
    return 0;
}
void happyBirthday(std::string name, int age) {
    cout << "HappyBirthday to     " << name  <<  '\n';
    cout << "HappyBirthday to     " << name  <<  '\n';
    cout << "HappyBirthday to     " << name  <<  '\n';
    cout << "HappyBirthday to you " << name  <<  '\n';
    cout << "You are now "          << age <<    '\n';
    


}

