
char* removeKdigits(char* num, int k) {
    int n = strlen(num);

    char* stack = malloc((n + 1) * sizeof(char));
    int top = -1;
    for (int i = 0; i < n; i++) {
        while (top >= 0 && k > 0 && stack[top] > num[i]) {
            top--;
            k--;
        }
        stack[++top] = num[i];
    }
    while (k > 0) {
        top--;
        k--;
    }

    int start = 0;
    while (start <= top && stack[start] == '0') {
        start++;
    }

    // If everything became empty
    if (start > top) {
        stack[0] = '0';
        stack[1]='\0';
        return stack;
    }

    // Shift result to beginning
    int j = 0;
    for (int i = start; i <= top; i++) {
        stack[j++] = stack[i];
    }

    stack[j] = '\0';

    return stack;
}

