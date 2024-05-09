#!/bin/bash

cc -c -Wall -Wextra -Werror *.c
ar -rc libft.a *.o