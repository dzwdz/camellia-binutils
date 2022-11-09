/* DO NOT EDIT: GENERATED BY dgen.py.

   Copyright (C) 1994-1995 Andrew Cagney <cagney@highland.com.au>
   Copyright (C) 1996-2022 Free Software Foundation, Inc.

   This file is part of the GNU simulators.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef _SPREG_H_
#define _SPREG_H_

typedef unsigned_word spreg;

typedef enum {
  spr_mq = 0,
  spr_xer = 1,
  spr_rtcu = 4,
  spr_rtcl = 5,
  spr_lr = 8,
  spr_ctr = 9,
  spr_dsisr = 18,
  spr_dar = 19,
  spr_dec = 22,
  spr_sdr1 = 25,
  spr_srr0 = 26,
  spr_srr1 = 27,
  spr_vrsave = 256,
  spr_tbrl = 268,
  spr_tbru = 269,
  spr_sprg0 = 272,
  spr_sprg1 = 273,
  spr_sprg2 = 274,
  spr_sprg3 = 275,
  spr_ear = 282,
  spr_tbl = 284,
  spr_tbu = 285,
  spr_pvr = 287,
  spr_spefscr = 512,
  spr_ibat0u = 528,
  spr_ibat0l = 529,
  spr_ibat1u = 530,
  spr_ibat1l = 531,
  spr_ibat2u = 532,
  spr_ibat2l = 533,
  spr_ibat3u = 534,
  spr_ibat3l = 535,
  spr_dbat0u = 536,
  spr_dbat0l = 537,
  spr_dbat1u = 538,
  spr_dbat1l = 539,
  spr_dbat2u = 540,
  spr_dbat2l = 541,
  spr_dbat3u = 542,
  spr_dbat3l = 543,
  spr_ummcr0 = 936,
  spr_upmc1 = 937,
  spr_upmc2 = 938,
  spr_usia = 939,
  spr_ummcr1 = 940,
  spr_upmc3 = 941,
  spr_upmc4 = 942,
  spr_mmcr0 = 952,
  spr_pmc1 = 953,
  spr_pmc2 = 954,
  spr_sia = 955,
  spr_mmcr1 = 956,
  spr_pmc3 = 957,
  spr_pmc4 = 958,
  spr_sda = 959,
  spr_dmiss = 976,
  spr_dcmp = 977,
  spr_hash1 = 978,
  spr_hash2 = 979,
  spr_imiss = 980,
  spr_icmp = 981,
  spr_rpa = 982,
  spr_hid0 = 1008,
  spr_hid1 = 1009,
  spr_iabr = 1010,
  spr_dabr = 1013,
  spr_l2cr = 1017,
  spr_ictc = 1019,
  spr_thrm1 = 1020,
  spr_thrm2 = 1021,
  spr_thrm3 = 1022,
  spr_pir = 1023,
  nr_of_sprs = 1024
} sprs;

INLINE_SPREG(int) spr_is_valid(sprs spr);
INLINE_SPREG(int) spr_is_readonly(sprs spr);
INLINE_SPREG(const char *) spr_name(sprs spr);
INLINE_SPREG(int) spr_index(sprs spr);
INLINE_SPREG(int) spr_length(sprs spr);

#endif /* _SPREG_H_ */
