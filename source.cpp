#include "Hotel.hpp"

using namespace std;

int main()
{
    Hotel hotel("Trivago", "Main Street, 5th Avenue");
    hotel.tilfoejVaerelse(101, 4, 506.8);

    Kunde kunde1("Henrik Pontoppidan");

    hotel.nyReservation(kunde1, Dato(20050722), 3, 5);

    hotel.printReservationer();
    
    return 0;
}
