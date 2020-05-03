#include <stdlib.h>
#include <stdio.h>

int power(int base, int exponent)
{
        int result = 1;
        for (exponent; exponent > 0; exponent--)
        {
                result = result * base;
        }
        return result;
}

int *parse(char *program)
{
        int array_size = 0, index = 0, value = 0;
        char *t = program;
        while (*t)
        {
                if (*t == 'o')
                        array_size++;
                t++;
        }

        int *out_array = malloc(array_size * sizeof(int));
        while (*program)
        {
                if (*program == 'i')
                        value++;
                if (*program == 's')
                        value = power(value, 2);
                if (*program == 'd')
                        value--;
                if (*program == 'o')
                {
                        out_array[index] = value;
                        index++;
                }
                program++;
        }

        return out_array;
}

int main()
{
        parse("iiisdoso");

        return 0;
}