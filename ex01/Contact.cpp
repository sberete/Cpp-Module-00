#include "Contact.hpp"
#include <cctype>
#include <cstdlib>

Contact::Contact(){}

Contact::~Contact(){}

static bool isPrintableAndNotEmpty(const std::string& str)
{
    bool hasNonSpace = false;

    for (std::size_t i = 0; i < str.size(); i++)
    {
        if (!std::isprint(str[i]))
            return false;
        if (!std::isspace(str[i]))
            hasNonSpace = true;
    }
    return hasNonSpace;
}

static std::string getValidInput(const std::string& prompt)
{
    std::string input;

    for(;;)
    {
        std::cout << prompt;
        if (!std::getline(std::cin, input))
        {
            std::cout << std::endl << "EOF detected. Exiting." << std::endl;
            exit(0);
        }
        if (isPrintableAndNotEmpty(input))
            return input;

        std::cout << "Invalid input. Please try again." << std::endl;
    }
}

void Contact::add()
{
    setFirstname(getValidInput("Enter first name: "));
    setLastname(getValidInput("Enter last name: "));
    setNickname(getValidInput("Enter nickname: "));
    setPhonenumber(getValidInput("Enter phone number: "));
    setDarkestsecret(getValidInput("Enter darkest secret: "));
}

void Contact::setFirstname(const std::string& firstname) {_firstname = firstname;}
void Contact::setLastname(const std::string& lastname) {_lastname = lastname;}
void Contact::setNickname(const std::string& nickname) {_nickname = nickname;}
void Contact::setPhonenumber(const std::string& phonenumber) {_phonenumber = phonenumber;}
void Contact::setDarkestsecret(const std::string& darkestsecret) {_darkestsecret = darkestsecret;}

std::string Contact::getFirstname() const{return (this->_firstname);}
std::string Contact::getLastname() const{return (this->_lastname);}
std::string Contact::getNickname() const{return (this->_nickname);}
std::string Contact::getPhoneNumber() const{return (this->_phonenumber);}
std::string Contact::getDarkestSecret() const{return (this->_darkestsecret);}

static std::string trunc_string(std::string str)
{
	std::string buffer = str;
	std::size_t len = buffer.size() - 9;
	buffer.replace(9, len, ".");
	return (buffer);
}

static std::string extand_string(std::string str)
{
	std::string buffer = str;
	std::size_t len = 10 - buffer.size();
	buffer.insert(0, len, ' ');
	return (buffer);
}

static std::string formatForColumn(std::string str)
{
	if (str.size() > 10)
		return (trunc_string(str));
	else if (str.size() < 10)
		return (extand_string(str));
	else
		return (str);
}

std::string Contact::getFormattedValue(O_flag flag)
{
	switch (flag)
	{
		case FIRSTNAME:
			return (formatForColumn(getFirstname()));
		case LASTNAME:
			return (formatForColumn(getLastname()));
		case NICKNAME:
			return (formatForColumn(getNickname()));
		default:
			return ("");
	}
}
