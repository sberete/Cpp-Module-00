#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "PhoneBook construtor called: " << this << std::endl;
    nb_contact = 0;
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook destructor called: " << this << std::endl;
}


void PhoneBook::search()
{
    if (!nb_contact)
        return ;
    std::cout << "index" << " | "<< " firstname" << " | " << " last_name" << " | " << "  nickname" << std::endl;
    for(size_t i = 0; i < nb_contact; i++)
        std::cout << "    " << i + 1 << " | " << contact[i].ayo(Contact::FIRSTNAME) << " | " << contact[i].ayo(Contact::LASTNAME) << " | " << contact[i].ayo(Contact::NICKNAME) << std::endl;
}