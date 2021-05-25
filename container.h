#pragma once
#include "methods.h"
#include "vegetable.h"
#include "Fermer.h"
#include "Tomato.h"
#include "Strawberry.h"
#include "TomatoBerry.h"

void addFermer(std::string Name, float Weight, int Height);
void saveFermers();
void printFermers();
void readFermers();
void deletefermer();
void addTomato(float mass, int ripeness, std::string color, std::string type, float size);
void saveTomato();
void printTomatos();
void readTomato();
void deleteTomato();
void addStrawberry(float Mass, float Ripeness, float Sweetness, float Size);
void saveStrawberry();
void printStrawberrys();
void readStrawberrys();
void deleteStrawberry();
void addTomatoberry(float Mass, int Ripeness, std::string Color, float Mutation, float Size, float Sweetness);
void saveTomatoberry();
void printTomatoberrys();
void readTomatoberrys();
void deleteTomatoberry();
void compareTomato(int a,int b);