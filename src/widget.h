/* jay716
 *
 * This program must be distributed under MIT License.
 *
 * widget.h - widget, contained by window, is an reactive item.
 * see widget.c
 */

#ifndef WIDGET_H
#define WIDGET_H

struct widget;

int create_widget(struct window *, int , char *);
int delete_widget(struct window *, int);

#endif
