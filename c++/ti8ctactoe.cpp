#include <iostream>

using namespace std;

int tablero[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

int verificarGanador() {
    // Verificar filas y columnas
    for (int i = 0; i < 3; i++) {
        if (tablero[i * 3] == tablero[i * 3 + 1] && tablero[i * 3 + 1] == tablero[i * 3 + 2] && tablero[i * 3] != 0)
            return tablero[i * 3];
        if (tablero[i] == tablero[i + 3] && tablero[i] == tablero[i + 6] && tablero[i] != 0)
            return tablero[i];
    }
   
    if ((tablero[0] == tablero[4] && tablero[4] == tablero[8] && tablero[4] != 0) || 
        (tablero[2] == tablero[4] && tablero[4] == tablero[6] && tablero[4] != 0))
        return tablero[4];

    return 0;
}

void marcar(int jugador, int caja) {
    tablero[caja] = jugador; 
}

void mostrarTablero() {
    for (int i = 0; i < 9; i++) {
        cout << tablero[i] << "\t";
        if (i == 2 || i == 5 || i == 8)
            cout << "\n";
    }
}

int encontrarMovimiento(int ultimoMovimiento) {
    // Intenta colocar un '2' al lado de las jugadas del usuario 
    if (ultimoMovimiento > 0 && tablero[ultimoMovimiento - 1] == 0) {
        return ultimoMovimiento - 1; 
    }
    if (ultimoMovimiento < 8 && tablero[ultimoMovimiento + 1] == 0) {
        return ultimoMovimiento + 1;
    }
    return -1;
}

int main() {
    int jugador1 = 1, jugador2 = 2;
    int caja, resultado = 0, bandera = 0;

    for (int i = 1; i <= 5; i++) {
      
        cout << "\nJugador " << jugador1 << ", ingresa un número en formato 0-8: ";
        cin >> caja;

        // Verificar las casillas 
        if (caja < 0 || caja > 8 || tablero[caja] != 0) {
            cout << "Movimiento inválido.Casilla ocupada o inexistente";
            i--; // Volver a intentar el turno
            continue;
        }

        marcar(jugador1, caja);
        mostrarTablero();

        // Movimiento de la computadora
        int movimientoComputadora = encontrarMovimiento(caja);
        if (movimientoComputadora != -1) {
            marcar(jugador2, movimientoComputadora);
            cout << "\nLa computadora colocó '2' en la caja " << movimientoComputadora << ".";
            mostrarTablero();
            resultado = verificarGanador();
            if (resultado != 0) {
                cout << "ha ganado el jugador";
            }
        } else {
            cout << "No hay movimiento válido para la máquina";
          
        }
    }
    return 0;
}