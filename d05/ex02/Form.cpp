#include "Form.hpp"

Form::Form( void ) : _gradeToSign(150), _gradeToExec(150)
{
	return;
}

Form::Form( std::string name, int toSigned, int toExec) : _name(name), _isSigned(false), _gradeToSign(toSigned), _gradeToExec(toExec)
{
	if (this->_gradeToSign > 150 || this->_gradeToExec > 150) {
        throw Form::GradeTooLowException();
    } else if (this->_gradeToSign < 1 || this->_gradeToExec < 1) {
        throw Form::GradeTooHighException();
    }
}

Form::Form( Form const & src ) : _name(src.getName()), _isSigned(src.getIsSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExec(src.getGradeToExec())
{

}

Form::~Form( void )
{
	return;
}

Form & Form::operator=(Form const & rhs)
{
	return *this;
}

std::string const Form::getName() const
{
	return this->_name;
}

bool Form::getIsSigned() const
{
	return this->_isSigned;
}

int const Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int const Form::getGradeToExec() const
{
	return this->_gradeToExec;
}

void Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

void execute(Bureaucrat const & executor) const {
	if (src.getGrade() > this->_gradeToExec)
		throw Form::GradeTooLowException();
	this->action();
}

std::ostream &operator<<(std::ostream &o, Form const &i) {
	if (i.getIsSigned()) {
        o << i.getName() << " is signed." << std::endl;
    } else {
        o << i.getName() << " must be signed by a bureaucrat with a minimum grade of " << i.getGradeToSign() << " and " << i.getGradeToExec() << " to execute it."<< std::endl;
    }
    return o;
}

Form::GradeTooLowException::GradeTooLowException() {

}

Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const &src) {
    *this = src;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(Form::GradeTooLowException const &src) {
    return (*this);
}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {

}

const char *Form::GradeTooLowException::what(void) const throw() {
    return ("GradeTooLowException");
}

Form::GradeTooHighException::GradeTooHighException() {

}

Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const &src) {
    *this = src;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(Form::GradeTooHighException const &src) {
    return (*this);
}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {

}

const char *Form::GradeTooHighException::what(void) const throw() {
    return ("GradeTooHighException");
}
