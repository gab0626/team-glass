#include "lib/framework.hpp"
#include "singleton.h"
#include "Menu.h"
#include "Result.h"
#include "Title.h"
#include "Game.h"

enum GameChange
{
	TITLE,
	MENU,
	GAME,
	RESULT
};

int main() {

	env;
	int n = 0;
	Title title;
	Game game;
	game.Setup();
		
  while (env.isOpen()) {

	title.Setup();
	

    env.begin();

	game.Draw();
	
    
    env.end();
  }
}
