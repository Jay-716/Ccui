/* jay716
 *
 * This program must be distributed under MIT License.
 *
 * page.c - page, similar to a form in gui, is the basic
 * container of window(see window.c).
 */

#ifndef WINDOW_H
#define WINDOW_H

#define WINDOW_MAX 1024

struct window;

int window_create(int, char *, struct window *);
int window_delete(struct window *);

#endif
