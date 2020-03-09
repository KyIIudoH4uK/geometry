#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point center;
    int radius;
    float area;
    float perimetr;
} Circle;

int main() {
    Circle circle[10];
    char type[10];
    int i = 0;
    
    FILE *file;
    file = fopen("figures.txt", "r");

    while ((fscanf(file, "%s", type)) != EOF) { /* Считываем название фигуры */
        if((strcmp(type, "circle")) == 0) { /* Проверяем, является ли фигура окружностью */
            fscanf(file, " (%d %d, %d)", 
                &circle[num_of_c].center.x, 
                &circle[num_of_c].center.y,
                &circle[num_of_c].radius); /* Присваиваем окружности значения его центра и радиуса */
            printf("%s[%d] (%d %d, %d)", type, i, 
                &circle[num_of_c].center.x, 
                &circle[num_of_c].center.y, 
                &circle[num_of_c].radius);
        } else {
            printf("Error: '%s'? Unknown shape\n", type);
        }
}