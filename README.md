
# Hotel Management System

This is a basic C++ application designed to demonstrate the core concepts of C++ programming, such as data storage, arrays, vectors, structs, and basic control flow.

## Features

- **Add a Room:** Allows the user to add a new room with a unique room number and price.
- **Book a Room:** Allows a user to book an available room by entering the room number and guest's name.
- **Checkout from a Room:** Guests can checkout from their rooms, making the room available again.
- **Display All Rooms:** View a list of all rooms, their prices, and their occupancy status.
- **Search for a Room:** Allows the user to search for a room by its room number to view its details.

## Getting Started

### Prerequisites

- A C++ compiler, preferably [GCC](https://gcc.gnu.org/).

### Compilation and Execution

1. Clone this repository or download the source code.
2. Navigate to the project's root directory.
3. 1. Use the provided Makefile to compile the project:
        ```bash
        make
        ```
    >**note** Windows users 
    ```bash
    make -f WMakefile
    ```

    2. Or, you can use CMake to compile the project:
        ```bash
        mkdir build
        cd build
        cmake ..
        make
        ```

4. Run the compiled binary:
    ```bash
    ./hotel_management_system
    ```


### Usage

Once the program is running, you will be presented with a menu of available operations. Follow the on-screen prompts to interact with the system.

## Contributing

This is a basic implementation meant for educational purposes. If you'd like to expand on this project, consider adding features such as:

- Saving and loading the hotel's data from a file.
- Implementing a more advanced room search based on different criteria.
- Adding a user authentication system.

Pull requests are welcome!

## License

This project is open source and available under the [MIT License](LICENSE).

