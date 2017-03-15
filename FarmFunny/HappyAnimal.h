/*
 * HappyAnimal.h
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#ifndef HAPPYANIMAL_H_
#define HAPPYANIMAL_H_

#include "Animal.h"

class HappyAnimal: public Animal {
public:
	HappyAnimal();
	
	int getHappyIndex();
	void setHappyIndex(int i);
	
	virtual ~HappyAnimal();
	
protected :
	int happyIndex;
};

#endif /* HAPPYANIMAL_H_ */
