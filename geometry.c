#include <stdio.h>
#include <string.h>

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
                &circle[i].center.x, 
                &circle[i].center.y,
                &circle[i].radius); /* Присваиваем окружности значения его центра и радиуса */
            printf("%s[%d] (%d %d, %d)\n", type, i, 
                circle[i].center.x, 
                circle[i].center.y, 
                circle[i].radius);
        } else {
            printf("Error: '%s' - unknown shape\n", type);
        }
        i++;
    }

    return 0;
}