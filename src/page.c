/* jay716
 *
 * This program must be distributed under MIT License.
 *
 * page.c - page, similar to a form in gui, is the basic
 * container of window(see window.c).
 */

#include <stdlib.h>
#include <time.h>

#include "page.h"
#include "window.h"

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

int page_create(int page_id, char * page_name, struct page * prev_page, struct page * new_page)
{
		new_page = (struct page *)malloc(sizeof(struct page));
		if (new_page == NULL)
		{
				return 1;
		}
		else
		{
				new_page -> id = page_id;
				new_page -> name = page_name;
				new_page -> create_time = time(NULL);
				new_page -> window_head = NULL;

				if (prev_page == NULL)/*Head node*/
				{
						new_page -> next = NULL;
						new_page -> prev = NULL;
				}
				else
				{
						new_page -> prev = prev_page;
						new_page -> next = NULL;
						prev_page -> next = new_page;
				}
				
		}
		return 0;
}


int page_delete(struct page * del_page)
{
		if (del_page -> prev == NULL && del_page -> next != NULL)/*First node*/ 
				del_page -> next -> prev = NULL;
		if (del_page -> prev != NULL && del_page -> next == NULL)/*Last node*/
				del_page -> prev -> next = NULL;

		/*Normal node*/
		del_page -> prev -> next = del_page -> next;
		del_page -> next -> prev = del_page -> prev;

		free(del_page);

		return 0;
}
