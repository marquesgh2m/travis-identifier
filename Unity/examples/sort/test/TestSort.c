#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"
#include <time.h>
#include <stdlib.h>

TEST_GROUP(Sort);

// Antes do teste unitario
TEST_SETUP(Sort)
{

}

// Depois do teste unitario
TEST_TEAR_DOWN(Sort)
{
    
}

// Testa elemento a elemento ordenado entre um vetor de entrada e um vetor de saida
TEST(Sort, TestSort1)
{
    int i, n;
    int vector_size = 10;
    int in_vector[vector_size]; // Vetor de entrada
    int out_vector[vector_size]; // Vetor de saida

    // Inicialização com pior caso, ordem decrescente
    for (i=0 ; i<vector_size; i++){
        in_vector[i] = vector_size-i;
        out_vector[i] = vector_size-i;
    }

    // Print dos valores de entrada
    printf("\n\tInput vector:");
    for(n=0;n<vector_size;n++) {
       printf("%d ", in_vector[n]);
    }
    printf("\n");

    sort(out_vector, vector_size);

    // Print dos valores ordenados
    printf("\n\tSorted vector:");
    for(n=0;n<vector_size;n++) {
       printf("%d ", out_vector[n]);
    }
    printf("\n");

    // All of these should pass
    for(n=0;n<vector_size;n++) {
        TEST_ASSERT_EQUAL(in_vector[n], out_vector[vector_size-n-1]);
    }
}

// Testa elemento a elemento ordenado
TEST(Sort, TestSort2)
{
    int i, n;
    int vector_size = 10;
    int in_vector[vector_size]; // Vetor de entrada

    // Inicialização com caso random
    srand(time(NULL));
    for (i=0 ; i<vector_size; i++){
        in_vector[i] = rand() % 100;
    }

    // Print dos valores de entrada
    printf("\n\tInput vector:");
    for(n=0;n<vector_size;n++) {
       printf("%d ", in_vector[n]);
    }
    printf("\n");

    sort(in_vector, vector_size);

    // Print dos valores ordenados
    printf("\n\tSorted vector:");
    for(n=0;n<vector_size;n++) {
       printf("%d ", in_vector[n]);
    }
    printf("\n");

    // All of these should pass
    for(n=0;n<vector_size-1;n++) {
        if(in_vector[n] != in_vector[n+1]){
            TEST_ASSERT_GREATER_THAN(in_vector[n], in_vector[n+1]);
        }
    }
}

TEST(Sort, TestSort3)
{
    int i, n;
    int vector_size = 10;
    int in_vector[vector_size]; // Vetor de entrada

    for (i=0 ; i<vector_size; i++){
        if(i%2==0){
            in_vector[i] = i*2;
        }
        else{
            in_vector[i] = i*3;
        }
    }

    // Print dos valores de entrada
    printf("\n\tInput vector:");
    for(n=0;n<vector_size;n++) {
       printf("%d ", in_vector[n]);
    }
    printf("\n");

    sort(in_vector, vector_size);

    // Print dos valores ordenados
    printf("\n\tSorted vector:");
    for(n=0;n<vector_size;n++) {
       printf("%d ", in_vector[n]);
    }
    printf("\n");

    // All of these should pass
    for(n=0;n<vector_size-1;n++) {
        TEST_ASSERT_GREATER_THAN(in_vector[n], in_vector[n+1]);
    }
}