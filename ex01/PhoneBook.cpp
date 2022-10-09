#include "PhoneBook.hpp"

void PhoneBook::running(void)
{
    std::string choise;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string searchIndex;
    int         index;

    index = 0;
    setLastIndex(index);
    while(1)
    {
        std::cout << "ENTRE YOUR CHOISE : ADD : SEARCH : EXIT\n";
        if (!std::getline (std::cin, choise))
            break;
        if (choise == "ADD")
        {
            std::cout << "ENTRE FIRST NAME\n" << std::endl;
            if (!std::getline (std::cin, firstName))
                break;
            std::cout << "ENTRE LAST NAME\n";
            if (!std::getline (std::cin, lastName))
                break;
            std::cout << "ENTRE NICK NAME\n";
            if (!std::getline (std::cin, nickName))
                break;
            addContact(index++, firstName, lastName, nickName);
            if (index == 8)
                index = 0;
            if (this->getLastIndex() < 8)
                this->setLastIndex(index);
        }
        else if (choise == "SEARCH")
        {
            std::cout << "ENTRE INDEX\n";
            std::getline (std::cin, searchIndex);
            std::cout << searchIndex << std::endl;
            this->search();
        }
        else if (choise == "EXIT")
            break;
    }
}

void PhoneBook::addContact(int index, std::string firstName,\
                std::string lastName, std::string nickName)
{
    this->book[index].setIndex(index);
    this->book[index].setFirstName(firstName);
    this->book[index].setLastName(lastName);
    this->book[index].setNickName(nickName);
}

void PhoneBook::search(void)
{
    std::cout << "INDEX      | FIRST NAME | LAST NAME  | NICKNAME"<< std::endl;
    for(int i = 0; i < this->getLastIndex(); i++)
    {
        std::cout << this->checkLenght(std::to_string(this->getContact(i).getIndex())) << " | " << this->checkLenght(this->getContact(i).getFirstName()) << " | ";
        std::cout << this->checkLenght(this->getContact(i).getLastName()) << " | " << this->checkLenght(this->getContact(i).getNickName()) << std::endl;
    }
}

Contact PhoneBook::getContact(int index)
{
    return this->book[index];
}

int     PhoneBook::getLastIndex(void)
{
    return this->lastIndex;
}

void     PhoneBook::setLastIndex(int lastIndex)
{
    this->lastIndex = lastIndex;
}

std::string    PhoneBook::checkLenght(std::string str)
{
    std::string tmp;

    if (str.length() > 10)
    {
        tmp = str.substr(0, 10);
        tmp[9] = '.';
        return tmp;
    }
    while (str.length() < 10)
        str += " ";
    return str;
}
