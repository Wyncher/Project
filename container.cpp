#include"container.h"

std::string Name, Weight, Height, type, Mass,Size,Ripeness,Color, Sweetness, Mutation;
std::vector<Fermer>fermers;
std::vector<Tomato>tomatos;
std::vector<Strawberry>strawberrys;
std::vector<TomatoBerry>tomatoberrys;
void addFermer(std::string Name, float Weight, int Height) {
	Fermer a(Name,Weight,Height);
	fermers.push_back(a);
}
void saveFermers() {
	std::ofstream file("saved_fermers.txt");
	if (file.is_open())
	{
		for (int i = 0; i < fermers.size(); i++) {
			file << fermers[i].getName() << std::endl;
			file << fermers[i].getWeight() << std::endl;
			file << fermers[i].getHeight() << std::endl;
		}
	}
}
void readFermers() {
	std::ifstream ifs("saved_fermers.txt");
		fermers.clear();
	if (ifs.is_open())
	{
		while(!ifs.eof()){
			ifs >> Name;
			ifs >> Weight;
			ifs >> Height;
			if (ifs.eof()) {
				break;
			}
			Fermer a(Name, std::stof(Weight), std::stoi(Height));
			fermers.push_back(a);
		}
	}
	else {
		(lang == 1) ? read_config("save_nf_r") : read_config("save_nf_e");
	}
ifs.close();
}
void printFermers() {
	std::string g;
		for (int i = 0; i < fermers.size(); ++i) {
			std::cout << std::endl << "Fermer(( " <<i<<" ))"<<std::endl;
			
			(lang == 1) ? Name="locale/printfermer_r.txt" : Name = "locale/printfermer_e.txt";
			std::ifstream ifs(Name); Name = "";
			if (ifs.is_open()) {
			for (int y = 0; y != 7; y++){
				getline(ifs, g);
				std::cout << g << std::endl;
			}
			getline(ifs, g);
			std::cout << g << fermers[i].getName()<< std::endl;
			getline(ifs, g);
			std::cout << g << fermers[i].getWeight() << std::endl;
			getline(ifs, g);
			std::cout <<g<< fermers[i].getHeight() << std::endl;
			temp_int = 0;
			while (!ifs.eof() && temp_int!=7) {
			getline(ifs, g);
			std::cout << g << std::endl;
			temp_int++;
			}
			temp_int = 0;
			ifs.close();
			}
			else {
				(lang == 1) ? Name = "locale_rescue/printfermer_r.txt" : Name = "locale_rescue/printfermer_e.txt";
				i--;//Загрузка с резервной копии в случае потери файла
			}
	}
		(lang == 1) ? Name = "locale/printFermer_r.txt" : Name = "locale/printFermer_e.txt";
		std::ifstream ifs(Name); Name = "";
		if (ifs.is_open()) {
			for (int i = 0; i != 17; i++)
				getline(ifs, g); g = "";
			getline(ifs, g);
			std::cout << g << fermers.size() << std::endl;
		}
		else {
			(lang == 1) ? Name = "locale_rescue/printFermer_r.txt" : Name = "locale_rescue/printFermer_e.txt";
			std::ifstream ifs(Name); Name = "";
			for (int i = 0; i != 17; i++)
				getline(ifs, g); g = "";
			getline(ifs, g);
			std::cout << g << fermers.size() << std::endl;
		}
		key = _getch();
}
void deletefermer() {	
	temp_int = inputo(tomatos.size());
	fermers.erase(fermers.begin()+ temp_int);	
}
void addTomato(float mass, int ripeness, std::string color,std::string type, float size) {
	Tomato a(mass, ripeness,type, color,size);
	tomatos.push_back(a);
}
void saveTomato() {
	std::ofstream file("saved_tomatos.txt");
	if (file.is_open())
	{
		for (int i = 0; i < fermers.size(); i++) {
			file << tomatos[i].GetMass() << std::endl;
			file << tomatos[i].GetRipeness() << std::endl;
			file << tomatos[i].GetType() << std::endl;
			file << tomatos[i].GetColor() << std::endl;
			file << tomatos[i].GetSize() << std::endl;
		}
	}
}
void readTomato() {
	std::ifstream ifs("saved_tomatos.txt");
	tomatos.clear();

	if (ifs.is_open())
	{
		while (!ifs.eof()) {
			ifs >> Mass;
			ifs >> Ripeness;
			ifs >> type;
			ifs >> Color;
			ifs >> Size;
			if (ifs.eof()) {
				break;
			}
			Tomato a(std::stof(Mass), std::stoi(Ripeness), type,Color, std::stof(Size));
			tomatos.push_back(a);
		}

	}
	else {
		(lang == 1) ? read_config("save_nf_r") : read_config("save_nf_e");
	}
	ifs.close();
}
void printTomatos() {
	std::string g;
	for (int i = 0; i < tomatos.size(); ++i) {
		(lang == 1) ? Name = "locale/printTomato_r.txt" : Name = "locale/printTomato_e.txt";
		std::ifstream ifs(Name); Name = "";
		if (ifs.is_open()) {
			//Печать информации томата построчно с строчками с файла
			std::cout <<std::endl<< "Tomato(( " << i << " ))" << std::endl;
			getline(ifs, g); std::cout << g;
			std::cout << tomatos[i].GetMass() << std::endl;
			getline(ifs, g); std::cout << g;
			std::cout << tomatos[i].GetRipeness() << std::endl;
			getline(ifs, g); std::cout << g;
			std::cout << tomatos[i].GetType() << std::endl;
			getline(ifs, g); std::cout << g;
			std::cout << tomatos[i].GetColor() << std::endl;
			getline(ifs, g); std::cout << g;
			std::cout << tomatos[i].GetSize() << std::endl;
			ifs.close();
		}
		else {
			(lang == 1) ? Name = "locale_rescue/printTomato_r.txt" : Name = "locale_rescue/printTomato_e.txt";
			i--;//Загрузка с резервной копии в случае потери файла
		}
	}


	(lang == 1) ? Name = "locale/printTomato_r.txt" : Name = "locale/printTomato_e.txt";
	std::ifstream ifs(Name); Name = "";
	if (ifs.is_open()) {
		for (int i = 0; i != 5; i++)
			getline(ifs, g); g = "";
		getline(ifs, g);
		std::cout << g << tomatos.size() << std::endl;
	}
	else {
		(lang == 1) ? Name = "locale_rescue/printTomato_r.txt" : Name = "locale_rescue/printTomato_e.txt";
		std::ifstream ifs(Name); Name = "";
		for (int i = 0; i != 5; i++)
			getline(ifs, g); g = "";
		getline(ifs, g);
		std::cout << g << tomatos.size() << std::endl;
	}
}
void deleteTomato() {
	temp_int = inputo(tomatos.size());
	tomatos.erase(tomatos.begin() + temp_int); temp_int = 0;
}
void addStrawberry(float Mass, float Ripeness, float Sweetness, float Size) {
	Strawberry a(Mass, Ripeness, Sweetness, Size);
	strawberrys.push_back(a);
}
void saveStrawberry() {
	std::ofstream file("saved_strawberry.txt");
	if (file.is_open())
	{
		for (int i = 0; i < strawberrys.size(); i++) {
			file << strawberrys[i].GetMass() << std::endl;
			file << strawberrys[i].GetRipeness() << std::endl;
			file << strawberrys[i].GetSweetness() << std::endl;
			file << strawberrys[i].GetSize() << std::endl;
		}
	}
}
void readStrawberrys() {
	std::ifstream ifs("saved_strawberry.txt");
	strawberrys.clear();

	if (ifs.is_open())
	{
		while (!ifs.eof()) {
			ifs >> Mass;
			ifs >> Ripeness;
			ifs >> Sweetness;
			ifs >> Size;
			if (ifs.eof()) {
				break;
			}
			Strawberry a(std::stof(Mass), std::stof(Ripeness), std::stof(Sweetness), std::stof(Size));
			strawberrys.push_back(a);
		}
	
	}
	else {
		(lang == 1) ? read_config("save_nf_r") : read_config("save_nf_e");
	}
	ifs.close();
}
void printStrawberrys() {
	std::string g;
	for (int i = 0; i < strawberrys.size(); ++i) {
		(lang == 1) ? Name = "locale/printStrawberry_r.txt" : Name = "locale/printStrawberry_e.txt";
		std::ifstream ifs(Name); Name = "";
		if (ifs.is_open()) {

			std::cout << std::endl << "Strawberry(( " << i << " ))" << std::endl;
			getline(ifs, g); std::cout << g;
			std::cout << strawberrys[i].GetMass() << std::endl;
			getline(ifs, g); std::cout << g;
			std::cout << strawberrys[i].GetRipeness() << std::endl;
			getline(ifs, g); std::cout << g;
			std::cout << strawberrys[i].GetSweetness() << std::endl;
			getline(ifs, g); std::cout << g;
			std::cout << strawberrys[i].GetSize() << std::endl;
			ifs.close();
		}
		else {
			(lang == 1) ? Name = "locale_rescue/printStrawberry_r.txt" : Name = "locale_rescue/printStrawberry_e.txt";
			i--;//Загрузка с резервной копии в случае потери файла
		}
	}
	(lang == 1) ? Name = "locale/printStrawberry_r.txt" : Name = "locale/printStrawberry_e.txt";
	std::ifstream ifs(Name); Name = "";
	if (ifs.is_open()) {
		for (int i = 0; i != 4; i++)
			getline(ifs, g); g = "";
		getline(ifs, g);
		std::cout << g << strawberrys.size() << std::endl;
	}
	else {
		(lang == 1) ? Name = "locale_rescue/printStrawberry_r.txt" : Name = "locale_rescue/printStrawberry_e.txt";
		std::ifstream ifs(Name); Name = "";
		for (int i = 0; i != 4; i++)
			getline(ifs, g); g = "";
		getline(ifs, g);
		std::cout << g << strawberrys.size() << std::endl;
	}
}
void deleteStrawberry() {
	temp_int = inputo(tomatos.size());
	strawberrys.erase(strawberrys.begin()+temp_int);
}
void addTomatoberry(float Mass, int Ripeness, std::string Color, float Mutation, float Size, float Sweetness) {
	TomatoBerry a(Mass, Ripeness,Color,Mutation, Size,Sweetness);
	tomatoberrys.push_back(a);
}
void saveTomatoberry() {
	std::ofstream file("saved_tomatoberry.txt");
	if (file.is_open())
	{
		for (int i = 0; i < tomatoberrys.size(); i++) {
			file << tomatoberrys[i].Tomato::GetMass() << std::endl;
			file << tomatoberrys[i].Strawberry::GetRipeness() << std::endl;
			file << tomatoberrys[i].GetColor() << std::endl;
			file << tomatoberrys[i].getMutation() << std::endl;
			file << tomatoberrys[i].Tomato::GetSize() << std::endl;
			file << tomatoberrys[i].Strawberry::GetSweetness() << std::endl;

		}
	}
}
void readTomatoberrys() {
	std::ifstream ifs("saved_tomatoberry.txt");
	tomatoberrys.clear();
	if (ifs.is_open())
	{
		while (!ifs.eof()) {
			ifs >> Mass;
			ifs >> Ripeness;
			ifs >> Color;
			ifs >> Mutation;
			ifs >> Size;
			ifs >> Sweetness;
			if (ifs.eof()) {
				break;
			}
			TomatoBerry a(std::stof(Mass), std::stof(Ripeness), Color, std::stof(Mutation), std::stof(Sweetness), std::stof(Size));
			tomatoberrys.push_back(a);
		}
	}
	else {
		(lang == 1) ? read_config("save_nf_r") : read_config("save_nf_e");
	}
	ifs.close();
}
void printTomatoberrys() {
	std::string g;
	for (int i = 0; i < tomatoberrys.size(); ++i) {
		(lang == 1) ? Name = "locale/printTomatoberry_r.txt" : Name = "locale/printTomatoberry_e.txt";
		std::ifstream ifs(Name); Name = "";
		if (ifs.is_open()) {
			std::cout << std::endl << "Tomatoberry(( " << i << " ))" << std::endl;
			getline(ifs, g); std::cout << g;
			std::cout << tomatoberrys[i].::Tomato::GetMass() << std::endl;
			getline(ifs, g); std::cout << g;
			std::cout << tomatoberrys[i].::Tomato::GetRipeness() << std::endl;
			getline(ifs, g); std::cout << g;
			std::cout << tomatoberrys[i].::Tomato::GetColor() << std::endl;
			getline(ifs, g); std::cout << g;
			std::cout << tomatoberrys[i].getMutation() << std::endl;
			getline(ifs, g); std::cout << g;
			std::cout << tomatoberrys[i].::Tomato::GetSize() << std::endl;
			getline(ifs, g); std::cout << g;
			std::cout << tomatoberrys[i].GetSweetness() << std::endl;
			ifs.close();
		}
		else {
			(lang == 1) ? Name = "locale_rescue/printTomatoberry_r.txt" : Name = "locale_rescueprintTomatoberry_e.txt";
		}
	}

	(lang == 1) ? Name = "locale/printTomatoberry_r.txt" : Name = "locale/printTomatoberry_e.txt";
	std::ifstream ifs(Name); Name = "";
	if (ifs.is_open()) {
		for (int i = 0; i != 6; i++)
			getline(ifs, g); g = "";
		getline(ifs, g);
		std::cout << g << tomatoberrys.size() << std::endl;
	}
	else {
		(lang == 1) ? Name = "locale_rescue/printTomatoberry_r.txt" : Name = "locale_rescue/printTomatoberry_e.txt";
		std::ifstream ifs(Name); Name = "";
		for (int i = 0; i != 6; i++)
			getline(ifs, g); g = "";
		getline(ifs, g);
		std::cout << g << tomatoberrys.size() << std::endl;
	}
}
void deleteTomatoberry() {
	temp_int = inputo(tomatos.size());
		tomatoberrys.erase(tomatoberrys.begin() +temp_int);
}
void compareTomato(int a,int b) {
	std::cout << (tomatos[a] == tomatos[b]);
}