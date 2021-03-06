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

word_t vaddr_read(vaddr_t addr, int len);

WP* new_wp()
{
  WP* new_node = free_;
  if(new_node == NULL)
  {
    assert(0);
  }
  free_ = free_->next;
  WP *tail = head;
  if(tail == NULL)
  {
    head = new_node;
    head->next = NULL;
    
    new_node->next = NULL;
    return new_node;
  }
  while(tail->next)
  {
    tail = tail->next;
  }
  tail->next = new_node;

  new_node->next = NULL;
  return new_node;
}

void free_wp(WP* old_node)
{
  WP *tail = head;
  if(tail == old_node)
  {
    head = NULL;
    old_node->next = free_;
    free_ = old_node;
    return;
  }
  while(tail->next != old_node)
  {
    tail = tail->next;
  }
  tail->next = old_node->next;
  old_node->next = free_;
  free_ = old_node;
  return;
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

extern bool wp_check()
{
  WP* temp_tail = head;
  if(temp_tail == NULL)
  {
    return false;
  }
  while(temp_tail != NULL)
  {
    uint64_t old_result = temp_tail->saved_result;
    bool success;
    uint64_t new_result = expr(temp_tail->expr,&success);
    if(!success)
    {
      assert(0);
    }
    //printf("watchpoint:%d expression:%s old_val:%ld new_val:%ld \n",temp_tail->NO,temp_tail->expr,old_result,new_result);
    if(old_result != new_result)
    {
      printf("watchpoint:%d expression:%s old_val:%ld new_val:%ld \n",temp_tail->NO,temp_tail->expr,old_result,new_result);
      temp_tail->saved_result = new_result;
      return true;
    }
    temp_tail = temp_tail->next;
  }
  return false;
}

extern void wp_show()
{
  WP* temp_tail = head;
  if(temp_tail == NULL)
  {
    printf("no watchpoints now\n");
    return;
  }
  while(temp_tail != NULL)
  {
    printf("watchpoint:%d expression:%s \n",temp_tail->NO,temp_tail->expr);
    temp_tail = temp_tail->next;
  }
}

extern void wp_del(int num)
{
  WP* temp_tail = head;
  if(temp_tail == NULL)
  {
    printf("no watchpoints now\n");
    return;
  }
  while(temp_tail != NULL)
  {
    if(temp_tail->NO == num)
    {
      free_wp(temp_tail);
      printf("delete success\n");
      return;
    }
    temp_tail = temp_tail->next;
  }
  printf("no watchpoints of number %d now\n",num);
  return;
}
/* TODO: Implement the functionality of watchpoint */

