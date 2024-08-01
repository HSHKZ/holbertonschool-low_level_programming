# C - Bit Manipulation

This project focuses on bit manipulation in C, a fundamental technique used to work directly with individual bits of a data type. Bit manipulation is commonly employed in embedde systems, device drivers, networking, and communication protocols to optimize performance and memory usage.

## Functionality

The project provides several functions for manipulating bits within integers. These functions demonstrate how to set, clear, toggle, and check bits at specific positions.

### Conversion Specifiers

C provides format specifiers for converting and displaying different numeric bases, which are useful for visualizing bit manipulation:

- **`%d` (Decimal):** Used for standard integer representation.
- **`%o` (Octal):** Useful in systems programming where octal representation might simplify addressing.
- **`%x` (Hexadecimal):** Commonly used in debugging to view memory addresses and data.
- **Binary Representation:** Since C does not have a native binary format specifier, a custom function is implemented to display binary output.

### Functions

- **`set_bit(unsigned int num, int pos)`**: Sets the bit at position `pos` to 1.
- **`clear_bit(unsigned int num, int pos)`**: Clears the bit at position `pos` (sets it to 0).
- **`toggle_bit(unsigned int num, int pos)`**: Toggles the bit at position `pos`.
- **`check_bit(unsigned int num, int pos)`**: Checks if the bit at position `pos` is 1 or 0.

## Files

- `bit_manipulation.h`: Header file containing function declarations.
- `bit_manipulation.c`: Source file with implementations of the bit manipulation functions.
- `main.c`: Demonstrates how to use the bit manipulation functions.
- `Makefile`: Automates the compilation process.
- `test_bit_manipulation.c`: Contains unit tests for the bit manipulation functions.
- `README.md`: Documentation of the project.

## Compilation/Installation

To compile the project, ensure you have `gcc` installed. Use the following commands:

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -Wno-format *.c -o bit_manipulation

## Examples:

Example 1: Setting a Bit

This example shows how to set a specific bit in an integer.

#include <stdio.h>
#include "bit_manipulation.h"

int main() 

{

    unsigned int num = 0; // Initial number: 0000 0000
    int position = 3;     // Position to set the bit

    num = set_bit(num, position);
    printf("Number after setting bit %d: %u\n", position, num);
    // Output: Number after setting bit 3: 8 (0000 1000 in binary)

    return 0;

}

Example 2: Checking a Bit

This example demonstrates how to check if a specific bit is set in an integer.

#include <stdio.h>
#include "bit_manipulation.h"

int main(void) 

{

    unsigned int num = 8; // Initial number: 0000 1000
    int position = 3;     // Position to check the bit

    int is_set = check_bit(num, position);
    printf("Is bit %d set? %s\n", position, is_set ? "Yes" : "No");
    // Output: Is bit 3 set? Yes

    position = 2;
    is_set = check_bit(num, position);
    printf("Is bit %d set? %s\n", position, is_set ? "Yes" : "No");
    // Output: Is bit 2 set? No

    return 0;

}

## Testing

To test the bit manipulation functions, compile and run the test suite with:

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -Wno-format *.c -o bit_manipulation

This will execute a series of tests to ensure that each function performs correctly. The output will indicate success or failure for each test case.

## Authors

Lucas NIEL - @Lucas NIEL
