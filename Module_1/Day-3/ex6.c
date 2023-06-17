#include <stdio.h>

#define DEC_TO_BCD(dec) ((dec / 10) << 4) + (dec % 10)

void decimalToBCD(int decimal, unsigned char *bcd_high, unsigned char *bcd_low) {
    *bcd_high = DEC_TO_BCD(decimal / 10);
    *bcd_low = DEC_TO_BCD(decimal % 10);
}

int main() {
    int decimal = 47;
    unsigned char bcd_high, bcd_low;

    decimalToBCD(decimal, &bcd_high, &bcd_low);

    printf("BCD High: %02X\n", bcd_high);
    printf("BCD Low: %02X\n", bcd_low);

    return 0;
}
