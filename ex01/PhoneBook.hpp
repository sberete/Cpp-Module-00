#ifndef PHONEBOOK_HPP
    #define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    public:
        Contact contact[8];
        size_t nb_contact;
        void search();
        PhoneBook();
        ~PhoneBook();
};

#endif