#include <stdio.h>

int sumar(int a, int b){

  return a + b;
}

int restar(int a, int b){
  // Operacion resta
  return a - b;
}

int main(int argc, char const *argv[]){

  // OPERACIONES
  int suma, resta;

  suma = sumar(10, 5);
  resta = restar(10, 3);

  printf("Suma: %d\n", suma);
  printf("Resta: %d\n", resta);

  return 0;

}
