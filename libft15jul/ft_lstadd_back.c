// ft_lstadd_back.c

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
  t_list *last;

  if (!new)
    return;
  if (!(*lst))
  {
    *lst = new;
    return;
  }
  last = ft_lstlast(*lst);
  last->next = new;
}
