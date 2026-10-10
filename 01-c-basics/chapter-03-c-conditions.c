#include <stdio.h>

/*int main()
{
    int num1 = 110;
    int num2 = 20;
*/
// int num1 = 0;
//  int num2 = -20;
/*
    if (num1 > 10 || num2 < 20)
    {
        printf ("%s" , "Sallam!!!");
    }
 else
    {
        puts("Bye Bye!!!");
    }


}
*/
/*
    if (num1 != 0)
    {
        if (num1 % 2 == 0)
        {
            puts("Ok!");
        }
    }
    else
    {
        if (num2 == 10)
        {
            printf ("%s" , "Sallam!!!");
        }
    }

   // num2 > 10 ? puts ("Greater than 10") : puts ("Less or Equal than 10");

    puts( num2 > 10 ? "Greater than 10" : "Less or equal than 10");
}
*/

/*
for (int i = 0 ; i<23000 ; i++)
{
    printf("%d\n" , num1);
}

while (num1 < 100)
{
    printf("%d\n" , num1);
}


do
{
    printf ("Do While!!!");
}while (num1 == -100);

*/

/*  puts("Please tell the number of numbers >> ");
  scanf("%d", &num1);

  for (int i = 0; i < 11; i++)

      for (int j = 0; j < 11; j++)
      {

          printf("%d \t %d \t %d \n", i, j, i * j);
      }
*/

int main()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;

    do
    {
        printf("Plase Enter the number --- > ");
        scanf("%d", &num2);
    if (num2 != -1)
    {
        sum = sum + num2;
    } 
    while (num2 != -1);
        printf("The Result Is : %d \n", sum);
    }
}