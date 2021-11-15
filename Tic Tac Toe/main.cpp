#include "main.h"


int main()
{
	std::string game = "game";
	int move{};
	std::cout << "Welcome to Tic Tac Toe!\n";	

	while (game != "gameover")
	{
		std::cout << "1. Center  ";
		std::cout << "2. Top Left  ";
		std::cout << "3. Top Right  ";
		std::cout << "4. Top Mid  ";
		std::cout << "5. Mid Left\n";
		std::cout << "6. Mid Right  ";
		std::cout << "7. Bottom Left  ";
		std::cout << "8. Bottom Right  ";
		std::cout << "9. Bottom Mid\n";

		std::cout << "\n\nPlease Select move set Player: 1!\n\n";
		
		std::cout << "\nEnter # of move: ";
		std::cin >> move;

		player1(&move, &game);

		if (game == "gameover")
			continue;


		std::cout << "\n\nPlease Select move set Player: 2!\n\n";

		std::cout << "\nEnter # of move: ";
		std::cin >> move;

		player2(&move, &game);





	}
}