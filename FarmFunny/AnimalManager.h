/*
 * AnimalManager.h
 *
 *  Created on: Mar 15, 2017
 *      Author: luan.ha
 */

#ifndef ANIMALMANAGER_H_
#define ANIMALMANAGER_H_
using namespace std;

class AnimalManager {
public:
	AnimalManager();
	void buyAnimal(string type, string name);
	void sellAnimal(string type, string name);
	void sellAnimal(string type);
	void setResourceListener(ResuorceManager *resource);
	virtual ~AnimalManager();
protected:
	ResuorceManager *resourecListener;
};

#endif /* ANIMALMANAGER_H_ */
