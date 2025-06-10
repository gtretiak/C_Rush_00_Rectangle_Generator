# C_Rush_00_Rectangle_Generator
A simple C program that generates ASCII-art rectangles with decorative borders based on provided dimensions: width and height.

🔍 How It Works

The program prints a rectangle using the following rules:

    The corners are marked with 'A' (top-left and top-right) and 'C' (bottom-left and bottom-right).
    The top and bottom borders, excluding corners, use 'B'.
    The left and right borders, excluding corners, also use 'B'.
    The internal space is filled with blank spaces ' '.
    
    Example (Input: ./rush 5 3)
    ABBBA
    B   B
    CBBBC

🛠️ Techniques Used

    C Standard Library:
        unistd.h for write() system call
        stdlib.h for atoi()
    Basic Programming Concepts:
        Command-line arguments
        Nested loops
        Character-based conditionals
        Modular function design (ft_putchar, rush)

🌍 Real-World Applications

    Rendering logic foundations.
    Input validation.
    Terminal-based tools.
    Practical Use:
    1. Medical Device for patient monitoring uses character-based rectangle rendering to create visual boundaries around vital sign displays, alarm settings, and device status information.
    2. Factory automation system uses ASCII rectangles on simple LCD screens to create boundaries around the blocks: temperature, pressure, etc.
    3. ATM machine uses character-based rectangles to separate account balance information, transaction options, and security messages on monochrome terminal screens.

🚀 Getting Started
✅ Requirements

    C compiler (e.g., gcc)
    Unix-based terminal

💻 Compilation & Usage

gcc -Wall -Wextra -Werror rush00.c -o rush
./rush 5 3

📎 Notes

    If no or insufficient arguments are provided, an error message is displayed.
    Handles only positive integers for dimensions.
