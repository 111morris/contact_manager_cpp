#pragma once
#include <string>
#include <nlohmann/json.hpp>

class Contact {
public:
    std::string name;
    std::string phone;
    std::string email;

    Contact() = default;
    Contact(std::string name, std::string phone, std::string email);

    void display() const;

    // Serialization
    nlohmann::json toJson() const;
    static Contact fromJson(const nlohmann::json& j);
};

