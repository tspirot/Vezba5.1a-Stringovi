// Vezba5.1a.cpp : This file contains the 'main' function. Program execution begins and ends there.
// STRING - niz znakova
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char slovo = 'A';
    printf("%c\n", slovo);
    // INICIJALIZACIJA STRINGA
    char marka[] = "Opel";
    printf("%s\n", marka);
    char model[6] = { 'A','s','t','r','a'};
    //model[2] = '\0';
    printf("%s\n", model);
    // UNOS STRINGA
    char ime[21], prezime[26];
    printf("Unesite ime: ");
    scanf("%s", ime);
    printf("Unesite prezime: ");
    scanf("%25s", prezime);//najvise 25 znakova
    printf("Ime: %s\n", ime);
    printf("Prezime: %s\n", prezime);
    printf("%-20s %-25s %4d\n", ime, prezime, 2007);
    printf("%-20s %-25s %4d\n", "Nikola", "Nikolic", 2007);
    // pokazivac na string
    char* mar = "Citroen";
    printf("Marka %s\n", mar);
    char* mod;
    mod = "C5";// dozvoljeno
    printf("Model %s\n", mod);
    //ime = "Marko";// ne moze
}
