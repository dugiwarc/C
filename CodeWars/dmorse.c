#include <stdlib.h>
#include <string.h>
#include <stdio.h>

const char *morse[55] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};
const char *ascii[55] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", ".", ",", "?", "'", "!", "/", "(", ")", "&", ":", ";", "=", "+", "-", "_", "\"", "$", "@", "SOS"};

char *decode_morse(const char *morse_code)
{
        char *buf = calloc(strlen(morse_code), 1), *b = buf;
        char *copy = strdup(morse_code), *tok = strtok(copy, " ");

        while (tok)
        {
                for (int i = 0; i < sizeof(morse) / sizeof(morse[0]); i++)
                {
                        if (!strcmp(tok, morse[i]))
                        {
                                strcpy(b, ascii[i]);
                                b += strlen(ascii[i]);
                                break;
                        }
                }
                tok = strtok(NULL, " ");
                // if (tok && *(tok - 1) == ' ')
                //         *b++ = ' ';
        }

        free(copy);
        puts(buf);
        return buf;
}

int main()
{

        free(decode_morse(".... . -.--  .--- ..- -.. ."));

        return 0;
}