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
} TickData;

void reset(TickData* d);
void logic(TickData* d);
void tick(TickData* d);

#endif /* !FIRSTSCCHART_H */
