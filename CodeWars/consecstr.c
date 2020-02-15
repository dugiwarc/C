#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *longest_consec(char *strarr[], int k)
{
        static char current_max[256] = "";
        char *pc_max = current_max;
        int i = 0, word_index = 0, extra_val = 0, curr_strlen = 0, len = 0, next_strlen = 0, prev_strlen = 0, next_next_strlen = 0, current_max_count = 0;
        while (*(strarr) != NULL)
        {
                curr_strlen = strlen(*strarr);
                *strarr++;
                next_strlen = (*strarr != NULL) ? (strlen(*strarr)) : 0;
                *strarr++;
                next_next_strlen = (*strarr != NULL) ? (strlen(*strarr)) : 0;
                *strarr--;
                *strarr--;
                current_max_count = curr_strlen + next_strlen;

                if ((next_strlen + next_next_strlen) > (current_max_count))
                        current_max_count = next_next_strlen + next_strlen;

                if (((curr_strlen + next_strlen) >= current_max_count) || ((prev_strlen + curr_strlen) >= current_max_count))
                {

                        len = prev_strlen + curr_strlen;

                        for (i = 0; i < (len - prev_strlen); i++)
                                if (word_index < 2)
                                {
                                        current_max[extra_val] = strarr[0][i];
                                        extra_val++;
                                }

                        word_index++;
                }
                prev_strlen = curr_strlen; // 7
                *(strarr++);
        }
        return pc_max;
}

int main()
{
        char *ch_str[256] = {"zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail"};
        char *res = longest_consec(ch_str, 2);
        puts(res);

        return 0;
}