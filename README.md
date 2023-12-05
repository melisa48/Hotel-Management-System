# Hotel-Management-System
This is a simple Hotel Management System implemented in C++. The system includes basic functionalities such as booking a room, checking out, and listing the current status of all rooms in the hotel.

Classes
Room Class
The Room class represents a hotel room with the following attributes:

roomNumber: The unique identifier for each room.
isBooked: A boolean indicating whether the room is currently booked or available.
guestName: The name of the guest currently occupying the room.
Member Functions
Constructor: Initializes a room with a given room number, marking it as unbooked.
bookRoom(const std::string& name): Books the room for a guest with the provided name, if the room is available.
checkOutRoom(): Checks out the guest from the room, if the room is currently booked.
HotelManagementSystem Class
The HotelManagementSystem class manages a collection of rooms and provides functions to book rooms, check out guests, and list the status of all rooms.

Member Functions
Constructor: Initializes the system with a specified number of rooms, creating instances of the Room class.
bookRoom(int roomNumber, const std::string& guestName): Books a specific room for a guest.
checkOutRoom(int roomNumber): Checks out the guest from a specific room.
listRooms(): Displays the status of all rooms, indicating whether they are booked or available.
Example Usage
The main function in the provided code demonstrates the basic usage of the Hotel Management System. It initializes the system with 10 rooms, books a room for a guest, lists the room status, checks out the guest from the room, and lists the updated room status.
