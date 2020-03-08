#include <stdio.h>
#include <string.h>

int main()
{
        int len;
        char buf[20];
        snprintf(buf, sizeof buf, "%s", "foo");
        len = strlen(buf);
        snprintf(buf + len, (sizeof buf) - len, "%s", " bar");
        printf("%s\n", buf);

        return 0;
}