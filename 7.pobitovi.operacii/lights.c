#include<stdio.h>

void print_state(unsigned char lights){
    for (int i = sizeof(lights) * 8 - 1; i >= 0; i--) {
    printf("%u", (lights >> i) & 1);
  }
  printf("\n");

}

int main(){

    unsigned char lights = 0;
    int choice, room;
    
    while (1) {
        printf(" Menu:\n");
        printf("1. Switch lights\n");
        printf("2. Print lights\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    


    switch(choice){

        case 1: printf("Enter room: "); scanf("%d",&room); lights ^= (1 << (room - 1)); break;

        case 2: print_state(lights); break;

        case 3: printf("Exiting program"); return 0; break;

        default: printf("Invalid choice!\n");

    }

    }

}