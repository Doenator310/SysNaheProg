#include <iostream>
#include <QDebug>
//stack
int summe(int anzahl, int summand1, ...){
    int* werte = &summand1;
    int summe = 0;
    for(int i = 0; i < anzahl; i++){
        qDebug() << werte[i];
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
    ausgabe("EINS","ZWEI","DREI", NULL);
    return 0;
}



