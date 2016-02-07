/*
 Author: Iftekar Rafi
 Course: {135,136}
 Instructor: Ali AlSayed
 Assignment: Lab 2 Population Growth Modeling
 
 This program is a model of Verhulst formula predicting
 next year's population from this year's.
 
 Part 2 Answer: 200
 
 */
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n, carryingCap, years;
    double population, gRate, lRate, nextYear;
    
    // p(n) = population in year n
    // n = year
    // carryingCap = carrying capacity
    // gR = growth rate
    // lR = minimum loss rate
    // Formula --> p(n+1) = (1+g-h)p(n) - gp(n)^2/M
    
    do
    {
        cout << "How many years do you want to look ahead at?" << endl;
        cin >> years;
    }while(years < 0);
    
    do
    {
        cout << "Enter population..." << endl;
        cin >> population;
    }while(population < 0);
    
    do
    {
        cout << "Enter carrying capacity..." << endl;
        cin >> carryingCap;
    }while(carryingCap < 0);
    
    do
    {
        cout << "Enter growth rate (Percentage)..." << endl;
        cin >> gRate;
    }while(gRate < 0);
    
    gRate = gRate/100;
    
    do
    {
        cout << "Enter minimum loss rate... (Lower than 100)" << endl;
        cin >> lRate;
    }while(lRate < 0 || lRate > 100);
    
    lRate = lRate/100;
    
    for(int i = 0; i < years; i++)
    {
        nextYear = (1+gRate-lRate)*population - gRate*pow(population,2)/carryingCap;
        cout << "p(" << ++n << ") = " << nextYear << endl;
        population = nextYear;
    }
    return 0;
    
}
