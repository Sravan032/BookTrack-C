#include<stdio.h>
#include<stdlib.h>

int main(){
  int choice;
  printf("Hello User..\n");
  printf("\tDisplay\t");
  printf("""1.Add book
            2.Display books
            3.Remove book
            4.Exit""");
  scanf("%d", &choice);

  switch(choice){
    case 1:
      addbook();
      break;

    case 2:
      displaybook();
      break;

    case 3:
      removebook();
      break;

    case 4:
      exit(0);
      break;

    default:
      printf("Please select from above options only.");
  }
}
