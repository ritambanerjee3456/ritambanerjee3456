#include <stdbool.h>
#include <string.h>

bool isIsomorphic(char *s, char *t) {
    if (strlen(s) != strlen(t))
        return false;

    char mapST[256] = {0};
    char mapTS[256] = {0};

    for (int i = 0; s[i] != '\0'; i++) {

        if (mapST[(unsigned char)s[i]] == 0 &&
            mapTS[(unsigned char)t[i]] == 0) {

            mapST[(unsigned char)s[i]] = t[i];
            mapTS[(unsigned char)t[i]] = s[i];
        }
        else if (mapST[(unsigned char)s[i]] != t[i] ||
                 mapTS[(unsigned char)t[i]] != s[i]) {

            return false;
        }
    }

    return true;
}