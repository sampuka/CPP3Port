#include "Hotel.hpp"

using namespace std;

int main()
{
    Hotel hotel("Trivago", "Main Street, 5th Avenue");
    hotel.tilfoejVaerelse(101, 5);
    hotel.tilfoejVaerelse(102, 1);

    Kunde kunde1("Mathias Lort");
    Kunde kunde2("Henrik Pontoppidan");

    hotel.printReservationer();

    hotel.nyReservation(kunde1, Dato(20050722), 3, 1);
    hotel.nyReservation(kunde2, Dato(20050722), 3, 2);

    hotel.printReservationer();

    hotel.tilfoejYdelse(101, 198);
    hotel.tilfoejYdelse(101, 56);
    hotel.checkud(101);

    hotel.printReservationer();

    hotel.checkud(102);

    hotel.printReservationer();
    
    return 0;
}
