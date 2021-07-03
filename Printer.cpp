#include <iostream>

//Prints out the passed number
//If the numvers are divisivle by 3 it will print hello instead
//If the numver is divisible by 3 it will print world
void PrintValue(int Num)
{
	//Handles 0, as modulo would throw an error
	if (Num == 0)
	{
		std::cout << "0" << std::endl;
		return;
	}
	//This handles all numbers that are not multiples
	if (Num % 3 != 0 && Num % 5 !=0)
	{
		std::cout << Num;
	}

	//Modulo being 0 dictates that the number is a multiple
	if (Num % 3 == 0)
	{
		std::cout << "hello";
	}
	if (Num % 5 == 0)
	{
		std::cout << "world";
	}

	//Format output
	std::cout << std::endl;
}