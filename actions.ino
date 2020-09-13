#include "config.h"

int KP = 0;
int gain = 0;
int error = 0;

void seguirLinha(int velocity){
    error = (reflectedLight1 + reflectedLight2) - (reflectedLight3 + reflectedLight4);
    gain = error * KP 
}