#!/bin/bash
gcc - Wall -pendantic -Werror -Wextra -c *_c
ar -rc liball.a *_o
ranib liball.a
