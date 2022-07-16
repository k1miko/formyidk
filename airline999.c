#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <unistd.h>
#include <stdlib.h>

struct reservingSeats{
	char reserveSeat[100];
}arr[10][7] = { // the array we are going to use
	{"1", "A", "B", "C", "D", "E", "F"}, 
	{"2", "A", "B", "C", "D", "E", "F"}, 
	{"3", "A", "B", "C", "D", "E", "F"}, 
	{"4", "A", "B", "C", "D", "E", "F"}, 
	{"5", "A", "B", "C", "D", "E", "F"},
	{"6", "A", "B", "C", "D", "E", "F"},
	{"7", "A", "B", "C", "D", "E", "F"},
	{"8", "A", "B", "C", "D", "E", "F"},
	{"9", "A", "B", "C", "D", "E", "F"},
	{"10", "A", "B", "C", "D", "E", "F"}};

struct booking{
	char bookSeat[50];
	char name[50];
	char city[50];
	int age;
	int yournum;
};

int main()
{
	int a, b, i, j, chooseSeat;
	char reserveSeat[100];
	char cont;
	int found = 0;
	char customerName[100];
	char city[100];
	int age, num, numz, countz;
	char newSeat[10];
	char change[10];
	int currSeat;
	struct booking *booking;
	struct booking yourinfos;
	FILE *fp, *of;
	
	printf("WELCOME! Please choose the command you want to do.\n");
	
	do
	{
	printf("\n1. RESERVE A SEAT");
	printf("\n2. DISPLAY RECORD");
	printf("\n3. EDIT A SEAT");
	printf("\n4. ADD ANOTHER SEAT");
	printf("\n5. QUIT");
	printf("\nYour Choice: ");
	scanf("%d", &chooseSeat);
	
	switch (chooseSeat){
		case 1:			
			for (a=0; a<10; a++)
			{
				for (b=0; b<7; b++)
				{
					printf("\t%s  ", arr[a][b].reserveSeat); //displaying the array
				}
				printf("\n");
			}
			
			printf("How many reservations do you want?: ");
			scanf("%d", &numz);
			
			booking = (struct booking*)malloc(numz* sizeof(struct booking));
			fp = fopen("reservations.txt", "wt");
			for (i=0; i<numz; i++)
			{
				// just getting user's info bec at the end, we'll display it.
				
				printf("\nPlease enter the number: ");
				scanf("%d", &booking[i].yournum);
				
				fflush(stdin);
				printf("Please enter your name: ");
				scanf("%[^\n]s", &booking[i].name);
		
				printf("Please enter your age: ");
				scanf("%d", &booking[i].age);
				
				fflush(stdin);
				printf("Please enter the city you want to travel: ");
				scanf("%[^\n]s", &booking[i].city);
				
				printf("Choose your desired seat: ");
				scanf("%s", &booking[i].bookSeat); // getting the seat number
				
					if (strcmp(booking[i].bookSeat, "1A")==0) // in here, the program will determine if the value the user entered is the same as the one given, if its the same value, then it will proceed on the next step
					{
						if(strcmp(arr[0][1].reserveSeat, "X")==0) // just like the one at the top of this statement, if the program determines that the specific element is already marked by "X", then it will display that its already taken
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[0][1].reserveSeat, 'X'); // if so it happens that the seat is not yet taken, then it will make the specific element given the char 'X'
					}
					else if (strcmp(booking[i].bookSeat, "1B")==0) // the same goes for the rest of the else if in this loop
					{
						if(strcmp(arr[0][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[0][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "1C")==0)
					{
						if(strcmp(arr[0][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[0][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "1D")==0)
					{
						if(strcmp(arr[0][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[0][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "1E")==0)
					{
						if(strcmp(arr[0][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[0][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "1F")==0)
					{
						if(strcmp(arr[0][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[0][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "2A")==0)
					{
						if(strcmp(arr[1][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[1][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "2B")==0)
					{
						if(strcmp(arr[1][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[1][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "2C")==0)
					{
						if(strcmp(arr[1][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[1][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "2D")==0)
					{
						if(strcmp(arr[1][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[1][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "2E")==0)
					{
						if(strcmp(arr[1][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[1][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "2F")==0)
					{
						if(strcmp(arr[1][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[1][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "3A")==0)
					{
						if(strcmp(arr[2][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[2][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "3B")==0)
					{
						if(strcmp(arr[2][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[2][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "3C")==0)
					{
						if(strcmp(arr[2][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[2][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "3D")==0)
					{
						if(strcmp(arr[2][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[2][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "3E")==0)
					{
						if(strcmp(arr[2][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[2][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "3F")==0)
					{
						if(strcmp(arr[2][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[2][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "4A")==0)
					{
						if(strcmp(arr[3][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[3][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "4B")==0)
					{
						if(strcmp(arr[3][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[3][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "4C")==0)
					{
						if(strcmp(arr[3][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[3][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "4D")==0)
					{
						if(strcmp(arr[3][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[3][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "4E")==0)
					{
						if(strcmp(arr[3][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[3][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "4F")==0)
					{
						if(strcmp(arr[3][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[3][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "5A")==0)
					{
						if(strcmp(arr[4][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[4][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "5B")==0)
					{
						if(strcmp(arr[4][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[4][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "5C")==0)
					{
						if(strcmp(arr[4][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat. \n");
						}
								strset(arr[4][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "5D")==0)
					{
						if(strcmp(arr[4][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[4][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "5E")==0)
					{
						if(strcmp(arr[4][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[4][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "5F")==0)
					{
						if(strcmp(arr[4][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[4][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "6A")==0)
					{
						if(strcmp(arr[5][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[5][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "6B")==0)
					{
						if(strcmp(arr[5][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[5][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "6C")==0)
					{
						if(strcmp(arr[5][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat. \n");
						}
								strset(arr[5][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "6D")==0)
					{
						if(strcmp(arr[5][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[5][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "6E")==0)
					{
						if(strcmp(arr[5][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[5][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "6F")==0)
					{
						if(strcmp(arr[5][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[5][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "7A")==0)
					{
						if(strcmp(arr[6][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[6][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "7B")==0)
					{
						if(strcmp(arr[6][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[6][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "7C")==0)
					{
						if(strcmp(arr[6][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat. \n");
						}
								strset(arr[6][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "7D")==0)
					{
						if(strcmp(arr[6][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[6][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "7E")==0)
					{
						if(strcmp(arr[6][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[6][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "7F")==0)
					{
						if(strcmp(arr[6][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[6][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "8A")==0)
					{
						if(strcmp(arr[7][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[7][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "8B")==0)
					{
						if(strcmp(arr[7][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[7][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "8C")==0)
					{
						if(strcmp(arr[7][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat. \n");
						}
								strset(arr[7][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "8D")==0)
					{
						if(strcmp(arr[7][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[7][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "8E")==0)
					{
						if(strcmp(arr[7][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[7][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "8F")==0)
					{
						if(strcmp(arr[7][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[7][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "9A")==0)
					{
						if(strcmp(arr[8][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[8][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "9B")==0)
					{
						if(strcmp(arr[8][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[8][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "9C")==0)
					{
						if(strcmp(arr[8][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat. \n");
						}
								strset(arr[8][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "9D")==0)
					{
						if(strcmp(arr[8][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[8][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "9E")==0)
					{
						if(strcmp(arr[8][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[8][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "9F")==0)
					{
						if(strcmp(arr[8][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[8][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "10A")==0)
					{
						if(strcmp(arr[9][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[9][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "10B")==0)
					{
						if(strcmp(arr[9][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[9][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "10C")==0)
					{
						if(strcmp(arr[9][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat. \n");
						}
								strset(arr[9][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "10D")==0)
					{
						if(strcmp(arr[9][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[9][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "10E")==0)
					{
						if(strcmp(arr[9][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[9][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "10F")==0)
					{
						if(strcmp(arr[9][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[9][6].reserveSeat, 'X');
					}
					else
					{
						printf("This is an invalid seat. Please try again."); // if the user encoded the character not included in the list, then this message will be displayed.
					}
					
					// the program will now update the seats. NOTE: sleep(); is used in order to time when will the next line will come out
					printf("\n");
					printf("\nUpdating seats....\n");
					sleep(2);
					printf("Available seats:\n");
					for(a=0; a<10; a++)
					{
						for(b=0; b<7; b++)
						{
							printf("\t%s  ", arr[a][b].reserveSeat);
						}
						printf("\n");
					}
					
					fwrite(&booking[i], sizeof(struct booking), 1, fp);
					// if all seats are marked with X, then the program will end and proceed to display the info and the program will end
			}
			fclose(fp);
		break;
		
		case 2:
			fp = fopen("reservations.txt", "rt");
			
			printf("\n------------------------------------------------------");
			printf("\nNo.   \tName    \tAge  \tCity   Seat");
	  		printf("\n------------------------------------------------------");
	  		
	  		while(fread(&yourinfos, sizeof(struct booking), 1, fp))
	  		{
					printf("\n%d %-20s  %d      %s   %s", yourinfos.yournum, yourinfos.name, yourinfos.age, yourinfos.city, yourinfos.bookSeat);
	  				
			}
			printf("\n");
			fclose(fp);
			break;
		case 3:
			fp = fopen("reservations.txt", "rt");
			of = fopen("tempz.txt", "wt");
			
			printf("\nEnter your number: ");
			scanf("%d", &currSeat);
			
			while(fread(&yourinfos, sizeof(struct booking), 1, fp))
			{
				if(yourinfos.yournum == currSeat)
				{
					found = 1;
					printf("Please enter the seat that you want: ");
					scanf("%s", &yourinfos.bookSeat);
				}
				fwrite(&yourinfos, sizeof(struct booking), 1, of);
			}
			fclose(fp);
			fclose(of);
			
			if(found)
			{
				of = fopen("tempz.txt", "rt");
				fp = fopen("reservations.txt", "wt");
				
				while(fread(&yourinfos, sizeof(struct booking), 1, of)){
					fwrite(&yourinfos, sizeof(struct booking), 1, fp);
				}
				
				fclose(fp);
				fclose(of);
			}
			
			else{
				printf("\nNot found.");
			}
		break;
		
		case 4:
			for (a=0; a<10; a++)
			{
				for (b=0; b<7; b++)
				{
					printf("\t%s  ", arr[a][b].reserveSeat); //displaying the array
				}
				printf("\n");
			}
			
			printf("How many reservations do you want?: ");
			scanf("%d", &numz);
			
			booking = (struct booking*)malloc(numz* sizeof(struct booking));
			fp = fopen("reservations.txt", "a");
			for (i=0; i<numz; i++)
			{
				// just getting user's info bec at the end, we'll display it.
				
				printf("\nPlease enter the number: ");
				scanf("%d", &booking[i].yournum);
				
				fflush(stdin);
				printf("Please enter your name: ");
				scanf("%[^\n]s", &booking[i].name);
		
				printf("Please enter your age: ");
				scanf("%d", &booking[i].age);
				
				fflush(stdin);
				printf("Please enter the city you want to travel: ");
				scanf("%[^\n]s", &booking[i].city);
				
				printf("Choose your desired seat: ");
				scanf("%s", &booking[i].bookSeat); // getting the seat number
				
					if (strcmp(booking[i].bookSeat, "1A")==0) // in here, the program will determine if the value the user entered is the same as the one given, if its the same value, then it will proceed on the next step
					{
						if(strcmp(arr[0][1].reserveSeat, "X")==0) // just like the one at the top of this statement, if the program determines that the specific element is already marked by "X", then it will display that its already taken
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[0][1].reserveSeat, 'X'); // if so it happens that the seat is not yet taken, then it will make the specific element given the char 'X'
					}
					else if (strcmp(booking[i].bookSeat, "1B")==0) // the same goes for the rest of the else if in this loop
					{
						if(strcmp(arr[0][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[0][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "1C")==0)
					{
						if(strcmp(arr[0][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[0][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "1D")==0)
					{
						if(strcmp(arr[0][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[0][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "1E")==0)
					{
						if(strcmp(arr[0][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[0][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "1F")==0)
					{
						if(strcmp(arr[0][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[0][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "2A")==0)
					{
						if(strcmp(arr[1][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[1][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "2B")==0)
					{
						if(strcmp(arr[1][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[1][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "2C")==0)
					{
						if(strcmp(arr[1][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[1][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "2D")==0)
					{
						if(strcmp(arr[1][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[1][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "2E")==0)
					{
						if(strcmp(arr[1][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[1][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "2F")==0)
					{
						if(strcmp(arr[1][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[1][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "3A")==0)
					{
						if(strcmp(arr[2][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[2][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "3B")==0)
					{
						if(strcmp(arr[2][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[2][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "3C")==0)
					{
						if(strcmp(arr[2][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[2][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "3D")==0)
					{
						if(strcmp(arr[2][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[2][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "3E")==0)
					{
						if(strcmp(arr[2][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[2][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "3F")==0)
					{
						if(strcmp(arr[2][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[2][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "4A")==0)
					{
						if(strcmp(arr[3][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[3][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "4B")==0)
					{
						if(strcmp(arr[3][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[3][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "4C")==0)
					{
						if(strcmp(arr[3][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[3][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "4D")==0)
					{
						if(strcmp(arr[3][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[3][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "4E")==0)
					{
						if(strcmp(arr[3][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[3][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "4F")==0)
					{
						if(strcmp(arr[3][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[3][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "5A")==0)
					{
						if(strcmp(arr[4][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[4][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "5B")==0)
					{
						if(strcmp(arr[4][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[4][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "5C")==0)
					{
						if(strcmp(arr[4][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat. \n");
						}
								strset(arr[4][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "5D")==0)
					{
						if(strcmp(arr[4][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[4][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "5E")==0)
					{
						if(strcmp(arr[4][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[4][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "5F")==0)
					{
						if(strcmp(arr[4][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[4][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "6A")==0)
					{
						if(strcmp(arr[5][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[5][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "6B")==0)
					{
						if(strcmp(arr[5][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[5][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "6C")==0)
					{
						if(strcmp(arr[5][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat. \n");
						}
								strset(arr[5][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "6D")==0)
					{
						if(strcmp(arr[5][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[5][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "6E")==0)
					{
						if(strcmp(arr[5][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[5][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "6F")==0)
					{
						if(strcmp(arr[5][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[5][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "7A")==0)
					{
						if(strcmp(arr[6][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[6][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "7B")==0)
					{
						if(strcmp(arr[6][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[6][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "7C")==0)
					{
						if(strcmp(arr[6][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat. \n");
						}
								strset(arr[6][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "7D")==0)
					{
						if(strcmp(arr[6][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[6][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "7E")==0)
					{
						if(strcmp(arr[6][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[6][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "7F")==0)
					{
						if(strcmp(arr[6][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[6][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "8A")==0)
					{
						if(strcmp(arr[7][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[7][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "8B")==0)
					{
						if(strcmp(arr[7][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[7][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "8C")==0)
					{
						if(strcmp(arr[7][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat. \n");
						}
								strset(arr[7][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "8D")==0)
					{
						if(strcmp(arr[7][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[7][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "8E")==0)
					{
						if(strcmp(arr[7][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[7][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "8F")==0)
					{
						if(strcmp(arr[7][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[7][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "9A")==0)
					{
						if(strcmp(arr[8][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[8][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "9B")==0)
					{
						if(strcmp(arr[8][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[8][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "9C")==0)
					{
						if(strcmp(arr[8][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat. \n");
						}
								strset(arr[8][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "9D")==0)
					{
						if(strcmp(arr[8][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[8][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "9E")==0)
					{
						if(strcmp(arr[8][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[8][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "9F")==0)
					{
						if(strcmp(arr[8][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[8][6].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "10A")==0)
					{
						if(strcmp(arr[9][1].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[9][1].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "10B")==0)
					{
						if(strcmp(arr[9][2].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[9][2].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "10C")==0)
					{
						if(strcmp(arr[9][3].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat. \n");
						}
								strset(arr[9][3].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "10D")==0)
					{
						if(strcmp(arr[9][4].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[9][4].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "10E")==0)
					{
						if(strcmp(arr[9][5].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[9][5].reserveSeat, 'X');
					}
					else if (strcmp(booking[i].bookSeat, "10F")==0)
					{
						if(strcmp(arr[9][6].reserveSeat, "X")==0)
						{
							printf("This seat is already taken. Choose another one.");
						}
						else
						{
							printf("You have successfully reserved this seat.");
						}
								strset(arr[9][6].reserveSeat, 'X');
					}
					else
					{
						printf("This is an invalid seat. Please try again."); // if the user encoded the character not included in the list, then this message will be displayed.
					}
					
					// the program will now update the seats. NOTE: sleep(); is used in order to time when will the next line will come out
					printf("\n");
					printf("\nUpdating seats....\n");
					sleep(2);
					printf("Available seats:\n");
					for(a=0; a<10; a++)
					{
						for(b=0; b<7; b++)
						{
							printf("\t%s  ", arr[a][b].reserveSeat);
						}
						printf("\n");
					}
					
					
					fwrite(&booking[i], sizeof(struct booking), 1, fp);
					// if all seats are marked with X, then the program will end and proceed to display the info and the program will end
			}
			fclose(fp);
		break;
}
}while(chooseSeat != 5);
	return 0;
}
