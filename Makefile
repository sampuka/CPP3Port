OBJS = source.o Hotel.o VaerelsesRegister.o Vaerelse.o Reservation.o Kunde.o Dato.o #Ydelser.o Betaling.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG) -std=c++11
LFLAGS = -Wall $(DEBUG)

bin : $(OBJS)
	$(CC) $(OBJS) -o bin $(LFLAGS)

source.o : source.cpp Hotel.hpp
	$(CC) $(CFLAGS) source.cpp

Hotel.o : Hotel.cpp Hotel.hpp
	$(CC) $(CFLAGS) Hotel.cpp

VaerelsesRegister.o : VaerelsesRegister.cpp VaerelsesRegister.hpp
	$(CC) $(CFLAGS) VaerelsesRegister.cpp

Vaerelse.o : Vaerelse.cpp Vaerelse.hpp
	$(CC) $(CFLAGS) Vaerelse.cpp

Reservation.o : Reservation.cpp Reservation.hpp
	$(CC) $(CFLAGS) Reservation.cpp

Kunde.o : Kunde.cpp Kunde.hpp
	$(CC) $(CFLAGS) Kunde.cpp

Dato.o : Dato.cpp Dato.hpp
	$(CC) $(CFLAGS) Dato.cpp

Ydelser.o : Ydelser.cpp Ydelser.hpp
	$(CC) $(CFLAGS) Ydelser.cpp

Betaling.o : Betaling.cpp Betaling.hpp
	$(CC) $(CFLAGS) Betaling.cpp

clean:
	\rm $(OBJS) bin

