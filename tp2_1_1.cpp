// codigo a completar
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
#define N 20
int i;
srand(time(NULL));
double vt[N];
for(i = 0;i<N; i++)
{
vt[i]=1+rand()%100;
printf("%f \n", vt[i]);
}
return 0;
}
