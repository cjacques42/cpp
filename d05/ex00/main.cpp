#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    int i = -1;
    Bureaucrat *tmp;

    while (i < 3) {
        try {
            tmp = new Bureaucrat("--><--", i);
            std::cout << *tmp;
            delete tmp;
        } catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
        i++;
    }
    std::cout << std::endl << "Decrease : " << std::endl;
    i = 145;
    tmp = new Bureaucrat("DeaCreaSe", i);
    while (i <= 151) {
        try {
            tmp->decreaseGrade();
            std::cout << *tmp;
        } catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
        i++;
    }
    delete tmp;
    std::cout << std::endl << "Increase : " << std::endl;
    i = 4;
    tmp = new Bureaucrat("InCreaSe", i);
    while (i > -2) {
        try {
            tmp->increaseGrade();
            std::cout << *tmp;
        } catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
        i--;
    }
    delete tmp;
    return (0);
}
