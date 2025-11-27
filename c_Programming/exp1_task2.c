#include <stdio.h>

int main() {
    float phy, chem, math, avg;

    printf("Enter marks for Physics: ");
    scanf("%f", &phy);
    printf("Enter marks for Chemistry: ");
    scanf("%f", &chem);
    printf("Enter marks for Mathematics: ");
    scanf("%f", &math);

    avg = (phy + chem + math) / 3;

    printf("Average marks: %.2f\n", avg);

    (avg >= 50) ? printf("Eligible for admission.\n") : printf("Not eligible for admission.\n");

    return 0;
}
