/*
Day: 82
Question: Q132
Title: Traffic Lights Enum
Problem:
Define an enum for traffic lights (RED, YELLOW, GREEN) and print "Stop", "Wait", or "Go" based on its value.
*/

#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main(void)
{
    enum TrafficLight light;

    printf("Enter light (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", (int *)&light);

    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid light\n");
    }

    return 0;
}
