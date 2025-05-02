#include <stdio.h>

int indexOf(char text[], char word[]) 
{
    int textLength = 0;
    int wordLength = 0;

    while (text[textLength] != '\0') 
    {
        textLength++;
    }

    while (word[wordLength] != '\0') 
    {
        wordLength++;
    }

    for (int i = 0; i <= textLength - wordLength; i++) 
    {
        int match = 1;
        for (int j = 0; j < wordLength; j++) 
        {
            if (text[i + j] != word[j]) 
            {
                match = 0;
                break;
            }
        }
        if (match == 1) 
        {
            return i;
        }
    }

    return -1;
}

int main() 
{
    char text[] = "the cat sat on the mat";
    char target[] = "cat";

    int foundIndex = indexOf(text, target);

    if (foundIndex != -1) 
    {
        printf("Слово \"%s\" найдено на позиции %d\n", target, foundIndex);
    } 
    else 
    {
        printf("Слово \"%s\" не найдено\n", target);
    }

    return 0;
}
