#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Form{
	const std::string name;
	bool sign;
	const int grade_sign;
	const int grade_exec;
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
		Form& operator=(const Form& b);
		~Form();

		Form(const std::string name, int grade_sign, int grade_exec);
		const std::string getName() const;
		bool getSign() const;
		int getGradeSign() const;
		int getGradeExec() const;
		void beSigned(const Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& o, const Form& f);

#endif