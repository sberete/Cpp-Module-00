#ifndef CONTACT_HPP
    #define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;

    public:
        std::string getFirstname();
        std::string getLastname();
        std::string getNickname();
        Contact();
        ~Contact();
        void add();
}; 

#endif