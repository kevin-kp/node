/*
 * Copyright 2018 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

/*
 * Small subset of DRBG test vectors from:
 * https://csrc.nist.gov/projects/cryptographic-algorithm-validation-program/
 * The index in the names given below (e.g- kat1680)- refers to the CAVS index.
 */

#include <openssl/obj_mac.h>
#include "internal/nelem.h"
#include "drbg_cavs_data.h"


static const unsigned char kat1_nor_entropyin[] = {
    0xe9, 0x1b, 0x63, 0x30, 0x9e, 0x93, 0xd1, 0xd0, 0x8e, 0x30, 0xe8, 0xd5,
    0x56, 0x90, 0x68, 0x75,
};
static const unsigned char kat1_nor_nonce[] = {
    0xf5, 0x97, 0x47, 0xc4, 0x68, 0xb0, 0xd0, 0xda,
};
static const unsigned char kat1_nor_persstr[] = {0};
static const unsigned char kat1_nor_addin0[] = {0};
static const unsigned char kat1_nor_addin1[] = {0};
static const unsigned char kat1_nor_retbytes[] = {
    0xb7, 0x92, 0x8f, 0x95, 0x03, 0xa4, 0x17, 0x11, 0x07, 0x88, 0xf9, 0xd0,
    0xc2, 0x58, 0x5f, 0x8a, 0xee, 0x6f, 0xb7, 0x3b, 0x22, 0x0a, 0x62, 0x6b,
    0x3a, 0xb9, 0x82, 0x5b, 0x7a, 0x9f, 0xac, 0xc7, 0x97, 0x23, 0xd7, 0xe1,
    0xba, 0x92, 0x55, 0xe4, 0x0e, 0x65, 0xc2, 0x49, 0xb6, 0x08, 0x2a, 0x7b,
    0xc5, 0xe3, 0xf1, 0x29, 0xd3, 0xd8, 0xf6, 0x9b, 0x04, 0xed, 0x11, 0x83,
    0x41, 0x9d, 0x6c, 0x4f, 0x2a, 0x13, 0xb3, 0x04, 0xd2, 0xc5, 0x74, 0x3f,
    0x41, 0xc8, 0xb0, 0xee, 0x73, 0x22, 0x53, 0x47,
};
static const struct drbg_kat_no_reseed kat1_nor_t = {
    0, kat1_nor_entropyin, kat1_nor_nonce, kat1_nor_persstr,
    kat1_nor_addin0, kat1_nor_addin1, kat1_nor_retbytes
};
static const struct drbg_kat kat1_nor = {
    NO_RESEED, USE_HMAC, NID_sha1, 16, 8, 0, 0, 80, &kat1_nor_t
};

static const unsigned char kat1680_nor_entropyin[] = {
    0x68, 0xcf, 0x3f, 0x51, 0x8b, 0x47, 0x45, 0x45, 0x2a, 0x41, 0x49, 0xd2,
    0x00, 0x43, 0x49, 0x60, 0xcb, 0xe1, 0x0b, 0xcb, 0x78, 0x3c, 0x3f, 0x89,
    0xd3, 0xb8, 0x5f, 0x61, 0x87, 0x99, 0xf5, 0xcb,
};
static const unsigned char kat1680_nor_nonce[] = {
    0xdc, 0x34, 0x5f, 0x21, 0xa3, 0x3c, 0x16, 0x8e, 0x4e, 0x07, 0x60, 0x31,
    0x87, 0x59, 0x2f, 0x9c,
};
static const unsigned char kat1680_nor_persstr[] = {
    0x2c, 0x26, 0xce, 0x79, 0xee, 0x85, 0xd0, 0xc9, 0xca, 0x4d, 0x1a, 0xbc,
    0x6e, 0x0a, 0xc2, 0xad, 0xb2, 0x6c, 0xd2, 0x23, 0xdc, 0xb5, 0x13, 0x40,
    0x3a, 0x53, 0x75, 0x5b, 0x64, 0x75, 0x98, 0xe3,
};
static const unsigned char kat1680_nor_addin0[] = {
    0xac, 0xcf, 0xf5, 0x36, 0x08, 0x61, 0x6d, 0x90, 0x07, 0x19, 0x9e, 0x41,
    0x39, 0x68, 0x46, 0xbe, 0x58, 0x00, 0xee, 0xa5, 0x5f, 0x73, 0xf6, 0x4a,
    0x6d, 0x8c, 0x8f, 0x26, 0xb5, 0xba, 0xe0, 0x7d,
};
static const unsigned char kat1680_nor_addin1[] = {
    0xd8, 0xd5, 0x25, 0x8b, 0xaf, 0xf4, 0x18, 0x50, 0xde, 0x1f, 0xeb, 0x5e,
    0xcb, 0xbd, 0x17, 0x95, 0xcd, 0xf4, 0x53, 0x8a, 0x1c, 0x57, 0xf5, 0x5c,
    0x9f, 0x58, 0x5f, 0xf0, 0x35, 0xa1, 0x3e, 0x55,
};
static const unsigned char kat1680_nor_retbytes[] = {
    0x50, 0x32, 0xda, 0xa0, 0x34, 0x15, 0xb2, 0xb6, 0x78, 0x0e, 0xf4, 0xc6,
    0xcf, 0xec, 0xfa, 0xcc, 0xef, 0xda, 0x71, 0x2f, 0x25, 0x29, 0xd2, 0xcd,
    0xf4, 0xcb, 0x45, 0xd5, 0x22, 0x29, 0xe2, 0xb7, 0x38, 0x8e, 0xbc, 0xe9,
    0x26, 0xa7, 0xaa, 0x05, 0xcc, 0x13, 0x2b, 0x34, 0x79, 0xe7, 0xb9, 0xc0,
    0xb8, 0xb4, 0xcd, 0x02, 0x62, 0xf7, 0xb1, 0x8a, 0x58, 0x32, 0x6e, 0xab,
    0x2b, 0xae, 0xb9, 0x1e, 0xd4, 0x81, 0x8b, 0xf2, 0x0a, 0x10, 0x59, 0x75,
    0x34, 0x2b, 0xed, 0x6a, 0x97, 0xf2, 0xe6, 0x7c, 0x48, 0x3a, 0x40, 0x3f,
    0x98, 0xa4, 0xa5, 0xdf, 0xee, 0x98, 0x13, 0x07, 0x41, 0xb9, 0x09, 0xf0,
    0xc4, 0x81, 0x2c, 0x19, 0x17, 0x33, 0x4d, 0xdc, 0x5e, 0x67, 0x82, 0x56,
    0xb7, 0x8c, 0x23, 0x76, 0x42, 0x17, 0x79, 0x8f, 0x25, 0xdb, 0x20, 0xd8,
    0x0e, 0xa8, 0x5b, 0x69, 0xef, 0xd7, 0x58, 0x92,
};
static const struct drbg_kat_no_reseed kat1680_nor_t = {
    14, kat1680_nor_entropyin, kat1680_nor_nonce, kat1680_nor_persstr,
    kat1680_nor_addin0, kat1680_nor_addin1, kat1680_nor_retbytes
};
static const struct drbg_kat kat1680_nor = {
    NO_RESEED, USE_HMAC, NID_sha512_256, 32, 16, 32, 32, 128, &kat1680_nor_t
};

/* -------------------------------------------------------------------------- */

static const unsigned char kat2_prt_entropyin[] = {
    0x07, 0xbd, 0xda, 0xb0, 0x6c, 0xf3, 0xd7, 0xf0, 0x94, 0xcc, 0x23, 0x02,
    0xab, 0xd7, 0x00, 0xa9,
};
static const unsigned char kat2_prt_nonce[] = {
    0xd6, 0x74, 0x21, 0xae, 0xb7, 0x11, 0xf4, 0xbb,
};
static const unsigned char kat2_prt_persstr[] = {0};
static const unsigned char kat2_prt_entropyinpr0[] = {
    0xe6, 0x6f, 0x59, 0xe2, 0x8a, 0x46, 0x79, 0x42, 0x13, 0xbf, 0x3d, 0x0c,
    0x3a, 0x2c, 0xbb, 0xb0,
};
static const unsigned char kat2_prt_entropyinpr1[] = {
    0x92, 0x05, 0xb9, 0x0e, 0x0e, 0xf2, 0x12, 0xc7, 0x67, 0x9b, 0x37, 0x52,
    0x6a, 0x80, 0x67, 0x89,
};
static const unsigned char kat2_prt_addin0[] = {0};
static const unsigned char kat2_prt_addin1[] = {0};
static const unsigned char kat2_prt_retbytes[] = {
    0xf7, 0x6f, 0xd2, 0xa4, 0x9d, 0x95, 0x74, 0xc3, 0xf9, 0x08, 0x64, 0xf3,
    0x5f, 0x32, 0x25, 0x3b, 0x83, 0x09, 0x8e, 0xe0, 0x4a, 0x4c, 0x8d, 0xba,
    0x46, 0x4a, 0x80, 0x35, 0xf6, 0x65, 0xca, 0x16, 0x5c, 0x8a, 0x03, 0x8b,
    0xe5, 0xe1, 0xb1, 0x00, 0xd5, 0x67, 0x52, 0xad, 0xcf, 0x59, 0xbe, 0xa1,
    0x67, 0xe1, 0x5b, 0x1d, 0x01, 0xc4, 0x19, 0x94, 0x8d, 0x2d, 0x0a, 0x85,
    0xbe, 0x66, 0xd1, 0x9b, 0xb4, 0x0e, 0x5e, 0x0a, 0x66, 0xcf, 0xd7, 0x6b,
    0xa7, 0x54, 0x7e, 0xba, 0x62, 0x76, 0xea, 0x49,
};
static const struct drbg_kat_pr_true kat2_prt_t = {
    1, kat2_prt_entropyin, kat2_prt_nonce, kat2_prt_persstr,
    kat2_prt_entropyinpr0, kat2_prt_addin0, kat2_prt_entropyinpr1,
    kat2_prt_addin1, kat2_prt_retbytes
};
static const struct drbg_kat kat2_prt = {
    PR_TRUE, USE_HMAC, NID_sha1, 16, 8, 0, 0, 80, &kat2_prt_t
};

static const unsigned char kat1680_prt_entropyin[] = {
    0xfa, 0x18, 0xc7, 0x94, 0x9c, 0xd5, 0xbc, 0xbe, 0x49, 0xc9, 0x6f, 0x4d,
    0x66, 0x70, 0xc8, 0x4f, 0x55, 0xae, 0xe0, 0x0f, 0x36, 0xa4, 0x6c, 0xbf,
    0xaf, 0xbe, 0x54, 0xe6, 0x6b, 0x32, 0x64, 0x23,
};
static const unsigned char kat1680_prt_nonce[] = {
    0xc6, 0xfd, 0xec, 0x42, 0x46, 0xbd, 0xa3, 0xe2, 0xb6, 0x9f, 0xf6, 0x02,
    0x67, 0x5f, 0x7e, 0x6d,
};
static const unsigned char kat1680_prt_persstr[] = {
    0x9b, 0x31, 0xee, 0xbb, 0xe8, 0xbc, 0x02, 0x3c, 0xb8, 0x19, 0x3c, 0xe5,
    0xe1, 0x5a, 0x62, 0x9d, 0x29, 0x20, 0xa0, 0xc4, 0x91, 0x69, 0xd2, 0x98,
    0x92, 0x4b, 0xdb, 0xa2, 0xeb, 0x3b, 0xcd, 0x46,
};
static const unsigned char kat1680_prt_entropyinpr0[] = {
    0xd7, 0x84, 0x2e, 0x7a, 0xd0, 0xcb, 0xac, 0x6b, 0x94, 0x04, 0xe8, 0xe9,
    0x42, 0xfa, 0xbb, 0x77, 0x97, 0x4b, 0x35, 0x3a, 0x7f, 0x96, 0x33, 0x88,
    0x06, 0x95, 0xfb, 0xff, 0xcb, 0x4d, 0x32, 0x79,
};
static const unsigned char kat1680_prt_entropyinpr1[] = {
    0x96, 0xa3, 0x0d, 0x85, 0x93, 0xcc, 0xe5, 0xfe, 0xbd, 0x4f, 0x03, 0x4f,
    0xf9, 0x74, 0x79, 0xeb, 0x88, 0x08, 0xe8, 0x1b, 0xd7, 0xb8, 0xf7, 0xb4,
    0x4a, 0xe9, 0x45, 0xfb, 0xbf, 0x50, 0x35, 0x72,
};
static const unsigned char kat1680_prt_addin0[] = {
    0x2e, 0x08, 0x83, 0xa8, 0x80, 0x21, 0xb7, 0xca, 0x2e, 0x8b, 0xe9, 0xb7,
    0xb2, 0x08, 0xee, 0xc4, 0x10, 0x78, 0x64, 0x60, 0x5f, 0x71, 0x85, 0x10,
    0x32, 0x3d, 0x89, 0xc8, 0x14, 0x6c, 0xa8, 0x93,
};
static const unsigned char kat1680_prt_addin1[] = {
    0x01, 0x55, 0xdc, 0x73, 0xa3, 0x6c, 0x16, 0x0d, 0x9e, 0x13, 0xc0, 0x23,
    0xe7, 0x32, 0x79, 0x8b, 0x4f, 0xba, 0x3a, 0x9f, 0xd8, 0x49, 0xc0, 0xed,
    0xf8, 0x99, 0x76, 0x5c, 0x5f, 0xf7, 0x34, 0x9f,
};
static const unsigned char kat1680_prt_retbytes[] = {
    0xee, 0x19, 0x1d, 0xc6, 0xbe, 0xf0, 0x25, 0xe3, 0x63, 0x02, 0xbb, 0x8c,
    0xe0, 0xe6, 0xa9, 0x49, 0xf7, 0xb0, 0xd2, 0x94, 0x4b, 0x24, 0x6f, 0xc5,
    0x2d, 0x68, 0xa2, 0x0c, 0x3b, 0x2b, 0x78, 0x75, 0x95, 0xca, 0x9d, 0x4b,
    0xae, 0x2f, 0x55, 0xa1, 0x39, 0x24, 0xfa, 0xbb, 0xef, 0x8f, 0x70, 0x0a,
    0xbc, 0x09, 0xd7, 0xda, 0xc1, 0xc1, 0xeb, 0x3a, 0x63, 0xc0, 0x40, 0x86,
    0x75, 0x19, 0xe6, 0x72, 0x4f, 0xae, 0xb5, 0x32, 0xd0, 0x1c, 0xd3, 0x89,
    0x22, 0xe4, 0xe0, 0x97, 0x35, 0x66, 0xfc, 0x23, 0xf5, 0xfb, 0xc0, 0x67,
    0xf4, 0x96, 0xcb, 0x97, 0xfe, 0x3c, 0xe9, 0x75, 0x64, 0xf0, 0x01, 0x0d,
    0x6c, 0xd2, 0xb5, 0xd8, 0x1a, 0x3e, 0x79, 0xfc, 0xb8, 0x5f, 0x01, 0x01,
    0x91, 0xa7, 0x6b, 0x4d, 0x79, 0x6e, 0xa8, 0xc8, 0x5b, 0x11, 0x9d, 0xd2,
    0x42, 0x10, 0xf6, 0x47, 0x25, 0xc0, 0x96, 0x89,
};
static const struct drbg_kat_pr_true kat1680_prt_t = {
    14, kat1680_prt_entropyin, kat1680_prt_nonce, kat1680_prt_persstr,
    kat1680_prt_entropyinpr0, kat1680_prt_addin0, kat1680_prt_entropyinpr1,
    kat1680_prt_addin1, kat1680_prt_retbytes
};
static const struct drbg_kat kat1680_prt = {
    PR_TRUE, USE_HMAC, NID_sha512_256, 32, 16, 32, 32, 128, &kat1680_prt_t
};

/* -------------------------------------------------------------------------- */

static const unsigned char kat7_prf_entropyin[] = {
    0xb3, 0xd4, 0x04, 0x12, 0x01, 0xf4, 0x34, 0x5e, 0x0a, 0x81, 0x8d, 0xe1,
    0x36, 0xc6, 0xaa, 0x7e,
};
static const unsigned char kat7_prf_nonce[] = {
    0x6b, 0x06, 0x12, 0xe1, 0xac, 0x6b, 0x3f, 0x2f,
};
static const unsigned char kat7_prf_persstr[] = {0};
static const unsigned char kat7_prf_entropyin_reseed[] = {
    0x26, 0xf6, 0xec, 0x32, 0x8a, 0xc7, 0xf8, 0x96, 0x6d, 0xca, 0x90, 0xe1,
    0x62, 0xc2, 0x97, 0xef,
};
static const unsigned char kat7_prf_addin_reseed[] = {0};
static const unsigned char kat7_prf_addin0[] = {0};
static const unsigned char kat7_prf_addin1[] = {0};
static const unsigned char kat7_prf_retbytes[] = {
    0xd9, 0x24, 0x5a, 0x4a, 0x0a, 0xb0, 0xca, 0x97, 0xe7, 0x47, 0xc0, 0xd2,
    0x90, 0x98, 0x97, 0x9e, 0x82, 0x48, 0xe5, 0x3f, 0x0e, 0xc6, 0xb9, 0x16,
    0x78, 0x97, 0x2f, 0x3b, 0x56, 0x91, 0xe7, 0x99, 0x5a, 0xd2, 0xeb, 0x99,
    0x64, 0x0d, 0x3e, 0x9a, 0x83, 0x64, 0x89, 0x1d, 0x0f, 0xf1, 0x79, 0x73,
    0x2d, 0x63, 0x3f, 0x76, 0x2d, 0x65, 0x92, 0xa4, 0xd4, 0x9c, 0x4e, 0x66,
    0x7c, 0x69, 0x9b, 0x26, 0x78, 0x92, 0x9c, 0x81, 0xd9, 0xbd, 0xfc, 0x74,
    0xd6, 0x57, 0x5f, 0x5b, 0x72, 0x7f, 0x4d, 0x65,
};
static const struct drbg_kat_pr_false kat7_prf_t = {
    6, kat7_prf_entropyin, kat7_prf_nonce, kat7_prf_persstr,
    kat7_prf_entropyin_reseed, kat7_prf_addin_reseed,
    kat7_prf_addin0, kat7_prf_addin1, kat7_prf_retbytes
};
static const struct drbg_kat kat7_prf = {
    PR_FALSE, USE_HMAC, NID_sha1, 16, 8, 0, 0, 80, &kat7_prf_t
};

static const unsigned char kat1680_prf_entropyin[] = {
    0x03, 0x8f, 0x2d, 0x21, 0x48, 0x1d, 0xe9, 0xf2, 0x28, 0x61, 0x68, 0xc8,
    0x0d, 0xb5, 0x59, 0xb0, 0x37, 0xa3, 0x6a, 0x05, 0x91, 0xe3, 0xc2, 0x46,
    0xa5, 0xe3, 0xa5, 0x5d, 0x0e, 0x39, 0x2b, 0x35,
};
static const unsigned char kat1680_prf_nonce[] = {
    0x86, 0x95, 0x63, 0x4d, 0xb6, 0xfc, 0x1c, 0x67, 0x29, 0x9f, 0xd5, 0x55,
    0x3b, 0x19, 0xc5, 0x4d,
};
static const unsigned char kat1680_prf_persstr[] = {
    0x01, 0x35, 0x28, 0x7e, 0xfe, 0x2f, 0x40, 0xa9, 0xcf, 0x2a, 0xdc, 0x97,
    0xa5, 0x58, 0x20, 0xbb, 0xb9, 0xf9, 0x49, 0x8b, 0xc5, 0x12, 0x70, 0x7c,
    0x5a, 0xc9, 0xc7, 0x21, 0x89, 0x37, 0x57, 0xbf,
};
static const unsigned char kat1680_prf_entropyin_reseed[] = {
    0x7d, 0x20, 0xf5, 0xdd, 0x7e, 0xba, 0x0d, 0x2d, 0xd1, 0x88, 0x2f, 0xd2,
    0xdd, 0x98, 0x72, 0x80, 0xf3, 0xd9, 0x50, 0x2a, 0x62, 0x4d, 0xff, 0x55,
    0x26, 0x7d, 0x59, 0x6d, 0x4a, 0xb0, 0x21, 0xc9,
};
static const unsigned char kat1680_prf_addin_reseed[] = {
    0x7e, 0x78, 0x8d, 0x4f, 0xba, 0xb8, 0x92, 0xa6, 0x67, 0xc1, 0x52, 0xf2,
    0x90, 0x6c, 0x4b, 0xd7, 0xc4, 0xa6, 0x29, 0x5f, 0x11, 0x5b, 0xb6, 0xf6,
    0x5d, 0x80, 0x88, 0xfd, 0xff, 0xc8, 0xb5, 0xe5,
};
static const unsigned char kat1680_prf_addin0[] = {
    0xb7, 0x5e, 0x30, 0x58, 0x84, 0x81, 0x60, 0xfd, 0x30, 0xe7, 0xd0, 0x4a,
    0x72, 0xba, 0x5b, 0x37, 0x6f, 0xad, 0xf2, 0x66, 0xdb, 0x66, 0x6a, 0x95,
    0xed, 0xaa, 0xab, 0x56, 0x52, 0x51, 0x1e, 0xb9,
};
static const unsigned char kat1680_prf_addin1[] = {
    0x69, 0x73, 0xe0, 0x5c, 0xea, 0xb5, 0x31, 0x0b, 0x91, 0x21, 0xe1, 0xde,
    0x19, 0x94, 0x84, 0xdf, 0x58, 0xfc, 0x4b, 0x26, 0x42, 0x9d, 0xdf, 0x44,
    0x65, 0xcd, 0xe7, 0xf7, 0xd6, 0xea, 0x35, 0x54,
};
static const unsigned char kat1680_prf_retbytes[] = {
    0x13, 0x44, 0x5b, 0x39, 0xab, 0x89, 0x3b, 0x31, 0x9c, 0xb0, 0xc4, 0x22,
    0x50, 0x8d, 0x3f, 0x4d, 0x03, 0x26, 0x40, 0x16, 0xf9, 0xf6, 0x91, 0xb9,
    0x16, 0x97, 0xb6, 0x37, 0xc4, 0xea, 0x25, 0x1c, 0x71, 0xec, 0x4c, 0xa3,
    0x55, 0x70, 0xd1, 0x07, 0x24, 0xa3, 0xf9, 0x19, 0xe0, 0x42, 0xdc, 0xe3,
    0x5f, 0x50, 0xfc, 0x10, 0x86, 0x6f, 0x7c, 0x9d, 0xf8, 0x8a, 0xb3, 0x7e,
    0xa3, 0xbc, 0x25, 0xd2, 0x86, 0xfa, 0xe1, 0x55, 0x7f, 0xd9, 0x30, 0xed,
    0x74, 0x7c, 0xdf, 0x24, 0x6b, 0xc7, 0xa3, 0xb2, 0xd6, 0xc9, 0x5d, 0x1f,
    0x77, 0x17, 0xbb, 0xe4, 0x22, 0xd7, 0x10, 0x35, 0x6a, 0xf8, 0xab, 0x7d,
    0xf7, 0xcd, 0x72, 0x4d, 0x02, 0x2f, 0xe5, 0xf8, 0xf2, 0xd8, 0x4d, 0x6f,
    0x2b, 0x27, 0x0d, 0x70, 0xb1, 0x6a, 0xf1, 0x4b, 0x3c, 0xcb, 0x4d, 0x52,
    0xfd, 0x58, 0x7c, 0x59, 0x8f, 0x00, 0x95, 0x1e,
};
static const struct drbg_kat_pr_false kat1680_prf_t = {
    14, kat1680_prf_entropyin, kat1680_prf_nonce, kat1680_prf_persstr,
    kat1680_prf_entropyin_reseed, kat1680_prf_addin_reseed,
    kat1680_prf_addin0, kat1680_prf_addin1, kat1680_prf_retbytes
};
static const struct drbg_kat kat1680_prf = {
    PR_FALSE, USE_HMAC, NID_sha512_256, 32, 16, 32, 32, 128, &kat1680_prf_t
};

/* -------------------------------------------------------------------------- */

const struct drbg_kat *drbg_hmac_test[] = {
    &kat1_nor, &kat1680_nor,
    &kat2_prt, &kat1680_prt,
    &kat7_prf, &kat1680_prf
};
const size_t drbg_hmac_nelem = OSSL_NELEM(drbg_hmac_test);
