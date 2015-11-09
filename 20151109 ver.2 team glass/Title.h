#pragma once
#include "lib\framework.hpp"


class Title
{
private:
	
	Texture TitleBack;
	
public:

	Title();

	float TitleAnimationCounter = 0;
	float TitleAnimationTransparency = 1;

	void Setup();
	void Draw();

};