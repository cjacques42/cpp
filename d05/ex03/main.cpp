#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include <iostream>

int main() {
	Intern generator = Intern();
    Form *president = generator.makeForm("president request", "Obama");
	Form *robot = generator.makeForm("robotomy request", "R2D2");
	Form *shrubbery = generator.makeForm("shrubbery request", "Shrubbery");

	Bureaucrat *tmp = new Bureaucrat("BUR crat", 1);
	Bureaucrat *ptr = new Bureaucrat("BUR crat", 45);

	std::cout << *president << *robot << *shrubbery;
	try {
		tmp->executeForm(*president);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		tmp->executeForm(*robot);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		tmp->executeForm(*shrubbery);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	tmp->signForm(*president);
	tmp->signForm(*robot);
	tmp->signForm(*shrubbery);
	std::cout << *president << *robot << *shrubbery;
	try {
		ptr->executeForm(*president);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		ptr->executeForm(*robot);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		ptr->executeForm(*shrubbery);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	delete president;
	delete robot;
	delete shrubbery;
	delete tmp;
	delete ptr;
	return (0);
}
