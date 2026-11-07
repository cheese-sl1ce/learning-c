#include <stdio.h>

typedef struct
{
        unsigned char red;
        unsigned char green;
        unsigned char blue;
} Color;

// считать RGB-формат с консоли
Color getColor();
// перевод из RGB-формата в число
unsigned long long convertToHTML(Color);
// преобразование числа цвета в RGB-формат
Color convertToRGB(unsigned long long);
// печать цвета в RGB-формате (печать значений в десятичном виде через пробел)
// red green blue: 
// 255 128 222
// Печатать только числа через пробел и \n в конце!!!
void printRGB(Color);

// печать цвета в HTML-формате и \n в конце. 
// Примеры: FFA902 0AA3FF
void printHTML(Color);

Color getColor(){
    Color sample;
    scanf("%hhu%hhu%hhu", &sample.red, &sample.green, &sample.blue);
    return sample;
}

unsigned long long convertToHTML(Color sample){
    unsigned long long r = sample.red * (256 * 256);
    unsigned long long g = sample.green * (256);
    unsigned long long b = sample.blue * (1);
    unsigned long long color_hex = r + g + b;
    return color_hex;
}

Color convertToRGB(unsigned long long color_hex){
    Color sample;
    sample.blue = color_hex % 256;
    sample.green = color_hex /256 % 256;
    sample.red = color_hex / 256 / 256 % 256;
    return sample;
}

void printRGB(Color sample){
    printf("%u %u %u\n", sample.red, sample.green, sample.blue);
}

void printHTML(Color sample){
    printf("%02X%02X%02X\n", sample.red, sample.green, sample.blue);
}

int main(){
    Color z, z2;
    unsigned long long html;

    z = getColor();
    printRGB(z);

    html = convertToHTML(z);
    printf("%llu\n", html);
    printHTML(z);

    z2 = convertToRGB(html);
    printRGB(z2);

    return 0;
}