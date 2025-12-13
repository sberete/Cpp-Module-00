#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "string"

int main()
{
    PhoneBook pb;
    std::string str;
    size_t i = 0;
    for(;;)
    {
        std::cout << "add, search and exit" << std::endl;
        std::cin >> str;
        if (str.compare("add") == 0)
        {
            pb.contact[i++].add();
            pb.nb_contact++;
        }
        if (str.compare("search") == 0)
            pb.search();
        if (str.compare("exit") == 0)
            return(0);
        if (i == 8){i -= 8; pb.nb_contact -= 8;}
    }
}