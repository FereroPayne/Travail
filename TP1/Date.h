#ifndef DATE_H
#define DATE_H
#include <string>
#include <vector>
class Date{
private:
int day_;  
int mois_; // Use snake_case for naming variables  
int year_;
public:
Date(int day, int mois, int year);
int day();
int mois();
int year();
};
#endif