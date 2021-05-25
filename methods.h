#pragma once 
#include <conio.h>
#include <windows.h>
#include <vector>
#include<iostream>
#include<string>
#include<fstream>
#include "variable.h"
#include"container.h"

float input();
float inputo(int l);
void print(const std::string language, std::string g);
inline void read_config( std::string g);
int menu_garden(int lang);
int garden_set(int lang);
int garden_list(int lang);
int break_vegetable(int lang);
int garden_delete_list(int lang);
int file_load(int lang);
int help(int lang);