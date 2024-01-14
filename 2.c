#include <stdio.h>
#include <string.h>

int hitungVokal(char *month) {
    int count = 0;
    for (int i = 0; i < strlen(month); i++) {
        char c = month[i];
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' ||
            c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O') {
            count++;
        }
    }
    return count;
}

int hitungNonVokal(char *month) {
    int count = 0;
    for (int i = 0; i < strlen(month); i++) {
        char c = month[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (!(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' ||
                  c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O')) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    char input;
    char *months[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};

    printf("Masukkan huruf A - Z: ");
    scanf(" %c", &input);

    printf("Bulan yang berawalan '%c':\n", input);

    for (int i = 0; i < 12; i++) {
        if (months[i][0] == input || months[i][0] == input - 'a' + 'A') {
            printf("%s\n", months[i]);
        }
    }

    char selectedMonth[20];
    printf("Pilih bulan: ");
    scanf("%s", selectedMonth);

    int vokalCount = hitungVokal(selectedMonth);
    int nonVokalCount = hitungNonVokal(selectedMonth);

    printf("Jumlah karakter vokal: %d\n", vokalCount);
    printf("Jumlah karakter nonvokal: %d\n", nonVokalCount);

    return 0;
}
