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
    Algorithmic thinking.

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
