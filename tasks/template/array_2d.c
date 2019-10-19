#include <stdio.h>
#include <math.h>
#include <memory.h>
#include <stdlib.h>
#include <assert.h>

void print_matrix(int* matrix, int rows, int cols) {
}

void print_img(int* matrix, int rows, int cols) {
}

void draw_star(int *matrix, int rows, int cols) {
  // pro vykresleni hvezdice musi platit rows == cols
  // pro procviceni indexu ale predpokladejte ze to neplati (pouzivejte row * cols + col)

  for(int i = 0; i < rows /* nebo cols */; i++) {
    // TODO: svisla cara uprostred
    // matrix[...] = 'X';

    // TODO: vodorovna cara uprostred
    // matrix[...] = 'X';

    // TODO: hlavni diagonala
    // matrix[...] = 'X';

    // TODO: vedlejsi diagonala
    // matrix[...] = 'X';
  }
}

void matrix_mul_scalar(int* matrix, int rows, int cols, int k) {
}

int* matrix_mul_vec(int* matrix, int rows, int cols, int *vec, int len) {
}

/**
 * Funkce otestuje, ze jsou Vase funkce spravne naimplementovany
 * kodu neni potreba uplne rozumet
 *
 * v pripade chybne implementace funkce se vypise napr:
 * array_1d: array_1d.c:168: run_tests: Assertion `memcmp(nums, expected, sizeof(expected)) == 0' failed.
 * test na radku 168 neprosel a je nutne zjistit proc
 *  - vypsat si hodnotu napr. pomoci printf - v tomto pripade print_array(nums, sizeof(nums) / sizeof(*nums));
 *  - podivat se na hodnotu nums v debuggeru
 */
void run_tests() {
  {
    int expected[] = {
      'X', ' ', ' ', ' ', ' ', 'X', ' ', ' ', ' ', ' ', 'X',
      ' ', 'X', ' ', ' ', ' ', 'X', ' ', ' ', ' ', 'X', ' ',
      ' ', ' ', 'X', ' ', ' ', 'X', ' ', ' ', 'X', ' ', ' ',
      ' ', ' ', ' ', 'X', ' ', 'X', ' ', 'X', ' ', ' ', ' ',
      ' ', ' ', ' ', ' ', 'X', 'X', 'X', ' ', ' ', ' ', ' ',
      'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X',
      ' ', ' ', ' ', ' ', 'X', 'X', 'X', ' ', ' ', ' ', ' ',
      ' ', ' ', ' ', 'X', ' ', 'X', ' ', 'X', ' ', ' ', ' ',
      ' ', ' ', 'X', ' ', ' ', 'X', ' ', ' ', 'X', ' ', ' ',
      ' ', 'X', ' ', ' ', ' ', 'X', ' ', ' ', ' ', 'X', ' ',
      'X', ' ', ' ', ' ', ' ', 'X', ' ', ' ', ' ', ' ', 'X',
    };


    int N = 11;
    int *img = (int*) malloc(sizeof(int) * N * N);

    // vymazani obrazku
    for(int i = 0; i < N * N; i++) {
      img[i] = ' ';
    }

    draw_star(img, N, N);
    print_img(img, N, N);
    assert(memcmp(img, expected, sizeof(expected)) == 0);

    free(img);
  }

  {
    {
      int matrix[] = {
        3, 5, 7,
        1, 2, 8,
        2, 3, 1
      };

      int k = 4;
      int expected[] = {
        3*k, 5*k, 7*k,
        1*k, 2*k, 8*k,
        2*k, 3*k, 1*k
      };

      matrix_mul_scalar(matrix, 3, 3, k);
      assert(memcmp(matrix, expected, sizeof(expected)) == 0);
    }
    {
      int matrix[] = {
        3, 5, 7,
        1, 2, 8,
      };

      int k = 4;
      int expected[] = {
        3*k, 5*k, 7*k,
        1*k, 2*k, 8*k,
      };

      matrix_mul_scalar(matrix, 2, 3, k);
      assert(memcmp(matrix, expected, sizeof(expected)) == 0);
    }
  }

  {
    int matrix[] = {
      1, 2, 3,
      4, 5, 6,
      7, 8, 9,
    };
    int vector[] = {10, 20, 30};
    int expected[] = {140, 320, 500};


    printf("======= matrix_mul_vec =======\n");
    print_matrix(matrix, 3, 3);
    printf("multiply by: \n");
    print_matrix(vector, 3, 1);

    int* result = matrix_mul_vec(matrix, 3, 3, vector, 3);
    assert(result);
    printf("result: \n");
    print_matrix(result, 3, 1);
    assert(memcmp(result, expected, sizeof(expected)) == 0);

    free(result);
  }

  printf("OK\n");
}

int main() {
  run_tests();

  return 0;
}
