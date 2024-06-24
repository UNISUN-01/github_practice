#include <stdio.h>
#include <stdlib.h>

int main() {
    char* strings1[] = {"HEAVEN", "WORLD" };
    char* strings2[] = { "HAPPY", "DAY" };

    char*** arrayOfStringArrays = (char***)malloc(2 * sizeof(char**));
    arrayOfStringArrays[0] = strings1;
    arrayOfStringArrays[1] = strings2;

    printf("%s\n", arrayOfStringArrays[0][0]);  // Output: Hello
    printf("%s\n", arrayOfStringArrays[0][1]);  // Output: World
    printf("%s\n", arrayOfStringArrays[1][0]);  // Output: OpenAI
    printf("%s\n", arrayOfStringArrays[1][1]);  // Output: ChatGPT

    free(arrayOfStringArrays);

    return 0;
}