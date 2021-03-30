#ifndef FIRSTSCCHART_H
#define FIRSTSCCHART_H
/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

typedef struct {
  char* text;
  char _g2;
  char _g3;
  char _GO;
  char _TERM;
  char _pg2;
  char _pg3;
} F_TickData;

void F_Reset(F_TickData* d);
void F_Logic(F_TickData* d);
void F_Tick(F_TickData* d);

#endif /* !FIRSTSCCHART_H */
