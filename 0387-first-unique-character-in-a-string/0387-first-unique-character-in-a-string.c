int firstUniqChar(char* s) {
    int freq[26] = {0};
    int n = strlen(s);

    // Count frequency of every character
    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
    }

    // Find the first character whose frequency is 1
    for (int i = 0; i < n; i++) {
        if (freq[s[i] - 'a'] == 1) {
            return i;
        }
    }

    return -1;
}