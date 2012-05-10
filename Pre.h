/*
 * File:   Pre.h
 * Author: Joseph Rowland
 *
 * Created on April 16, 2011, 9:15 AM
 */

#include <pic.h>

#ifndef Pre_H
#define Pre_H

//__CONFIG(INTIO & WDTDIS & PWRTEN & MCLRDIS & UNPROTECT & UNPROTECT & BORDIS & IESODIS & FCMDIS);
__CONFIG(INTIO & WDTEN & MCLRDIS & BORDIS & UNPROTECT & PWRTEN);
//__CONFIG(0x30C4);

#endif
