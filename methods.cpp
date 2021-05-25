#include"methods.h"
namespace
{   
    bool rescue_bool = false;
}

float inputo(int l) {
    std::cin.ignore();
    std::cin.clear();
    float temp_var;
    while (true) {
        std::cin >> temp_var;
        if (std::cin.fail() ||l<temp_var ||temp_var<0) {
            std::cin.clear(); std::cin.ignore(1000, '\n');
            (lang == 1) ? read_config("temp_string") : read_config("temp_string");
            (lang==1)? read_config("input_error_r") :read_config("input_error_e");
        }
        else {
            break;
        }
    }

    return(temp_var);
}
void print(const std::string language,std::string g) {
  
    std::ifstream file(language);
    if (file.is_open()) {
        while (!file.eof()) {
            getline(file, output);
            if (!file.eof()) {
                output += '\n';
            }
            std::cout << output;
        }
    }
    else {
        std::cout << "Ошибка открытия файла. Запуск Восстановления" << std::endl;
        rescue_bool = true;
        read_config(g);
    }
    file.close();
    std::cout << std::endl;
 
};
inline inline void read_config(std::string g) {
    if (!rescue_bool) {
        temp_string = g;
    }
    if (g=="temp_string") {
        g = temp_string;

    }
    else {
        if (g == "input_error_r" || g == "input_error_e") {
            std::cout << std::endl;
        }
        else {
            system("cls");
        }
    }
    if (rescue_bool) {
        c = "config_rescue.txt";
    }
    else {
        c = "config.txt";
    }
    output = ""; outputh = ""; language = "";
    std::ifstream filed(c);
    if(filed.is_open()){
    while (!filed.eof()) {
        getline(filed, output);
        t = output.find_first_of(':');
        lenght = output.length();
        for (int p = 0; p < t; p++) {
            outputh += output[p];
        }
        t++;
        if (outputh == g) {
            while (t < lenght) {
                language += output[t];
                t++;
            }
            print(language,g);
        }
        output = ""; outputh = ""; language = "";
    }
    }
    else {
        rescue_bool = true;
        filed.close();
        (lang == 1) ? print("locale_rescue\file_open_error_r.txt", temp_string) : print("locale_rescue\file_open_error_e.txt", temp_string);
        read_config(temp_string);

    }
    filed.close();
};
int menu_garden(int lang) {
   
    return lang;
};
int garden_set(int lang) {
    system("cls");

    return lang;
};
int garden_list(int lang) {
    return lang;
};
int break_vegetable(int lang) {
    lang == 1 ? read_config("break_vegetable_r") : read_config("break_vegetable_e");
    while (booling) {
        key = _getch();
        switch (key) {
        case 49:
           
            booling = false;
            break;
        case 50:
            lang = garden_list(lang);
            booling = false;
            break;
        case 51:
            lang = break_vegetable(lang);
            booling = false;
            break;
        case 52:
            // lang = printFermers();
            booling = false;
            break;
        case 53:
            lang == 1 ? lang = 0 : lang = 1;
            lang = menu_garden(lang);
            booling = false;
            break;
        case 54:
            booling = false;
            break;
        default:
            lang == 1 ? read_config("input_error_r") : read_config("input_error_e");
            key = _getch();
        }
    }

    booling = true;
    return lang;
};
int garden_delete_list(int lang) {
    return lang;
};
int file_load(int lang) {
    return lang;
}
int help(int lang) {
    return lang;
}