#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Form{
	protected:
		const std::string name;
		bool sign;
		const int grade_sign;
		const int grade_exec;
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
		class notSignedException : public std::exception{
			public:
				const char* what(void) const throw();
		};
		Form();
		Form(const Form& b);
		~Form();

		Form(const std::string name, int grade_sign, int grade_exec);
		const std::string getName() const;
		bool getSign() const;
		int getGradeSign() const;
		int getGradeExec() const;
		void beSigned(const Bureaucrat& b);
		virtual void execute(const Bureaucrat& b) const = 0;
};

std::ostream& operator<<(std::ostream& o, const Form& f);

#endif