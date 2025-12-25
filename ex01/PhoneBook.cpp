#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _nbContact(0) {}

PhoneBook::~PhoneBook(){}

void PhoneBook::search()
{
    if (!_nbContact)
        return ;
    
    std::string index;

    std::cout << std::right << std::setw(5) << "Index" << " | " << std::setw(10) << "Firstname" << " | " << std::setw(10) << "Lastname" << " | " <<  std::setw(10) << "Nickname" << std::endl;
    for(uint8_t i = 0; i < _nbContact; i++)
        std::cout << std::right << std::setw(5) << i + 1 << " | " << _contact[i].getFormattedValue(Contact::FIRSTNAME) << " | " << _contact[i].getFormattedValue(Contact::LASTNAME) << " | " << _contact[i].getFormattedValue(Contact::NICKNAME) << std::endl;
    
    std::cout << "Please enter the index (or 'Q' to quit):" << std::endl;
    for(;;)
    {
        std::cin >> index;
        if (index == "Q")
        {
            std::cout << "Exiting the search." << std::endl;
            break;
        }

        int x = atoi(index.c_str());
        if (x == 0 || x > _nbContact)
        {
            std::cout << "Invalid input. Please enter a valid index or 'Q' to quit." << std::endl;
            continue;
        }

        std::cout << "Contact:\n";
        std::cout << std::left << std::setw(16) << "Index:"          << x << "\n" << std::setw(16) << "First name:"     << _contact[x - 1].getFirstname() << "\n" << std::setw(16) << "Last name:"      << _contact[x - 1].getLastname() << "\n" << std::setw(16) << "Nickname:"       << _contact[x - 1].getNickname() << "\n" << std::setw(16) << "Phone number:"   << _contact[x - 1].getPhoneNumber() << "\n" << std::setw(16) << "Darkest secret:" << _contact[x - 1].getDarkestSecret() << "\n";

        std::cout << "Want to search another contact, or quit? (Enter index or 'Q' to quit):" << std::endl;
    }
}

void PhoneBook::addContactintoPhoneBook(uint8_t index)
{
    if (index >= MAX_CONTACT)
    {
        std::cerr << "Error: maximum number of contacts reached." << std::endl;
        return ;
    }
    
    _contact[index].add();
  
    if (_nbContact < MAX_CONTACT)
        _nbContact++;
}
