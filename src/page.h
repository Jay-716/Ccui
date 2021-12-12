/* jay716
 *
 * This program must be distributed under MIT License.
 *
 * page.h - page, similar to a form in gui, is the basic
 * container of window(see window.h).
 */

#ifndef PAGE_H
#define PAGE_H

#include <time.h>

#define PAGE_MAX 1024

struct page; 

struct page
{
		int id;
		char * name;
		time_t create_time;
		struct window * window_head;/*The first node of window linked list*/

		/*Here are some linked list variables*/
		struct page * prev;
		struct page * next;
};



int page_create(int, char *, struct page *, struct page *);
int page_delete(struct page *);
int page_chname(struct page *, char *);

#endif /*PAGE_H*/
