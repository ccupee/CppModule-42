#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

using std::string;

class Contact
{
public:
    Contact(void);
    ~Contact(void);
    
    void    setFirstName(string name);
    void    setLastName(string last);
    void    setNickname(string nick);
    void    setSecret(string secret);
    void    setPhoneNumber(long num);

    string  getFirstName(void) const;
    string  getLastName(void) const;
    string  getNickname(void) const;
    string  getSecret(void) const;
    long    getPhoneNumber(void) const;

private:
    string  firstName;
    string  lastName;
    string  nickname;
    string  secret;
    long    phoneNumber;
};

#endif