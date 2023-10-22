#ifndef ROOM_H
#define ROOM_H

#include <string>

struct Room {
    int roomNumber;
    bool isOccupied;
    double price;
    std::string guestName;
};

#endif //ROOM_H
