#include <iostream>
#include "Plane.h"

int main()
{
    Plane a;
    Plane b("AB123", "New York", "Los Angeles", "Boeing 737", 150, 100);

    a.showInfo();
    b.showInfo();

    cout << "Flight Number of b: " << b.getFlightNumber() << endl;
    cout << "Departure of b: " << b.getDeparture() << endl;
    cout << "Destination of b: " << b.getDestination() << endl;
    cout << "Model of b: " << b.getModel() << endl;
    cout << "Total Seats of b: " << b.getTotalSeats() << endl;
    cout << "Occupied Seats of b: " << b.getOccupiedSeats() << endl;

    cout << "\nModifying data..." << endl;
    b.setFlightNumber("CD456");
    b.setDeparture("San Francisco");
    b.setDestination("Chicago");
    b.setModel("Airbus A320");
    b.setTotalSeats(180);
    b.setOccupiedSeats(120);

    cout << "\nNew info of b:" << endl;
    b.showInfo();

    cout << "\nSelling tickets..." << endl;
    b.sellTicket();
    b.sellTicket();

    cout << "\nReturning tickets..." << endl;
    b.returnTicket();
    b.returnTicket();
    b.returnTicket();

}
