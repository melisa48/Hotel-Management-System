#include <iostream>
#include <string>
#include <vector>

class Room {
public:
    int roomNumber;
    bool isBooked;
    std::string guestName;

    Room(int number) : roomNumber(number), isBooked(false), guestName("") {}

    bool bookRoom(const std::string& name) {
        if (!isBooked) {
            isBooked = true;
            guestName = name;
            return true;
        }
        return false;
    }

    bool checkOutRoom() {
        if (isBooked) {
            isBooked = false;
            guestName = "";
            return true;
        }
        return false;
    }
};

class HotelManagementSystem {
private:
    std::vector<Room> rooms;

public:
    HotelManagementSystem(int numberOfRooms) {
        for (int i = 1; i <= numberOfRooms; ++i) {
            rooms.push_back(Room(i));
        }
    }

    bool bookRoom(int roomNumber, const std::string& guestName) {
        for (Room& room : rooms) {
            if (room.roomNumber == roomNumber) {
                return room.bookRoom(guestName);
            }
        }
        return false;
    }

    bool checkOutRoom(int roomNumber) {
        for (Room& room : rooms) {
            if (room.roomNumber == roomNumber) {
                return room.checkOutRoom();
            }
        }
        return false;
    }

    void listRooms() {
        for (const Room& room : rooms) {
            std::cout << "Room " << room.roomNumber << ": "
                << (room.isBooked ? "Booked by " + room.guestName : "Available") << std::endl;
        }
    }
};

int main() {
    HotelManagementSystem hms(10); // Initialize with 10 rooms
    hms.bookRoom(3, "John Doe"); // Book room number 3 for John Doe
    hms.listRooms(); // List the status of all rooms
    hms.checkOutRoom(3); // Check out room number 3
    hms.listRooms(); // List the status of all rooms again

    return 0;
}
