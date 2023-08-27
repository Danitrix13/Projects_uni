#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <dos.h>
#include <ctype.h>


void borrar()
{
    system("cls");
}
void inicio()
{
    int iterable,barra,loading;
    loading = 0;
    clrscr();
    for (iterable = 0; iterable <2080; iterable++)
   {
      if (iterable >= 0)
      {
         textcolor(DARKGRAY);
         cprintf("%c", 219);
      }
    }
    for (iterable = 0; iterable <30; iterable++)
   {
        
      gotoxy(25+iterable, 13);
        textcolor(LIGHTBLUE);
        cprintf("%c", 176);
      
    }
    for (iterable=0;iterable <30; iterable++)
    {
        loading ++;
        if (loading == 1)
        {
            gotoxy(34, 11);
            textcolor(LIGHTGREEN);
            cprintf("loading .", 219);
            delay(100);
        }
        else if (loading  == 2)
        {
            gotoxy(34, 11);
            textcolor(LIGHTGREEN);
            cprintf("loading ..", 219);
            delay(100);
        }
        else
        {
            gotoxy(34, 11);
            textcolor(LIGHTGREEN);
            cprintf("loading ...", 219);
            loading = 0;
            delay(100);
            if (loading == 0 && iterable < 28)
            {
                gotoxy(34, 11);
                textcolor(LIGHTGREEN);
                cprintf("loading", 219);
                delay(50);
                textcolor(DARKGRAY);
                cprintf("    ", 219);
            }
            else
            {
                gotoxy(34, 11);
                textcolor(LIGHTGREEN);
                cprintf("loading ...", 219);
                loading = 0;
                delay(100);  
            }
            delay(50);
            
            
        }
        gotoxy(25+iterable, 13);
        textcolor(LIGHTGREEN);
        cprintf("%c", 219);
        barra = (int)((float)iterable / 29 * 100);
        gotoxy(38, 15);
        textcolor(GREEN);
        cprintf("%d %", barra);
        delay(200);
    }
    delay(1000);
    getch();
}

int logo()
{  
    int i;
	clrscr();
	for (i = 0; i <2080; i++)
	{
		if (i > 498 && i < 506)
		{
			textcolor(BLUE);
			cprintf("%c", 219);
		}
		else if (i > 507 && i < 534)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 535 && i < 544)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 578 && i < 586)
		{
			textcolor(BLUE);
			cprintf("%c", 219);
		}
		
		else if (i > 587 && i < 614)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 615 && i < 624)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 658 && i < 666)
		{
			textcolor(BLUE);
			cprintf("%c", 219);
		}
		else if (i > 667 && i < 694)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 695 && i < 704)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 738 && i < 746)
		{
			textcolor(BLUE);
			cprintf("%c", 219);
		}
		else if (i > 747 && i < 774)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 775 && i < 784)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}

		else if (i > 818 && i < 826)
		{
			textcolor(BLUE);
			cprintf("%c", 219);
		}
		else if (i > 827 && i < 835)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 845 && i < 854)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 898 && i < 906)
		{	gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);
		}
		else if (i > 907 && i < 915)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 916 && i < 924)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 925 && i < 934)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 935 && i < 944)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		
		else if(i > 978 && i < 986)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);
		}
		else if (i > 987 && i < 995)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 996 && i < 1004)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1005 && i < 1014)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1015 && i < 1024)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1058 && i < 1066)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);
		}
		else if (i > 1067 && i < 1075)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1076 && i < 1084)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1085 && i < 1094)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1095 && i < 1104)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1138 && i < 1146)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		
		else if (i > 1156 && i < 1164)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		
		else if (i > 1165 && i < 1174)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1175 && i < 1184)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		
		else if (i > 1218 && i < 1244)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);
		}
		else if (i > 1245 && i < 1264)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1298 && i < 1324)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1325 && i < 1344)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1378 && i < 1404)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);
		}
		else if (i > 1405 && i < 1424)
		{
    		textcolor(BLUE);
    		cprintf("%c", 219);
		}
		
		else
		{
			textcolor(DARKGRAY);
			cprintf("%c", 219);
		}
			
	}
	getch();
    borrar();
   return 0;
}
void sueldos(double *sueldo_daniel, double *sueldo_ernesto) 
{
    /*El asterisco * en la declaración de parámetros de función,
    como en void sueldos(double *sueldo_daniel, double *sueldo_ernesto),
    indica que los parámetros son punteros. En C y otros lenguajes, 
    los punteros son variables que almacenan direcciones de memoria en lugar 
    de valores directos. Cuando pasas un puntero como parámetro, estás pasando 
    la dirección de memoria de una variable y, por lo tanto, puedes modificar 
    el contenido de esa variable a través del puntero. En tu función sueldos, 
    estás tomando dos punteros a double como parámetros: sueldo_daniel y sueldo_ernesto. 
    Esto permite que la función modifique los valores de las variables sueldo_daniel y 
    sueldo_ernesto en la función main.
    
    Es necesario pasar punteros a las variables en lugar de los valores directos cuando 
    deseas modificar esas variables dentro de una función y quieres que esos cambios sean
    visibles fuera de la función. Esto se debe a cómo funcionan los parámetros en C y 
    cómo se maneja la memoria. En C, los parámetros de función se pasan por valor. 
    Esto significa que cuando pasas una variable como argumento a una función, 
    en realidad estás pasando una copia del valor de esa variable, no la variable en sí.
    Esto implica que cualquier cambio que hagas en la copia dentro de la función 
    no afectará a la variable original fuera de la función. Cuando pasas un puntero a una 
    función, estás pasando la dirección de memoria de la variable original.
    Esto permite que la función acceda directamente a la memoria donde se almacena 
    la variable original y, por lo tanto, pueda modificar su contenido. En el contexto
    de tu código, al pasar punteros a las funciones, permites que las funciones 
    modifiquen los valores de las variables sueldo_daniel y sueldo_ernesto directamente
    en la memoria donde se almacenan. Si pasaras los valores directos, estarías 
    trabajando con copias locales de esos valores dentro de las funciones y no se 
    reflejarían fuera de ellas.
    */
    FILE *archivo; 
    char caracter[200];
    double sueldo_1 = 500,sueldo_2 = 500;
    archivo = fopen("C:\\TC20\\BIN\\saldo.txt","r");
    if (archivo == NULL)
    {
        printf("error ala abrir el archivo");
        *sueldo_daniel =  sueldo_1;
        *sueldo_ernesto = sueldo_2;
    }
    else
    {
       while (fgets(caracter,sizeof(caracter),archivo) != NULL)
        {
            if (sscanf(caracter,"sueldo_uno = %lf",&sueldo_1) == 1)
            {
                *sueldo_daniel = sueldo_1;
            }
            if (sscanf(caracter,"sueldo_dos = %lf",&sueldo_2) == 1)
            {
                *sueldo_ernesto = sueldo_2;
            }
        }
       
    }
    fclose(archivo);
}
void actualizar_sueldos(double *sueldo_daniel, double *sueldo_ernesto,char *user) 
{
    /*El asterisco * en la declaración de parámetros de función,
    como en void sueldos(double *sueldo_daniel, double *sueldo_ernesto),
    indica que los parámetros son punteros. En C y otros lenguajes, 
    los punteros son variables que almacenan direcciones de memoria en lugar 
    de valores directos. Cuando pasas un puntero como parámetro, estás pasando 
    la dirección de memoria de una variable y, por lo tanto, puedes modificar 
    el contenido de esa variable a través del puntero. En tu función sueldos, 
    estás tomando dos punteros a double como parámetros: sueldo_daniel y sueldo_ernesto. 
    Esto permite que la función modifique los valores de las variables sueldo_daniel y 
    sueldo_ernesto en la función main.
    
    Es necesario pasar punteros a las variables en lugar de los valores directos cuando 
    deseas modificar esas variables dentro de una función y quieres que esos cambios sean
    visibles fuera de la función. Esto se debe a cómo funcionan los parámetros en C y 
    cómo se maneja la memoria. En C, los parámetros de función se pasan por valor. 
    Esto significa que cuando pasas una variable como argumento a una función, 
    en realidad estás pasando una copia del valor de esa variable, no la variable en sí.
    Esto implica que cualquier cambio que hagas en la copia dentro de la función 
    no afectará a la variable original fuera de la función. Cuando pasas un puntero a una 
    función, estás pasando la dirección de memoria de la variable original.
    Esto permite que la función acceda directamente a la memoria donde se almacena 
    la variable original y, por lo tanto, pueda modificar su contenido. En el contexto
    de tu código, al pasar punteros a las funciones, permites que las funciones 
    modifiquen los valores de las variables sueldo_daniel y sueldo_ernesto directamente
    en la memoria donde se almacenan. Si pasaras los valores directos, estarías 
    trabajando con copias locales de esos valores dentro de las funciones y no se 
    reflejarían fuera de ellas.
    */
    FILE *archivo; 
    char caracter[200];
    double sueldo_1 = 500,sueldo_2 = 500;
    archivo = fopen("C:\\TC20\\BIN\\saldo.txt","w");
    if (archivo == NULL)
    {
        printf("error ala abrir el archivo\n");
    }
    else if (strcmp(user,"daniel") == 0)
    {
		fprintf(archivo,"sueldo_uno = %lf\n",*sueldo_daniel);
		fprintf(archivo,"sueldo_dos = %lf",*sueldo_ernesto);
    }
	else if (strcmp(user,"ernesto") == 0)
    {
		fprintf(archivo,"sueldo_uno = %lf\n",*sueldo_daniel);
		fprintf(archivo,"sueldo_dos = %lf",*sueldo_ernesto);
    }
    fclose(archivo);
}

char *usuario() 
{   char usuario[10];
    size_t len;
    int conteo = 3;
    while (conteo > 0) 
    {   
        printf("Pon tu nombre de usuario: ");
        fgets(usuario, sizeof(usuario), stdin);
        len = strlen(usuario);
		if (strcmp(usuario,"\n") == 0)
		{
			borrar();
			continue;
			
			
		}
		else
		{
			if (len > 0 && usuario[len - 1] == '\n')
        	{
            	usuario[len - 1] = '\0';
        	}
        
        	if (strcmp(usuario, "daniel") == 0 || strcmp(usuario, "ernesto") == 0)
        	{
            	return strdup(usuario); 
        	} 
        	else
        	{
            	conteo--;
            	printf("Te quedan %d intentos\n", conteo);
				getch();
        	}
		}
        
    }
    return NULL;
}
char *contrasena(char *user)
{
    char contrasena[20];
    int conteo = 3;
    size_t len;
    while (conteo > 0)
    {
        printf("Ingrese su contrasena: ");
        fgets(contrasena, sizeof(contrasena), stdin);
        len = strlen(contrasena);
		if (strcmp(contrasena,"\n") == 0)
		{
			borrar();
			continue;
		}
		else
		{
			if (len > 0 && contrasena[len - 1] == '\n')
        	{
            	contrasena[len - 1] = '\0';
        	}

        	if (strcmp(user, "daniel") == 0)
        	{
           		if (strcmp(contrasena, "123") == 0) 
            	{
                	return strdup(contrasena);
            	}
            	else
            	{
                	conteo--;
                	printf("Te quedan %d intentos\n", conteo);
            	}
        	}
			else
			{
				if (strcmp(contrasena, "000") == 0)
				{
					return strdup(contrasena);
				}
				else
				{
					conteo--;
					printf("Te quedan %d intentos\n", conteo);
					getch();
				}
			}
		} 
    }
    return NULL;
}
void presentacion()
{
	printf("hola presentacion\n");
}
void consultar_saldo(double *sueldo_daniel, double *sueldo_ernesto,char *user)
{
	if (strcmp(user,"daniel") == 0)
	{
		printf("tu saldo actual es %lf\n",*sueldo_daniel);
	}
	else if (strcmp(user,"ernesto") == 0)
	{
		printf("tu saldo actual es %lf\n",*sueldo_ernesto);
	}
	
}
void ingresar_saldo_ala_cuenta(double *sueldo_daniel, double *sueldo_ernesto,char *user)
{
	double ingresar_saldo;
	
	if (strcmp(user,"daniel") == 0)
	{
		while (1)
		{
			borrar();
			printf("Ingresar saldo ala cuenta \n");
			scanf("%lf",&ingresar_saldo);
			if (ingresar_saldo <= 0 )
			{
				printf("no puedes ingresar valores negativos");
				getch();
			}
			else if (ingresar_saldo >= 1 && ingresar_saldo <= 10000)
			{
				*sueldo_daniel = *sueldo_daniel + ingresar_saldo;
				actualizar_sueldos(sueldo_daniel,sueldo_ernesto,user);
				break;
			}
		}	
	}
	else if (strcmp(user,"ernesto") == 0)
	{
		while (1)
		{
			borrar();
			printf("Ingresar saldo ala cuenta \n");
			scanf("%lf",&ingresar_saldo);
			if (ingresar_saldo <= 0 )
			{
				printf("no puedes ingresar valores negativos");
				getch();
			}
			else if (ingresar_saldo >= 1 && ingresar_saldo <= 10000)
			{
				*sueldo_ernesto = *sueldo_ernesto + ingresar_saldo;
				actualizar_sueldos(sueldo_daniel,sueldo_ernesto,user);
				break;
			}
		}	
	}
	
}

void retirar_saldo_cuenta(double *sueldo_daniel, double *sueldo_ernesto,char *user)
{
	double retirar_saldo;
	while (1)
	{
		borrar();
		printf("Ingresar saldo ala cuenta \n");
		scanf("%lf",&retirar_saldo);
		if (strcmp(user,"daniel") == 0)
		{
			if (retirar_saldo <= 0 )
		{
			printf("no puedes ingresar valores negativos");
			getch();
		}
			else if (retirar_saldo > *sueldo_daniel)
			{
				printf("No puede cuenta con el saldo suficiente para realizar la transaccion %lf",*sueldo_daniel);
				getch();
			}
			else if (retirar_saldo >= 1 && retirar_saldo <= 10000)
			{
				*sueldo_daniel = *sueldo_daniel - retirar_saldo;
				actualizar_sueldos(sueldo_daniel,sueldo_ernesto,user);
				break;
			}
		}
		else if (strcmp(user,"ernesto") == 0)
		{
			if (retirar_saldo <= 0 )
			{
				printf("no puedes ingresar valores negativos");
				getch();
			}
			else if (retirar_saldo > *sueldo_ernesto)
			{
				printf("No puede cuenta con el saldo suficiente para realizar la transaccion %lf",*sueldo_ernesto);
				getch();
			}
			else if (retirar_saldo >= 1 && retirar_saldo <= 10000)
			{
				*sueldo_ernesto = *sueldo_ernesto - retirar_saldo;
				actualizar_sueldos(sueldo_daniel,sueldo_ernesto,user);
				break;
			}
		}	
	}
}
void recarga_saldo(double *sueldo_daniel, double *sueldo_ernesto,char *user)
{
	double retirar_saldo;
	if (strcmp(user,"daniel") == 0)
	{
		while (1)
		{
			borrar();
			printf("Ingresa la cantidad de saldo a recargar\n");
			printf("> ");
			scanf("%lf",&retirar_saldo);
			if (retirar_saldo < 0)
			{
				printf("ingrese un valor positivo");
				getch();
			}
			else if (retirar_saldo > *sueldo_daniel) 
			{
				printf("ingreso un valor mayor a su saldo");
				getch();
			}
			else
			{
				*sueldo_daniel = *sueldo_daniel - retirar_saldo;
				actualizar_sueldos(sueldo_daniel, sueldo_ernesto,user);
				break;
			}
		}
		
	}
	else if (strcmp(user,"ernesto") == 0)
	{
		while (1)
		{
			borrar();
			printf("Ingresa la cantidad de saldo a recargar\n");
			printf("> ");
			scanf("%lf",&retirar_saldo);
			if (retirar_saldo < 0)
			{
				printf("ingrese un valor positivo");
				getch();
			}
			else if (retirar_saldo > *sueldo_ernesto) 
			{
				printf("ingreso un valor mayor a su saldo");
				getch();
			}
			else
			{
				*sueldo_ernesto = *sueldo_ernesto - retirar_saldo;
				actualizar_sueldos(sueldo_daniel, sueldo_ernesto,user);
				break;
			}
		}
	}
}
void recarga(double *sueldo_daniel, double *sueldo_ernesto,char *user)
{
	char operador[9],telefono[9],iterable;
	size_t len;
	if (strcmp(user,"daniel") == 0)
	{
		while (1)
		{
			borrar();
			printf("elige tu operador\n");
			printf("1. Tigo\n");
			printf("2. Claro\n");
			printf("> ");
			fgets(operador,sizeof(operador),stdin);
			len = strlen(operador);
			if (len > 0 && operador[len - 1] == '\n')
			{
				operador[len - 1] = '\0';
				for (iterable = 0; len - 1>= iterable; iterable++)
				{
					operador[iterable] = toupper(operador[iterable]);
				}
			}
			if (strcmp(operador,"TIGO") == 0)
			{
				borrar();
				while (1)
				{
					printf("Ingrese su numero telefonico\n");
					printf("> ");
					fgets(telefono,sizeof(telefono),stdin);
					len = strlen(telefono);
					if (len > 0 && telefono[len - 1] == '\n')
					{
						telefono[len - 1] = '\0'; 
					}
					if (strcmp(telefono,"77889650") == 0)
					{
						break;
					}
					else
					{
						continue;
					}
				}
				recarga_saldo(sueldo_daniel,sueldo_ernesto,user);
				break;
			}
			else if (strcmp(operador,"CLARO") == 0)
			{
				while (1)
				{
					borrar();
					printf("Ingrese su numero telefonico\n");
					printf("> ");
					fgets(telefono,sizeof(telefono),stdin);
					len = strlen(telefono);
					if (len > 0 && telefono[len - 1] == '\n')
					{
						telefono[len - 1] = '\0'; 
					}
					if (strcmp(telefono,"12345678") == 0)
					{
						break;
					}
					else
					{
						continue;
					}
				}
				recarga_saldo(sueldo_daniel,sueldo_ernesto,user);
				break;
			}
			else
			{
				continue;
			}
		}

	}
	else if (strcmp(user,"ernesto") == 0)
	{
		
		while (1)
		{
			borrar();
			printf("elige tu operador\n");
			printf("1. Tigo\n");
			printf("2. Claro\n");
			printf("> ");
			fgets(operador,sizeof(operador),stdin);
			len = strlen(operador);
			if (len > 0 && operador[len - 1] == '\n')
			{
				operador[len - 1] = '\0';
				for (iterable = 0; len - 1>= iterable; iterable++)
				{
					operador[iterable] = toupper(operador[iterable]);
				}
			}
			if (strcmp(operador,"TIGO") == 0)
			{
				while (1)
				{
					borrar();
					printf("Ingrese su numero telefonico\n");
					printf("> ");
					fgets(telefono,sizeof(telefono),stdin);
					len = strlen(telefono);
					if (len > 0 && telefono[len - 1] == '\n')
					{
						telefono[len - 1] = '\0'; 
					}
					if (strcmp(telefono,"77889650") == 0)
					{
						break;
					}
					else
					{
						continue;
					}
				}
				recarga_saldo(sueldo_daniel,sueldo_ernesto,user);
				break;
			}
			else if (strcmp(operador,"CLARO") == 0)
			{
				while (1)
				{
					borrar();
					printf("Ingrese su numero telefonico\n");
					printf("> ");
					fgets(telefono,sizeof(telefono),stdin);
					len = strlen(telefono);
					if (len > 0 && telefono[len - 1] == '\n')
					{
						telefono[len - 1] = '\0'; 
					}
					if (strcmp(telefono,"12345678") == 0)
					{
						break;
					}
					else
					{
						continue;
					}
				}
				recarga_saldo(sueldo_daniel,sueldo_ernesto,user);
				break;
			}
			else
			{
				continue;
			}
		}		
	}
}
void menu_principal(double *sueldo_daniel, double *sueldo_ernesto,char *user)
{
	char opcion[2] = "0",opciones[2] = "0";
	size_t len;
	borrar();
	/*if (strcmp(user, "daniel") == 0)
	{
		printf("hola\n");
		getch();
		exit(0);
	}*/

	while (1)
	{
		borrar();
		printf("1. presentacion\n");
		printf("2. Cajero ATM-UNI\n");
		printf("3. Recarga\n");
		printf("4. salir\n");
		printf("Ingrese un numero segun la accion que desea realizar\n");
		printf("> ");
		fgets(opcion,sizeof(opcion),stdin);
		len = strlen(opcion);
		if (len > 0 && opcion[len - 1] == '\n')
        {
            opcion[len - 1] = '\0';
        }
		if (strcmp(opcion,"1") == 0 || strcmp(opcion,"2") == 0 ||strcmp(opcion,"3") == 0 || strcmp(opcion,"4") == 0)
		{
			break;
		}
	} 
	borrar();
	switch (opcion[0])
	{
		/*
		La función ya espera un puntero, por lo que no necesitas tomar la 
		dirección nuevamente. Aquí tienes cómo debería ser la llamada a 
		la función
		*/
		case '1':
			presentacion();
			break;
		case '2':	
			while (1)
			{
				borrar();
				printf("1. ingresar saldo ala cuenta\n");
				printf("2. retirar saldo cuenta\n");
				printf("3. consultar saldo\n");
				printf("Ingrese un numero segun la accion que desea realizar\n");
				printf("> ");
				fgets(opciones,sizeof(opciones),stdin);
				len = strlen(opciones);
				if (len > 0 && opciones[len - 1] == '\n')
				{
					opciones[len - 1] = '\0';
				}
				if (strcmp(opciones,"1") == 0 || strcmp(opciones,"2") == 0 ||strcmp(opciones,"3") == 0)
				{
					break;
				}
			}
			borrar();
			switch(opciones[0])
			{
			case '1':
				ingresar_saldo_ala_cuenta(sueldo_daniel, sueldo_ernesto,user);
				break;
			case '2':
				retirar_saldo_cuenta(sueldo_daniel,sueldo_ernesto,user);
				break;
			case '3':
				consultar_saldo(sueldo_daniel, sueldo_ernesto,user);
				break;
			}
			break;
		case '3':
			recarga(sueldo_daniel, sueldo_ernesto,user);
			break;
			
		default:
			break;
	}
}

preguntar_al_usuario(double *sueldo_daniel,double *sueldo_ernesto,char *user)
{
	char preguntar[10];
	int iterable;
	size_t len;
	while (1)
	{
		borrar();
		printf("Quieres continuar usando el mismo usuario\n");
		printf("1. si\n");
		printf("2. no\n");
		printf("> ");
		fgets(preguntar,sizeof(preguntar),stdin);
		len = strlen(preguntar);
		if (len > 0 && preguntar[len - 1] == '\n')
		{
			preguntar[len - 1] = '\0';
		}
		for (iterable = 0;len - 1 > iterable;iterable ++)
		{
			preguntar[iterable] = toupper(preguntar[iterable]);
		}
		if (strcmp(preguntar,"SI") == 0)
		{
			menu_principal(sueldo_daniel,sueldo_ernesto,user);
			break;
		}
		else if (strcmp(preguntar,"NO") == 0)
		{
			main();
			break;
		}
		else
		{
			continue;
		}
	}
}

int main() 
{   
    double sueldo_daniel, sueldo_ernesto;
    char *user, *password,preguntar[10];
	int iterable;
	size_t len;
    borrar();
    sueldos(&sueldo_daniel, &sueldo_ernesto);
    /*printf("1 = %lf, 2 = %lf\n", sueldo_daniel, sueldo_ernesto);*/
    user = usuario();
    if (user != NULL)
    {
        borrar();
        password = contrasena(user);
        if (strcmp(user, "daniel") == 0 && strcmp(password, "123") == 0)
        {
            printf("%s: %s ", user,password);
			
			menu_principal(&sueldo_daniel,&sueldo_ernesto,user);
        }
        else if (strcmp(user, "ernesto") == 0 && strcmp(password, "000") == 0)
        {
            printf("%s: %s ", user,password);
			menu_principal(&sueldo_daniel,&sueldo_ernesto,user);
        }
        else
        {
            borrar();
            printf("contrasena incorrecta");
            getch();
            exit(0);
        }      
    }
    else
    {
        borrar();
        printf("por seguridad cerraremos este programa");
        getch();
        exit(0);
    }
	while (1)
	{
		borrar();
		printf("Quieres salir\n");
		printf("1. si\n");
		printf("2. no\n");
		printf("> ");
		fgets(preguntar,sizeof(preguntar),stdin);
		len = strlen(preguntar);
		if (len > 0 && preguntar[len - 1] == '\n')
		{
			preguntar[len - 1] = '\0';
		}
		for (iterable = 0;len - 1 > iterable;iterable ++)
		{
			preguntar[iterable] = toupper(preguntar[iterable]);
		}
		if (strcmp(preguntar,"SI") == 0)
		{
			printf("\nHas salido del programa");
			getch();
			exit(0);
		}
		else if (strcmp(preguntar,"NO") == 0)
		{
			
			preguntar_al_usuario(&sueldo_daniel,&sueldo_ernesto,user);
		}
		else
		{
			continue;
		}
	}
    getch();
    return 0;
}