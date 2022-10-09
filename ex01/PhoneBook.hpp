#ifndef   PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact book[8];
        int     lastIndex;

    public:
        Contact         getContact(int index);
        std::string    checkLenght(std::string str);
        void            running(void);
        void            addContact(int index, std::string firstName,\
                            std::string lastName, std::string nickName);
        void            search();
        int             getLastIndex(void);
        void            setLastIndex(int lastIndex);
};

#endif