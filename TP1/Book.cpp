#include "Book.h"
#include <iostream>
Book::Book(std::string titre, std::string author, std::string lang, std::string ISBN
 ,std::string genre, const Date& date) : titre_(titre), 
 author_(author), lang_(lang), ISBN_(ISBN), genre_(genre), date_(date) {}
 