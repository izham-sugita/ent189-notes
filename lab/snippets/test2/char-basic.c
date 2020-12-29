#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  /*  
  char c0[] = "C string"; //c0[9] will be fixed 
  printf("%s\n", c0);

  char c1;
  scanf("%c", &c1);
  printf("%c\n", c1);

  printf("Read a name with space using scanf\n");
  scanf("%s", c0);
  printf("%s\n", c0);
*/

  //a very terrible way to get character
  /*
  char c2;
  printf("Enter character(s)");
  c2 = getc(stdin);
  printf("Character(s) entered");
  putc(c2,stdout);
  */

  char name[30]; //simpler to fix the size of string
  printf("Enter name: \n");
  fgets(name, sizeof(name), stdin);
  printf("Name: ");
  puts(name);



  
}
