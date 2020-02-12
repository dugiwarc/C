#include <stdio.h>
#include <termios.h>

int main()
{
        int c;
        struct termios mode;

        tcgetattr(0, &mode);
        mode.c_lflag &= ~(ECHO | ICANON);
        tcsetattr(0, TCSANOW, &mode);

        while (1)
        {
                c = getchar();
                printf("%d\n", c);
        }

        return 0;
}