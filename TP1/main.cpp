#include <string>
#include <iostream>
#include "Date.h"
#include "Book.h"
int main() {
Date d1(2003, 12, 6);
std::cout << "d1: " << d1.year() << "/" << d1.mois() << "/" << d1.day() << std::endl; 
Date d2(1973, 5, 25);
std::cout << "d2: " << d2.year() << "/" << d2.mois() << "/" << d2.day() << std::endl; 

Book b1("La Peste", "Albert Camus", "Français", "978-2070360024", "Roman", d1);
Book b2("1984", "George Orwell", "Anglais", "978-0451524935", "Dystopie", d1);
Book b3("Le chat", "Terry Pratchett", "Japonais", "978-0156012195", "Conte", d2);
std::cout << "b1: " << b1.titre() << " by " << b1.author() << std::endl;
std::cout << "b2: " << b2.titre() << " by " << b2.author() << std::endl;
std::cout << "b3: " << b3.titre() << " by " << b3.author() << std::endl;

return 0; 
};