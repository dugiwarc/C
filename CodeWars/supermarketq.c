#include <stdio.h>

int *min(int *const q, int n)
{
        int *min = &q[0];
        for (int i = 1; i < n; ++i)
                if (*min > q[i])
                        min = &q[i];
        return min;
}

int max(int *const q, int n)
{
        int max = q[0];
        for (int i = 1; i < n; ++i)
                if (max < q[i])
                        max = q[i];
        return max;
}

int queue_time(const int *c, int l, int n)
{
        int q[128] = {};
        for (int i = 0; i < l; ++i)
                *min(q, n) += c[i];
        return max(q, n);
}
int main()
{
        int customers3[] = {5, 3, 4};
        int customers3_length = 3;
        int n3 = 1;
        // queue_time(customers1, customers1_length, n1);
        // int customers3[] = {24, 92, 3, 47, 60, 43, 101, 37, 16, 69, 52, 40, 62, 39, 55, 54, 82};
        // int customers3_length = 17;
        // int n3 = 4;
        // int customers3[] = {18, 8, 21, 14, 18, 11, 13, 2, 1, 4, 5, 16, 13, 4, 1, 18, 2, 3, 15, 1, 2, 2, 20, 15, 14, 19, 8, 6, 18, 7, 1, 14, 14, 20, 4, 9, 7, 15, 8, 5, 18, 12, 20, 9, 15, 19, 3, 14, 19, 16, 13, 20, 17, 9, 11, 7, 7, 18, 10, 3, 2, 11, 14, 13, 7, 18, 19, 13, 11, 6, 17, 7, 15, 14, 14, 7, 9, 14, 18, 6, 8, 9, 5, 1, 18, 13, 8, 1};
        // int customers3_length = 88;
        // int n3 = 10;
        // int customers3[] = {52, 37, 74, 62, 77, 6, 23, 56, 36, 97, 84, 54, 69, 10, 6, 52, 79};
        // int customers3_length = 17;
        // int n3 = 9;
        // queue_time(customers3, customers3_length, n3);
        printf("%d", queue_time(customers3, customers3_length, n3));
        // queue_time(customers3, customers3_length, n3);
        return 0;
}