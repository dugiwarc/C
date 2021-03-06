#include <stdio.h>
#include <sys/time.h>
#include "rtclock.h"

double a[N][N],b[N][N],c[N][N];

void initialisation() {
for (int i=0; i<N; i++)
  for (int j=0; j<N; j++) {
    a[i][j]=i+j*1.1;
    b[i][j]=i*2.2+j;
    c[i][j]=0;  } }

int main() {
double t_start, t_end, time1;
int i,j,k;
initialisation();

t_start = rtclock();

for (i=0; i<N; i++)
  for (k=0; k<N; k++)
    for (j=0; j<N; j++)
      c[i][j]+=a[i][k]*b[k][j];
    
t_end = rtclock();
time1 = t_end - t_start;
fprintf(stdout, "temps séquentiel : %0.6lfs\n", time1);
}
