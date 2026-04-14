#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    long long sum = 0;
    for (long long i = 0; i < 1000000; i++) {
        sum += i;
    }

    end = clock(); 

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("C Result: %lld\n", sum);
    printf("C Time taken: %f seconds\n", cpu_time_used);

    return 0;
}

