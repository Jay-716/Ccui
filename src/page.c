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
		struct window ** window_list;/*variable list*/
};

int page_create(int page_id, char * page_name, struct page * new_page)
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
		}
		return 0;
}
