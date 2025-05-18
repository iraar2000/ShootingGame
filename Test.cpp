#include "Test.h"

/* Testing vector class function */
void Test::TestVectorClass()
{
	// first constructor
	Vec2 test;
	Logger("Vec2", "Constructor test() x: ", test.x);
	Logger("Vec2", "Constructor test() y: ", test.y);

	// second constructor
	Vec2 test2(100, 200);
	Logger("Vec2", "Constructor test(float, float) x: ", test2.x);
	Logger("Vec2", "Constructor test(float, float) y: ", test2.y);

	// add test
	Vec2 test3(300, 400);
	Vec2 res = test2 + test3;
	Logger("Vec2", "test(100, 200) +  test(300, 400) = result.x: ", res.x);
	Logger("Vec2", "test(100, 200) +  test(300, 400) = result.y: ", res.y);

	// sub test
	res = test2 - test3;
	Logger("Vec2", "test(100, 200) -  test(300, 400) = result.x: ", res.x);
	Logger("Vec2", "test(100, 200) -  test(300, 400) = result.y: ", res.y);

	// mult test
	res = test2 * test3;
	Logger("Vec2", "test(100, 200) *  test(300, 400) = result.x: ", res.x);
	Logger("Vec2", "test(100, 200) *  test(300, 400) = result.y: ", res.y);

	// div test
	float divVal = test2 / test3;
	Logger("Vec2", "test(100, 200) /  test(300, 400) = result: ", divVal);

	// equality comparision test
	bool comp = test2 == test3;
	Logger("Vec2", "test(100, 200) ==  test(300, 400) => result  0:false 1:true: ", comp);

	// non-equality comparision test
	comp = test2 != test3;
	Logger("Vec2", "test(100, 200) !=  test(300, 400) => result  0:false 1:true: ", comp);

	// increment operator test
	test2 += test3;
	Logger("Vec2", "test(100, 200) +=  test(300, 400) test2.x: ", test2.x);
	Logger("Vec2", "test(100, 200) +=  test(300, 400) test2.y: ", test2.y);

	// decrement operator test
	test2 -= test3;
	Logger("Vec2", "test(100, 200) -=  test(300, 400) test2.x: ", test2.x);
	Logger("Vec2", "test(100, 200) -=  test(300, 400) test2.y: ", test2.y);

	// multiplicator operator test
	test2 *= 100;
	Logger("Vec2", "test(100, 200) *=  100 test2.x: ", test2.x);
	Logger("Vec2", "test(100, 200) *=  100 test2.y: ", test2.y);

	// divisor operator test
	test2 /= 100;
	Logger("Vec2", "test(10000, 20000) /=  100 test2.x: ", test2.x);
	Logger("Vec2", "test(10000, 20000) /=  100 test2.y: ", test2.y);

};

/* Testing Entity Manager class function */
void Test::TestEntityManagerClass()
{
	EntityManager entManager;

	entManager.addEntity("Entity Three");
	entManager.addEntity("Entity One");
	entManager.addEntity("Entity One");
	entManager.addEntity("Entity Two");
	entManager.addEntity("Entity One");
	entManager.update();
	for (std::shared_ptr<Entity> e : entManager.getEntities()) {
		Logger("Entity", "entity from entManager.getEntities()", e);
	}
	for (std::shared_ptr<Entity> e : entManager.getEntities("Entity One")) {
		Logger("Entity", "entity from entManager.getEntities(Entity One)", e);
	};
	for (std::shared_ptr<Entity> e : entManager.getEntities("Entity Two")) {
		Logger("Entity", "entity from entManager.getEntities(Entity Two)", e);
	};
	for (std::shared_ptr<Entity> e : entManager.getEntities("Entity Three")) {
		Logger("Entity", "entity from entManager.getEntities(Entity Three)", e);
	};
};