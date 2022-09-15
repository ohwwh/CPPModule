#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Form{
	const std::string name;
	bool sign;
	const int grade;
	Form& operator=(const Form& b);
	public:
		class gradeTooHighException : public std::exception{
			public:
				const char* what(void) const throw();
		};

		class gradeTooLowException : public std::exception{
			public:
				const char* what(void) const throw();
		};
		Form();
		Form(const Form& b);
		~Form();

		Form(const std::string name, int grade);
		const std::string getName() const;
		bool getSign() const;
		int getGrade() const;
		void beSigned(const Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b);

#endif