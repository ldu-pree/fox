/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fox.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:31:38 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/06/11 08:25:28 by ldu-pree         ###   ########.fr       */
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

// for the if statement
int i = 0;
if (i == 1)
{
//so when i is equal to 1 it will run the break line the == is used to compare the variable so to check if it is 1, if you use only one = then it sets the variable to the value
	break;
}

//the while function
int i = 0;
while (i == 1)
{
//so while i is equal to 1 (i == 1) then it will run the commands contained by the curly brackets
	break;
}

//
//the for function we are not allowed to use yet
//

//the wirite function
//it is a normal function like ft_putchar with its own parameters being these:
ssize_t		write(int fildes, const void *buf, size_t nbytes);
write (1, c, 1);
       ^ 
	   this is the file descriptor it is usually 1, (0 is the standard input,1 is the standard output,2 is the standard error)
	      the c in the middle is the str it will print
		  	 the last 1 is how many bytes it will print or how many letters since 1 letter is 1 byte

//the printf function
printf("hello %s", "world");
this will print "hello world"
printf(first, second);
//so in the first part you can put the string it will print with %s or one of the other letters below, so if you type printf("hello %s good %s","world" "morning") it will replace the first %s with the first string "world" and the second %s with the second string "morning"
//%d is to display the digit
//%s is to display the string
//%c is to display the character
//%f is to display the float variable
//%lf is to display a double (not used yet)
//%x is to display a hexadecimal (not used yet)
//
//example
void	username()
{
	char *user;

	user = "Nosyliamster55";
	printf("My username is: %s", user);
}
//or a function that takes a input
void	username(char *user)
{
	printf("My username is %s", user);
}
int		main()
{
	username();
	return 0;
}

//the malloc function
char *str;

str = (char *)malloc(sizeof(int))
str = (the cast type so (int *) or (char *))malloc(size of bytes)
//it gives the pointer 'str' a block of memory of the size of bytes defined at the end

