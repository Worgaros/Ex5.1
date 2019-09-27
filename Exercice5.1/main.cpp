#include <iostream>
#include <time.h>

enum class GameState
{
	INIT,
	PLAY,
	END,
	EXIT
};

void GenerateMysteryNumber(int& mysteryNumber, int maxNumber);
void FindMysteryNumber(int mysteryNumber, int maxNumber, int& counter);

int main()
{
	const int maxNumber = 100;
	int counter = 0;
	GameState gameState = GameState::INIT;
	srand(time(NULL));

	int mysteryNumber = 0;

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
				gameState = GameState::END;
				break;
			}	

			case GameState::END:
			{
				std::cout << "Number found in "<< counter << " tour\n";
				gameState = GameState::EXIT;
				break;
			}

			case GameState::EXIT:
			{
				break;
			}
		}
	}

	
	system("pause");
	return EXIT_SUCCESS;
}

void GenerateMysteryNumber(int& mysteryNumber, int maxNumber)
{
	
	mysteryNumber = rand() % maxNumber + 1;
}

void FindMysteryNumber(int mysteryNumber, int maxNumber, int& counter)
{
	int tmp = 0;
	while (tmp != mysteryNumber)
	{
		tmp++;
		counter++;
	}
}