#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char str[50] = "C Programming 101!";
    int len = strlen(str);

    printf("Orijinal metin: %s\n", str);
    printf("Metin uzunlugu: %d\n", len);

    // Tüm harfleri büyük harfe çevir
    for (int i = 0; i < len; i++) {
        str[i] = toupper(str[i]);
    }

    printf("Buyuk harfli hali: %s\n", str);

    // Matematiksel hesaplama
    double angle = 45.0;
    double radians = angle * (M_PI / 180);
    printf("sin(%.2f) = %.2f\n", angle, sin(radians));

    // Zaman alma
    time_t now;
    time(&now);
    printf("Su anki zaman: %s", ctime(&now));

    return 0;
}
