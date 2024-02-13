#include <stdio.h>



int main() 
{
    int K, N;
    printf("Enter the number of arrays (K): ");
    scanf("%d", &K);
    printf("Enter the size of each array (N): ");
    scanf("%d", &N);

    int arrays[K][N];

    printf("Enter the elements of %d arrays of size %d:\n", K, N);
    for (int i = 0; i < K; i++) 
    {
        printf("Array %d: ", i + 1);
        for (int j = 0; j < N; j++) 
        {
            scanf("%d", &arrays[i][j]);
        }
    }

    int output[K * N];

    int indices[K];

    for (int i = 0; i < K * N; i++) {
        int min_val = __INT_MAX__, min_index = -1;

        for (int j = 0; j < K; j++) {
            if (indices[j] < N && arrays[j][indices[j]] < min_val) 
            {
                min_val = arrays[j][indices[j]];
                min_index = j;
            }
        }

        // Update output array and move index forward
        output[i] = min_val;
        indices[min_index]++;
    }

    printf("Merged array: ");
    for (int i = 0; i < K * N; i++)
    {
        printf("%d ", output[i]);
    }
    printf("\n");

}
