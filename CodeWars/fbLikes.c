// * return must be an allocated string
// * do not mutate input

// likes({})
//     // should return "no one likes this"

// likes({"Peter"})
//     // should return "Peter likes this"

// likes({"Jacob", "Alex"})
//     // should return "Jacob and Alex like this"

// likes({"Max","John","Mark"})
//     // should return "Max, John and Mark like this"

// likes({"Alex", "Jacob", "Mark", "Max"})
//     // should return "Alex, Jacob and 2 others like this"

#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

char* likes(size_t n, const char *names[n]) {
  char *buf;
  switch (n) {
    case 0:  { asprintf(&buf, "no one likes this"); break; }
    case 1:  { asprintf(&buf, "%s likes this", names[0]); break; }
    case 2:  { asprintf(&buf, "%s and %s like this", names[0], names[1]); break; }
    case 3:  { asprintf(&buf, "%s, %s and %s like this", names[0], names[1], names[2]); break; }
    default: { asprintf(&buf, "%s, %s and %d others like this", names[0], names[1], n-2); break; }
  }
  return buf;
}

int main()
{
        const char *const names[2] = {"Jacob", "Alex"};
        char *res;
        res = likes(2,names);
        puts(res);
        return EXIT_SUCCESS;
}