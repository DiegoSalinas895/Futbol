#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    do
    {
        printf("Tabla de Champions 2018\n");
        printf("1- Octavos de final\n");
        printf("2- Cuartos de final\n");
        printf("3- Semifinal\n");
        printf("4- Final\n");
        printf("5- Ganador\n");
        printf("6- Salir\n\n");
        printf("Elige una opcion de la tabla: ");
        scanf("%d",&x);
       
        switch(x)
        {
            case 1:
                printf("\n\n");
                printf("Octavos de Final");
                printf("1- EQUIPO 1 VS EQUIPO 2\n");
                printf("2- EQUIPO 3 VS EQUIPO 4\n");
                printf("3- EQUIPO 5 VS EQUIPO 6\n");
                printf("4- EQUIPO 7 Vs EQUIPO 8 \n");
                printf("5- EQUIPO 9 VS EQUIPO 10\n");
                printf("6- EQUIPO 11 VS EQUIPO 12\n");
                printf("7- EQUIPO 13 VS EQUIPO 14\n");
                printf("8- EQUIPO 15 VS EQUIPO 16\n");
                printf("\n\n");
                break;
            case 2:
                printf("\n\n");
                printf("Cuartos de Final\n");
                printf("1- EQUIPO 1 VS EQUIPO 4\n");
                printf("2- EQUIPO 5 VS EQUIPO 8 \n");
                printf("3- EQUIPO 9 VS EQUIPO 12\\n");
                printf("4- EQUIPO 13 VS EQUIPO 16\n");
                printf("\n\n");
                break;
            case 3:
                printf("\n\n");
                printf("Semifina\n");
                printf("1- EQUIPO 4 VS EQUIPO 8 \n");
                printf("2- EQUIPO 9 VS EQUIPO 16\n");
                printf("\n\n");
                break;
            case 4:
                printf("\n\n");
                printf("Final \n");
                printf("1- EQUIPO 9 VS EQUIPO 8 \n");
                printf("\n\n");
                break;
            case 5:
                printf("Ganador \n");
                printf("EQUIPO 9 \n");
                printf("\n\n");
                break;
                default:
                printf("El programa ha acabado\n");
                printf("\n\n");
        }
        
    }while(x<=5&&x>0);
    return 0;
}
