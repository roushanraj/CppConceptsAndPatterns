#ifndef __BUILDER_PATTERN__
#define __BUILDER_PATTERN__

#include <iostream>
#include <string.h>
using namespace std;


class House
{
public:
	House() {}
	void setFloor(string iFloor) {
		this->floor = iFloor;
	}
	void setWall(string iWall) {
		this->wall = iWall;
	}
	void setRoof(string iRoof) {
		this->roof = iRoof;
	}
	
	void printfHouseInfo() {
		printf("Floor:%s\t\n", this->floor.c_str());
		printf("Wall:%s\t\n", this->wall.c_str());
		printf("Roof:%s\t\n", this->roof.c_str());
	}
private:
	string floor;
	string wall;
	string roof;
};


class AbstractBuilder
{
public:
	AbstractBuilder() {
		house = new House();
	}
	virtual ~AbstractBuilder()
	{
		if (house != nullptr)
		{
			delete house;
			house = nullptr;
		}
	}

	virtual void buildFloor() = 0;
	virtual void buildWall() = 0;
	virtual void buildRoof() = 0;
	virtual House *getHouse() = 0;

	House *house;
};


class ConcreteBuilderA :public AbstractBuilder
{
public:
	ConcreteBuilderA() {
		printf("ConcreteBuilderA\n");
	}
	~ConcreteBuilderA()
	{
		if (this->house != nullptr)
		{
			delete house;
			house = nullptr;
		}
	}
	
	void buildFloor() {
		this->house->setFloor("Floor_A");
	}
	void buildWall() {
		this->house->setWall("Wall_A");
	}
	void buildRoof() {
		this->house->setRoof("Roof_A");
	}
	House *getHouse() {
		return this->house;
	}
};


class ConcreteBuilderB :public AbstractBuilder
{
public:
	ConcreteBuilderB() {
		printf("ConcreteBuilderB\n");
	}
	~ConcreteBuilderB()
	{
		if (this->house != nullptr)
		{
			delete house;
			house = nullptr;
		}
	}
	
	void buildFloor() {
		this->house->setFloor("Floor_B");
	}
	void buildWall() {
		this->house->setWall("Wall_B");
	}
	void buildRoof() {
		this->house->setRoof("Roof_B");
	}
	House *getHouse() {
		return this->house;
	}
};


class Director
{
public:
	Director() :builder(nullptr) {}
	~Director()
	{
		if (this->builder != nullptr)
		{
			delete builder;
			builder = nullptr;
		}
	}
	
	void setBuilder(AbstractBuilder *iBuilder) {
		this->builder = iBuilder;
	}
	House *construct() {
		builder->buildFloor();
		builder->buildWall();
		builder->buildRoof();
		return builder->getHouse();
	}
private:
	AbstractBuilder *builder;
};

#endif 