#include<stdio.h>

void menu();
float determine_price(int);
float calc(float,int);
void print_result(float);

int main()
{

  int code, qty;
  float price, pay;
  
  menu();
  printf("Enter item's code and quantity\n");
  scanf("%d %d", &code, &qty);
  price = determine_price(code);
  printf("price = %f\n", price);
  pay = calc(price, qty);
  print_result(pay);

  
}

void menu()
{
  printf("Code\tItem\tPrice\n");
  printf("1\tPapaya\t1.00\n");
  printf("2\tMelon\t2.00\n");
  printf("3\tApple\t5.00\n");
}

float determine_price(int a){
  float pricing;
  switch(a){
  case 1:
    pricing = 1.00; break;
  case 2:
    pricing = 2.00; break;
  case 3:
    pricing = 5.00; break;
  default:
    break;
  }
  return (pricing);
}

float calc(float price,int qty){
  float amnt;

  //amnt = price *(float)qty;
  amnt = price * qty;
  return amnt;
}

void print_result(float a)
{
  printf("The total amount that you have to pay %f\n", a);
}
