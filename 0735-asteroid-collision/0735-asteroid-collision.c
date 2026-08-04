int max(int a, int b) {
    if (abs(a) > abs(b))
        return a;
    return b;
}

int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize) {
    int* s = malloc(asteroidsSize * sizeof(int));
    int top = -1;

    for (int i = 0; i < asteroidsSize; i++) {

        if (asteroids[i] > 0) {
            s[++top] = asteroids[i];
        }
        else {
            while (top != -1 && s[top] > 0 &&
                   abs(asteroids[i]) > s[top]) {
                top--;
            }

            if (top == -1 || s[top] < 0) {
                s[++top] = asteroids[i];
            }
            else if (abs(asteroids[i]) == s[top]) {
                top--;
            }
        }
    }

    *returnSize = top + 1;
    return s;
}