
#include "container.h"
void operator -(std::string a, std::string  b) {
    (lang == 1) ? read_config(a) : read_config(b);
}
int main()
{
    addTomato(111.1, 123, "13", "111", 111.2);
    addTomato(411.1, 163, "13", "111", 121.2);
    compareTomato(0, 1);
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
   
	booling = true;
	setlocale(LC_ALL, "rus");
	system("cls");
	std::cout << "Выберите язык:/Choose language:" << std::endl << "1 - Russia(Русский)" << std::endl << "2 - Английский(English)" << std::endl;
	key = _getch();//Выбор языка
    while (key != 49 && key != 50) {
        system("cls");
        std::cout << "Ошибка ввода.Повторите попытку/Error input.Try again" << std::endl;
        key = _getch();
    }
    system("cls");
    while (booling) {
        //цикл с условием выхода-booling==false
        switch (key) {
        case 49:
            read_config("screensaver_r"); lang = 1; booling = false;//Вывод заставки и установка первоначального языка
            break;
        case 50:
            read_config("screensaver_e");  lang = 0; booling = false;
            break;
        default:
            "input_error_r" - "input_error_e";
            key = _getch(); 
        }
    }
    booling = true;
    key = _getch();
 
    while (booling) {
        (std::string)"menu_r"-(std::string)"menu_e";//работа перегружженого оператор "-" (вызывает чтение конфига)
        key = _getch();
        switch (key) {
        case 49:
            //Зайти на ферму
           
            while (booling) {
                (std::string)"menu_veg_r" - (std::string)"menu_veg_e";
                key = _getch();
                switch (key) {
                case 49:
                    while (booling) {
                        //Управление фермой
                       (std::string)"garden_set_r" - (std::string)"garden_set_e";
                        key = _getch();
                        switch (key) {
                        case 49://Добавить фермера
                            (std::string)"addFermer_r" - (std::string)"addFermer_e";
                            std::cin >> temp_string2;
                            temp_float = inputo(10000);
                            temp_int = inputo(10000);
                            addFermer(temp_string2, temp_float, temp_int);
                            break;
                        case 50://Добавить томат
                            (std::string)"addTomato_r" - (std::string)"addTomato_e";
                            temp_float = inputo(10000);
                            temp_int = inputo(10000);
                            std::cin >> temp_string1 >> temp_string2;
                            temp_float1=inputo(10000);
                            addTomato(temp_float, temp_int, temp_string1, temp_string2, temp_float1);
                            booling = false;
                            break;
                        case 51://Добавить клубнику
                            (std::string)"addStrawberry_r" - (std::string)"addStrawberry_e";
                            temp_float = inputo(10000);
                            temp_float1 = inputo(10000);
                            temp_float2 = inputo(10000);
                            temp_float3 = inputo(10000);
                            addStrawberry(temp_float , temp_float1 , temp_float2 , temp_float3);
                            booling = false;
                            break;
                        case 52://Дабавить гибрид
                            (std::string)"addTomatoberry_r" - (std::string)"addTomatoberry_e";
                            temp_float = inputo(10000);
                            temp_int1 = inputo(10000);
                            std::cin >> temp_string2;
                            temp_float3 = inputo(10000);
                            temp_float4 = inputo(10000);
                            temp_float5 = inputo(10000);
                            addTomatoberry(temp_float, temp_int1, temp_string2, temp_float3, temp_float4, temp_float5);
                            booling = false;
                            break;
                        case 228:
                            lang == 1 ? lang = 0 : lang = 1;//смена языка без выхода из цикла while
                            break;
                        case 27:
                            booling = false;
                            break;
                        default:
                            (std::string)"input_error_r" - (std::string)"input_error_e";//ошибка ввода
                            key = _getch();
                        }
                    }
                    booling = true;
                    break;
                case 50:
                    //Вывод всех овощей
                    printTomatos();
                    printStrawberrys();
                    printTomatoberrys();
                    key = _getch();
                    break;
                case 51:
                    while (booling) {
                        (std::string)"break_vegetable_r" - (std::string)"break_vegetable_e";
                        key = _getch();
                        switch (key) {
                        case 49:
                            printTomatos();
                            try {
                                (lang == 1) ? temp_string1 = "locale/veg_moder_r.txt" : temp_string1 = "locale/veg_moder_e.txt";
                                std::ifstream ifs(temp_string1); temp_string1 = "";
                                if (ifs.is_open()) {
                                    while (!ifs.eof()) {
                                        getline(ifs, temp_string2);
                                        std::cout << temp_string2 << std::endl;
                                    }
                                    ifs.close();
                                    throw 1;
                                }
                                else { throw 0; }
                            }
                            catch (int a) {
                                if (a == 0) {
                                    (lang == 1) ? temp_string1 = "locale_rescue/veg_moder_r.txt" : temp_string1 = "locale_rescue/veg_moder_r.txt";
                                    std::ifstream ifs(temp_string1);
                                    while (!ifs.eof()) {
                                        getline(ifs, temp_string2);
                                        std::cout << temp_string2 << std::endl;
                                    }
                                    ifs.close();
                                }
                            }
                            key = _getch();
                            switch (key)
                            {
                            case 49:
                                deleteTomato();
                                key = _getch();
                                break;
                            case 50:

                                break;
                            default:
                                break;
                            }
                            break;
                        case 50:
                            printStrawberrys();
                            try {
                                (lang == 1) ? temp_string1 = "locale/veg_moder_r.txt" : temp_string1 = "locale/veg_moder_e.txt";
                                std::ifstream ifs(temp_string1); temp_string1 = "";
                                if (ifs.is_open()) {
                                    while (!ifs.eof()) {
                                        getline(ifs, temp_string2);
                                        std::cout << temp_string2 << std::endl;
                                    }
                                    ifs.close();
                                    throw 1;
                                }
                                else { throw 0; }
                            }
                            catch (int a) {
                                if (a == 0) {
                                    (lang == 1) ? temp_string1 = "locale_rescue/veg_moder_r.txt" : temp_string1 = "locale_rescue/veg_moder_r.txt";
                                    std::ifstream ifs(temp_string1);
                                    while (!ifs.eof()) {
                                        getline(ifs, temp_string2);
                                        std::cout << temp_string2 << std::endl;
                                    }
                                    ifs.close();
                                }
                            }
                            break;
                        case 51:
                            printTomatoberrys();
                            try {
                                (lang == 1) ? temp_string1 = "locale/veg_moder_r.txt" : temp_string1 = "locale/veg_moder_e.txt";
                                std::ifstream ifs(temp_string1); temp_string1 = "";
                                if (ifs.is_open()) {
                                    while (!ifs.eof()) {
                                        getline(ifs, temp_string2);
                                        std::cout << temp_string2 << std::endl;
                                    }
                                    ifs.close();
                                    throw 1;
                                }
                                else { throw 0; }
                            }
                            catch (int a) {
                                if (a == 0) {
                                    (lang == 1) ? temp_string1 = "locale_rescue/veg_moder_r.txt" : temp_string1 = "locale_rescue/veg_moder_r.txt";
                                    std::ifstream ifs(temp_string1);
                                    while (!ifs.eof()) {
                                        getline(ifs, temp_string2);
                                        std::cout << temp_string2 << std::endl;
                                    }
                                    ifs.close();
                                }
                            }
                            key = _getch();
                            break;
                        case 228:
                            lang == 1 ? lang = 0 : lang = 1;//смена языка без выхода из цикла while
                            break;
                        case 27:
                            booling = false;
                            break;
                        default:
                            (std::string)"input_error_r" - (std::string)"input_error_e";
                            key = _getch();
                        }
                     
                        key = _getch();
                       
                    }
                    booling = true;
                    break;
                case 52:
                    printFermers();
                    break;
                case 53:
                    printFermers();
                    deletefermer();
                    break;
                case 228:
                    lang == 1 ? lang = 0 : lang = 1;
                    lang == 1 ? read_config("menu_veg_r") : read_config("menu_veg_e");
                    break;
                case 27:
                    booling = false;
                    break;
                default:
                    (std::string)"input_error_r" - (std::string)"input_error_e";
                    key = _getch();
                }
            }
            booling = true;
            break;
        case 50:
            //Загрузка всех файлов с сохранениями
            readFermers();
            readTomato();
            readStrawberrys();
            readTomatoberrys();
            key = _getch();
            break;
        case 51:
            //Сохранение всех объектов
            saveFermers();
            saveTomato();
            saveStrawberry();
            saveTomatoberry();  
            key = _getch();
            break;
        case 52:
            //О программе
            while (booling) {
                (std::string)"about_menu_r" - (std::string)"about_menu_e";
                key = _getch();
                switch (key) {
                case 49:
                    (std::string)"about_author_r" - (std::string)"about_author_e";
                    key = _getch();
                    break;
                case 50:
                    (std::string)"about_programm_r" - (std::string)"about_programm_e";
                    key = _getch();
                    break;
                case 51:
                    (std::string)"readme_r" - (std::string)"readme_e";
                    key = _getch();
                    break;
                case 228:
                    lang == 1 ? lang = 0 : lang = 1;
                    (std::string)"about_menu_r" - (std::string)"about_menu_e";
                    break;
                case 27:
                    booling = false;
                    break;
                default:
                    (std::string)"input_error_r" - (std::string)"input_error_e";
                    key = _getch();
                }
            }
            booling = true;
            break;
        case 108:
            //Смена языка
            lang == 1 ? lang = 0 : lang = 1;
            (std::string)"menu_r" - (std::string)"menu_e";
            break;
        default:
            //Ошибка ввода
            (std::string)"input_error_r" - (std::string)"input_error_e";
            key = _getch();
        }
    }
	return 0;
}