/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:17:51 by sujilee           #+#    #+#             */
/*   Updated: 2021/10/24 14:17:51 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
//#include <libft.h>

//스택 a, 스택 b를 선언하기 위한 연결리스트의 노드 구조체
typedef struct      s_stack
{
    struct s_stack  *next;  //다음 노드의 주소를 저장할 포인터
    int             value;  //데이터를 저장할 멤버
}                   t_stack;


typedef struct      s_carrier
{
    int ac_cnt; //프롬프트에 입련된 인자 개수
    int min;
    int max;
    int pivot;

    t_stack         *a_stack;   
    t_stack         *b_stack;   
}                   t_carrier;       

#endif