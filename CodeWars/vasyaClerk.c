#include <stdlib.h>

int tickets(size_t length, const int people[length])
{
        int a[3] = {0};
        for (int i = 0; i < (int)length; i++)
        {
                if (people[i] == 25)
                        a[0]++;
                else if (people[i] == 50)
                {
                        a[0]--;
                        a[1]++;
                }
                else
                {
                        if (a[1] > 0)
                        {
                                a[1]--;
                                a[0]--;
                        }
                        else
                                a[0] = a[0] - 3;
                        a[2]++;
                }
                for (int j = 0; j < 3; j++)
                        if (a[j] < 0)
                                return 0;
        }

        return 1; // instead of strings "YES"/"NO" return true/false instead
}