#ifndef   CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        int         index;
        std::string firstName;
        std::string lastName;
        std::string nickName;

    public:
        int         getIndex(void);
        void        setIndex(int index);
        void        setFirstName(std::string firstName);
        void        setLastName(std::string lastName);
        void        setNickName(std::string nickName);
        std::string getLastName(void);
        std::string getFirstName(void);
        std::string getNickName(void);
};

#endif