//#include<iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

//using namespace std;
void showTicketDetails();
void showRecordHeading();
void showSelection();
int mainMenuOption(void);
void about(void);
int mainFunctionCalling(int);
void searchRecord(short);
void ticketBooking(int);
void deleteRecord(int);
void deleteAllRecord(void);
void seatDetails();

// all function is declere

FILE *seatAndId, *seatAndId1, *seatAndId2, *seatAndId3, *seatAndId4, *root1, *root2, *root3, *root4, *root5;
FILE *inputSeatAndId, *inputSeatAndId1, *inputSeatAndId2, *inputSeatAndId3, *inputSeatAndId4;
FILE *inputRoot1, *inputRoot2, *inputRoot3, *inputRoot4, *inputRoot5;

void deleteAllRecord(void) // // delete All record function start here //
{
	char del[2];
	system("cls");
	printf("\t\t\t*****************\n");
	printf("\t\t\tDELETE ALL RECORD\n");
	printf("\t\t\t*****************\n\n\n");
	printf("\n\t\tDO YOU WANT TO DELETE ALL RECORD .. ");
	scanf("%s", &del);
	if (del[0] == 'y' || del[0] == 'Y')
	{
		system("cls");
		printf("\n\n\n\n\t\t\t\tRECORD DELETE SUCCESSFULLY PRESS ANY KEY . ");
		getch();
		root1 = fopen("root1.txt", "w");
		fprintf(root1, "");
		fclose(root1);
		root1 = fopen("root2.txt", "w");
		fprintf(root1, "");
		fclose(root1);
		root1 = fopen("root3.txt", "w");
		fprintf(root1, "");
		fclose(root1);
		root1 = fopen("root4.txt", "w");
		fprintf(root1, "");
		fclose(root1);
		root1 = fopen("root5.txt", "w");
		fprintf(root1, "");
		fclose(root1);
		inputRoot1 = fopen("seatAndid1.txt", "w");
		fprintf(root1, "");
		fclose(inputRoot1);
		inputRoot1 = fopen("seatAndid2.txt", "w");
		fprintf(root1, "");
		fclose(inputRoot1);
		inputRoot1 = fopen("seatAndid3.txt", "w");
		fprintf(root1, "");
		fclose(inputRoot1);
		inputRoot1 = fopen("seatAndid4.txt", "w");
		fprintf(root1, "");
		fclose(inputRoot1);
		inputRoot1 = fopen("seatAndid5.txt", "w");
		fprintf(root1, "");
		fclose(inputRoot1);
	}
	else
	{
	}
} // delete All record function end here //

void seatDetails()
{
option:
	int seatCount[46], i = 0;
	int valueBack = 0;
	int root;
	system("cls");
	printf("\t\t\t*****************\n");
	printf("\t\t\tDELETE ALL RECORD\n");
	printf("\t\t\t*****************\n\n\n");
	printf("\n\t 1 -> Roo1  2 -> root2  3 -> root3  4 -> root4  5 -> root5  6 -> back  \n\n");
	printf("\n\tenetr root number . ");
	scanf("%i", &root);

	if (root == 1)
	{
		system("cls");
		printf("\t\t\t************\n");
		printf("\t\t\tSEAT DETAULS\n");
		printf("\t\t\t************\n\n");
		seatAndId = fopen("seatAndid1.txt", "r");
		while (!feof(seatAndId))
		{
			fscanf(seatAndId, "%i", &seatCount[i]);
			i++;
		}
		printf("BOOK SEATS \n\n");
		for (int l = 0; l < i - 2; l++) // array sorting//
		{
			for (int k = 0; k < i - 2; k++)
			{
				if (seatCount[k] > seatCount[k + 1])
				{
					int x = seatCount[k + 1];
					seatCount[k + 1] = seatCount[k];
					seatCount[k] = x;
				}
			}
		} // array sorting
		for (int j = 0; j < i - 1; j++)
		{
			if (j == 5 || j == 10 || j == 15 || j == 20 || j == 25 || j == 30 || j == 35 || j == 40)
			{
				printf("\n");
			}
			if (j < 5)
			{
				printf("seat no  %i     ", seatCount[j]);
			}
			else
			{
				printf("seat no %i     ", seatCount[j]);
			}
		}

		printf("\n\nAVAIBLE SEATS \n\n");
		int y = 0;
		int x = 0;
		for (int p = 0; p <= 45; p++)
		{
			for (int h = 0; h < i; h++)
			{
				if (p == seatCount[h])
				{
					y = 1;
					h = 80;
				}
			}
			if (y == 1)
			{
				y = 0;
				continue;
			}
			if (x == 5 || x == 10 || x == 15 || x == 20 || x == 25 || x == 30 || x == 35 || x == 40)
			{
				printf("\n");
			}
			if (x < 5)
			{
				printf("seat no  %i     ", p);
			}
			else
			{
				printf("seat no %i     ", p);
			}
			x++;
		}
		fclose(seatAndId);
	}

	else if (root == 2)
	{
		system("cls");
		printf("\t\t\t************\n");
		printf("\t\t\tSEAT DETAULS\n");
		printf("\t\t\t************\n\n");
		seatAndId = fopen("seatAndid2.txt", "r");
		while (!feof(seatAndId))
		{
			fscanf(seatAndId, "%i", &seatCount[i]);
			i++;
		}
		printf("BOOK SEATS \n\n");
		for (int l = 0; l < i - 2; l++) // array sorting//
		{
			for (int k = 0; k < i - 2; k++)
			{
				if (seatCount[k] > seatCount[k + 1])
				{
					int x = seatCount[k + 1];
					seatCount[k + 1] = seatCount[k];
					seatCount[k] = x;
				}
			}
		} // array sorting
		for (int j = 0; j < i - 1; j++)
		{
			if (j == 5 || j == 10 || j == 15 || j == 20 || j == 25 || j == 30 || j == 35 || j == 40)
			{
				printf("\n");
			}
			if (j < 5)
			{
				printf("seat no  %i     ", seatCount[j]);
			}
			else
			{
				printf("seat no %i     ", seatCount[j]);
			}
		}

		printf("\n\nAVAIBLE SEATS \n\n");
		int y = 0;
		int x = 0;
		for (int p = 0; p <= 45; p++)
		{
			for (int h = 0; h < i; h++)
			{
				if (p == seatCount[h])
				{
					y = 1;
					h = 80;
				}
			}
			if (y == 1)
			{
				y = 0;
				continue;
			}
			if (x == 5 || x == 10 || x == 15 || x == 20 || x == 25 || x == 30 || x == 35 || x == 40)
			{
				printf("\n");
			}
			if (x < 5)
			{
				printf("seat no  %i     ", p);
			}
			else
			{
				printf("seat no %i     ", p);
			}
			x++;
		}
		fclose(seatAndId);
	}

	else if (root == 3)
	{
		system("cls");
		printf("\t\t\t************\n");
		printf("\t\t\tSEAT DETAULS\n");
		printf("\t\t\t************\n\n");
		seatAndId = fopen("seatAndid3.txt", "r");
		while (!feof(seatAndId))
		{
			fscanf(seatAndId, "%i", &seatCount[i]);
			i++;
		}
		printf("BOOK SEATS \n\n");
		for (int l = 0; l < i - 2; l++) // array sorting//
		{
			for (int k = 0; k < i - 2; k++)
			{
				if (seatCount[k] > seatCount[k + 1])
				{
					int x = seatCount[k + 1];
					seatCount[k + 1] = seatCount[k];
					seatCount[k] = x;
				}
			}
		} // array sorting
		for (int j = 0; j < i - 1; j++)
		{
			if (j == 5 || j == 10 || j == 15 || j == 20 || j == 25 || j == 30 || j == 35 || j == 40)
			{
				printf("\n");
			}
			if (j < 5)
			{
				printf("seat no  %i     ", seatCount[j]);
			}
			else
			{
				printf("seat no %i     ", seatCount[j]);
			}
		}

		printf("\n\nAVAIBLE SEATS \n\n");
		int y = 0;
		int x = 0;
		for (int p = 0; p <= 45; p++)
		{
			for (int h = 0; h < i; h++)
			{
				if (p == seatCount[h])
				{
					y = 1;
					h = 80;
				}
			}
			if (y == 1)
			{
				y = 0;
				continue;
			}
			if (x == 5 || x == 10 || x == 15 || x == 20 || x == 25 || x == 30 || x == 35 || x == 40)
			{
				printf("\n");
			}
			if (x < 5)
			{
				printf("seat no  %i     ", p);
			}
			else
			{
				printf("seat no %i     ", p);
			}
			x++;
		}
		fclose(seatAndId);
	}

	else if (root == 4)
	{
		system("cls");
		printf("\t\t\t************\n");
		printf("\t\t\tSEAT DETAULS\n");
		printf("\t\t\t************\n\n");
		seatAndId = fopen("seatAndid4.txt", "r");
		while (!feof(seatAndId))
		{
			fscanf(seatAndId, "%i", &seatCount[i]);
			i++;
		}
		printf("BOOK SEATS \n\n");
		for (int l = 0; l < i - 2; l++) // array sorting//
		{
			for (int k = 0; k < i - 2; k++)
			{
				if (seatCount[k] > seatCount[k + 1])
				{
					int x = seatCount[k + 1];
					seatCount[k + 1] = seatCount[k];
					seatCount[k] = x;
				}
			}
		} // array sorting
		for (int j = 0; j < i - 1; j++)
		{
			if (j == 5 || j == 10 || j == 15 || j == 20 || j == 25 || j == 30 || j == 35 || j == 40)
			{
				printf("\n");
			}
			if (j < 5)
			{
				printf("seat no  %i     ", seatCount[j]);
			}
			else
			{
				printf("seat no %i     ", seatCount[j]);
			}
		}

		printf("\n\nAVAIBLE SEATS \n\n");
		int y = 0;
		int x = 0;
		for (int p = 0; p <= 45; p++)
		{
			for (int h = 0; h < i; h++)
			{
				if (p == seatCount[h])
				{
					y = 1;
					h = 80;
				}
			}
			if (y == 1)
			{
				y = 0;
				continue;
			}
			if (x == 5 || x == 10 || x == 15 || x == 20 || x == 25 || x == 30 || x == 35 || x == 40)
			{
				printf("\n");
			}
			if (x < 5)
			{
				printf("seat no  %i     ", p);
			}
			else
			{
				printf("seat no %i     ", p);
			}
			x++;
		}
		fclose(seatAndId);
	}

	else if (root == 5)
	{
		system("cls");
		printf("\t\t\t************\n");
		printf("\t\t\tSEAT DETAULS\n");
		printf("\t\t\t************\n\n");
		seatAndId = fopen("seatAndid5.txt", "r");
		while (!feof(seatAndId))
		{
			fscanf(seatAndId, "%i", &seatCount[i]);
			i++;
		}
		printf("BOOK SEATS \n\n");
		for (int l = 0; l < i - 2; l++) // array sorting//
		{
			for (int k = 0; k < i - 2; k++)
			{
				if (seatCount[k] > seatCount[k + 1])
				{
					int x = seatCount[k + 1];
					seatCount[k + 1] = seatCount[k];
					seatCount[k] = x;
				}
			}
		} // array sorting
		for (int j = 0; j < i - 1; j++)
		{
			if (j == 5 || j == 10 || j == 15 || j == 20 || j == 25 || j == 30 || j == 35 || j == 40)
			{
				printf("\n");
			}
			if (j < 5)
			{
				printf("seat no  %i     ", seatCount[j]);
			}
			else
			{
				printf("seat no %i     ", seatCount[j]);
			}
		}

		printf("\n\nAVAIBLE SEATS \n\n");
		int y = 0;
		int x = 0;
		for (int p = 0; p <= 45; p++)
		{
			for (int h = 0; h < i; h++)
			{
				if (p == seatCount[h])
				{
					y = 1;
					h = 80;
				}
			}
			if (y == 1)
			{
				y = 0;
				continue;
			}
			if (x == 5 || x == 10 || x == 15 || x == 20 || x == 25 || x == 30 || x == 35 || x == 40)
			{
				printf("\n");
			}
			if (x < 5)
			{
				printf("seat no  %i     ", p);
			}
			else
			{
				printf("seat no %i     ", p);
			}
			x++;
		}
		fclose(seatAndId);
	}

	else if (root == 6)
	{
		valueBack = 6;
	}
	else
	{
		system("cls");
		printf("\n\n\n\n\n\n\n\t\tYOU ENTER INVALID OPTION PRESS ANY KEY..");
		getch();
		goto option;
	}
	if (valueBack != 6)
	{
		printf("\n\n\tPRESS ANY KEY FOR BACK ");
		getch();
		goto option;
	}
}

int main() // main function //
{
mainFunction:
	int x = 0;
	system("cls");
	char password[] = {'a', 'l', 'i', 'h', 'a', 's', 's', 'a', 'n'}, type_password[20];
	printf("\t\t\t******************************\n");
	printf("\t\t\tWELCOME TO TRANSPORT MANEGMENT\n");
	printf("\t\t\t******************************\n\n\n");
	printf("\tENTER PASSWORD ...");
	scanf("%s", &type_password);

	for (int i = 0; password[i + 3] != '\0'; i++)
	{
		if (type_password[i] == password[i])
		{
			x = 12;
		}
		else
		{
			x = 0;
		}
	}

	if (x == 12)
	{
		printf("\n\n\tLOGIN SUCCESSFULL PRESS ANY KEY..");
		getch();
	}
	else
	{
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t YOU ENTER WRONG PASSWORD PRESS ANY KEY..");
		getch();
		goto mainFunction;
	}

	while (1)
	{
		int return_program;
		int return_value = mainMenuOption();

		return_program = mainFunctionCalling(return_value);
		if (return_program == -1)
		{
			break;
		}
	}
}

// this function is used to controll the program flow through function calling
// all roots function called from this function//
int mainFunctionCalling(int option)
{
	if (option == 1)
	{
		about();
	}
	else if (option == 2)
	{
	ticketBook:
		system("cls");
		int root;
		printf("\t\t\t***************\n");
		printf("\t\t\tTICKING BOOKING\n");
		printf("\t\t\t***************\n\n\n");
		showSelection();
		scanf("%d", &root);
		if (root == 1 || root == 2 || root == 3 || root == 4 || root == 5)
		{
			ticketBooking(root);
			goto ticketBook;
		}
		else if (root == 6)
		{
		}
		else
		{
			system("cls");
			printf("\n\n\n\n\n\n\n\t\tYOU ENTER INVALID OPTION PRESS ANY KEY..");
			getch();
			goto ticketBook;
		}
		// insert data condition bracket //
	}
	else if (option == 3)
	{
		showTicketDetails();
	}
	else if (option == 4)
	{

	search:
		short root;
		system("cls");
		printf("\t\t\t****************\n");
		printf("\t\t\tSEARCHING RECORD\n");
		printf("\t\t\t****************\n\n\n");
		showSelection();
		scanf("%i", &root);
		if (root == 1 || root == 2 || root == 3 || root == 4 || root == 5)
		{
			searchRecord(root);
			goto search;
		}
		else if (root == 6)
		{
		}
		else
		{
			system("cls");
			printf("\n\n\n\n\n\n\n\t\tYOU ENTER INVALID OPTION PRESS ANY KEY..");
			getch();
			goto search;
		}
	}
	else if (option == 5)
	{
	search5:
		int root;
		system("cls");
		printf("\t\t\t*************\n");
		printf("\t\t\tDELETE RECORD\n");
		printf("\t\t\t*************\n\n\n");
		showSelection();
		scanf("%d", &root);
		if (root == 1 || root == 2 || root == 3 || root == 4 || root == 5)
		{
			deleteRecord(root);
			goto search5;
		}
		else if (root == 6)
		{
		}
		else
		{
			system("cls");
			printf("\n\n\n\n\n\n\n\t\tYOU ENTER INVALID OPTION PRESS ANY KEY..");
			getch();
			goto search5;
		}
	}
	else if (option == 6)
	{
		deleteAllRecord();
	}
	else if (option == 7)
	{
		seatDetails();
	}
	else if (option == 8)
	{
		system("cls");
		printf("\n\n\n\n\n\n\n\n\t\tTHANKS FOR USING \n\n\n\n\n\n\n\n\n\n\n\n");
		return -1;
	}
	else
	{
		system("cls");
		printf("\n\n\n\n\n\n\n\t\tYOU ENTER INVALID OPTION PRESS ANY KEY..");
		getch();
	}
	return 1;
}

void deleteRecord(int root)
{
	int f = 0, i = 0;
	char name[45][40], fname[45][40], cnic[45][40];
	int seatno[45], extraset[45];
	int seat;
	printf("\n\tENTER SEAT NO ");
	scanf("%i", &seat);
	if (root == 1)
	{
		inputRoot1 = fopen("root1.txt", "r");
		seatAndId = fopen("seatAndid1.txt", "r");
		while (!feof(inputRoot1))
		{
			fscanf(inputRoot1, "%s", &name[i]);
			fscanf(inputRoot1, "%s", &fname[i]);
			fscanf(inputRoot1, "%s", &cnic[i]);
			fscanf(inputRoot1, "%i", &seatno[i]);
			fscanf(seatAndId, "%i", &extraset[i]);
			if (seat == seatno[i])
			{
				f = 8;
			}
			else
			{
				i++;
			}
		} // while loop breckrt //
		fclose(inputRoot1);
		fclose(seatAndId); // after loop close variable of root1
		system("cls");
		if (f == 0)
		{
			printf("\n\n\n\n\n\n\n\n\n\t\tseat number not matching press any key..");
			getch();
			printf("\n\tpress any key ");
		}
		else
		{
			inputRoot1 = fopen("root1.txt", "w");
			fprintf(inputRoot1, "");
			fclose(inputRoot1);
			seatAndId = fopen("seatAndid1.txt", "w");
			fprintf(seatAndId, "");
			fclose(seatAndId);
			inputRoot1 = fopen("root1.txt", "a");
			seatAndId = fopen("seatAndid1.txt", "a");
			for (int k = 0; k < i; k++)
			{
				fprintf(inputRoot1, "\n%s %s %s %d", name[k], fname[k], cnic[k], seatno[k]);
				fprintf(seatAndId, "%i\n", extraset[k]);
			}
			fclose(inputRoot1);
			fclose(seatAndId);
			printf("\n\n\n\n\t\tRECORD DELETED SUCCESSFULLY PRESS ANY KEY..");
			getch();
		}
	}
	else if (root == 2)
	{
		inputRoot1 = fopen("root2.txt", "r");
		seatAndId = fopen("seatAndid2.txt", "r");
		while (!feof(inputRoot1))
		{
			fscanf(inputRoot1, "%s", &name[i]);
			fscanf(inputRoot1, "%s", &fname[i]);
			fscanf(inputRoot1, "%s", &cnic[i]);
			fscanf(inputRoot1, "%i", &seatno[i]);
			fscanf(seatAndId, "%i", &extraset[i]);
			if (seat == seatno[i])
			{
				f = 8;
			}
			else
			{
				i++;
			}
		} // while loop breckrt //
		fclose(inputRoot1);
		fclose(seatAndId); // after loop close variable of root1
		system("cls");
		if (f == 0)
		{
			printf("\n\n\n\n\n\n\n\n\n\t\tseat number not matching press any key..");
			getch();
			printf("\n\tpress any key ");
		}
		else
		{
			inputRoot1 = fopen("root2.txt", "w");
			fprintf(inputRoot1, "");
			fclose(inputRoot1);
			seatAndId = fopen("seatAndid2.txt", "w");
			fprintf(seatAndId, "");
			fclose(seatAndId);
			inputRoot1 = fopen("root2.txt", "a");
			seatAndId = fopen("seatAndid2.txt", "a");
			for (int k = 0; k < i; k++)
			{
				fprintf(inputRoot1, "\n%s %s %s %d", name[k], fname[k], cnic[k], seatno[k]);
				fprintf(seatAndId, "%i\n", extraset[k]);
			}
			fclose(inputRoot1);
			fclose(seatAndId);
			printf("\n\n\n\n\t\tRECORD DELETED SUCCESSFULLY PRESS ANY KEY..");
			getch();
		}
	}

	else if (root == 3)
	{
		inputRoot1 = fopen("root3.txt", "r");
		seatAndId = fopen("seatAndid3.txt", "r");
		while (!feof(inputRoot1))
		{
			fscanf(inputRoot1, "%s", &name[i]);
			fscanf(inputRoot1, "%s", &fname[i]);
			fscanf(inputRoot1, "%s", &cnic[i]);
			fscanf(inputRoot1, "%i", &seatno[i]);
			fscanf(seatAndId, "%i", &extraset[i]);
			if (seat == seatno[i])
			{
				f = 8;
			}
			else
			{
				i++;
			}
		} // while loop breckrt //
		fclose(inputRoot1);
		fclose(seatAndId); // after loop close variable of root1
		system("cls");
		if (f == 0)
		{
			printf("\n\n\n\n\n\n\n\n\n\t\tseat number not matching press any key..");
			getch();
			printf("\n\tpress any key ");
		}
		else
		{
			inputRoot1 = fopen("root3.txt", "w");
			fprintf(inputRoot1, "");
			fclose(inputRoot1);
			seatAndId = fopen("seatAndid3.txt", "w");
			fprintf(seatAndId, "");
			fclose(seatAndId);
			inputRoot1 = fopen("root3.txt", "a");
			seatAndId = fopen("seatAndid3.txt", "a");
			for (int k = 0; k < i; k++)
			{
				fprintf(inputRoot1, "\n%s %s %s %d", name[k], fname[k], cnic[k], seatno[k]);
				fprintf(seatAndId, "%i\n", extraset[k]);
			}
			fclose(inputRoot1);
			fclose(seatAndId);
			printf("\n\n\n\n\t\tRECORD DELETED SUCCESSFULLY PRESS ANY KEY..");
			getch();
		}
	}
	else if (root == 4)
	{
		inputRoot1 = fopen("root4.txt", "r");
		seatAndId = fopen("seatAndid4.txt", "r");
		while (!feof(inputRoot1))
		{
			fscanf(inputRoot1, "%s", &name[i]);
			fscanf(inputRoot1, "%s", &fname[i]);
			fscanf(inputRoot1, "%s", &cnic[i]);
			fscanf(inputRoot1, "%i", &seatno[i]);
			fscanf(seatAndId, "%i", &extraset[i]);
			if (seat == seatno[i])
			{
				f = 8;
			}
			else
			{
				i++;
			}
		} // while loop breckrt //
		fclose(inputRoot1);
		fclose(seatAndId); // after loop close variable of root1
		system("cls");
		if (f == 0)
		{
			printf("\n\n\n\n\n\n\n\n\n\t\tseat number not matching press any key..");
			getch();
			printf("\n\tpress any key ");
		}
		else
		{
			inputRoot1 = fopen("root4.txt", "w");
			fprintf(inputRoot1, "");
			fclose(inputRoot1);
			seatAndId = fopen("seatAndid4.txt", "w");
			fprintf(seatAndId, "");
			fclose(seatAndId);
			inputRoot1 = fopen("root4.txt", "a");
			seatAndId = fopen("seatAndid4.txt", "a");
			for (int k = 0; k < i; k++)
			{
				fprintf(inputRoot1, "\n%s %s %s %d", name[k], fname[k], cnic[k], seatno[k]);
				fprintf(seatAndId, "%i\n", extraset[k]);
			}
			fclose(inputRoot1);
			fclose(seatAndId);
			printf("\n\n\n\n\t\tRECORD DELETED SUCCESSFULLY PRESS ANY KEY..");
			getch();
		}
	}
	else if (root == 5)
	{
		inputRoot1 = fopen("root5.txt", "r");
		seatAndId = fopen("seatAndid5.txt", "r");
		while (!feof(inputRoot1))
		{
			fscanf(inputRoot1, "%s", &name[i]);
			fscanf(inputRoot1, "%s", &fname[i]);
			fscanf(inputRoot1, "%s", &cnic[i]);
			fscanf(inputRoot1, "%i", &seatno[i]);
			fscanf(seatAndId, "%i", &extraset[i]);
			if (seat == seatno[i])
			{
				f = 8;
			}
			else
			{
				i++;
			}
		} // while loop breckrt //
		fclose(inputRoot1);
		fclose(seatAndId); // after loop close variable of root1
		system("cls");
		if (f == 0)
		{
			printf("\n\n\n\n\n\n\n\n\n\t\tseat number not matching press any key..");
			getch();
			printf("\n\tpress any key ");
		}
		else
		{
			inputRoot1 = fopen("root5.txt", "w");
			fprintf(inputRoot1, "");
			fclose(inputRoot1);
			seatAndId = fopen("seatAndid5.txt", "w");
			fprintf(seatAndId, "");
			fclose(seatAndId);
			inputRoot1 = fopen("root5.txt", "a");
			seatAndId = fopen("seatAndid5.txt", "a");
			for (int k = 0; k < i; k++)
			{
				fprintf(inputRoot1, "\n%s %s %s %d", name[k], fname[k], cnic[k], seatno[k]);
				fprintf(seatAndId, "%i\n", extraset[k]);
			}
			fclose(inputRoot1);
			fclose(seatAndId);
			printf("\n\n\n\n\t\tRECORD DELETED SUCCESSFULLY PRESS ANY KEY..");
			getch();
		}
	}
} // delete  record function end

void searchRecord(short root) // search record
{
	int x = 0, x1 = 0;
	char customerName[40], name[40], fname[40], cnic[30];
	int seatNo;
	printf("\n\n\t ENTER CUSTOMER NAME ..");
	scanf("%s", &customerName);

	if (root == 1)
	{
		showRecordHeading();
		inputRoot1 = fopen("root1.txt", "r");
		while (!feof(inputRoot1))
		{
			fscanf(inputRoot1, "%s", &name);
			fscanf(inputRoot1, "%s", &fname);
			fscanf(inputRoot1, "%s", &cnic);
			fscanf(inputRoot1, "%d", &seatNo);
			for (int i = 0; customerName[i + 1] != '\0'; i++)
			{
				if (customerName[i] == name[i])
				{
					x1 = 56;
				}
				else
				{
					x1 = 89;
				}
			}

			if (x1 == 56)
			{
				printf("\n\t name is %s", name);
				printf("\n\t name is %s", fname);
				printf("\n\t name is %s", cnic);
				printf("\n\t name is %d", seatNo);
				printf("\n*****************************\n");
				x1 = 0;
				x = 10;
			}
		} // while loop brecket //
		fclose(inputRoot1);
		if (x == 10)
		{
			printf("\n\tPRESS ANY KEY BACK MENU .. ");
			getch();
		}
		else
		{
			system("cls");
			printf("\n\n\n\n\n\n\n\t\tCUSTOMER NAME NOT FOUND PRESS ANY KEY.. ");
			getch();
		}
	} // root 1 brecket end now

	else if (root == 2)
	{
		showRecordHeading();
		inputRoot2 = fopen("root2.txt", "r");
		while (!feof(inputRoot2))
		{
			fscanf(inputRoot2, "%s", &name);
			fscanf(inputRoot2, "%s", &fname);
			fscanf(inputRoot2, "%s", &cnic);
			fscanf(inputRoot2, "%d", &seatNo);
			for (int i = 0; customerName[i + 1] != '\0'; i++)
			{
				if (customerName[i] == name[i])
				{
					x1 = 56;
				}
				else
				{
					x1 = 89;
				}
			}

			if (x1 == 56)
			{
				printf("\n\t name is %s", name);
				printf("\n\t name is %s", fname);
				printf("\n\t name is %s", cnic);
				printf("\n\t name is %d", seatNo);
				printf("\n*****************************\n");
				x1 = 0;
				x = 10;
			}
		} // while loop brecket //
		fclose(inputRoot2);
		if (x == 10)
		{
			printf("\n\tPRESS ANY KEY BACK MENU .. ");
			getch();
		}
		else
		{
			system("cls");
			printf("\n\n\n\n\n\n\n\t\tCUSTOMER NAME NOT FOUND PRESS ANY KEY.. ");
			getch();
		}
	} // root 2 brecket end now

	else if (root == 3)
	{
		showRecordHeading();
		inputRoot3 = fopen("root3.txt", "r");
		while (!feof(inputRoot3))
		{
			fscanf(inputRoot3, "%s", &name);
			fscanf(inputRoot3, "%s", &fname);
			fscanf(inputRoot3, "%s", &cnic);
			fscanf(inputRoot3, "%d", &seatNo);
			for (int i = 0; customerName[i + 1] != '\0'; i++)
			{
				if (customerName[i] == name[i])
				{
					x1 = 56;
				}
				else
				{
					x1 = 89;
				}
			}

			if (x1 == 56)
			{
				printf("\n\t name is %s", name);
				printf("\n\t name is %s", fname);
				printf("\n\t name is %s", cnic);
				printf("\n\t name is %d", seatNo);
				printf("\n*****************************\n");
				x1 = 0;
				x = 10;
			}
		} // while loop brecket //
		fclose(inputRoot3);
		if (x == 10)
		{
			printf("\n\tPRESS ANY KEY BACK MENU .. ");
			getch();
		}
		else
		{
			system("cls");
			printf("\n\n\n\n\n\n\n\t\tCUSTOMER NAME NOT FOUND PRESS ANY KEY.. ");
			getch();
		}
	} // root 3 brecket end now

	else if (root == 4)
	{
		showRecordHeading();
		inputRoot4 = fopen("root4.txt", "r");
		while (!feof(inputRoot4))
		{
			fscanf(inputRoot4, "%s", &name);
			fscanf(inputRoot4, "%s", &fname);
			fscanf(inputRoot4, "%s", &cnic);
			fscanf(inputRoot4, "%d", &seatNo);
			for (int i = 0; customerName[i + 1] != '\0'; i++)
			{
				if (customerName[i] == name[i])
				{
					x1 = 56;
				}
				else
				{
					x1 = 89;
				}
			}

			if (x1 == 56)
			{
				printf("\n\t name is %s", name);
				printf("\n\t name is %s", fname);
				printf("\n\t name is %s", cnic);
				printf("\n\t name is %d", seatNo);
				printf("\n*****************************\n");
				x1 = 0;
				x = 10;
			}
		} // while loop brecket //
		fclose(inputRoot4);
		if (x == 10)
		{
			printf("\n\tPRESS ANY KEY BACK MENU .. ");
			getch();
		}
		else
		{
			system("cls");
			printf("\n\n\n\n\n\n\n\t\tCUSTOMER NAME NOT FOUND PRESS ANY KEY.. ");
			getch();
		}
	} // root 4 brecket end now

	else if (root == 5)
	{
		showRecordHeading();
		inputRoot5 = fopen("root5.txt", "r");
		while (!feof(inputRoot5))
		{
			fscanf(inputRoot5, "%s", &name);
			fscanf(inputRoot5, "%s", &fname);
			fscanf(inputRoot5, "%s", &cnic);
			fscanf(inputRoot5, "%d", &seatNo);
			for (int i = 0; customerName[i + 1] != '\0'; i++)
			{
				if (customerName[i] == name[i])
				{
					x1 = 56;
				}
				else
				{
					x1 = 89;
				}
			}

			if (x1 == 56)
			{
				printf("\n\t name is %s", name);
				printf("\n\t name is %s", fname);
				printf("\n\t name is %s", cnic);
				printf("\n\t name is %d", seatNo);
				printf("\n*****************************\n");
				x1 = 0;
				x = 10;
			}
		} // while loop brecket //
		fclose(inputRoot5);
		if (x == 10)
		{
			printf("\n\tPRESS ANY KEY BACK MENU .. ");
			getch();
		}
		else
		{
			system("cls");
			printf("\n\n\n\n\n\n\n\t\tCUSTOMER NAME NOT FOUND PRESS ANY KEY.. ");
			getch();
		}
	} // root 5 brecket end now
}
//ticket booking function start in this function user can book ticket for all root

void showTicketDetails() // this function is used to show all ticket record //
{
showTicket:
	system("cls");
	int root, seatNo;
	char name[40], fname[40], cnic[30];

	printf("\t\t\t***************\n");
	printf("\t\t\tTICKING BOOKING\n");
	printf("\t\t\t***************\n\n\n");
	showSelection();
	scanf("%d", &root);

	if (root == 1)
	{
		system("cls");
		showRecordHeading();

		inputRoot1 = fopen("root1.txt", "r");
		while (!feof(inputRoot1))
		{
			fscanf(inputRoot1, "%s", &name);
			fscanf(inputRoot1, "%s", &fname);
			fscanf(inputRoot1, "%s", &cnic);
			fscanf(inputRoot1, "%d", &seatNo);
			printf("\n\t name is %s", name);
			printf("\n\t father name is %s", fname);
			printf("\n\t cnic no is %s", cnic);
			printf("\n\t seat no is %d", seatNo);
			printf("\n*****************************\n");
		}
		fclose(inputRoot1);
		printf("\n\n\tPRESS ANY KEY FOR BACK MAIN MENU");
		getch();
		goto showTicket;
	}

	if (root == 2)
	{
		system("cls");
		showRecordHeading();

		inputRoot2 = fopen("root2.txt", "r");
		while (!feof(inputRoot2))
		{
			fscanf(inputRoot2, "%s", &name);
			fscanf(inputRoot2, "%s", &fname);
			fscanf(inputRoot2, "%s", &cnic);
			fscanf(inputRoot2, "%d", &seatNo);
			printf("\n\t name is %s", name);
			printf("\n\t father name is %s", fname);
			printf("\n\t cnic no is %s", cnic);
			printf("\n\t seat no is %d", seatNo);
			printf("\n*****************************\n");
		}
		fclose(inputRoot2);
		printf("\n\n\tPRESS ANY KEY FOR BACK MAIN MENU");
		getch();
		goto showTicket;
	}

	if (root == 3)
	{
		system("cls");
		showRecordHeading();
		inputRoot3 = fopen("root3.txt", "r");
		while (!feof(inputRoot3))
		{
			fscanf(inputRoot3, "%s", &name);
			fscanf(inputRoot3, "%s", &fname);
			fscanf(inputRoot3, "%s", &cnic);
			fscanf(inputRoot3, "%d", &seatNo);
			printf("\n\t name is %s", name);
			printf("\n\t father name is %s", fname);
			printf("\n\t cnic no is %s", cnic);
			printf("\n\t seat  no is %d", seatNo);
			printf("\n*****************************\n");
		}
		fclose(inputRoot3);
		printf("\n\n\tPRESS ANY KEY FOR BACK MAIN MENU");
		getch();
		goto showTicket;
	}

	if (root == 4)
	{
		system("cls");
		showRecordHeading();
		inputRoot4 = fopen("root4.txt", "r");
		while (!feof(inputRoot4))
		{
			fscanf(inputRoot4, "%s", &name);
			fscanf(inputRoot4, "%s", &fname);
			fscanf(inputRoot4, "%s", &cnic);
			fscanf(inputRoot4, "%d", &seatNo);
			printf("\n\t name is %s", name);
			printf("\n\t father name is %s", fname);
			printf("\n\t cnic no %s", cnic);
			printf("\n\t seat no is %d", seatNo);
			printf("\n*****************************\n");
		}
		fclose(inputRoot4);
		printf("\n\n\tPRESS ANY KEY FOR BACK MAIN MENU");
		getch();
		goto showTicket;
	}

	if (root == 5)
	{
		system("cls");
		showRecordHeading();
		inputRoot5 = fopen("root5.txt", "r");
		while (!feof(inputRoot5))
		{
			fscanf(inputRoot5, "%s", &name);
			fscanf(inputRoot5, "%s", &fname);
			fscanf(inputRoot5, "%s", &cnic);
			fscanf(inputRoot5, "%d", &seatNo);
			printf("\n\t name is %s", name);
			printf("\n\t father name is %s", fname);
			printf("\n\t cnic is %s", cnic);
			printf("\n\t seat no %d", seatNo);
			printf("\n*****************************\n");
		}
		fclose(inputRoot5);
		printf("\n\n\tPRESS ANY KEY FOR BACK MAIN MENU");
		getch();
		goto showTicket;
	}

	else if (root == 6)
	{
	}
	else
	{
		system("cls");
		printf("\n\n\n\n\n\n\n\t\tYOU ENTER INVALID ROOT PRESS ANY KEY..");
		getch();
		goto showTicket;
	}
} // search record function end //

void showRecordHeading() // this is used to show heading from showTicketDetails function //
{
	system("cls");
	printf("\t\t\t***********\n");
	printf("\t\t\tSHOW RECORD\n");
	printf("\t\t\t***********\n\n\n");
} // this is used to show heading from showTicketDetails function //

void ticketBooking(int root)
{
	char name[40], fname[40], cnic[30];

	printf("\n\tENTER NAME..");
	scanf("%s", &name);
	printf("\n\tENTER FATHER NAME..");
	scanf("%s", &fname);
	printf("\n\tENTER CNIC..");
	scanf("%s", &cnic);
	//	    ticketBooking (name,fname,cnic,root);

	if (root == 1)
	{
		int seatNo;
		printf("\n\tENTER SEAT NUMBER ");
	invalid1:
		scanf("%d", &seatNo);
		if (seatNo <= 45 && seatNo > 0)
		{
			int data = 0;
			inputSeatAndId = fopen("seatAndid1.txt", "r");
			while (!feof(inputSeatAndId))
			{
				fscanf(inputSeatAndId, "%d", &data);
				if (data == seatNo)
				{
					printf("\n\tTHIS SEAT IS ALL READY BOOK ");
					fclose(inputSeatAndId);
					goto invalid1;
				}
			}
			fclose(inputSeatAndId);
			// checking seat if not allready book //
			seatAndId = fopen("seatAndid1.txt", "a");
			fprintf(seatAndId, "%d\n", seatNo);
			fclose(seatAndId);
			printf("\n\tTICKET BOOKING SUCCESSFULL PRESS ANY KEY ");
			getch();
		}
		else
		{
			printf("\n\tINVALID OPTION ");
			goto invalid1;
		}
		root1 = fopen("root1.txt", "a");
		fprintf(root1, "\n%s %s %s %d", name, fname, cnic, seatNo);
		fclose(root1);
	} // root no 1 complete and checked all type of error //

	else if (root == 2)
	{
		int seatNo;
		printf("\n\tENTER SEAT NUMBER ");
	invalid2:
		scanf("%d", &seatNo);
		if (seatNo <= 45 && seatNo > 0)
		{
			int data = 0;
			inputSeatAndId1 = fopen("seatAndid2.txt", "r");
			while (!feof(inputSeatAndId1))
			{
				fscanf(inputSeatAndId1, "%d", &data);
				if (data == seatNo)
				{
					printf("\n\tTHIS SEAT IS ALL READY BOOK ");
					fclose(inputSeatAndId1);
					goto invalid2;
				}
			}
			fclose(inputSeatAndId1);
			// checking seat if not allready book //
			seatAndId1 = fopen("seatAndid2.txt", "a");
			fprintf(seatAndId1, "%d\n", seatNo);
			fclose(seatAndId1);
			printf("\n\tTICKET BOOKING SUCCESSFULL PRESS ANY KEY ");
			getch();
		}
		else
		{
			printf("\n\tINVALID OPTION ");
			goto invalid2;
		}
		root2 = fopen("root2.txt", "a");
		fprintf(root2, "\n%s %s %s %d", name, fname, cnic, seatNo);
		fclose(root2);
	} // root no 2 complete and checked all type of error //

	else if (root == 3)
	{
		int seatNo;
		printf("\n\tENTER SEAT NUMBER ");
	invalid3:
		scanf("%d", &seatNo);
		if (seatNo <= 45 && seatNo > 0)
		{
			int data = 0;
			inputSeatAndId2 = fopen("seatAndid3.txt", "r");
			while (!feof(inputSeatAndId2))
			{
				fscanf(inputSeatAndId2, "%d", &data);
				if (data == seatNo)
				{
					printf("\n\tTHIS SEAT IS ALL READY BOOK ");
					fclose(inputSeatAndId2);
					goto invalid3;
				}
			}
			fclose(inputSeatAndId2);
			// checking seat if not allready book //
			seatAndId2 = fopen("seatAndid3.txt", "a");
			fprintf(seatAndId2, "%d\n", seatNo);
			fclose(seatAndId2);
			printf("\n\tTICKET BOOKING SUCCESSFULL PRESS ANY KEY ");
			getch();
		}
		else
		{
			printf("\n\tINVALID OPTION ");
			goto invalid3;
		}
		root3 = fopen("root3.txt", "a");
		fprintf(root3, "\n%s %s %s %d", name, fname, cnic, seatNo);
		fclose(root3);
	} // root no 3 complete and checked all type of error //

	else if (root == 4)
	{
		int seatNo;
		printf("\n\tENTER SEAT NUMBER ");
	invalid4:
		scanf("%d", &seatNo);
		if (seatNo <= 45 && seatNo > 0)
		{
			int data = 0;
			inputSeatAndId3 = fopen("seatAndid4.txt", "r");
			while (!feof(inputSeatAndId3))
			{
				fscanf(inputSeatAndId3, "%d", &data);
				if (data == seatNo)
				{
					printf("\n\tTHIS SEAT IS ALL READY BOOK ");
					fclose(inputSeatAndId3);
					goto invalid4;
				}
			}
			fclose(inputSeatAndId3);
			// checking seat if not allready book //
			seatAndId3 = fopen("seatAndid4.txt", "a");
			fprintf(seatAndId3, "%d\n", seatNo);
			fclose(seatAndId3);
			printf("\n\tTICKET BOOKING SUCCESSFULL PRESS ANY KEY ");
			getch();
		}
		else
		{
			printf("\n\tINVALID OPTION ");
			goto invalid4;
		}
		root4 = fopen("root4.txt", "a");
		fprintf(root4, "\n%s %s %s %d", name, fname, cnic, seatNo);
		fclose(root4);
	} // root no 4 complete and checked all type of error //

	else if (root == 5)
	{
		int seatNo;
		printf("\n\tENTER SEAT NUMBER ");
	invalid5:
		scanf("%d", &seatNo);
		if (seatNo <= 45 && seatNo > 0)
		{
			int data = 0;
			inputSeatAndId4 = fopen("seatAndid5.txt", "r");
			while (!feof(inputSeatAndId4))
			{
				fscanf(inputSeatAndId4, "%d", &data);
				if (data == seatNo)
				{
					printf("\n\tTHIS SEAT IS ALL READY BOOK ");
					fclose(inputSeatAndId4);
					goto invalid5;
				}
			}
			fclose(inputSeatAndId4);
			// checking seat if not allready book //
			seatAndId4 = fopen("seatAndid5.txt", "a");
			fprintf(seatAndId4, "%d\n", seatNo);
			fclose(seatAndId4);
			printf("\n\tTICKET BOOKING SUCCESSFULL PRESS ANY KEY ");
			getch();
		}
		else
		{
			printf("\n\tINVALID OPTION ");
			goto invalid5;
		}
		root5 = fopen("root5.txt", "a");
		fprintf(root5, "\n%s %s %s %d", name, fname, cnic, seatNo);
		fclose(root5);
	} // root no 5 complete and checked all type of error //

} // ticket booking function start in this function user can book ticket for all root //

// this function is selection root function through this function user can select root//
int mainMenuOption()
{
	int selectOption;
	system("cls");
	printf("\t\t\t*******************\n");
	printf("\t\t\tTRANSPORT MANEGMENT\n");
	printf("\t\t\t*******************\n\n\n");
	printf("\t 1 --> ABOUT APP \n\n");
	printf("\t 2 --> TICKET BOOKING \n\n");
	printf("\t 3 --> SHOW TICKET DETAILS \n\n");
	printf("\t 4 --> SEARCH RECORD \n\n");
	printf("\t 5 --> DELETE RECORD \n\n");
	printf("\t 6 --> DELETE ALL RECORD \n\n");
	printf("\t 7 --> SEAT DETAILS \n\n");
	printf("\t 8 --> EXIT PROGRAM \n\n");
	printf("\t ENTER OPTION ..");

	scanf("%i", &selectOption);
	return selectOption;
} // this function is selection root function through this function user can select root//

void showSelection()
{
	printf("\n\t1 .  KARACHI TO ISLAMABAD ROOT1\n");
	printf("\n\t2 .  KARACHI TO LAHORE ROOT2\n");
	printf("\n\t3 .  KARACHI TO SAKAR ROOT3\n");
	printf("\n\t4 .  KARACHI TO HANGU ROOT4\n");
	printf("\n\t5 .  KARACHI TO MULTAN ROOT5\n");
	printf("\n\t6 .  BACK MAIN MENU\n");
	printf("\n\t SELECT ROOT IN ABOVE OPTION . ");
}

void about() // about function this is related about our company //
{
	system("cls");
	printf("\t\t\t*************************\n");
	printf("\t\t\tABOUT TRANSPORT MANEGMENT\n");
	printf("\t\t\t*************************\n\n\n");
	getch();

} // about function this is related about our company //