#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/*4) Declara un tipo de dato estructura:
i) Para representar a una PC; los campos serán: velocidad de procesamiento en GHz, año
de fabricación, tipo de procesador, cantidad de núcleos.
ii) Considera valores enteros aleatorios para la velocidad: entre 1 y 3, para el año: entre
2015 y 2024, para la cantidad de núcleos: entre 1 y 8.
iii) Para evitar ingresar por teclado los tipos de procesador, considera que estos se
encuentran en un arreglo de cadenas de caracteres:
char tipos[6][10]={“Intel”, “AMD”, “Celeron”, “Athlon”, “Core”, “Pentium”}
La estructura será la siguiente:
struct compu {
int velocidad;//entre 1 y 3 GHz
int anio;//entre 2015 y 2023
int cantidad;//entre 1 y 8
char *tipo_cpu; //valores del arreglo tipos
};
b) Define una variable del tipo arreglo de estructura para guardar las características de 5 PC
que cargará el usuario.
c) Escribe una función que presente la lista de las PC, cada una con sus características.
d) Escribe una función que presente la PC más vieja.
e) Escribe una función que presente la PC que tiene mayor velocidad.
*/
int main(){
struct PC{
int velocidadGZ;
int añoFab;
char *tipo_cpu;
int cantidadNucleos;
}typedef PC;
char tipos[6]={“Intel”, “AMD”, “Celeron”, “Athlon”, “Core”, “Pentium”};
void listaPCS(PC PC[i]);
int masVieja(PC PC[i]);
int mayorVelocidad(PC PC[i]);
srand(time(NULL));
PC PC[5];
for (int i=0;i<5;i++){
PC[i].velocidadGZ=rand()% 3 + 1;
PC[i].añoFab=rand()% 9 + 2015;
PC[i].cantidadNucleos=rand()% 8 + 1;
int aleatorio=rand() % 6;
PC[i].tipo_cpu=(char *)malloc(strlen(tipos[aleatorio]) * sizeof(char));
strcpy(PC[i].tipo_cpu,tipos[aleatorio]);
}
listaPCS(PC[5]);
int masvieja=masVieja(PC[5]);
printf("El pc mas viejo es del: %d \n",masvieja);
int masrapida=mayorVelocidad(PC[5]);
printf("El pc mas rapido es de: %d \n",masrapida);
    return 0;
}
void listaPCS(PC PC[i]){
    for (int i=0;i<5;i++){
    int a=0;
    a++;
    printf("PC numero %d: \n",a);
    printf("Velocidad en gz: %d \n",PC[i].velocidadGZ);
    printf("Año de fabricacion: %d \n",PC[i].añoFab);
    printf("Tipo de procesador:")
    puts(PC[i].tipo_cpu)
    printf("\n")
    printf("Cantidad de nucleos: %d \n",PC[i].cantidadNucleos);
}
}
int masVieja(PC PC[i]){
        for (int i=0;i<5;i++){
    int masvieja=10000;
    if(PC[i].añoFab<masvieja){
        masvieja=PC[i].añoFab;
    }
    return masvieja;
}
}
int mayorVelocidad(PC PC[i]){
       for (int i=0;i<5;i++){
    int masrapida=0;
    if(PC[i].añoFab>masrapida){
        masrapida=PC[i].velocidadGZ;
    }
    return masrapida;
}
}
