#ifndef BOOK_H
#define BOOK_H
#include "Date.h"
#include <string>
#include <vector>
class Book{
private:
std::string titre_;
std::string author_;
std::string lang_;
std::string ISBN_;
std::string genre_;
Date date_;
std::vector <int> ListId;
public:
Book(std::string titre, std::string author, std::string lang, std::string ISBN
 ,std::string genre, const Date& date);
 std::string titre();
 std::string author();
 std::string lang();
 std::string ISBN();
 std::string genre();
 const Date& date() const;
};
#endif