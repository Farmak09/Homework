#include "Declarations.h"

Player* newPlayer(char* name)
{
	Player player;
	player.name = name;
	player.lives = 3;
	player.score = 0;
	player.yPosition = 0;
	player.bullets->pos.x;
	player.bullets->pos.y;
	player.bullets->shot = false;
	return &player;
}

void deletePlayer(Player* mPlayer)
{
	mPlayer = 0;
}

void movePlayerUp(Player* mPlayer)
{
	mPlayer->yPosition -= 1;
	if (mPlayer->yPosition < 0)
	{
		mPlayer->yPosition = 0;
	}
}

void movePlayerDown(Player* mPlayer)
{
	mPlayer->yPosition += 1;
	if (mPlayer->yPosition < 9)
	{
		mPlayer->yPosition = 9;
	}
}

void newShoot(Player* mPlayer)
{
	if (mPlayer->bullets->shot = false)
	{
		mPlayer->bullets->shot = true;
		mPlayer->bullets->pos.x = 1;
		mPlayer->bullets->pos.y = mPlayer->yPosition;
	}
}

void updateBulletsPositions(Player* mPlayer)
{

	mPlayer->bullets->pos.x += 1;
	if (mPlayer->bullets->pos.x = 60)
	{
		mPlayer->bullets->shot = false;
	}
}

Enemy* newEnemy()
{
	Enemy enemy;
	enemy.pos.x = 59;
	enemy.pos.y = rand() % 10;
	return &enemy;
}

void deleteEnemy(Enemy* mEnemy)
{
	mEnemy = 0;
}

void updateEnemyPosition(Enemy* mEnemy)
{
	mEnemy->pos.x -= 1;
}

bool checkEnemyHit(Enemy* mEnemy)
{
	if (mEnemy->pos.x == 0)
	{
		return true;
	}
	return false;
}