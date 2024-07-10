#ifndef UTILS_H
#define UTILS_H

void    ft_isvalid_ac(int ac);
int     *ft_creat_and_init_views_value(char *argv1);
void    ft_error_allocation();
void    ft_cleanup(int **grid, int *views_value);
void    ft_eval_solution(int **grid, int *views_value);

void ft_print_grid(int **grid);
void ft_free_grid(int **grid);
void ft_initialize_grid(int **grid);
int **ft_allocate_grid(void);
#endif
