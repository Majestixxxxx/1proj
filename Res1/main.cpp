#include <iostream>

int main(){
    {
        //чисенные типы
        //целые
        
        char ch; //1 байт от -128 до 127
        unsigned char uch; //1 байт от 0 до 255
        short sh; // 2 байта от -2^15 до 2^15-1
        unsigned short ush; // 2 байта от 0 да 2^16-1
        int i; // 4 байта от - 2^31 до 2^-31
        unsigned int ui; // 4 байта от 0 до 2^32 - 1
        long l; // 4 или 8 байт, должен быть >= int или <= long long
        unsigned long ul; // 4 байта от 0 до 2^32 - 1
        long long ll; //8 байт от -2^63 до 2^63-1
        unsigned long long llu; // 8 байт от 0 до 2^64-1
        //вещественные
        float fl; // 4 байта 7 занчимых цифр
        double db; //8 байт 15 значимых цифр
    }
    {
        // задача по варианту (2 вариант)
        double S;
        double H;
        std:: cout << " введи площадь треугольника и высоту: " << std::endl;
        std:: cin >> S >> H;
        
        std:: cout << "Основание = " << 2*S/H << std::endl;
    }
    
    
}
