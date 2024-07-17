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
  /*#include <stdio.h>

  int main()
  {
      int Bingo = 174;
      int input = 0;
      char bing = '\a';
      while(Bingo != input){
          printf("%c", bing);
          scanf("%d", &input);
          if(input == Bingo){
            printf("Well done!");
            break;
          }
          else if(input < Bingo) printf("Higher!");
          else printf("Lower!");
          }
    return 0;
  }*/
  //write a function that counts the number of charactors in a string
/*#include <stdio.h>

int strlength(char string[]);

int main()
{
  char string[] = "Hello World !";
  //string[5] = '\0';
  int length = strlength(string);
  printf("The length of the string is: %d\n", length);

  return 0;
}

int strlength(char string[])
{
  int length = 0;
  for(int i = 0; string[i] != '\0'; ++i)
  {
    length++;
  }
  return length;
}*/

/*#include <stdio.h>

int main()
{
  int first = 1;
  int val, maxval, minval;

  while(scanf("%d", &val) != EOF) {
    if(first || val > maxval) maxval = val;
    if(first || val < minval) minval = val;
    first = 0;
  }
  printf("Maximum %d\n", maxval);
  printf("Minimum %d\n", minval);
  return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  	char line[1001];
    int min, max, num;
  	while(gets(line) != EOF){
      	num = atoi(line);
    	if(max < num) max = num;
    	else min = num;}
  	printf("Maximum %d", max);
  	printf("Minimum %d", min);
  	return 0;
}*/
/*#include <stdio.h>
int main() Fahrenheit-Celsius table
{
    int fahr;
    for (fahr = 300; fahr <= 0; fahr -= 20)
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}*/
/*#include <stdio.h>
#include <string.h>

int main ()
{
  char string [205];
  printf("Type a string: ");
  fgets(string, 205, stdin);
  int length = strlen(string);
  string[length - 1] = '\0';
  printf("%d\n", length);
  for(int i = 0; i < length; ++i)
    {
      if(string[i] == '\n') printf("cell %d = \\n \n",i);
      else if(string[i] == '\0') printf("cell %d = \\0 \n", i);
      else printf("cell %d = %c\n", i, string[i]);
    }
  return 0;
}*/
/*#include <stdio.h>

int main ()
{
  int q = 5;
  int w = 2;
  printf("%d / %d = %.2f\n", q, w, (double)q / w);
}*/
/*#include <stdio.h>

void butler ();

int main ()
{
  printf("John!\n");
  butler();
  return 0;
}
void butler()
{
  printf("Yes, Sir.\n");
}*/
/*#include <stdio.h>

int main()
{
  printf("int = %zd\n", sizeof(int));
  printf("char = %zd\n", sizeof(char));
  printf("float = %zd\n", sizeof(float));
  printf("double = %zd\n", sizeof(double));
  printf("long double = %zd\n", sizeof(long double));
  return 0;
}*/
#include <stdio.h>

int main() {
    const double cups_in_pint = 2.0;
    const double ounses_in_cup = 8.0;
    const double tablespoons_in_ouns = 2.0;
    const double teaspoons_in_a_tablespoon = 3.0;
    double cup = 0.0;
    printf("How many cups? ");
    scanf("%lf", &cup);
    double pint = cup / cups_in_pint;
    double ouns = cup * ounses_in_cup;
    double table_spoons = ouns * tablespoons_in_ouns;
    double tea_spoons = table_spoons * teaspoons_in_a_tablespoon;

    printf("This is\n%.2f pints\n%.2f ounses\n%.2f tablespoons\n%.2f teaspoons\n", pint, ouns, table_spoons, tea_spoons);
  return 0;
}