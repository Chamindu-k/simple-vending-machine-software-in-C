#include <stdio.h>
#include <stdlib.h>
// ITEAM PRICES
#define ITEM1_PRICE 2.50
#define ITEM2_PRICE 3.20
#define ITEM3_PRICE 1.00
#define ITEM4_PRICE 5.00

// DISPLAY THE MENU
void displayMenu(){
printf("\nWelocome to the vending machine!!\n");
printf("1.Item 1 -$%2f\n",ITEM1_PRICE);
printf("2.Item 2 -$%2f\n",ITEM2_PRICE);
printf("3.Item 3 -$%2f\n",ITEM3_PRICE);
printf("4.Item 4 -$%2f\n",ITEM4_PRICE);
}

int main(){
int choice;
float payment,price,change;

while (1){
    displayMenu();
    printf("please select an item(1-5):");
    scanf("%d" , &choice);

    if (choice==5){
        printf("Thank you for using this machine. Have a Nice Day!!");
        break;
    }

    switch(choice){
        case 1:
          price = ITEM1_PRICE;
          break;
        case 2:
          price = ITEM2_PRICE;
          break;
        case 3:
          price = ITEM3_PRICE;
          break;
        case 4:
          price = ITEM4_PRICE;
          break;
        default:
            printf("Invalid selection please try again\n");
            continue;
    }
    // payment
      printf("please enter your payment: $");
      scanf("%f", &payment);

    // check the payment
     if (payment < price){
        printf("Insufficient payment. Please insert more money.\n");
     }  else {
      // calculate and display the change
      change=payment-price;
      printf("your change is $%f\n have a nice day !!",change);
     }


}

  return 0;
}
