#include "procesador.h"
#include "map.h"

int main(){

    uint8_t pulse;

    CPUInit();

    CPUWrite(DDR_A, 0);
    CPUWrite(DDR_B, 0xFF);

    CPUWrite(TCCR_0, 0b01101101);
    CPUWrite(PORT_B, CPURead(TCCR_0));

    while(1){
        //pulse = CPURead(PIN_A);
        //CPUWrite(OCR_0, pulse);
        //CPUWrite(PORT_B, CPURead(TCNT_0));
        _delay_ms(30);
    }
}
