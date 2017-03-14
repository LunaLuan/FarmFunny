/*
 * Animal.h
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include<iostream>
using namespace std;

class Animal {
public:
	Animal();

	string getName();
	void setName(string n);

	int getAge();
	void setAge(int a);


	float getWeight();
	void setWeight(float w);

	int getPrice();
	void setPrice(int p);

	virtual void sound() = 0;
	virtual void eat() = 0;
	virtual void goOut() = 0;
	virtual void goBack() = 0;
	virtual void die() = 0;
	virtual void reproduce() = 0;

	virtual ~Animal();

protected:
	string name;
	int age;
	float weight;
	int price;
};

#endif /* ANIMAL_H_ */
