#include <stdio.h>
#include <omp.h>

int main() {
    double start_time = omp_get_wtime();

    printf("Brincando\n");

    double end_time = omp_get_wtime();
    double elapsed_time = end_time - start_time;
    printf("Tempo de execução: %.6f segundos\n", elapsed_time);

    return 0;
}

