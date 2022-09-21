#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
 : Form("ShrubberyCreationForm", 145, 137), target("target_default"){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& b)
: Form(b.name, b.grade_sign, b.grade_exec), target(b.target){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target_name)
: Form("ShrubberyCreationForm", 145, 137), target(target_name){};

void ShrubberyCreationForm::execute(const Bureaucrat& b) const{
	check_execute(b);
	std::string shrubbery = 
	"                .o00o               \n"
    "               o000000oo            \n"
    "             00000000000o           \n"
    "            00000000000000          \n"
    "         oooooo  00000000  o88o     \n"
    "      ooOOOOOOOoo  ```''  888888    \n"
    "    OOOOOOOOOOOO'.qQQQQq. `8888'    \n"
    "   oOOOOOOOOOO'.QQQQQQQQQQ/.88'     \n"
    "   OOOOOOOOOO'.QQQQQQQQQQ/ /q       \n"
    "    OOOOOOOOO QQQQQQQQQQ/ /QQ       \n"
    "      OOOOOOOOO `QQQQQQ/ /QQ'       \n"
    "        OO:F_P:O `QQQ/  /Q'         \n"
    "           \\. \\ |  // |           \n"
    "           d\\ \\\\|_////           \n"
    "           qP| \\ _' `|Ob           \n"
    "              \\  / \\  \\Op        \n"
    "              |  | O| |             \n"
    "      _       /\\. \\_/ /\\         \n"
    "       `---__/|_\\   //|  __        \n"
    "             `-'  `-'`-'-'          \n";
	std::ofstream out(target + "_shrubbery");
    out << shrubbery;
    out.close();
}