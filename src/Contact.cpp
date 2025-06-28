#include "Contact.hpp"
#include <iostream>
#include <nlohmann/json.hpp>

Contact::Contact(std::string name, std::string phone, std::string email)
    : name(name), phone(phone), email(email) {}

void Contact::display() const {
    std::cout << "Name: " << name << "\nPhone: " << phone << "\nEmail: " << email << "\n";
}

nlohmann::json Contact::toJson() const {
    return nlohmann::json{{"name", name}, {"phone", phone}, {"email", email}};
}

Contact Contact::fromJson(const nlohmann::json& j) {
    return Contact(j.at("name"), j.at("phone"), j.at("email"));
}

