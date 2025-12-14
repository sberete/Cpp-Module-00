#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Contact construtor called: " << this << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contact destructor called: " << this << std::endl;
}

void Contact::add()
{
	std::cout << "First name" << std::endl;
	std::cin >> firstname;
	std::cout << "Last name" << std::endl;
	std::cin >> lastname;
	std::cout << "Nickname" << std::endl;
	std::cin >> nickname;
	std::cout << "Phone number" << std::endl;
	std::cin >> phonenumber;
	std::cout << "Darkest secret" << std::endl;
	std::cin >> darkestsecret;
}

std::string Contact::getFirstname() const
{
	return (this->firstname);
}

std::string Contact::getLastname() const
{
	return (this->lastname);
}

std::string Contact::getNickname() const
{
	return (this->nickname);
}

static std::string formate_string(std::string str)
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

static std::string Test12(std::string str)
{
	if (str.size() > 10)
		return (formate_string(str));
	else if (str.size() < 10)
		return (extand_string(str));
	else
		return (str);
}

std::string Contact::ayo(O_flag flag)
{
	switch (flag)
	{
		case FIRSTNAME:
			return (Test12(getFirstname()));
		case LASTNAME:
			return (Test12(getLastname()));
		case NICKNAME:
			return (Test12(getNickname()));
		default:
			return ("");
	}
}
