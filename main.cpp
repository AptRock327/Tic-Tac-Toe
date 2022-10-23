#include <iostream>

void print_board(std::string state)
{
	std::cout << "-------------" << std::endl;
	std::cout << "| " << state[1] << " | " << state[2] << " | " << state[3] <<  " |" << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << "| " << state[4] << " | " << state[5] << " | " << state[6] <<  " |" << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << "| " << state[7] << " | " << state[8] << " | " << state[9] <<  " |" << std::endl;
	std::cout << "-------------" << std::endl;
}

int main()
{
	std::cout << "INSTRUCTIONS:" << std::endl << std::endl << "PRESS THE NUMBER CORRESPONDING TO THE FIELD THAT YOU WANT TO PLACE A CIRCLE ON, FOLLOWED BY ENTER" << std::endl;
	std::string state = " 123456789";
	print_board(state);
	std::cout << "X GOES FIRST AND IS YOUR ENEMY" << std::endl << std::endl << "GOOD LUCK!" << std::endl;
	state = "         X";
	print_board(state);
	int choice;
	std::cin >> choice;
	state[choice] = 'O';
	if(choice != 5)
	{
		if(choice == 2)
		{
			state[3] = 'X';
			print_board(state);
			std::cin >> choice;
			state[choice] = 'O';
			if(choice != 6)
			{
				state[6] = 'X';
				print_board(state);
				std::cout << "X WON" << std::endl;
				return 0;
			}
			else
			{
				if((state[7] != 'O') & (state[8] != 'O'))
				{
					state[7] = 'X';
					print_board(state);
					std::cin >> choice;
					state[choice] = 'O';
					if(choice != 8)
					{
						state[8] = 'X';
						print_board(state);
						std::cout << "X WON" << std::endl;
						return 0;
					}
					if(choice != 5)
					{
						state[5] = 'X';
						print_board(state);
						std::cout << "X WON" << std::endl;
						return 0;
					}
				}
				else
				{
					state[1] = 'X';
					print_board(state);
					std::cin >> choice;
					state[choice] = 'O';
					if(choice != 2)
					{
						state[2] = 'X';
						print_board(state);
						std::cout << "X WON" << std::endl;
						return 0;
					}
					if(choice != 5)
					{
						state[5] = 'X';
						print_board(state);
						std::cout << "X WON" << std::endl;
						return 0;
					}
				}
			}
		}
		if((choice != 7) & (choice != 8))
		{
			state[7] = 'X';
			print_board(state);
			std::cin >> choice;
			state[choice] = 'O';
			if(choice != 8)
			{
				state[8] = 'X';
				print_board(state);
				std::cout << "X WON" << std::endl;
				return 0;
			}
			else
			{
				if((state[1] != 'O') & (state[4] != 'O'))
				{
					state[1] = 'X';
					print_board(state);
					std::cin >> choice;
					state[choice] = 'O';
					if(choice != 4)
					{
						state[4] = 'X';
						print_board(state);
						std::cout << "X WON" << std::endl;
						return 0;
					}
					if(choice != 5)
					{
						state[5] = 'X';
						print_board(state);
						std::cout << "X WON" << std::endl;
						return 0;
					}
				}
				else
				{
					state[3] = 'X';
					print_board(state);
					std::cin >> choice;
					state[choice] = 'O';
					if(choice != 6)
					{
						state[6] = 'X';
						print_board(state);
						std::cout << "X WON" << std::endl;
						return 0;
					}
					if(choice != 5)
					{
						state[5] = 'X';
						print_board(state);
						std::cout << "X WON" << std::endl;
						return 0;
					}
				}
			}
		}
		else
		{
			state[3] = 'X';
			print_board(state);
			std::cin >> choice;
			state[choice] = 'O';
			if(choice != 6)
			{
				state[6] = 'X';
				print_board(state);
				std::cout << "X WON" << std::endl;
				return 0;
			}
			else
			{
					state[1] = 'X';
					print_board(state);
					std::cin >> choice;
					state[choice] = 'O';
					if(choice != 2)
					{
						state[2] = 'X';
						print_board(state);
						std::cout << "X WON" << std::endl;
						return 0;
					}
					if(choice != 5)
					{
						state[5] = 'X';
						print_board(state);
						std::cout << "X WON" << std::endl;
						return 0;
					}
			}
		}
	}
	else
	{
		state[1] = 'X';
		print_board(state);
		std::cin >> choice;
		state[choice] = 'O';
		if(choice == 7)
		{
			state[3] = 'X';
			print_board(state);
			std::cin >> choice;
			state[choice] = 'O';
			if(choice != 2)
			{
				state[2] = 'X';
				print_board(state);
				std::cout << "X WON" << std::endl;
				return 0;
			}
			if(choice != 6)
			{
				state[6] = 'X';
				print_board(state);
				std::cout << "X WON" << std::endl;
				return 0;
			}
		}
		if(choice == 3)
		{
			state[7] = 'X';
			print_board(state);
			std::cin >> choice;
			state[choice] = 'O';
			if(choice != 8)
			{
				state[8] = 'X';
				print_board(state);
				std::cout << "X WON" << std::endl;
				return 0;
			}
			if(choice != 4)
			{
				state[4] = 'X';
				print_board(state);
				std::cout << "X WON" << std::endl;
				return 0;
			}
		}
		if(choice == 2)
		{
			state[8] = 'X';
			print_board(state);
			std::cin >> choice;
			state[choice] = 'O';
			if(choice != 7)
			{
				state[7] = 'X';
				print_board(state);
				std::cout << "X WON" << std::endl;
				return 0;
			}
			else
			{
				state[3] = 'X';
				print_board(state);
				std::cin >> choice;
				state[choice] = 'O';
				if(choice != 6)
				{
					state[6] = 'X';
					print_board(state);
					std::cout << "X WON" << std::endl;
					return 0;
				}
				else
				{
					state[4] = 'X';
					print_board(state);
					std::cout << "THAT'S A TIE" << std::endl;
					return 0;
				}
			}
		}
		if(choice == 4)
		{
			state[6] = 'X';
			print_board(state);
			std::cin >> choice;
			state[choice] = 'O';
			if(choice != 3)
			{
				state[3] = 'X';
				print_board(state);
				std::cout << "X WON" << std::endl;
				return 0;
			}
			else
			{
				state[7] = 'X';
				print_board(state);
				std::cin >> choice;
				state[choice] = 'O';
				if(choice != 8)
				{
					state[8] = 'X';
					print_board(state);
					std::cout << "X WON" << std::endl;
					return 0;
				}
				else
				{
					state[2] = 'X';
					print_board(state);
					std::cout << "THAT'S A TIE" << std::endl;
					return 0;
				}
			}
		}
		if(choice == 6)
		{
			state[4] = 'X';
			print_board(state);
			std::cin >> choice;
			state[choice] = 'O';
			if(choice != 7)
			{
				state[7] = 'X';
				print_board(state);
				std::cout << "X WON" << std::endl;
				return 0;
			}
			else
			{
				state[3] = 'X';
				print_board(state);
				std::cin >> choice;
				state[choice] = 'O';
				if(choice != 2)
				{
					state[2] = 'X';
					print_board(state);
					std::cout << "X WON" << std::endl;
					return 0;
				}
				else
				{
					state[8] = 'X';
					print_board(state);
					std::cout << "THAT'S A TIE" << std::endl;
					return 0;
				}
			}
		}
		if(choice == 8)
		{
			state[2] = 'X';
			print_board(state);
			std::cin >> choice;
			state[choice] = 'O';
			if(choice != 3)
			{
				state[3] = 'X';
				print_board(state);
				std::cout << "X WON" << std::endl;
				return 0;
			}
			else
			{
				state[7] = 'X';
				print_board(state);
				std::cin >> choice;
				state[choice] = 'O';
				if(choice != 4)
				{
					state[4] = 'X';
					print_board(state);
					std::cout << "X WON" << std::endl;
					return 0;
				}
				else
				{
					state[6] = 'X';
					print_board(state);
					std::cout << "THAT'S A TIE" << std::endl;
					return 0;
				}
			}
		}
	}

	return 0;
}
