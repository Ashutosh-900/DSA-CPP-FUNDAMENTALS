#include <iostream>
#include <string>
int main () {
    std:: string data;
    std::cout << "enter the text(use '#' to end input)"<<std::endl;
    std:: getline(std::cin , data , '#');
    std::cout<<"length of string : "<< data.length()<<std::endl;
    std::cout<<"you entered : "<< data <<std::endl;

}
