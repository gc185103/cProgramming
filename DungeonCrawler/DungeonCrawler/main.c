// Initial Commit
#include<stdio.h>

int main()
{
	// Ask the user to navigate the dungeon by presenting them with
	// options on which way to go.
	// As we move around in the dungeon, we may encounter various
	// things, then ask the user to interact with said things.

	puts("Welcome to the dungeon, prepare to meet your maker.");
	char direction;
	
	puts("Choose a way to proceed.");
	puts("\tN) North");
	puts("\tW) West");
	puts("\tE) East");
	puts("\tS) South");

	scanf_s(" %c", &direction, 1);
	switch (direction)
	{
	case 'N':
		puts("Proceeding deepter into the dungeon.");
		break;
	case 'W':
		puts("You've into a trap, take 2 damage.");
		break;
	case 'E':
		puts("You've encountered a goblin. Prepare for battle.");
		break;
	case 'S':
		puts("Running away already huh, maybe next time.");
		return -1;
	}

	return 0;
}