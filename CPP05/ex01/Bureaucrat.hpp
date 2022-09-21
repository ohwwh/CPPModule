#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Form;

class Bureaucrat{
	const std::string name;
	int grade;
	Bureaucrat& operator=(const Bureaucrat& b);
	public:
		class gradeTooHighException : public std::exception{
			public:
				const char* what(void) const throw();
		};

		class gradeTooLowException : public std::exception{
			public:
				const char* what(void) const throw();
		};
		Bureaucrat();
		Bureaucrat(const Bureaucrat& b);
		~Bureaucrat();

		Bureaucrat(const std::string name, int grade);
		const std::string getName() const;
		int getGrade() const;
		void promotion();
		void relagation();
		void signForm(Form& f);
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b);

#endif