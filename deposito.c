#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int menu();
int menuCategorias();
void cargaProducto();
void mostrarCantidad();
void mostrarProductos();
void precioTotal();

struct comestible
{
    char nombre[200];
    float precio;
} comestible[5];

struct limpieza
{
    char nombre[200];
    float precio;
} limpieza[5];

struct vestimenta
{
    char nombre[200];
    float precio;
} vestimenta[5];

struct electro
{
    char nombre[200];
    float precio;
} electro[5];

int com = 0;
int limp = 0;
int vest = 0;
int elec = 0;

int main()
{

    int opcion;

    opcion = menu();

    if (opcion == 1)
        cargaProducto();

    if (opcion == 2)
        mostrarCantidad();

    if (opcion == 3)
        mostrarProductos();

    if (opcion == 4)
        precioTotal();

    return 0;
}

void cargaProducto()
{
    int opcion1;
    char continuacion;

    opcion1 = menuCategorias();

    if (opcion1 == 1)
    {
        printf("Categoria Comestibles\n");
        printf("Ingrese el nombre del producto:\n");
        scanf("%s", &comestible[com].nombre);
        printf("Ingrese precio del producto:\n");
        scanf("%f", &comestible[com].precio);
        printf("Usted registro el siguiente producto en la categoria comestibles:\n");
        printf("Nombre del producto %s\n", comestible[com].nombre);
        printf("Precio del producto: $%f\n", comestible[com].precio);
        com++;
    }

    if (opcion1 == 2)
    {
        printf("Categoria Limpieza\n");
        printf("Ingrese el nombre del producto:\n");
        scanf("%s", &limpieza[limp].nombre);
        printf("Ingrese precio del producto:\n");
        scanf("%f", &limpieza[limp].precio);
        printf("Usted registro el siguiente producto en la categoria limpieza:\n");
        printf("Nombre del producto: %s\n", limpieza[limp].nombre);
        printf("Precio del producto: $%f\n", limpieza[limp].precio);
        limp++;
    }

    if (opcion1 == 3)
    {
        printf("Categoria Vestimenta\n");
        printf("Ingrese el nombre del producto:\n");
        scanf("%s", &vestimenta[vest].nombre);
        printf("Ingrese precio del producto:\n");
        scanf("%f", &vestimenta[vest].precio);
        printf("Usted registro el siguiente producto en la categoria vestimenta:\n");
        printf("Nombre del producto: %s\n", vestimenta[vest].nombre);
        printf("Precio del producto: $%f\n", vestimenta[vest].precio);
        vest++;
    }

    if (opcion1 == 4)
    {
        printf("Categoria Electrodomesticos\n");
        printf("Ingrese el nombre del producto:\n");
        scanf("%s", &electro[elec].nombre);
        printf("Ingrese precio del producto:\n");
        scanf("%f", &electro[elec].precio);
        printf("Usted registro el siguiente producto en la categoria electrodomesticos:\n");
        printf("Nombre del producto: %s\n", electro[elec].nombre);
        printf("Precio del producto: $%f\n", electro[elec].precio);
        elec++;
    }

    getchar();

    printf("Presione S si desea volver a cargar un producto, o si desea volver al menu\n");
    continuacion = getchar();
    if (continuacion == 's' || continuacion == 'S')
    {
        main();
    }
}

void mostrarCantidad()
{
    int opcion1;
    int i;
    char continuacion;
    opcion1 = menuCategorias();

    if (opcion1 == 1)
    {
        printf("Categoria Comestibles\n");
        printf("Cantidad de productos: %d\n", com);
    }

    if (opcion1 == 2)
    {
        printf("Categoria Limpieza\n");
        printf("Cantidad de productos: %d\n", limp);
    }

    if (opcion1 == 3)
    {
        printf("Categoria Vestimenta\n");
        printf("Cantidad de productos: %d\n", vest);
    }

    if (opcion1 == 4)
    {
        printf("Categoria Electrodomesticos\n");
        printf("Cantidad de productos: %d\n", elec);
    }

    getchar();

    printf("Presione S si desea volver a cargar un producto, o si desea volver al menu\n");
    continuacion = getchar();
    if (continuacion == 's' || continuacion == 'S')
    {
        main();
    }
}

void mostrarProductos()
{
    int opcion1;
    int i;
    char continuacion;
    opcion1 = menuCategorias();

    if (opcion1 == 1)
    {
        printf("Categoria Comestibles\n");
        printf("------------------------------------------------------------------\n");
        for (i = 0; i < com; i++)
        {
            printf("Nombre del producto %s\n", comestible[i].nombre);
            printf("Precio del producto: $%f\n", comestible[i].precio);
            printf("------------------------------------------------------------------\n");
        }
    }

    if (opcion1 == 2)
    {
        printf("Categoria Limpieza\n");
        printf("------------------------------------------------------------------\n");
        for (i = 0; i < limp; i++)
        {
            printf("Nombre del producto: %s\n", limpieza[i].nombre);
            printf("Precio del producto: $%f\n", limpieza[i].precio);
            printf("------------------------------------------------------------------\n");
        }
    }

    if (opcion1 == 3)
    {
        printf("Categoria Vestimenta\n");
        printf("------------------------------------------------------------------\n");
        for (i = 0; i < vest; i++)
        {
            printf("Nombre del producto: %s\n", vestimenta[i].nombre);
            printf("Precio del producto: $%f\n", vestimenta[i].precio);
            printf("------------------------------------------------------------------\n");
        }
    }

    if (opcion1 == 4)
    {
        printf("Categoria Electrodomesticos\n");
        printf("------------------------------------------------------------------\n");
        for (i = 0; i < elec; i++)
        {
            printf("Nombre del producto: %s\n", electro[i].nombre);
            printf("Precio del producto: $%f\n", electro[i].precio);
            printf("------------------------------------------------------------------\n");
        }
    }

    getchar();

    printf("Presione S si desea volver a cargar un producto, o si desea volver al menu\n");
    continuacion = getchar();
    if (continuacion == 's' || continuacion == 'S')
    {
        main();
    }
}

void precioTotal()
{
    float suma;
    int i;
    int opcion1;
    char continuacion;
    opcion1 = menuCategorias();

    if (opcion1 == 1)
    {
        printf("Categoria Comestible\n");
        for (i = 0; i < com; i++)
        {
            suma = suma + comestible[i].precio;
            
        }
        printf("Precio total: %f\n", suma);
    }

    if (opcion1 == 2)
    {
        printf("Categoria Limpieza\n");
        for (i = 0; i < limp; i++)
        {
            suma = suma + limpieza[i].precio;
        }
        printf("Precio total: %f\n", suma);
    }

    if (opcion1 == 3)
    {
        printf("Categoria Vestimenta\n");
        for (i = 0; i < vest; i++)
        {
            suma = suma + vestimenta[i].precio;
        }
        printf("Precio total: %f\n", suma);
    }

    if (opcion1 == 4)
    {
        printf("Categoria Electrodomesticos\n");
        for (i = 0; i < elec; i++)
        {
            suma = suma + electro[i].precio;
        }
        printf("Precio total: %f\n", suma);
    }

    getchar();

    printf("Presione S si desea volver a cargar un producto, o si desea volver al menu\n");
    continuacion = getchar();
    if (continuacion == 's' || continuacion == 'S')
    {
        main();
    }
}

int menuCategorias()
{
    int opcion1;

    printf("Elija una categoria\n");
    printf("1.Comestibles\n");
    printf("2.Limpieza\n");
    printf("3.Vestimenta\n");
    printf("4.Electrodomesticos\n");
    printf("Elija una opcion:\n");
    scanf("%d", &opcion1);

    return opcion1;
}

int menu()
{
    int opcion;

    do
    {
        printf("MENU DEPOSITO\n");
        printf("1.Cargar Producto\n");
        printf("2.Mostrar cantidad de productos\n");
        printf("3.Mostrar productos detallados\n");
        printf("4.Precio total de venta de una categoria\n");
        printf("Elija una opcion:\n");
        scanf("%d", &opcion);
        if (opcion < 1 || opcion > 5)
            printf("Error! Valor fuera de rango, vuelva a intentarlo\n");
    } while (opcion < 1 || opcion > 5);
    return opcion;
}
