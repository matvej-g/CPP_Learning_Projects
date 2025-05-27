#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
	: AForm("ShrubberyCreationForm", 145, 137)
	, _target(target)
{}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout << "ShrubberyCreationForm destructed." << std::endl;
}



void ShrubberyCreationForm::action() const {
	//open <target>_shrubbery and write some ASCII trees
	std::ofstream ofs(_target + "_shrubbery");
	ofs <<	"     #					#\n"
			"    ###				   ###\n"
			"   #####			  #####\n"
			"  #######			 #######\n"
			" ####||###			####||###\n"
			"     ||					||\n"
			"\n";
}