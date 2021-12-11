/* jay716
 *
 * This program must be distributed under MIT License.
 *
 * page.h - page, similar to a form in gui, is the basic
 * container of window(see window.h).
 */

#ifndef PAGE_H
#define PAGE_H

#define PAGE_MAX 1024

struct page; 

int page_create(int, char *, struct page *, struct page *);
int page_delete(struct page *);
int page_chname(struct page *, char * name);

#endif /*PAGE_H*/
