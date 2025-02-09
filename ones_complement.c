#include <stdio.h>
#include <string.h>
void onesComplement(char binary[]) {
    for (int i = 0; i < strlen(binary); i++) {
        // Flip '0' to '1' and '1' to '0'
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        }
    }
}
int main() {
    char binary[65];  
    printf("Enter a binary number: ");
    scanf("%s", binary);
    onesComplement(binary);
    printf("1's complement is: %s\n", binary);
    return 0;
}
