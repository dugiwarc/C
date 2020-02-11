#include <stdio.h>

void n_dernieres_lignes(int nb_lines)
{
        char c, consec[2] = "";
        int line_count = 0, i = 0, char_index = 0, last_n_lines = 0;
        char tab[20][20];

        puts("Tap 'Enter' twice to terminate the input reader");

        while (c = getchar())
        {

                if (c == '\n')
                {
                        consec[i] = '\n';
                        tab[line_count][char_index] = '\0';
                        line_count++;
                        char_index = 0;
                        i++;
                }

                if (c != '\n')
                        i = 0;

                tab[line_count][char_index] = c;
                char_index++;

                if (consec[0] == '\n' && consec[1] == '\n')
                        break;
        }

        last_n_lines = line_count > nb_lines ? (line_count - nb_lines - 1) : 0;
        for (i = last_n_lines; i < line_count; i++)
        {
                for (int j = 0; tab[i][j] != '\0'; j++)
                        putchar(tab[i][j]);
        }
}

int main()
{
        n_dernieres_lignes(2);
        return 0;
}