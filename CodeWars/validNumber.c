#include <stdbool.h>

bool valid_phone_number(const char *number)
{
        int frmt_len = strlen("(123) 456-7890");
        if (strlen(number) == frmt_len)
        {
                char b[frmt_len];
                if (sscanf(number, "%1[(]%3[0-9]%1[)]%1[ ]%3[0-9]%1[-]%4[0-9]%1s", b, b, b, b, b, b, b, b) == 7)
                        return true;
        }
        return false;
}

bool valid_phone_number2(const char *number)
{
        char format[] = "(xxx) xxx-xxxx";

        for (int i = 0; i < 15; i++)
                if ((number[i] != format[i]) && ((format[i] != 'x') || ((number[i] < '0') || (number[i] > '9'))))
                        return false;

        return true;
}

int main()
{

        return 0;
}
