#include "Hotel.hpp"

using namespace std;

int main()
{
    Hotel hotel("Trivago", "Main Street, 5th Avenue");

    Kunde kunde1("Henrik Pontoppidan");

    hotel.nyReservation(Dato("22072005"), 3, 5);

    hotel.printReservationer();
    
    return 0;
}
