#include "Contact.hpp"

Contact :: Contact(void) {}
Contact :: ~Contact(void) {}

void    Contact :: setFirstName(string name)
{
    Contact :: firstName = name;
}

void    Contact :: setLastName(string last)
{
    Contact :: lastName = last;
}

void    Contact :: setNickname(string nick)
{
    Contact :: nickname = nick;
}

void    Contact :: setSecret(string secret)
{
    Contact :: secret = secret;
}

void    Contact :: setPhoneNumber(long num)
{
    Contact :: phoneNumber = num;
}

string  Contact :: getFirstName(void) const
{
    return firstName;
}

string  Contact :: getLastName(void) const
{
    return lastName;
}

string  Contact :: getNickname(void) const
{
    return nickname;
}

string  Contact :: getSecret(void) const
{
    return secret;
}

long    Contact :: getPhoneNumber(void) const
{
    return phoneNumber;
}
