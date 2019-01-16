#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int lightX;
    int lightY;
    int initialTX;
    int initialTY;
    scanf("%d%d%d%d", &lightX, &lightY, &initialTX, &initialTY);

    int thorX = initialTX;
    int thorY = initialTY;

    while (1) {
        int remainingTurns;
        scanf("%d", &remainingTurns);
        char *directionX = "";
        char *directionY = "";
        if (thorY > lightY) {
            directionY = "N";
            thorY--;
        } else if (thorY < lightY) {
            directionY = "S";
            thorY++;
        }
        if (thorX > lightX) {
            directionX = "W";
            thorX--;
        } else if (thorX < lightX) {
            directionX = "E";
            thorX++;
        }
        printf("%s%s\n", directionY, directionX);
    }
    return 0;
}