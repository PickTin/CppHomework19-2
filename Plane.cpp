#include "Plane.h"

Plane::Plane()
{
    strcpy_s(flightNumber, 20, "Unknown");
    strcpy_s(departure, 50, "Unknown");
    strcpy_s(destination, 50, "Unknown");
    strcpy_s(model, 50, "Unknown");
    totalSeats = 100;
    occupiedSeats = 0;
}

Plane::Plane(const char* flightNumber, const char* departure, const char* destination, const char* model, int totalSeats, int occupiedSeats)
{
    strcpy_s(this->flightNumber, 20, flightNumber);
    strcpy_s(this->departure, 50, departure);
    strcpy_s(this->destination, 50, destination);
    strcpy_s(this->model, 50, model);
    this->totalSeats = totalSeats;
    this->occupiedSeats = occupiedSeats;
}

Plane::~Plane()
{
}

void Plane::showInfo()
{
    cout << "Flight Number: " << flightNumber << endl;
    cout << "Departure: " << departure << endl;
    cout << "Destination: " << destination << endl;
    cout << "Model: " << model << endl;
    cout << "Total Seats: " << totalSeats << endl;
    cout << "Occupied Seats: " << occupiedSeats << endl;
}


const char* Plane::getFlightNumber() const { return flightNumber; }
const char* Plane::getDeparture() const { return departure; }
const char* Plane::getDestination() const { return destination; }
const char* Plane::getModel() const { return model; }
int Plane::getTotalSeats() const { return totalSeats; }
int Plane::getOccupiedSeats() const { return occupiedSeats; }

void Plane::setFlightNumber(const char* flightNumber) { strcpy_s(this->flightNumber, 20, flightNumber); }
void Plane::setDeparture(const char* departure) { strcpy_s(this->departure, 50, departure); }
void Plane::setDestination(const char* destination) { strcpy_s(this->destination, 50, destination); }
void Plane::setModel(const char* model) { strcpy_s(this->model, 50, model); }
void Plane::setTotalSeats(int totalSeats) { this->totalSeats = totalSeats; }
void Plane::setOccupiedSeats(int occupiedSeats) { this->occupiedSeats = occupiedSeats; }


void Plane::sellTicket()
{
    if (occupiedSeats < totalSeats)
    {
        occupiedSeats++;
        cout << "Ticket sold. Occupied seats: " << occupiedSeats << endl;
    }
    else
    {
        cout << "No more seats available." << endl;
    }
}

void Plane::returnTicket()
{
    if (occupiedSeats > 0)
    {
        occupiedSeats--;
        cout << "Ticket returned. Occupied seats: " << occupiedSeats << endl;
    }
    else
    {
        cout << "No tickets to return." << endl;
    }
}
