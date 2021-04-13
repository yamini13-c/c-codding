#include<stdio.h>
main()
{
  printf("1 for Grilled Chicken");
  printf("2 for Butter Chicken");
  printf("3 for Tandoori Chicken");
  printf("4 for Chicken 65");
  printf("5 for Prawn Curry");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Food item-Grilled Chicken\nPrice-Rs180");
			break;
		case 2:
			printf("Food item-Butter Chicken\nPrice-Rs 260");
			break;
		case 3:
			printf("Food item-Tandoori Chicken\nPrice-Rs 450");
			break;
		case 4:
			printf("Food item-Chicken 65\nPrice-Rs 155");
			break;
		case 5:
			printf("Food item-Prawn Curry\nPrice-Rs 320");
			break;
		default:
			printf("Food item is unavailable");
	}
}
