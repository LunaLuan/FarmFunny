/*
 * Animal.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#include "Animal.h"

Animal::Animal() {
	// TODO Auto-generated constructor stub

}

string Animal::getName() {
	return name;
}

void Animal::setName(string n) {
	name = n;
}

int Animal::getAge() {
	return age;
}

void Animal::setAge(int a) {
	age = a;
}

float Animal::getWeight() {
	return weight;
}

void Animal::setWeight(float w) {
	weight = w;
}

int Animal::getPrice() {
	return price;
}

void Animal::setPrice(int p) {
	price = p;
}


Animal::~Animal() {
	// TODO Auto-generated destructor stub
}

