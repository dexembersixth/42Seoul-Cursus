/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 19:32:18 by joockim           #+#    #+#             */
/*   Updated: 2021/05/27 19:11:04 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3.h"

t_p3	vdefine(double x, double y, double z)
{
	t_p3	v;

	v.x = x;
	v.y = y;
	v.z = z;
	return (v);
}

t_p3	vadd(t_p3 a, t_p3 b)
{
	t_p3	v;

	v.x = a.x + b.x;
	v.y = a.y + b.y;
	v.z = a.z + b.z;
	return (v);
}

t_p3	vsubstract(t_p3 a, t_p3 b)
{
	t_p3	v;

	v.x = a.x - b.x;
	v.y = a.y - b.y;
	v.z = a.z - b.z;
	return (v);
}

double	vdot(t_p3 a, t_p3 b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}

t_p3	vcross(t_p3 a, t_p3 b)
{
	t_p3	v;

	v.x = a.y * b.z - a.z * b.y;
	v.y = a.z * b.x - a.x * b.z;
	v.z = a.x * b.y - a.y * b.x;
	return (v);
}
