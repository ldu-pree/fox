/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fox.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:31:38 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/05/29 07:55:35 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//malloc
#include <unistd.h>
//write
#include <string.h>
//null, size_t

//if they ask for a function then all you need is this:
void	ft_putchar(char c)
{

}

//if they ask for a program then you give the function and the main:
void	ft_putchar(char c)
{

}

int		main()
{

}

//if you do add any lines in your code that are not statements like (if, for, while, etc.)
//then you use the semicolon to end the line
void	ft_putchar(char c)
{
	write(1, c, 1);
	//but when it is a if or while etc. it doesn't need
	if (i == 1)
	{
		break;
	}
}

//normal brackets are used for parameters the "inputs" or "outputs" of a function or the conditions of a statement, so whatever is in the normal brackets needs to be true unless they use a !
//below the if statemnet will only run when i is equal to 1
if (i == 1)
{
	break;
}
//below the function will only run when i is not equal to 1
if (i != 1)
{
	break;
}
//or
if (!(i == 1))
{

}
//curly brackets are used to "contain" the commands in a function or (if, for, while, etc) statements
void	ft_putchar(char c)
{

}
//or
if (i == 1)
{

}
//the write function
write (1, c, 1);
       ^ 
	   this is the file descriptor it is usually 1, (0 is the standard input,1 is the standard output,2 is the standard error)
	      the c in the middle is the str it will print
		  	 the last 1 is how many bytes it will print or how many letters since 1 letter is 1 byte

//the printf function
