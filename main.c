#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct carrg {
    int seats[30];
    float prices[3];
    int seat_class[3];
};
int main() {

    float prof;
    int counter;
    int chosenseat;
    int chooser;
    int carrage_number;
    struct carrg num[3];

    //the carriage#1 details
    printf("enter the #carriage 1 class \n");
    scanf("%d", &num[0].seat_class[0]);
    printf("enter the #carriage 1 price\n ");
    scanf("%f", &num[0].prices[0]);

    //the carriage#2 details
    printf("enter the #carriage 2 class \n");
    scanf("%d", &num[1].seat_class[0]);
    printf("enter the #carriage 2 price \n");
    scanf("%f", &num[1].prices[0]);
    //the carriage#3 details
    printf("enter the #carriage 3 class \n");
    scanf("%d", &num[2].seat_class[2]);
    printf("enter the #carriage 3 price \n");
    scanf("%f", &num[2].prices[0]);

    for (int i = 0; i < 30; i++) {
        num[0].seats[i] = i + 1;
        num[1].seats[i] = i + 1;
        num[2].seats[i] = i + 1;
    }
    for (;;) {
        printf("enter the number of the prosecces you want\n");
        printf("1-reservation\n");
        printf("2-show available seats\n");
        printf("3-cancel the ticket\n");
        printf("4-profit\n");
        printf("5-exit\n");
        scanf("%d", &chooser);
    
        if (chooser == 1) {
            //CHOOSing SEATS
            printf("choose between the carrges 1-3\n");
            scanf("%d", &carrage_number);
            carrage_number -= 1;
            printf("enter the number of the seats between 1-30 ");
            scanf("%d", &chosenseat);
            chosenseat -= 1;
            if (0 <= chosenseat && chosenseat < 30 && num[carrage_number].seats[chosenseat] == 0)
            {
                printf("\n the chair is already taken");
                continue;
            }

            else if (0 <= num[carrage_number].seats[chosenseat] && num[carrage_number].seats[chosenseat] < 32)
            {
                printf("\nthe ticket has been reserved successfully\n");
                num[carrage_number].seats[chosenseat] = 0;
                continue;
            }
            else { printf("error\n"); }
        }
        else if (chooser == 2) {
            for (int j = 0; j < sizeof(num) / sizeof(num[0]); j++) {
                printf("\n carriage %d\n", j + 1);
                for (int k = 0; k < sizeof(num[0].seats) / sizeof(num[0].seats[0]); k++)
                    printf("\n%d\n", num[j].seats[k]);
            }
        }
        else if (chooser == 3) {
            printf("\n enter the carriage number\n");
            scanf("%d", &carrage_number);

            carrage_number -= 1;
            printf(" enter the ticket number\n");

            scanf("%d", &chosenseat);
            chosenseat -= 1;
            if (num[carrage_number].seats[chosenseat] != 0)
            {
                printf("wrong number the ticket is already available");
                continue;
            }
            else {
                num[carrage_number].seats[chosenseat] = chosenseat + 1;
                printf("\n canceling is complete\n");
                continue;
            }

        }
        //profit
        else if (chooser == 4) {
            prof = 0;

            for (int a = 0; a < 3; a++) {
                counter = 0;

                for (int b = 0; b < 30; b++) {
                    if (num[a].seats[b] == 0) {
                        counter = counter + 1;
                    }
                }
                prof = prof + (num[a].prices[0] * counter);
            }

            printf("\n the profit of the day is %f\n", prof);

        }

        else if (chooser == 5) {
            break;
        }

    }
    return 0;
}

