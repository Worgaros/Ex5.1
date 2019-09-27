#include <iostream>
#include <time.h>

enum class GameState
{
	INIT,
	PLAY,
	END,
	EXIT
};

void GenerateMysteryNumber(unsigned int& mysteryNumber, int maxNumber);
void FindMysteryNumber(unsigned int mysteryNumber, int maxNumber, int& counter);

int main()
{
	const int maxNumber = 100;
	int counter = 0;
	GameState gameState = GameState::INIT;

	unsigned int mysteryNumber = 0;

	while (gameState != GameState::EXIT)
	{
		switch (gameState)
		{
			case GameState::INIT:
			{
				GenerateMysteryNumber(mysteryNumber, maxNumber);
				gameState = GameState::PLAY;
				break;
			}
			case GameState::PLAY:
			{
				FindMysteryNumber(mysteryNumber, maxNumber, counter);
				GameState gameState = GameState::END;
				break;
			}	
			case GameState::END:

				/*
					Cette partie doit afficher le nombre de coups qui ont été nécessaire pour trouver le nombre mystère et indiquer quel est ce nombre mystère
				*/
				break;

			case GameState::EXIT:
				break;
			}
	}

	
	system("pause");
	return EXIT_SUCCESS;
}

void GenerateMysteryNumber(unsigned int& mysteryNumber, int maxNumber)
{
	srand(time(NULL));
	mysteryNumber = rand() % maxNumber + 1;
}

void FindMysteryNumber(unsigned int mysteryNumber, int maxNumber, int& counter)
{
	int tmp = 0;
	while (tmp != mysteryNumber)
	{
		tmp++;
		counter++;
	}
}