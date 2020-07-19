#include <iostream>
#include <string>

int main()
{
    std::string firstname;
    std::string lastname;
    int age;

    std::cout << "firstname: ";
    getline(std::cin, firstname);

    std::cout << "lastname: ";
    getline(std::cin, lastname);

    std::cout << "age: ";
    std::cin >> age;

    std::cout << "welcome " << firstname << " " << lastname << std::endl;
    std::cout << "you are" << " " << age << " " << "years old";
}