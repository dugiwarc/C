
#include <stdio.h>

typedef float tab[20][12];

void init(tab g)
{
    tab gg = {
{7.2,8.3,12.2,15.6,19.6,22.7,25.2,25,21.1,16.3,10.8,7.5},
{4.5,6.4,11.4,15.7,20.2,23.4,25.7,25.4,21,15.3,8.8,5.2},
{13.7,13.9,15.5,17.9,21.7,25.3,28.4,28.7,25.9,22.5,17.9,14.7},
{13.1,13.4,15.2,17,20.7,24.3,27.3,27.7,24.6,21,16.6,13.8},
{12.4,13.2,16,18.2,21.8,26.2,29.2,28.9,25.4,21,15.9,13.1},
{12,12.8,15,16.2,19.6,22.1,24.1,24.7,23.2,20,15.1,12.5},
{10.1,11.7,15.1,17.3,21.2,24.5,26.9,27.1,24,19.4,13.7,10.5},
{6.7,7.9,11.2,13.7,17.8,21.5,24.3,24,20.3,16,10.4,7.5},
{4.5,6.4,11.4,15.7,20.2,23.4,25.7,25.4,21,15.3,8.8,5.2},
{5.1,7.3,11.7,14.9,19.9,23.5,26.4,25.7,21.5,16.5,9.5,5.3},
{4.8,7,11.8,15.2,19.5,23.2,26.1,25.6,21.1,15.7,9.2,5.6,},
{9.1,10.2,13,15.4,19.2,22.4,24.5,24.6,22.2,18.1,12.9,9.7},
{6.9,8.5,12.5,15.5,19.6,23.1,26,25.6,21.8,17,10.7,7.4},
{8.7,9.6,12.7,15.2,18.9,22.2,24.5,24.3,21.6,17,12.1,9.1},
{9.3,9.5,11.5,3.2,16.2,18.7,20.7,20.8,19.1,15.7,12.2,9.9},
{7.8,7.8,9.9,11.8,14.9,17.7,19.8,19.9,18,14.8,11,8.5},
{3.5,3.2,4.6,5.7,8.5,10.9,13,13.3,11.8,9.4,6.4,4.2},
{2.7,2.8,5.3,7.3,10.9,13.8,15.8,15.7,12.7,9.6,5.8,3.4},
{7.2,8.3,12.2,15.6,19.6,22.7,25.2,25,21.1,16.3,10.8,7.5},
{6,6.9,10.6,14.1,17.9,20.6,23.3,23.3,19.7,15.2,9.8,6.4}
};

    int i, j;
    for (i = 0; i < 20; i++)
        for (j = 0; j < 12; j++)
            g[i][j] = gg[i][j];
    return;
}

void temp_moy(tab a, int x)
{
    float total = 0;
    for(int i = 0; i < 12; i++)
    {
        total = total + a[x][i];
    }
    printf("%f", total/12);
}

void chaque_mois(tab a)
{
    int total = 0;
    for(int current_month = 0; current_month < 12; ++current_month)
    {
        for(int i = 0; i < 20; ++i)
        {      
            total = total + a[i][current_month];
        }
            printf("Overall Temperature in Month %d is %.2f Celsius\n", current_month, (float)total/20);
            total = 0;
    }
}

void tempMax(tab a)
{
    float temp_max;
    int index = 0;
    for(int i = 0; i < 20; ++i)
    {   
        
        for(int j = 0; j < 12; ++j)
        {
            if(a[i][index] > a[i][j + 1])
            {
                temp_max = a[i][index];
            }
            else
            {
                index = j + 1;
            }
        }
        printf("City number %d max temp is %.2f\n", i + 1, temp_max);
    }
}

int main()
{
    tab g2;
    init(g2);
    // temp_moy(g2, 3);
    // chaque_mois(g2);
    tempMax(g2);
    return 0;
}
