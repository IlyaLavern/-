#include <stdio.h>

int main()
{
    int age;
    printf("Введіть свій вік, і ми визначимо до якої вікової категорії ви належити:");
    scanf("%d",&age);
    switch(age)
    {
         case 1:
         case 2:
         case 3:
         case 4:
         case 5:
         case 6:
         case 7:
         case 8:
         case 9:
         case 10:
         printf("Ви ввели свій вік: %d",age);
         printf("\nВаша вікова категорія: дитина");
         break;
         case 11:
         case 12:
         case 13:
         case 14:
         case 15:
         printf("Ви ввели свій вік: %d",age);
         printf("\nВаша вікова категорія: підліток");
         break;
         case 16:
         case 17:
         case 18:
         case 19:
         case 20:
         printf("Ви ввели свій вік: %d ",age);
         printf("\nВаша вікова категорія: юнак");
         break;
         case 21:
         case 22:
         case 23:
         case 24:
         case 25:
         case 26:
         case 27:
         case 28:
         case 29:
         case 30:
         printf("Ви ввели свій вік: %d ",age);
         printf("\nВаша вікова категорія: молода людина");
         break;
         case 31:
         case 32:
         case 33:
         case 34:
         case 35:
         case 36:
         case 37:
         case 38:
         case 39:
         case 41:
         case 42:
         case 43:
         case 44:
         case 45:
         case 46:
         case 47:
         case 48:
         case 49:
         case 50:
         printf("Ви ввели свій вік: %d ",age);
          printf("\nВаша вікова категорія: доросла людина");
         break;
         default: printf("Ви ввели свій вік: %d",age);
          printf("\nВи занадто старий або ще не народилися");
         break;
    }

 return 0;

}
