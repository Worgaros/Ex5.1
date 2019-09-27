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

int main()
{
	const int maxNumber = 100;
	GameState gameState = GameState::INIT;

	unsigned int mysteryNumber = 0;

	while (gameState != GameState::EXIT)
	{
		switch (gameState)
		{
		case GameState::INIT:
			GenerateMysteryNumber(mysteryNumber, maxNumber);
			gameState = GameState::PLAY;
			break;

		case GameState::PLAY:
			/*
				Cette partie doit:
				- essayer de deviner le nombre myst�re � l'aide d'un function
				- Si le nombre mystre est trouv� il faut passer � l'�tat END
			*/
			break;

		case GameState::END:
			/*
				Cette partie doit afficher le nombre de coups qui ont �t� n�cessaire pour trouver le nombre myst�re et indiquer quel est ce nombre myst�re
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