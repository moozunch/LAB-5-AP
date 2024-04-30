#include <iostream>
#include "Header/header.h"
ꦔꦁꦒꦸ ꦕ꧀ꦏꦸꦥꦶꦁꦥꦒꦼꦤ꧀ ꦱꦟ꧀ꦝꦺꦴ;

ꦄꦔ꧀ꦏ main() {
    ꦯꦶꦏ꧀("cls");
    //header ini si iostream
    ꦄꦔ꧀ꦏ angka;
    ꦏꦼꦭꦸꦏ꧀ << "Input angka: ";
    ꦩꦱꦏ꧀ꦏꦶꦁ >> angka;
    ꦏꦼꦭꦸꦏ꧀ << "Angka yang dimasukkan adalah " <<  angka << ꦄꦚ꧀ꦲꦶ;
    ꦏꦁꦒꦺ (int i = 0; i < angka; i++){
        ꦏꦼꦭꦸꦏ꧀ << "ꦱꦸꦒꦼꦁ ꦫꦲꦸꦮꦸꦱ꧀ ꦗꦒꦢ" << ꦄꦚ꧀ꦲꦶ;
    }

    ꦔꦿꦩ꧀ꦩꦏ꧀ꦏ 0;
}
//ifndef dan endif adalah header guard, mirip overload
//kalau isinya sama dia bakal hindari error jadi gadibaca dua kali kalau double