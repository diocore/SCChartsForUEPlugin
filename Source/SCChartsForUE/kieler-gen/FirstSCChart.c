/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

#include "FirstSCChart.h"

void F_Logic(F_TickData* d) {
  d->_g3 = d->_pg2;
  d->_g3 = d->_GO || d->_g3;
  if (d->_g3) {
    d->text = "Hello";
  }
  d->_g2 = d->_pg3;
  if (d->_g2) {
    d->text = "Unreal World";
  }
}

void F_Reset(F_TickData* d) {
  d->_GO = 1;
  d->_TERM = 0;
  d->text = "";
  d->_pg2 = 0;
  d->_pg3 = 0;
}

void F_Tick(F_TickData* d) {
  F_Logic(d);

  d->_pg2 = d->_g2;
  d->_pg3 = d->_g3;
  d->_GO = 0;
}
