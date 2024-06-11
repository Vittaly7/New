/*#include <stdio.h>

int main ()
{
    char name[100];
    printf("Type a name: ");
    fgets(name, 100, stdin);
    //scanf("%100s", name);
    printf("Hello, %s\n", name);

    return 0;
}
// Java
/*print('Type a name: ')
  name = input()
  print('Hello', name)*/

  //Как прочитать файл на рабочем столе?
 /* #include <stdio.h>

  int main()
  {
    char line[1000];
    FILE *hand;
    hand = fopen("TED vocab.docx", "r");
    while(fgets(line, 1000, hand) != NULL){
        printf("%s", line);
    }
    return 0;
  }*/
  #include <stdio.h>

  int main()
  {
      int Bingo = 174;
      int input = 0;
      while(Bingo != input){
          scanf("%d", &input);
          if(input == Bingo){
            printf("Well done!");
            break;
          }
          else if(input < Bingo) printf("Higher!");
          else printf("Lower!");
          }
  }