#ifndef _MAP_H_
#define _MAP_H_

#define DIRBASE_A       0x2000
#define DIRBASE_B       0x4000
#define DIRBASE_TIMER   0x8000

#define DDR_A           DIRBASE_A + 0
#define PORT_A          DIRBASE_A + 1
#define PIN_A           DIRBASE_A + 2

#define DDR_B           DIRBASE_B + 0
#define PORT_B          DIRBASE_B + 1
#define PIN_B           DIRBASE_B + 2

#define TCCR_0           DIRBASE_TIMER + 0
#define TCNT_0           DIRBASE_TIMER + 1
#define OCR_0            DIRBASE_TIMER + 2
#define TIFR_0           DIRBASE_TIMER + 3

#endif // _MAP_H_
