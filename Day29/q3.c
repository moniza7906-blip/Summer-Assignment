#include <stdio.h>

int main() {
    int arr[100], n, i, choice;
    int largest, smallest, sum = 0;
    int search, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n===== MENU DRIVEN ARRAY OPERATIONS =====\n");
        printf("1. Display Array\n");
        printf("2. Find Largest Element\n");
        printf("3. Find Smallest Element\n");
        printf("4. Calculate Sum\n");
        printf("5. Calculate Average\n");
        printf("6. Search an Element\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Array Elements: ");
            for(i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 2:
            largest = arr[0];
            for(i = 1; i < n; i++) {
                if(arr[i] > largest)
                    largest = arr[i];
            }
            printf("Largest Element = %d\n", largest);
            break;

        case 3:
            smallest = arr[0];
            for(i = 1; i < n; i++) {
                if(arr[i] < smallest)
                    smallest = arr[i];
            }
            printf("Smallest Element = %d\n", smallest);
            break;

        case 4:
            sum = 0;
            for(i = 0; i < n; i++) {
                sum += arr[i];
            }
            printf("Sum = %d\n", sum);
            break;

        case 5:
            sum = 0;
            for(i = 0; i < n; i++) {
                sum += arr[i];
            }
            printf("Average = %.2f\n", (float)sum / n);
            break;

        case 6:
            printf("Enter element to search: ");
            scanf("%d", &search);

            found = 0;
            for(i = 0; i < n; i++) {
                if(arr[i] == search) {
                    printf("Element found at position %d\n", i + 1);
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Element not found.\n");
            break;

        case 7:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}