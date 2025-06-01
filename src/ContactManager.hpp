#pragma once
#include "Contact.hpp"
#include <vector>
#include <string>

class ContactManager {
private:
    std::vector<Contact> contacts;
    std::string filePath;

public:
    ContactManager(const std::string& filePath);

    void load();
    void save() const;
    void addContact(const Contact& contact);
    void listContacts() const;
    void searchContact(const std::string& keyword) const;
};

