#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

bool comp(const int *a, const int *b, size_t n)
{
    int *new_array = malloc(n *sizeof(int));
    new_array = b;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
        if(new_array[j] == (a[i]*a[i]))
        {
          new_array[j] = -1;
          break;
        }
      }
    }
    for(int i = 0; i < n; i++)
    {
      if(new_array[i] == -1)
        count++;
    }
    
    if(count == n)
      return true;
    return false;
}

int main() {
        const int a[3] = {2,2,3};
        const int b[3] = {4,9,9};
        const int*c;
        const int*d;
         c= a;
         d = b;
        printf("%d", comp(c,d,3));   
        return 0;
}