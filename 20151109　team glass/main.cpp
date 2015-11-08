#include "lib/framework.hpp"
#include "singleton.h"
#include "Menu.h"
#include "Result.h"
#include "Title.h"
#include "../Game.h"

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

		
  while (env.isOpen()) {

	title.Setup();

    env.begin();
	
	if (env.isPushButton(Mouse::LEFT))
	{
		n = (n + 1) % 4;
	}


	for (int i = 0; i < 5; i++){

		
		switch (n)
		{
		case TITLE:
			title.Draw();
			break;

		case MENU:
			
			break;

		case GAME:
			drawFillBox(0, 0, 100, 100, Color::blue);
			break;

		case RESULT:
			drawFillBox(0, 0, 100, 100, Color::red);
			break;

		}

		
	}
	
	
    
    env.end();
  }
}
