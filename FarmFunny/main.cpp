/*
 * main.cpp
 *
 *  Created on: Mar 14, 2017
<<<<<<< .merge_file_a07904
 *      Author: anhtuan1.nguyen
 */

#include<iostream>

#include "AnimalManager.h"
#include "ResuorceManager.h"
using namespace std;



int main(){
	AnimalManager animalManager;
	ResuorceManager resourceManager;

	animalManager.setResourceListener(&resourceManager);

	animalManager.buyAnimal("Dog", "Tuan Anh");


	cout<<"Hello";
	return 0;
}

