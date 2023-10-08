#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TOTAL_REPEATS 1000000000
#define PRINT_INTERVAL 10000000

int main() {
    double x, y; // x, y ÁÂÇ¥
    long long count = 0, inside_circle = 0;

    srand(time(NULL));

    for (count = 1; count <= TOTAL_REPEATS; count++) {
        x = (double)rand() / (double)RAND_MAX;
        y = (double)rand() / (double)RAND_MAX;

        if (x * x + y * y <= 1.0) {
            inside_circle++;
        }

        if (count % PRINT_INTERVAL == 0) {
            double pi_estimate = 4.0 * inside_circle / count;
            printf("After %lld repeats, estimated pi = %f\n", count, pi_estimate);
        }
    }

    double final_pi_estimate = 4.0 * inside_circle / TOTAL_REPEATS;
    printf("Final estimated value of pi after %lld repeats: %f\n", TOTAL_REPEATS, final_pi_estimate);

    return 0;
}
