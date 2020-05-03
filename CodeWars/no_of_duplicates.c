// Count the number of Duplicates
//     Write a function that will return the count of distinct case -insensitive alphabetic characters and
//     numeric digits that occur more than once in the input string.The input string can be assumed to
// contain only alphabets(both uppercase and lowercase) and numeric digits.

#include <stddef.h>
#include <ctype.h>

size_t duplicate_count(const char *text)
{
        char cache[36] = {0};
        size_t result = 0;

        while (*text)
        {
                if (isdigit(*text))
                        cache[*text - '0']++;
                else
                        cache[tolower(*text) - 'a' + 10]++;
                text++;
        }

        for (size_t i = 0; i < 36; i++)
                if (cache[i] > 1)
                        result++;
        return result;
}