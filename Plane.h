#pragma once
#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Plane
{
    char flightNumber[20];
    char departure[50];
    char destination[50];
    char model[50];
    int totalSeats;
    int occupiedSeats;
public:
    Plane();
    Plane(const char* flightNumber, const char* departure, const char* destination, const char* model, int totalSeats, int occupiedSeats);
    ~Plane();

    void showInfo();

   
    const char* getFlightNumber() const;
    const char* getDeparture() const;
    const char* getDestination() const;
    const char* getModel() const;
    int getTotalSeats() const;
    int getOccupiedSeats() const;

   
    void setFlightNumber(const char* flightNumber);
    void setDeparture(const char* departure);
    void setDestination(const char* destination);
    void setModel(const char* model);
    void setTotalSeats(int totalSeats);
    void setOccupiedSeats(int occupiedSeats);

   
    void sellTicket();
    void returnTicket();
};
