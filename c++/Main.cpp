#include <iostream>
#define LOG(message) std::cout << message << std::endl;

class Player
{
public:
	int x, y;
	int speed;

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};



int main()
{
	Player player1;
	player1.x = 5;
	player1.y = 6;
	player1.speed = 12;

	player1.Move(2, -6);

	LOG(player1.x);
	LOG(player1.y);
	LOG(player1.speed);
	std::cin.get();
}