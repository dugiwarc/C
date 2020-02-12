#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <limits.h>

int main(int argc, char *argv[])
{
        puts(argv[1]);
        printf("%ju", (__uintmax_t)_SC_LOGIN_NAME_MAX);
        return 0;
}