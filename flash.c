/*
 * File:   flash.c
 * Author: Joseph Rowland
 *
 * Created on April 16, 2011, 9:18 AM
 */

#include "pre.h"

void init_ports(void) {
//	 WPU = 0xFF; //weak pull up enabled
   ANSEL = 0;
   TRISIO = 0; // set as output
}

//////////////////////////////////////////////////////////////////////
// Start here
void main() {
	int i;
   init_ports();

   while(1) { // infinite loop

      GPIO = 0x3F;//(1<<4);
      for(i=0; i<=25000; i++)
      {}

      GPIO = 0;
      for(i=0; i<=25000; i++)
      {}

  }
}
