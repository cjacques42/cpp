#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
    int i = -2;
    Bureaucrat *tmp;
    Form *form;

    while (i < 4) {
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
    i = 147;
    tmp = new Bureaucrat("DeaCreaSe", i);
    while (i <= 152) {
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

    std::cout << std::endl << "Form : " << std::endl;
    tmp = new Bureaucrat("BureaucratMaster", 1);
    try {
        form = new Form("Cert", 1, 0);
        std::cout << *form;
        tmp->signForm(*form);
        delete form;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    try {
        form = new Form("Cert", 1, 1);
        std::cout << *form;
        tmp->signForm(*form);
        std::cout << *form;
        tmp->decreaseGrade();
        std::cout << *tmp;
        delete form;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    try {
        form = new Form("Cert", 1, 1);
        std::cout << *form;
        tmp->signForm(*form);
        std::cout << *form;
        delete form;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    delete tmp;
    return (0);
}
