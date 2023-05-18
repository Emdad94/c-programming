#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Green part of the flag
    setcolor(GREEN);
    rectangle(0, 0, 630, 420);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(1, 1, GREEN);

    // Red circle in the middle
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(315, 210, 120);
    floodfill(315, 210, RED);

    getch();
    closegraph();
    return 0;
}
