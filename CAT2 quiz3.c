#include <stdio.h>

int main() {
  
    int scores1[2][2] = {
        {65, 92},
        {84, 72}
    };

  
    int scores2[2][2] = {
        {35, 70},
        {59, 67}
    };

 
    printf("Scores1:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores1[i][j]);
        }
        printf("\n"); 
    }

 
    printf("\nScores2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores2[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}