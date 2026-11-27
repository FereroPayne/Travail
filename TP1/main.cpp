#include <string>
#include <iostream>
#include "Date.h"
int main() {
Date d1(2003, 12, 6);
std::cout << "d1: " << d1.year() << "/" << d1.mois() << "/" << d1.day() << std::endl; 

return 0; 
};