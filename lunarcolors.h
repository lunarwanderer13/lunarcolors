#include <iostream>

void fgcolor(int r = 255, int g = 255, int b = 255) {
    if(r > 255 || g > 255 || b > 255 || r < 0 || g < 0 || b < 0) {
        //std::cout << "";
        printf("");
    } else {
        //std::cout << "\x1b[38;2;" << r << ";" << g << ";" << b << "m";
        printf("\x1b[38;2;%d;%d;%dm", r, g, b);
    }
}

void bgcolor(int r = 255, int g = 255, int b = 255) {
    if(r > 255 || g > 255 || b > 255 || r < 0 || g < 0 || b < 0) {
        //std::cout << "";
        printf("");
    } else {
        //std::cout << "\x1b[48;2;" << r << ";" << g << ";" << b << "m";
        printf("\x1b[48;2;%d;%d;%dm", r, g, b);
    }
}

void style(int n = 0) {
    if(n > 5 || n < 1) {
        //std::cout << "";
        printf("");
    } else {
        switch(n) {
            case 1:
                n = 1; // bold
                break;
            case 2:
                n = 3; // italic
                break;
            case 3:
                n = 4; // underline
                break;
            case 4:
                n = 9; // strikethough
                break;
            case 5:
                n = 8; // invisible
                break;
            default:
                n = 0; // reset
        }
        //std::cout << "\x1b[" << n << "m";
        printf("\x1b[%dm", n);
    }
}

void reset() {
    //std::cout << "\x1b[0;39;49m";
    printf("\x1b[0;39;49m");
}

void clear_screen() {
    printf("\x1b[2J\x1b[1;1H");
}
