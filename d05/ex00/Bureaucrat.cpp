#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    this->_grade = grade;
    if (this->_grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    } else if (this->_grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName()), _grade(src.getGrade()) {

}

Bureaucrat::~Bureaucrat(void) {
    std::cout << this->_name << " : destroyed" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
    if (this != &rhs) {
        this->_grade = rhs.getGrade();
    }
    return *this;
}

std::string const Bureaucrat::getName(void) const {
    return this->_name;
}

int Bureaucrat::getGrade(void) const {
    return this->_grade;
}

void Bureaucrat::increaseGrade(void) {
    if (this->_grade == 1) {
        throw Bureaucrat::GradeTooHighException();
        return;
    } else {
        this->_grade--;
    }
}

void Bureaucrat::decreaseGrade(void) {
    if (this->_grade == 150) {
        throw Bureaucrat::GradeTooLowException();
    } else {
        this->_grade++;
    }
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i) {
    o << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;
    return o;
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {

}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const &src) {
    *this = src;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const &src) {
	(void)src;
    return (*this);
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {

}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
    return ("GradeTooLowException");
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {

}

Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const &src) {
    *this = src;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const &src) {
	(void)src;
    return (*this);
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {

}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
    return ("GradeTooHighException");
}
