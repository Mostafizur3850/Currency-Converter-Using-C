#include <stdio.h>

int file()
{

   int menu_choice;

   printf("              *****************************************************************************************\n");
   printf("              *                                  CURRENCY CONVERTER                                   *\n");
   printf("              *****************************************************************************************\n\n");

   printf("1. Bangladeshi Taka\n");
   printf("2. British Pound Sterling\n");
   printf("3. Indian Rupee\n");
   printf("4. USD\n");
   printf("5. EURO\n");
   printf("6. Australian Dollar\n");
   printf("7. Exit Program\n\n");

   printf("Please Enter Your Native Country Selection From The Menu:\t");
   scanf("%d",&menu_choice);
   while((menu_choice<1) || (menu_choice>7))
        {
                printf("\nInvalid entry, please Enter 1-7: ");
                scanf("%d", &menu_choice);
        }

        return menu_choice;
}
int main()
{
    float local_amount, remote_amount, POUND;
    int menu_choice;
    menu_choice = file();
    int i = 1;
    while (i<100)
{

   i = i++;
   if (menu_choice == 1)
   {
      printf("\n\nChoose Your Option to Convert:\n");
      printf("1. Bangladeshi Taka to British Pound Sterling\n");
      printf("2. Bangladeshi Taka to Indian Rupee\n");
      printf("3. Bangladeshi Taka to USD\n");
      printf("4. Bangladeshi Taka to EURO\n");
      printf("5. Bangladeshi Taka to Australian Dollar\n\n");
      printf("Please Enter Your Choice From The Menu: \t");
      scanf("%d",&menu_choice);
      while((menu_choice<1) || (menu_choice>5))
        {
                printf("\nInvalid entry, please Enter 1-5: ");
                scanf("%d", &menu_choice);
        }

      if (menu_choice == 1)
      {
      	printf("\n--> Bangladeshi Taka to British Pound Sterling:\n");

         printf("Please Enter Bangladeshi Taka Amount to be Converted:\t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 0.0089;

         printf("\n--> [%.f Bangladeshi Taka = %.2f British Pound Sterling]\n\n",local_amount, remote_amount);

         menu_choice = 0;

      }
      if (menu_choice == 2)
      {
      	printf("\n\n--> Bangladeshi Taka to Indian Rupee:\n");

         printf("Please Enter Bangladeshi Taka Amount to be Converted:\t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 0.87;

         printf("\n--> [%.f Bangladeshi Taka = %.2f Indian Rupee]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
      if (menu_choice == 3)
      {
      	printf("\n\n--> Bangladeshi Taka to USD:\n");

         printf("Please Enter Bangladeshi Taka Amount to be Converted:\t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 0.012;

         printf("\n--> [%.f Bangladeshi Taka = %.2f USD]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
      if (menu_choice == 4)
      {
      	printf("\n\n--> Bangladeshi Taka to EURO:\n");

         printf("Please Enter Bangladeshi Taka Amount to be Converted:\t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 0.0097;

         printf("\n--> [%.f Bangladeshi Taka = %.2f EURO]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
       if (menu_choice == 5)
      {
      	printf("\n\n--> Bangladeshi Taka to Australian Dollar:\n");

         printf("Please Enter Bangladeshi Taka Amount to be Converted:\t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 0.016;

         printf("\n--> [%.f Bangladeshi Taka = %.2f Australian Dollar]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }

   }
   if (menu_choice == 2)
   {
      printf("\n\nChoose Your Option to Convert::\n");
      printf("1. British Pound Sterling to Bangladeshi Taka\n");
      printf("2. British Pound Sterling to Indian Rupee\n");
      printf("3. British Pound Sterling to USD\n");
      printf("4. British Pound Sterling to EURO\n");
      printf("5. British Pound Sterling to Australian Dollar\n");
      printf("Please Enter Your Choice From The Menu: \t");
      scanf("%d",&menu_choice);
      while((menu_choice<1) || (menu_choice>5))
        {
                printf("\nInvalid entry, please Enter 1-5: ");
                scanf("%d", &menu_choice);
        }
      if (menu_choice == 1)
      {
      	printf("\n\n--> British Pound Sterling to Bangladeshi Taka:\n");

         printf("Please Enter British Pound Sterling Amount to be Converted:\t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 112.07;

         printf("\n--> [%.f British Pound Sterling = %.2f Bangladeshi Taka]\n\n",local_amount, remote_amount);

         menu_choice = 0;

      }
      if (menu_choice == 2)
      {
      	printf("\n\n--> British Pound Sterling to Indian Rupee:\n");

         printf("Please Enter British Pound Sterling Amount to be Converted:\t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 97.52;

         printf("\n--> [%.f British Pound Sterling = %.2f Indian Rupee]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
      if (menu_choice == 3)
      {
      	printf("\n\n--> British Pound Sterling to USD:\n");

         printf("Please Enter British Pound Sterling Amount to be Converted:\t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 1.32;

         printf("\n--> [%.f British Pound Sterling = %.2f USD]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
      if (menu_choice == 4)
      {
      	printf("\n\n--> British Pound Sterling to EURO:\n");

         printf("Please Enter British Pound Sterling Amount to be Converted:\t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 1.09;

         printf("\n--> [%.f British Pound Sterling = %.2f EURO]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
       if (menu_choice == 5)
      {
      	printf("\n\n--> British Pound Sterling to Australian Dollar:\n");

         printf("Please Enter British Pound Sterling Amount to be Converted:\t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 1.76;

         printf("\n--> [%.f British Pound Sterling = %.2f Australian Dollar]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }

   }
   if (menu_choice == 3)
   {
      printf("\n\nChoose Your Option to Convert::\n");
      printf("1. Indian Rupee to Bangladeshi Taka\n");
      printf("2. Indian Rupee to British Pound Sterling\n");
      printf("3. Indian Rupee to USD\n");
      printf("4. Indian Rupee to EURO\n");
      printf("5. Indian Rupee to Australian Dollar\n");
      printf("Please Enter Your Choice From The Menu: \t");
      scanf("%d",&menu_choice);
      while((menu_choice<1) || (menu_choice>5))
        {
                printf("\nInvalid entry, please Enter 1-5: ");
                scanf("%d", &menu_choice);
        }

      if (menu_choice == 1)
      {
      	printf("\n\n--> Indian Rupee to Bangladeshi Taka:\n");

         printf("Please Enter Indian Rupee Amount to be Converted:\t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 1.15;

         printf("\n--> [%.f Indian Rupee = %.2f Bangladeshi Taka]\n\n",local_amount, remote_amount);

         menu_choice = 0;

      }
      if (menu_choice == 2)
      {
      	printf("\n\n--> Indian Rupee to British Pound Sterling:\n");

         printf("Please Enter Indian Rupee Amount to be Converted:\t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 0.0136;

         printf("\n--> [%.f Indian Rupee = %.2f British Pound Sterling]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
      if (menu_choice == 3)
      {
      	printf("\n\n--> Indian Rupee to USD:\n");

         printf("Please Enter Indian Rupee Amount to be Converted:\t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 0.0136;

         printf("\n--> [%.f Indian Rupee = %.2f USD]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
      if (menu_choice == 4)
      {
      	printf("\n\n--> Indian Rupee to EURO:\n");

         printf("Please Enter Indian Rupee Amount to be Converted:\t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 0.0122;

         printf("\n--> [%.f Indian Rupee = %.2f EURO]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
       if (menu_choice == 5)
      {
      	printf("\n\n--> Indian Rupee to Australian Dollar:\n");

         printf("Please Enter Indian Rupee Amount to be Converted: \t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 0.018;

         printf("\n--> [%.f Indian Rupee = %.2f Australian Dollar]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
   }
   if (menu_choice == 4)
   {
      printf("\n\nChoose Your Option to Convert::\n");
      printf("1. USD to Bangladeshi Taka\n");
      printf("2. USD to Britain Pound Sterling\n");
      printf("3. USD to Indian Rupee\n");
      printf("4. USD to EURO\n");
      printf("5. USD to Australian Dollar\n");
      printf("Please Enter Your Choice From The Menu: \t");
      scanf("%d",&menu_choice);
      while((menu_choice<1) || (menu_choice>5))
        {
                printf("\nInvalid entry, please Enter 1-5: ");
                scanf("%d", &menu_choice);
        }

      if (menu_choice == 1)
      {
      	printf("\n\n--> USD to Bangladeshi Taka:\n");

         printf("Please Enter USD Amount to be Converted: \t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 84.74;

         printf("\n--> [%.f USD = %.2f Bangladeshi Taka]\n\n",local_amount, remote_amount);

         menu_choice = 0;

      }
      if (menu_choice == 2)
      {
      	printf("\n\n--> USD to British Pound Sterling:\n");

         printf("Please Enter USD Amount to be Converted: \t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 0.76;

         printf("\n--> [%.f USD = %.2f British Pound Sterling]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
      if (menu_choice == 3)
      {
      	printf("\n\n--> USD to Indian Rupee:\n");

         printf("Please Enter USD Amount to be Converted: \t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 73.74;

         printf("\n--> [%.f USD = %.2f Indian Rupee]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
      if (menu_choice == 4)
      {
      	printf("\n\n--> USD to EURO:\n");

         printf("Please Enter USD Amount to be Converted: \t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 0.83;

         printf("\n--> [%.f USD = %.2f EURO]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
       if (menu_choice == 5)
      {
      	printf("\n\n--> USD to Australian Dollar:\n");

         printf("Please Enter USD Amount to be Converted: \t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 1.33;

         printf("\n--> [%.f USD = %.2f Australian Dollar]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
   }

   if (menu_choice == 5)
   {
      printf("\n\nChoose Your Option to Convert::\n");
      printf("1. EURO to Bangladeshi Taka\n");
      printf("2. EURO to Britain Pound Sterling\n");
      printf("3. EURO to Indian Rupee\n");
      printf("4. EURO to USD\n");
      printf("5. EURO to Australian Dollar\n");
      printf("Please Enter Your Choice From The Menu: \t");
      scanf("%d",&menu_choice);
      while((menu_choice<1) || (menu_choice>5))
        {
                printf("\nInvalid entry, please Enter 1-5: ");
                scanf("%d", &menu_choice);
        }

      if (menu_choice == 1)
      {
      	printf("\n\n--> EURO to Bangladeshi Taka:\n");

         printf("Please Enter EURO Amount to be Converted: \t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 102.63;

         printf("\n--> [%.f EURO = %.2f Bangladeshi Taka]\n\n",local_amount, remote_amount);

         menu_choice = 0;

      }
      if (menu_choice == 2)
      {
      	printf("\n\n--> EURO to British Pound Sterling:\n");

         printf("Please Enter EURO Amount to be Converted: \t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 0.92;

         printf("\n--> [%.f EURO = %.2f British Pound Sterling]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
      if (menu_choice == 3)
      {
      	printf("\n\n--> EURO to Indian Rupee:\n");

         printf("Please Enter EURO Amount to be Converted: \t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 89.31;

         printf("\n--> [%.f EURO = %.2f Indian Rupee]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
      if (menu_choice == 4)
      {
      	printf("\n\n--> EURO to USD:\n");

         printf("Please Enter EURO Amount to be Converted: \t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 1.28;

         printf("\n--> [%.f EURO = %.2f USD]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
       if (menu_choice == 5)
      {
      	printf("\n\n--> EURO to Australian Dollar:\n");

         printf("Please Enter EURO Amount to be Converted: \t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 1.61;

         printf("\n--> [%.f EURO = %.2f Australian Dollar]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
   }
    if (menu_choice == 6)
   {
      printf("\n\nChoose Your Option to Convert::\n");
      printf("1. Australian Dollar to Bangladeshi Taka\n");
      printf("2. Australian Dollar to British Pound Sterling\n");
      printf("3. Australian Dollar to Indian Rupee\n");
      printf("4. Australian Dollar to USD\n");
      printf("5. Australian Dollar to EURO\n");
      printf("Please Enter Your Choice From The Menu: \t");
      scanf("%d",&menu_choice);
      while((menu_choice<1) || (menu_choice>5))
        {
                printf("\nInvalid entry, please Enter 1-5: ");
                scanf("%d", &menu_choice);
        }

      if (menu_choice == 1)
      {
      	printf("\n\n--> Australian Dollar to Bangladeshi Taka:\n");

         printf("Please Enter Australian Dollar Amount to be Converted: \t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 63.8887;

         printf("\n--> [%.f Australian Dollar = %.2f Bangladeshi Taka]\n\n",local_amount, remote_amount);

         menu_choice = 0;

      }
      if (menu_choice == 2)
      {
      	printf("\n\n--> Australian Dollar to British Pound Sterling:\n");

         printf("Please Enter Australian Dollar Amount to be Converted: \t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 0.57;

         printf("\n--> [%.f Australian Dollar = %.2f British Pound Sterling]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
      if (menu_choice == 3)
      {
      	printf("\n\n--> Australian Dollar to Indian Rupee:\n");

         printf("Please Enter Australian Dollar Amount to be Converted: \t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 55.55;

         printf("\n--> [%.f Australian Dollar = %.2f Indian Rupee]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
      if (menu_choice == 4)
      {
      	printf("\n\n--> Australian Dollar to USD:\n");

         printf("Please Enter Australian Dollar Amount to be Converted: \t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 0.75;

         printf("\n--> [%.f Australian Dollar = %.2f USD]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }
       if (menu_choice == 5)
      {
      	printf("\n\n--> Australian Dollar to EURO:\n");

         printf("Please Enter Australian Dollar Amount to be Converted: \t");
         scanf("%f",&local_amount);

         remote_amount = local_amount * 0.62;

         printf("\n--> [%.f Australian Dollar = %.2f EURO]\n\n",local_amount, remote_amount);

         menu_choice = 0;
      }

   }
   if (menu_choice == 7)
      {
          printf("\n                        ******************************************************************* \n");
          printf("                        *                      Exiting the program....                    * \n");
          printf("                        *                                                                 * \n");
          printf("                        *                            Thank You!                           * \n");
          printf("                        ******************************************************************* \n");
          menu_choice = 0;
          break;
      }
   menu_choice = file();
	}
	return 0;
}
