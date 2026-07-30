char* intToRoman(int num) {
    char *result = (char *)malloc(20 * sizeof(char));
    int k = 0;

    int values[] = {
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4,
        1
    };

    char *symbols[] = {
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV",
        "I"
    };

    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            num -= values[i];

            int j = 0;
            while (symbols[i][j] != '\0') {
                result[k++] = symbols[i][j];
                j++;
            }
        }
    }

    result[k] = '\0';
    return result;
}