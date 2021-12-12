/* jay716
 *
 * This program must be distributed under MIT License.
 *
 * window.c - window is the container of widgets.
 */

#include <stdlib.h>

#include "page.h"
#include "window.h"

int window_create(struct page * contain_page, int new_id, char * new_name, int new_layer, enum window_type new_type)
{
		struct window * win_node = contain_page -> window_head;
		struct window * new_win = (struct window *)malloc(sizeof(struct window));
		while (win_node != NULL)
		{
				win_node = win_node -> next;
		}

		new_win -> id = new_id;
		new_win -> name = new_name;
		new_win -> layer = new_layer;
		new_win -> type = new_type;

		win_node -> next = new_win;

		return 0;
}
