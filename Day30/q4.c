#include <stdio.h>
#include <string.h>
struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};
struct Item item[100];
int n = 0;
void addItem();
void displayItems();
void searchItem();
void generateBill();
int main()
{
    int choice;
    do
    {
        printf("\n===== GROCERY BILLING SYSTEM =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Generate Bill\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                addItem();
                break;
            case 2:
                displayItems();
                break;
            case 3:
                searchItem();
                break;
            case 4:
                generateBill();
                break;
case 5:
                printf("Thank You!\n");
                break;
           default:
                printf("Invalid Choice!\n");
        }
    }while(choice!=5);
    return 0;
}
void addItem()
{
    printf("\nEnter Item ID: ");
    scanf("%d",&item[n].id);
    printf("Enter Item Name: ");
    scanf(" %[^\n]",item[n].name);
    printf("Enter Quantity: ");
    scanf("%d",&item[n].quantity);
    printf("Enter Price: ");
    scanf("%f",&item[n].price);
    n++;
    printf("Item Added Successfully!\n");
}
void displayItems()
{
    int i;
    if(n==0)
    {
        printf("No Items Available!\n");
        return;
    }
    printf("\n----- ITEM LIST -----\n");
    for(i=0;i<n;i++)
    {
        printf("\nItem ID   : %d",item[i].id);
        printf("\nItem Name : %s",item[i].name);
        printf("\nQuantity  : %d",item[i].quantity);
        printf("\nPrice     : %.2f\n",item[i].price);
    }
}
void searchItem()
{
    int id,i,found=0;
    printf("Enter Item ID: ");
    scanf("%d",&id);
    for(i=0;i<n;i++)
    {
        if(item[i].id==id)
        {
            printf("\nItem Found!\n");
            printf("Item ID   : %d\n",item[i].id);
            printf("Item Name : %s\n",item[i].name);
            printf("Quantity  : %d\n",item[i].quantity);
            printf("Price     : %.2f\n",item[i].price);
            found=1;
            break;
        }
    }
    if(found==0)
        printf("Item Not Found!\n");
}
void generateBill()
{
    int i;
    float total=0;
    if(n==0)
    {
        printf("No Items Available!\n");
        return;
    }
    printf("\n========== BILL ==========\n");
    printf("%-15s %-10s %-10s %-10s\n","Item","Qty","Price","Total");
    for(i=0;i<n;i++)
    {
        float amount=item[i].quantity*item[i].price;
        printf("%-15s %-10d %-10.2f %-10.2f\n",
               item[i].name,
               item[i].quantity,
               item[i].price,
               amount);
        total+=amount;
    }
 printf("\nGrand Total = %.2f\n",total);
}