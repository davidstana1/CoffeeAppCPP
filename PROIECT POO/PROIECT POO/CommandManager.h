#pragma once
#include<iostream>
#include"Everything.h"
#include "RecipeRepo.h"
#include "CommandPanel.h"
#include "ResourceHandler.h"
#include"ResourceContainer.h"
#include"RESOURCE.h"
class CommandManager
{
private:
	bool canWork;
	RecipeRepo* repo;
public:
	CommandManager() : canWork(false), repo(nullptr) {};

	void reload();

	bool takeCommand(int order);


};

