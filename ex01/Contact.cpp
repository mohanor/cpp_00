#include "Contact.hpp"

void Contact::setIndex(int index)
{
    this->index = index;
}

int Contact::getIndex(void)
{
    return this->index;
}

void Contact::setFirstName(std::string firstName)
{
    this->firstName = firstName;
}

std::string Contact::getFirstName(void)
{
    return this->firstName;
}

void Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

std::string Contact::getLastName(void)
{
    return this->lastName;
}

void Contact::setNickName(std::string nickName)
{
    this->nickName = nickName;
}

std::string Contact::getNickName(void)
{
    return this->nickName;
}