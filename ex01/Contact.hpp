#ifndef CONTACT_HPP
    #define CONTACT_HPP

#include <iostream>

class Contact
{
    public:
        enum O_flag
        {
            FIRSTNAME,
            LASTNAME,
            NICKNAME,
        };
        std::string getFirstname() const;
        std::string getLastname() const;
        std::string getNickname() const;        
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;

        void setFirstname(const std::string& firstname);
        void setLastname(const std::string& lastname);
        void setNickname(const std::string& nickname);
        void setPhonenumber(const std::string& phonenumber);
        void setDarkestsecret(const std::string& darkestsecret);
        
        void add();
        Contact();
        ~Contact();
        std::string getFormattedValue(O_flag);

    private:
        std::string _firstname;
        std::string _lastname;
        std::string _nickname;
        std::string _phonenumber;
        std::string _darkestsecret;
}; 

#endif