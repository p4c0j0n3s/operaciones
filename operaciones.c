#include <stdio.h>

int sumar(int a, int b){

  return a + b;
}

int main(int argc, char const *argv[]){

  // OPERACIONES
  int suma;

  suma = sumar(10, 5);

  printf("Suma: %d\n", suma);

  return 0;

}
