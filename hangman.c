#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char SecretWord[50] = "sugar";
//char SecretWord[1]= "s";
//char *SecretPtr = &SecretWord[50];
int NumberOfTries = 8;
char Guess;

//complete
void HangManFigure()
{
	printf("__________________________________\n");
	printf("|				 |\n");
	printf("|				 O\n");
	printf("|				 |\n");
	printf("|				/|\\\n");
	printf("|				 |\n");
	printf("|				/ \\\n");
}

//needs work
//working functionality: if you dont guess write letter at all

void GuessWord()
{
	printf("The secretword is: \"%s\".\n", SecretWord);
	printf("Please guess 1st letter: ");
	scanf(" %c", &Guess);
	
		
	if(Guess != SecretWord[0])
	{
		
		printf("That was incorrect.");
		printf("You now have %d tries left.\n", NumberOfTries - 1);

		printf("__________________________________\n");
		printf("|				 |\n");
		printf("|				 O\n");
		printf("|				 |\n");
		printf("|				/|\\\n");
		printf("|				 |\n");
		printf("|				/ \n");

		printf("Please try again \n");
		printf("Please guess 1st letter: ");
		scanf(" %c", &Guess);
		NumberOfTries--;

			if(Guess != SecretWord[0])
			{
		
				printf("That was incorrect.");
				printf("You now have %d tries left.\n", NumberOfTries - 1);

				printf("__________________________________\n");
				printf("|				 |\n");
				printf("|				 O\n");
				printf("|				 |\n");
				printf("|				/|\\\n");
				printf("|				 |\n");
				

				printf("Please try again \n");
				printf("Please guess 1st letter: ");
				scanf(" %c", &Guess);
				NumberOfTries--;

			}
				
				if(Guess != SecretWord[0])
				{
		
				printf("That was incorrect.");
				printf("You now have %d tries left.\n", NumberOfTries - 1);

				printf("__________________________________\n");
				printf("|				 |\n");
				printf("|				 O\n");
				printf("|				 |\n");
				printf("|				/|\\\n");
				

				printf("Please try again \n");
				printf("Please guess 1st letter: ");
				scanf(" %c", &Guess);
				NumberOfTries--;

				if(Guess != SecretWord[0])
				{
		
				printf("That was incorrect.");
				printf("You now have %d tries left.\n", NumberOfTries - 1);

				printf("__________________________________\n");
				printf("|				 |\n");
				printf("|				 O\n");
				printf("|				 |\n");
				printf("|				/|\n");
				
				

				printf("Please try again \n");
				printf("Please guess 1st letter: ");
				scanf(" %c", &Guess);
				NumberOfTries--;

				if(Guess != SecretWord[0])
				{
		
				printf("That was incorrect.");
				printf("You now have %d tries left.\n", NumberOfTries - 1);

				printf("__________________________________\n");
				printf("|				 |\n");
				printf("|				 O\n");
				printf("|				 |\n");
				printf("|				/\n");
				

				printf("Please try again \n");
				printf("Please guess 1st letter: ");
				scanf(" %c", &Guess);
				NumberOfTries--;

				if(Guess != SecretWord[0])
			{
		
				printf("That was incorrect.");
				printf("You now have %d tries left.\n", NumberOfTries - 1);

				printf("__________________________________\n");
				printf("|				 |\n");
				printf("|				 O\n");
				printf("|				 |\n");
				

				printf("Please try again \n");
				printf("Please guess 1st letter: ");
				scanf(" %c", &Guess);
				NumberOfTries--;

				if(Guess != SecretWord[0])
			{
		
				printf("That was incorrect.");
				printf("You now have %d try left.\n", NumberOfTries - 1);

				printf("__________________________________\n");
				printf("|				 |\n");
				printf("|				 O\n");
				
				printf("Please try again \n");
				printf("Please guess 1st letter: ");
				scanf(" %c", &Guess);
				NumberOfTries--;

				if(Guess != SecretWord[0])
			{
		
				printf("That was incorrect.");
				printf("You now have %d tries left.\n", NumberOfTries - 1);

				printf("__________________________________\n");
				printf("|				 |\n");
				printf("|				 \n");
				printf("|				 \n");
				printf("|				\n");
				printf("|				 \n");
				printf("|				 \n");

				

				printf("Youre a dead man. GAME OVER!\n\n");
			}
			}
			}
				}
				}
				}
			}


	
	else
	{
		printf("You guessed it! Please guess next letter: ");
		scanf(" %c", &Guess);
		if(Guess != SecretWord[1]) //if second letter is incorrect
		{
		
				printf("That was incorrect.");
				printf("You now have %d tries left.\n", NumberOfTries - 1);

				 printf("__________________________________\n");
				 printf("|				 |\n");
				 printf("|				 O\n");
				 printf("|				 |\n");
				 printf("|				/|\\\n");
				 printf("|				 |\n");
				 printf("|				/ \n");
				

				printf("Please try again \n");
				printf("Please guess 1st letter: ");
				scanf(" %c", &Guess);
				NumberOfTries--;
		}
		else
		{
			printf("You guessed it! Please guess next letter: "); //if it is corect
			scanf(" %c", &Guess);
			printf("You guessed it! Please guess next letter: "); //if it is corect
			scanf(" %c", &Guess);
			printf("You guessed it! Please guess next letter: "); //if it is corect
			scanf(" %c", &Guess);
			printf("GAME OVER. YOU WON!\n\n");
		
		}

	}
		
		
	
}

	
	


int main()
{
	printf("Starting hangman game...\n");
	HangManFigure();
	GuessWord();

}