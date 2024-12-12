#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    const char* lines[] = { "Hello, world!", "Programming in C.", "Test string.", "Welcome here!" };
    int maxConsonants = 0, maxIndex = 0;
    int numLines = sizeof(lines) / sizeof(lines[0]);

    
    for (int i = 0; i < numLines; i++)
    {
        int count = 0;
        
        for (const char* p = lines[i]; *p; p++) {
            if (isalpha(*p) && !strchr("aeiouAEIOU", *p)) {
                count++;
            }
        }
        
        if (count > maxConsonants) {
            maxConsonants = count;
            maxIndex = i;
        }
    }

    printf("The line with the most consonants: \"%s\"\n", lines[maxIndex]);
    return 0;
}