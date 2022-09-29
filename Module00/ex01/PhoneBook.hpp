#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iomanip>
# include "Contact.hpp"

using std::string;

class PhoneBook
{
public:
    PhoneBook(void);
    ~PhoneBook(void);
     
private:
    Contact contacts[8];
    
};

#endif