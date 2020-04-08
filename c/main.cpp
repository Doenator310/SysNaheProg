#include <iostream>

int getStringLength(const char* txt){
    int size = 0;
    for(;txt[size];size++);
    return size;
}

void copyString(const char* src, char* dest){
    do{
        *dest++ = *src++;
    }
    // - 1 wegen nullbyte
    while (*(src-1)!=NULL);
}

int summe(int anzahl, int summand1, ...){
    int* werte = &summand1;
    int summe = 0;
    for(int i = 0; i < anzahl; i++){
        std::cout << werte[i] << std::endl;
        summe += werte[anzahl - i -1];
    }
    return summe;
}

void ausgabe(const char* text, ...){
    const char** texte = &text;
    for(;texte!=nullptr;texte++){
        std::cout << *texte << std::endl;
    }
}

int main(int argc, char *argv[], char** env)
{
    const char* txt = "YEET";
    char txt2[10];
    std::cout << getStringLength(txt) << std::endl;
    copyString(txt,txt2);
    std::cout << txt2 << std::endl;
    ausgabe("EINS","ZWEI","DREI", NULL);
    return 0;
}



