#include<stdio.h>
#include<stdlib.h>
#DEFINE MAX_BOOKS 100;

int addbook(int *book_count, char *books[], int max_books){
  if(*book_count > max_books){
    printf("Book library is full!!\n");
    return 0;
  }
  char name[100];
  printf("Enter book name: ");
  getchar();
  fgets(name,sizeof(name),stdin);
  name[strcspn(name,"\n")] = "\0";
  books[*book_count] = (char*)malloc(strlen(name)+1);
  strcpy(books[*book_count],name);
  (*book_count)++;
  printf("Book %s",name," added succesfully.\n");
  return 1;
}

int displaybook(int *book_count, char *books[], int max_books){
  if(*book_count <=0){
    printf("No books in the library to display!");
    return 0;
  }
  char *b_name;
  printf("Enter the book to check: ");
  fgets(b_name,sizeof(b_name),stdin);
  for(int i=0;i<*book_count;i++){
    if(books[*book_count] == b_name){
      printf("Yes, %s book is available..",b_name);
    }else{
      printf("Sorry, %s book is not available",b_name);
    }
  }
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
