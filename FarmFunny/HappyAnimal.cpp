/*
 * HappyAnimal.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#include "HappyAnimal.h"



HappyAnimal::HappyAnimal() {
	// TODO Auto-generated constructor stub
	setHappyIndex(7);
} 
void HappyAnimal::setHappyIndex(int i){
	happyIndex=i;
}
int HappyAnimal::getHappyIndex(){
	return happyIndex;
}


HappyAnimal::~HappyAnimal() {
	// TODO Auto-generated destructor stub
}

