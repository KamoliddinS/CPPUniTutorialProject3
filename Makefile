all: main.o hotel.o room
	g++ main.o hotel.o room.o -o hotel_management_system 


main.o: src/main.cpp
	g++ -c src/main.cpp

hotel.o: src/hotel.cpp src/hotel.h
	g++ -c src/hotel.cpp

room.o: src/room.cpp src/room.h
	g++ -c src/room.cpp

clean:
	rm *.o hotel_management_system
