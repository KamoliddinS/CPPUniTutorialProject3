#ifndef HOTEL_H
#define HOTEL_H

#include "room.h"
#include <vector>

struct Hotel {
    std::vector<Room> rooms;
};

void addRoom(Hotel &hotel, int roomNumber, double price);
bool bookRoom(Hotel &hotel, int roomNumber, const std::string &guestName);
bool checkoutRoom(Hotel &hotel, int roomNumber);
void displayRooms(const Hotel &hotel);
Room* searchForRoom( Hotel &hotel, int roomNumber);

#endif //HOTEL_H
