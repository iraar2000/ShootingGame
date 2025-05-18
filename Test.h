#pragma once
#include "Vec2.h"
#include "EntityManager.h"
#include <iostream>

#define Logger(Type, Response,value)  std::cout<<Type<<": "<< Response<<" "<< value<<std::endl;
#define SResponse #SUCCEDED_WITH_VALUE
#define FResponse #FAILED_WITH_VALUE


class Test 
{
public:
	void TestVectorClass();
	void TestEntityManagerClass();
};
