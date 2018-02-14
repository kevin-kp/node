/*
 * WARNING: do not edit!
 * Generated by util/mkbuildinf.pl
 *
 * Copyright 2014-2017 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#define PLATFORM "platform: linux-x86_64"
#define DATE "built on: Tue Feb 13 22:30:07 2018 UTC"

/*
 * Generate compiler_flags as an array of individual characters. This is a
 * workaround for the situation where CFLAGS gets too long for a C90 string
 * literal
 */
static const char compiler_flags[] = {
    'c','o','m','p','i','l','e','r',':',' ','g','c','c',' ','-','W',
    'a','l','l',' ','-','O','3',' ','-','p','t','h','r','e','a','d',
    ' ','-','m','6','4',' ','-','D','D','S','O','_','D','L','F','C',
    'N',' ','-','D','H','A','V','E','_','D','L','F','C','N','_','H',
    ' ','-','D','N','D','E','B','U','G',' ','-','D','O','P','E','N',
    'S','S','L','_','N','O','_','D','Y','N','A','M','I','C','_','E',
    'N','G','I','N','E',' ','-','D','O','P','E','N','S','S','L','_',
    'P','I','C',' ','-','D','O','P','E','N','S','S','L','_','U','S',
    'E','_','N','O','D','E','L','E','T','E',' ','-','D','L','_','E',
    'N','D','I','A','N','\0'
};
