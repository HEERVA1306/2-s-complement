#include <stdio.h>
#include <string.h>
void twosComplement(char bin[]) {
    int length = strlen(bin);
    for (int i = 0; i < length; i++) {
        if (bin[i] == '0') {
            bin[i] = '1';
        } else if (bin[i] == '1') {
            bin[i] = '0';
        }
    }
    int carry = 1; 
    for (int i = length - 1; i >= 0; i--) {
        if (bin[i] == '1' && carry == 1) {
            bin[i] = '0';
            carry = 1; 
        } else if (bin[i] == '0' && carry == 1) {
            bin[i] = '1';
            carry = 0; 
            break;
        }
    }
}

// Function to print the binary string
void printBinary(char bin[]) {
    printf("Binary number: %s\n", bin);
}

int main() {
    char bin[33]; // Buffer to store binary input (up to 32 bits + null terminator)

    // Input: Accept a binary number from the user
    printf("Enter a binary number (up to 32 bits): ");
    scanf("%s", bin);

    // Print the original binary number
    printBinary(bin);

    // Compute the 2's complement of the binary number
    twosComplement(bin);

    // Print the 2's complement result
    printf("2's complement is: %s\n", bin);

    return 0;
}
