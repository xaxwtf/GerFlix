#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    int opciones=3;
    int i;
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/
do
{
    printf("1. Mostrar el listado de series \n");
    printf("2. Mostrar el listado de usuarios\n");
    printf("3. Mostrar el listado de Usuarios con el nombre de la serie que ve\n");
    printf("4. Mostrar por cada serie, el nombre de los usuarios que la ven.\n");
    printf("9.Salir\n");
    scanf("%d",& opciones);
    switch(opciones)
    {
        case 1:
            for(i=0;i<TAMSERIE;i++)
            {
                printf("s",eSerie.nombre);
            }
            break;
        case 2:
            break;

        case 3:
            break;
        case 4:
            break;
    }
}
while(opciones!=9);



    return 0;
}
