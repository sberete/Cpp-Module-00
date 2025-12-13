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

static std::string formate_string(std::string str)
{
	std::string buffer = str;
	std::size_t len = buffer.size() - 9;
	buffer.replace(9, len, ".");
	return buffer;
}

static std::string extand_string(std::string str)
{
	std::string buffer = str;
	std::size_t len = 10 - buffer.size();
	buffer.insert(0, len, ' ');
	return buffer;
}

std::string Contact::getFirstname()
{
	std::string str;
	str = firstname;
	if (str.empty())
		str = "";
	if (str.size() > 10)
		str = formate_string(str);
	else if (str.size() < 10)
		str = extand_string(str);
	return str;	
}
std::string Contact::getLastname()
{
	std::string str;
	str = lastname;
	if (str.empty())
		str = "";
	if (str.size() > 10)
		str = formate_string(str);
	else if (str.size() < 10)
		str = extand_string(str);
	return str;	
}
std::string Contact::getNickname()
{
	std::string str;
	str = nickname;
	if (str.empty())
		str = "";
	if (str.size() > 10)
		str = formate_string(str);
	else if (str.size() < 10)
		str = extand_string(str);
	return str;	
}