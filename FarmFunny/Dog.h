/*
 * Dog.h
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#ifndef DOG_H_
#define DOG_H_

#include "HappyAnimal.h"
#include "IntelligenceAnimal.h"

class Dog: public IntelligenceAnimal, public HappyAnimal {
public:
	Dog();
	virtual ~Dog();
};

#endif /* DOG_H_ */
