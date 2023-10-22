#include "hotel.h"
#include <iostream>

int main() {
    Hotel myHotel;

    int choice;

    do {
        std::cout << "\nHotel Management System:\n";
        std::cout << "1. Add Room\n";
        std::cout << "2. Book Room\n";
        std::cout << "3. Check out from Room\n";
        std::cout << "4. Display all Rooms\n";
        std::cout << "5. Search for Room\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int roomNum;
                double roomPrice;
                std::cout << "Enter room number: ";
                std::cin >> roomNum;
                std::cout << "Enter room price: $";
                std::cin >> roomPrice;
                addRoom(myHotel, roomNum, roomPrice);
                std::cout << "Room added successfully!\n";
                break;
            }
            case 2: {
                int roomNum;
                std::string guest;
                std::cout << "Enter room number: ";
                std::cin >> roomNum;
                std::cin.ignore(); // clear the newline left by std::cin
                std::cout << "Enter guest name: ";
                std::getline(std::cin, guest);
                if (bookRoom(myHotel, roomNum, guest)) {
                    std::cout << "Room booked successfully!\n";
                } else {
                    std::cout << "Failed to book room. Either room is occupied or doesn't exist.\n";
                }
                break;
            }
            case 3: {
                int roomNum;
                std::cout << "Enter room number for checkout: ";
                std::cin >> roomNum;
                if (checkoutRoom(myHotel, roomNum)) {
                    std::cout << "Checked out successfully!\n";
                } else {
                    std::cout << "Failed to check out. Either room is not occupied or doesn't exist.\n";
                }
                break;
            }
            case 4:
                displayRooms(myHotel);
                break;
            case 5: {
                int roomNum;
                std::cout << "Enter room number to search for: ";
                std::cin >> roomNum;
                Room* foundRoom = searchForRoom(myHotel, roomNum);
                if (foundRoom) {
                    std::cout << "Room found!\n";
                    std::cout << "Room Number: " << foundRoom->roomNumber
                              << "\nPrice: $" << foundRoom->price
                              << "\nOccupied: " << (foundRoom->isOccupied ? "Yes" : "No")
                              << "\nGuest: " << (foundRoom->isOccupied ? foundRoom->guestName : "None") 
                              << "\n";
                } else {
                    std::cout << "Room not found!\n";
                }
                break;
            }
            case 6:
                std::cout << "Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}
