#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void mostrarTablero(char tablero[3][3]);
int posiciones_tablero(char tablero[3][3]);
int jugada_Usuario(int posiciones_tablero());
int jugada_PC(int posiciones_tablero());
int Ganador(int posiciones_tablero());
int partidaFinalizada(char tablero [3][3]);
int Instrucciones();

int main()
{
    system("COLOR 57");
     int fila=10,tecla;
 // MENU

    textcolor(WHITE);gotoxy(33,6);printf("TA-TE-TI");
    textcolor(WHITE);gotoxy(33,8);printf("by : Tatiana Viera.");
    gotoxy(33,10); printf("JUGAR");
    gotoxy(33,12); printf("INSTRUCCIONES");
    gotoxy(33,14); printf("SALIR");
    gotoxy(33,10); printf(">");


        //flechas  arriba o abajo, en el menu, de ">".
        while (tecla!=13)
        {
            if(kbhit())
            {
                tecla=getch();
                if (tecla==38 || tecla == 0) // Desplazamiento hacia arriba
                {
                    if (fila>10)
                    {
                        gotoxy(31,fila); printf(" ");
                        fila=fila-2;
                        gotoxy(31,fila); printf(">");
                    }


                }
                if (tecla==40|| tecla == 0) // Desplazamiento hacia abajo
                {

                         if (fila<14)
                    {
                        gotoxy(31,fila); printf(" ");
                        fila=fila+2;
                        gotoxy(31,fila); printf(">");
                    }


                }

                while(tecla==13) // Que hacer dependiendo de la eleccion del usuario.
                {
                    switch(fila)
                    {
                    case 10:  //Caso que elija JUGAR
                        fila = 10;
                        system("cls");
                        jugada_Usuario( posiciones_tablero());
                        return 0;

                    case 12:  //Caso que elija INSTRUCCIONES
                       intrucciones();
                        return 0;


                    case 14: //Caso que elija SALIR
                        return 0; //Terminar Programa.
                    }
                }
            }
        }

    char tablero[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            tablero[3][3]=tablero[i][j];
        }
    }

    tablero[eleccionUsuario()] = 'O';
    mostrarTablero( tablero[][]);
    posiciones_tablero( tablero[][]);
    jugada_Usuario( posiciones_tablero());
    jugada_PC( posiciones_tablero());
    Ganador( posiciones_tablero());
    
while (partidaFinalizada(tablero)== 1)
    {
      jugada_Usuario( posiciones_tablero());
        mostrarTablero( tablero[][]);
      jugada_PC( posiciones_tablero());
       mostrarTablero( tablero[][]);
    }
    return 0;
}


int Instrucciones()
{
     system("cls"); printf("el juego del ta-te-ti consiste en hacer tres en raya y no dejar que el contrincante gane haciendo tres en raya. El usurio es el O y la maquina la X ,si llenas tres casillero con el O en cualquier parte del tablero ganas, si la maquina hace tres en raya perdes, si ninguno hace tres en raya es un empate.");
     printf("Para  colocar la O en cualquier parte del tablero: el juego preguntara 'donde desea poner 'O' del 1 al 9' ,eso significa que tiene que poner un numero del 1 al 9 porque hay 9 casilleros ,el numero que ponga es la posicion donde se colocara la 'O'");
}

void mostrarTablero(char tablero[3][3])
{
    printf(" %C | %C | %C\n", tablero[0][0], tablero[0][1], tablero[0][2]);
    printf("---|---|---\n");
    printf(" %C | %C | %C\n", tablero[1][0], tablero[1][1], tablero[1][2]);
    printf("---|---|---\n");
    printf(" %C | %C | %C\n", tablero[2][0], tablero[2][1], tablero[2][2]);
    printf("\n");
    return;
}

int posiciones_tablero(char tablero[3][3])//posicion de cada espacio en el tablero
{
    int posicion_1 = tablero[0][0];
    int posicion_2 = tablero[0][1];
    int posicion_3 = tablero[0][2];
    int posicion_4 = tablero[1][0];
    int posicion_5 = tablero[1][1];
    int posicion_6 = tablero[1][2];
    int posicion_7 = tablero[2][0];
    int posicion_8 = tablero[2][1];
    int posicion_9 = tablero[2][2];
}

int jugada_Usuario(int posiciones_tablero)
{
    int eleccion = 0;
    printf("¿Donde desea poner '0' (1-9)? \n");
    scanf("%d", &eleccion);
    return eleccion - 1;

    if(eleccion== 1)
    {
        posicion_1='O';
    }
    if(eleccion== 2)
    {
        posicion_2='O';
    }
    if(eleccion== 3)
    {
        posicion_3='O';
    }
     if(eleccion== 4)
    {
        posicion_4='O';
    }
     if(eleccion== 5)
    {
        posicion_5='O';
    }
     if(eleccion== 6)
    {
        posicion_6='O';
    }
     if(eleccion== 7)
    {
        posicion_7='O';
    }
     if(eleccion== 8)
    {
        posicion_8='O';
    }
     if(eleccion== 9)
    {
        posicion_9='O';
    }

}

int jugada_PC (int posiciones_tablero)
{
    //JUGADA COLUMNA 1

    if(posicion_1 == 'O' &&  posicion_2 == 'O' )
    {
        posicion_3= 'X';
    }
    if(posicion_1 == 'O' && posicion_3 == 'O')
    {
        posicion_2= 'X';
    }
    if(posicion_2== 'O' && posicion_3 == 'O')
    {
        posicion_1= 'X';
    }

    //JUGADA COLUMNA 2

    if(posicion_4== 'O' && posicion_5== 'O')
    {
        posicion_6='X';
    }
    if(posicion_4== 'O' && posicion_6== 'O')
    {
        posicion_5= 'X';
    }
    if(posicion_5== 'O' && posicion_6 == 'O')
    {
        posicion_4= 'X';
    }

    //JUGADA COLUMNA 3

    if(posicion_7== 'O' && posicion_8=='O')
    {
        posicion_9='X';
    }
    if(posicion_7== 'O' && posicion_9=='O')
    {
        posicion_8='X';
    }
    if(posicion_8== 'O' && posicion_9=='O')
    {
        posicion_7='X';
    }

    //JUGADA FILA 1

    if(posicion_1== 'O' && posicion_4=='O')
    {
        posicion_7='X';
    }
    if(posicion_1== 'O' && posicion_7=='O')
    {
        posicion_4='X';
    }
    if(posicion_4== 'O' && posicion_7=='O')
    {
        posicion_1='X';
    }

    //JUGADA FILA 2

    if(posicion_2== 'O' && posicion_5=='O')
    {
        posicion_8='X';
    }
    if(posicion_2== 'O' && posicion_8='O')
    {
        posicion_5='X';
    }
    if(posicion_5== 'O' && posicion_8=='O')
    {
        posicion_2='X';
    }

    //JUGADA FILA 3

    if(posicion_3== 'O' && posicion_6=='O')
    {
        posicion_9='X';
    }
    if(posicion_3== 'O' && posicion_9=='O')
    {
        posicion_6='X';
    }
    if(posicion_6== 'O' && posicion_9=='O')
    {
        posicion_3='X';
    }

    //JUGADA DIAGONAL 1

    if(posicion_1== 'O' && posicion_9=='O')
    {
        posicion_5='X';
    }
    if(posicion_1== 'O' && posicion_5=='O')
    {
        posicion_9='X';
    }
    if(posicion_5== 'O' && posicion_9=='O')
    {
        posicion_1='X';
    }

    // JUGADA DIAGONAL 2

    if(posicion_3== 'O' && posicion_7=='O')
    {
        posicion_5='X';
    }
    if(posicion_7== 'O' && posicion_5=='O')
    {
        posicion_3='X';
    }
    if(posicion_5== 'O' && posicion_3=='O')
    {
        posicion_7='X';
    }

}


int partidaFinalizada(char tablero [3][3]);
{
    return (  Ganador(posiciones_tablero())  );

}

int Ganador(int posiciones_tablero())
{
    

    if(posicion_1 =='O' && posicion_2=='O' && posicion_3='O' || posicion_4=='O' && posicion_5=='O' && posicion_6=='O' || posicion_7=='O' && posicion_8=='O' && posicion_9=='O')
    {
        textcolor(GREEN);printf("GANASTE");
        return 0;
    }
     if(posicion_1=='O' && posicion_4=='O' && posicion_7=='O' || posicion_2=='O' && posicion_5=='O' && posicion_8=='O' || posicion_3=='O' && posicion_6=='O' && posicion_9=='O')
    {
         textcolor(GREEN);printf("GANASTE");
        return 0;
    }
     if(posicion_1=='O' && posicion_5=='O' && posicion_9=='O' || posicion_3=='O' && posicion_5=='O' && posicion_7=='O')
    {
      textcolor(GREEN);printf("GANASTE");
        return 0;
    }
    else
    {
         textcolor(RED);printf("PERDISTE");
        return 1;
    }


}














