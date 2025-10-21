// C++ program to toggle a specific bit of an unsigned
// integer
#include <iostream>
using namespace std;

int main()
{
    // Initialize the number with a binary representation of
    // 0001 1101 (29 in decimal)
    unsigned int num = 29;

    // Specify the bit position to toggle (0-based index)
    unsigned int bit_position = 2;

    // Create a mask with only the specified bit set to 1
    unsigned int mask = 1 << bit_position;

    // Toggle the bit using XOR operation
    num = num ^ mask;

    // Print the result after toggling the bit
    cout << "Result: " << num << endl;

    return 0;
}
