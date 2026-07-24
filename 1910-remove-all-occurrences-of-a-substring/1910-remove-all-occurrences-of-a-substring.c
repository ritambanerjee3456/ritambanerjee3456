char* removeOccurrences(char* s, char* part) {
    int x = strlen(part);
    char* p;

    while ((p = strstr(s, part)) != NULL) {
        memmove(p, p + x, strlen(p + x) + 1);
    }

    return s;
}