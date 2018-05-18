#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char pais[10];
    int id;
    char nombre[10];

}eMoneda;

void moneda_mostrarListado (eMoneda *lista, int cantidad);
void cargarDatos(eMoneda *lista, int cantidad);
void bajaCliente(ePropietario [], int, int );

char preguntarSiNo ( char texto []);

int main()
{

    eMoneda lista[3]={{"Argentina",1,"Peso"},{"Brasil",2,"Real"},{"EEUU",3,"Dolar"}};

    eMoneda* p;

    p=lista;

    cargarDatos(p, 3);
    moneda_mostrarListado(p, 3);



    return 0;
}


void moneda_mostrarListado (eMoneda *lista, int cantidad)
{
    if (lista!=NULL && cantidad >0)
    {
            for(int i=0;i<3;i++)
            {
                printf("%s -- %d -- %s\n",(lista+i)->pais, (lista+i)->id, (lista+i)->nombre);

            }
    }
        else{
            printf("El dato no existe");
            }
}


void cargarDatos(eMoneda *lista, int cantidad)
{
    for(int i=0;i<3;i++)
    {
        fflush(stdin);
        printf("Ingrese un pais: ");
        gets((lista+i)->pais);

        printf("Ingrese un id: ");
        scanf("%d",&((lista+i)->id));

        fflush(stdin);
        printf("Ingrese un nombre de la moneda: ");
        gets((lista+i)->nombre);
    }
}


void bajarId(eMoneda *lista int cantidad, int flag)
{
int flagDelete;
int i;
int idAux;
int confirm;

     if(flag==0)
            {
                printf("\n\n\n======================\n NO HAY IDS CARGADOS\n======================\n");
            }
        else
            {
               moneda_mostrarListado(p, 3);
                printf("\n========================================================================\n");

                printf("\n========================================================================\n");
                printf("\n\n Ingrese el Id del pais que desea dar de BAJA:\t");
                scanf("%d", &idAux);
                printf("\n========================================================================\n");
                flagDelete=0;
                        for (i=0; i<cantidad;i++)
                            {
                                if (users[i].idPropietario== idAux)
                                    {
                                     confirm =preguntarSiNo("Seguro que desea borrar el socio:\t");
                                    break;
                                    }
                            }

                if (flagDelete==1)
                         {

                            printf("\n\n=====================================\n");
                            printf("PROPIETARIO NO EXISTE");
                            printf("\n=====================================\n");

                         }
               else if (confirm == 's')
               {
                   for (i=0; i<tamanio;i++)
                    {
                        if (users[i].idPropietario== idAux)
                            {
                            users[i].status=0;
                            printf("\n\n======================================\n");
                            printf("Usuario borrado: %s , con el Id  Nro: %d", users[i].nombreyApellido, users[i].idPropietario);
                            printf("\n======================================\n");
                            flagDelete=1;
                            break;
                            }
                    }
                if (flagDelete==0)
                    {
                            printf("\n\n==========================================\n");
                            printf("El PROPIETARIOS que desea borrar no existe");
                            printf("\n==========================================\n");
                    }
               }
               else
               {
                            printf("\n\n==========================================\n");
                            printf("Operacion Cancelada");
                            printf("\n==========================================\n");
               }
            }

}

char preguntarSiNo ( char texto [])
 {
     char respuesta;

     printf("%s S o N:", texto);
     fflush(stdin);
     respuesta= tolower(getche());

    while (respuesta != 's' && respuesta !='n')
        {
        printf(" \nRespuesta Incorrecta-%s\t",texto);
        fflush(stdin);
        respuesta= tolower(getche());
        }

  return respuesta;
}
