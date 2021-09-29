#include "BuilderPattern.h"

int main()
{
	AbstractBuilder *builder;

	Director *director = new Director();

	House *house;

	builder = new ConcreteBuilderA();
	director->setBuilder(builder);
	house = director->construct();
	house->printfHouseInfo();
	delete builder;

	builder = new ConcreteBuilderB();
	director->setBuilder(builder);
	house = director->construct();
	house->printfHouseInfo();

	system("pause");

	delete director;
	delete builder;

	return 0;
}