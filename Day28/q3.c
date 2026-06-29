#include <stdio.h>
#include <string.h>

struct Ticket {
    int ticketNo;
    char name[50];
    int seatNo;
    int booked;
};

int main() {
    struct Ticket t[50];
    int i, choice, seat, found;
    int totalSeats = 50;

    // Initialize all seats as available
    for(i = 0; i < totalSeats; i++) {
        t[i].booked = 0;
        t[i].seatNo = i + 1;
    }

    do {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Display Bookings\n");
        printf("4. Check Available Seats\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Enter Seat Number (1-50): ");
            scanf("%d", &seat);

            if(seat < 1 || seat > 50) {
                printf("Invalid Seat Number!\n");
                break;
            }

            if(t[seat-1].booked == 1) {
                printf("Seat Already Booked!\n");
            } else {
                printf("Enter Ticket Number: ");
                scanf("%d", &t[seat-1].ticketNo);

                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", t[seat-1].name);

                t[seat-1].booked = 1;

                printf("Ticket Booked Successfully!\n");
            }
            break;

        case 2:
            printf("Enter Seat Number to Cancel: ");
            scanf("%d", &seat);

            if(seat < 1 || seat > 50) {
                printf("Invalid Seat Number!\n");
                break;
            }

            if(t[seat-1].booked == 1) {
                t[seat-1].booked = 0;
                printf("Ticket Cancelled Successfully!\n");
            } else {
                printf("Seat is Already Available!\n");
            }
            break;

        case 3:
            found = 0;
            printf("\nBooked Tickets:\n");

            for(i = 0; i < totalSeats; i++) {
                if(t[i].booked == 1) {
                    printf("\nTicket No : %d", t[i].ticketNo);
                    printf("\nPassenger : %s", t[i].name);
                    printf("\nSeat No   : %d\n", t[i].seatNo);
                    found = 1;
                }
            }

            if(found == 0)
                printf("No Bookings Found!\n");

            break;

        case 4:
            printf("\nAvailable Seats: ");
            for(i = 0; i < totalSeats; i++) {
                if(t[i].booked == 0)
                    printf("%d ", t[i].seatNo);
            }
            printf("\n");
            break;

        case 5:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}