#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook a;

    Contact c = Contact();

    a.running();
    std::cout << "good bye" << std::endl;
    return 0;
}
