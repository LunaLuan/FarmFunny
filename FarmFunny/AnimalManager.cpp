/*
 * AnimalManager.cpp
 *
 *  Created on: Mar 15, 2017
 *      Author: luan.ha
 */

#include "AnimalManager.h"

AnimalManager::AnimalManager() {


}

AnimalManager::~AnimalManager() {
	delete resourecListener;
	resourecListener = 0;

}

void AnimalManager::buyAnimal(string type, string name) {
	AnimalFactory factory;
	Animal *animal = factory.createAnimal(type);
	animal->setName(name);

	animals.push_back(animal);
	resourecListener->onBuyAnimal(animal->getPriceBuy());

}

void AnimalManager::sellAnimal(string type, string name) {
	for (int i = animals.begin(); i!= animals.end();i++){
		if(animals[i]->getName() == name) {

		}
	}


}

void AnimalManager::sellAnimal(string type) {
}

void AnimalManager::setResourceListener(ResuorceManager* resource) {
	resourecListener = resource;
}
