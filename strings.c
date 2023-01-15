#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = " World";
    strcat(str1, str2);
    printf("Concatenating strings: %s\n", str1); // Output: Hello World

    char str[20] = "Hello World";
    int len = strlen(str);
    printf("Finding the length of a string: %d\n", len); // Output: 11

    char str3[20] = "Hello";
    char str4[20] = "Hello";
    if (strcmp(str3, str4) == 0) {
    printf("Comparing strings: The strings are equal.\n");
    } else {
    printf("Comparing strings: The strings are not equal.\n");
    }

    char str5[20] = "Hello";
    char str6[20];
    strcpy(str6, str5);
    printf("Copying strings: %s\n", str6);

