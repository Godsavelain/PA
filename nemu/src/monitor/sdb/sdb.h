#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

// typedef struct watchpoint {
//   int NO;
//   bool is_empty;
//   struct watchpoint *next;
//   char expr[50];
//   /* TODO: Add more members if necessary */
// } WP;

word_t expr(char *e, bool *success);

#endif
