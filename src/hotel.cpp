#include "hotel.h"
#include <iostream>

void addRoom(Hotel &hotel, int roomNumber, double price) {
    Room newRoom = {roomNumber, false, price, ""};
    hotel.rooms.push_back(newRoom);
}

bool bookRoom(Hotel &hotel, int roomNumber, const std::string &guestName) {
    for (Room &room : hotel.rooms) {
        if (room.roomNumber == roomNumber && !room.isOccupied) {
            room.isOccupied = true;
            room.guestName = guestName;
            return true; // Successfully booked
        }
    }
    return false; // Room not found or already occupied
}

bool checkoutRoom(Hotel &hotel, int roomNumber) {
    for (Room &room : hotel.rooms) {
        if (room.roomNumber == roomNumber && room.isOccupied) {
            room.isOccupied = false;
            room.guestName = "";
            return true; // Successfully checked out
        }
    }
    return false; // Room not found or not occupied
}

void displayRooms(const Hotel &hotel) {
    for (const Room &room : hotel.rooms) {
        std::cout << "Room Number: " << room.roomNumber
                  << "\nPrice: $" << room.price
                  << "\nOccupied: " << (room.isOccupied ? "Yes" : "No")
                  << "\nGuest: " << (room.isOccupied ? room.guestName : "None") 
                  << "\n--------------------------\n";
    }
}

Room* searchForRoom( Hotel &hotel, int roomNumber) {
    for (Room &room : hotel.rooms) {
        if (room.roomNumber == roomNumber) {
            return &room;
        }
    }
    return nullptr; // Room not found
}
