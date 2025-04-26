#include <stdio.h>
#define PI 3.14159265359

int main(void)
{
    int choice;
    double radius, height, volume;

    printf("Choose a shape:\n");
    printf("1 - Cuboid\n");
    printf("2 - Hemisphere\n");
    printf("3 - Sphere\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        double length, width;
        printf("Enter length: ");
        scanf("%lf", &length);
        printf("Enter width: ");
        scanf("%lf", &width);
        printf("Enter height: ");
        scanf("%lf", &height);
        volume = length * width * height;
    }
    else if (choice == 2)
    {
        printf("Enter radius: ");
        scanf("%lf", &radius);
        volume = (2.0 / 3.0) * PI * radius * radius * radius;
    }
    else if (choice == 3)
    {
        printf("Enter radius: ");
        scanf("%lf", &radius);
        volume = (4.0 / 3.0) * PI * radius * radius * radius;
    }
    else
    {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Volume = %.2lf\n", volume);

    return 0;
}