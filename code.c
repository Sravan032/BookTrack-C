#include<stdio.h>
#include<stdlib.h>

int addbook(int *book_count, char *books[], max_books){
  if(*book_count > max_books){
    printf("Book library is full!!\n");
    returnn 0;
  }
  char *name;
  printf("Enter book name: ");
  fgets(name,sizeof(name),stdin);
  books[*book_count] = (char*)malloc(sizeof(name)+1);
  strcpy(books[*book_count],name);
  *book_count++;
  printf("Book %s",name," added succesfully.\n");
  return 1;
}

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
