#include "sdb.h"
#include <assert.h>

#define NR_WP 32

// typedef struct watchpoint {
//   int NO;
//   bool is_empty;
//   struct watchpoint *next;
//   char expr[50];
//   /* TODO: Add more members if necessary */
// } WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

WP* new_wp()
{
  WP* new_node = free_;
  if(free_ == NULL)
  {
    assert(0);
  }
  WP *tail = head;
  while(tail->next)
  {
    tail = tail->next;
  }
  tail->next = new_node;
  free_ = free_->next;
  return new_node;
}

void free_wp(WP* old_node)
{
  WP *tail = head;
  while(tail->next == old_node)
  {
    tail = tail->next;
  }
  tail->next = old_node->next;
  old_node->next = free_;
  free_ = old_node;
}

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].saved_result = 0;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

