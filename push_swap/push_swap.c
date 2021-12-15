/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 20:49:55 by sujilee           #+#    #+#             */
/*   Updated: 2021/10/24 20:49:55 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>


void    init_carrier(int argc, t_carrier *c)
{
    c->ac_cnt = argc;
    c->max = 2147483647;
    c->min = -2147483648;
    c->pivot = 0;
    c->a_stack = 0;
    c->b_stack = 0;
}

int     main(int argc, char **argv)
{
    t_stack     *a; //a 스택 선언
    t_stack     *b; //b 스택 선언
    t_stack     carrier;

    if (argc >= 2)
    {
        a = 0;
        b = 0;
        init_carrier(argc, &carrier);
        
    }

}