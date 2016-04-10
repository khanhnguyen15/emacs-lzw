/**
    Copyright © 2016 Christian Shtarkov

    This file is part of emacs-lzw.

    emacs-lzw is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by the
    Free Software Foundation, either version 3 of the License, or (at your
    option) any later version.

    emacs-lzw is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
    General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with emacs-lzw. If not, see http://www.gnu.org/licenses/.
    
    Commentary:

    Header file for the LZW algorithm implementation.
    See lzw.c for details.

*/

#ifndef LZW_H
#define LZW_H

#include "trie.h"

unsigned int lzw_compress   (const char *src, unsigned int len, codeword *dest);
unsigned int lzw_decompress (const codeword *src, unsigned int len, char *dest, unsigned int dest_len);

#endif