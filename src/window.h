/* jay716
 *
 * This program must be distributed under MIT License.
 *
 * window.h - window contains widgets.
 * see window.c
 */

#ifndef WINDOW_H
#define WINDOW_H

#include <time.h>

#define WINDOW_MAX 1024

struct window;

enum window_type
{
		NORMAL,
		POP_UP,
};

enum window_event
{
		SIZE_CHANGE,
		POS_CHANGE,
		GET_FOCUS,
		LOST_FOCUS,
};

struct window
{
		int id;
		char * name;
		time_t create_time;
		int layer;
		enum window_type type;

		struct widget * widget_head;/*Widgets linked list.This is the first node.*/

		/*Here are some linked list variables*/
		struct window * prev;
		struct window * next;
};

int window_create(struct page *, int, char *, int, enum window_type);
int window_delete(struct window *);
int window_reg_callback(struct window *, enum window_event, int * (struct window *));
int window_unreg_callback(struct window *, enum window_event);

#endif
