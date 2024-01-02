#pragma once
#include<iostream>
#include <thread>         
#include <chrono>
#include "Everything.h"
using namespace std;
class ResourceContainer
{
	Resource resource;
	int lowQ = 20;
	int maxQ = 100;
public:
	int currentQ;
	ResourceContainer() {};
	
	 ResourceContainer(Resource,int);

	 void refill(int);

	 int getQuantity(int);

	 void useInRecipe(Resource,int);
};

