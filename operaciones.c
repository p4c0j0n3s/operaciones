#include <stdio.h>
#include "multiplicar.h"
#include "restar.h"

int sumar(int a, int b){
  // Operacion suma
  return a + b;
}



int main(int argc, char const *argv[]){

  // OPERACIONES
  int suma, resta, multiplicacion;

  suma = sumar(10, 5);
  resta = restar(10, 3);
  multiplicacion = multiplicar(5, 7);

  printf("Suma: %d\n", suma);
  printf("Resta: %d\n", resta);
  printf("Multiplicacion: %d\n", multiplicacion);

  return 0;

}
