/* Generated automatically by the program `genopinit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "recog.h"
#include "expr.h"
#include "optabs.h"
#include "reload.h"

void
init_all_optabs (void)
{
#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  int i, j;
#endif

  set_optab_handler (movstrict_optab, QImode, CODE_FOR_movstrictqi);
  set_optab_handler (movstrict_optab, HImode, CODE_FOR_movstricthi);
  if (HAVE_mulhi3)
    set_optab_handler (smul_optab, HImode, CODE_FOR_mulhi3);
  if (HAVE_mulsi3)
    set_optab_handler (smul_optab, SImode, CODE_FOR_mulsi3);
  if (HAVE_smulsi3_highpart)
    set_optab_handler (smul_highpart_optab, SImode, CODE_FOR_smulsi3_highpart);
  if (HAVE_umulsi3_highpart)
    set_optab_handler (umul_highpart_optab, SImode, CODE_FOR_umulsi3_highpart);
  if (HAVE_udivhi3)
    set_optab_handler (udiv_optab, HImode, CODE_FOR_udivhi3);
  if (HAVE_divhi3)
    set_optab_handler (sdiv_optab, HImode, CODE_FOR_divhi3);
  if (HAVE_udivsi3)
    set_optab_handler (udiv_optab, SImode, CODE_FOR_udivsi3);
  if (HAVE_divsi3)
    set_optab_handler (sdiv_optab, SImode, CODE_FOR_divsi3);
  set_optab_handler (udivmod_optab, QImode, CODE_FOR_udivmodqi4);
  if (HAVE_divmodqi4)
    set_optab_handler (sdivmod_optab, QImode, CODE_FOR_divmodqi4);
  if (HAVE_udivmodhi4)
    set_optab_handler (udivmod_optab, HImode, CODE_FOR_udivmodhi4);
  if (HAVE_divmodhi4)
    set_optab_handler (sdivmod_optab, HImode, CODE_FOR_divmodhi4);
  set_optab_handler (mov_optab, QImode, CODE_FOR_movqi);
  set_optab_handler (mov_optab, HImode, CODE_FOR_movhi);
  set_optab_handler (mov_optab, SImode, CODE_FOR_movsi);
  if (HAVE_movmemsi)
    set_direct_optab_handler (movmem_optab, SImode, CODE_FOR_movmemsi);
  if (HAVE_movsd)
    set_optab_handler (mov_optab, SDmode, CODE_FOR_movsd);
  set_optab_handler (mov_optab, SFmode, CODE_FOR_movsf);
  set_optab_handler (add_optab, QImode, CODE_FOR_addqi3);
  set_optab_handler (add_optab, HImode, CODE_FOR_addhi3);
  set_optab_handler (add_optab, SImode, CODE_FOR_addsi3);
  set_optab_handler (sub_optab, QImode, CODE_FOR_subqi3);
  set_optab_handler (sub_optab, HImode, CODE_FOR_subhi3);
  set_optab_handler (sub_optab, SImode, CODE_FOR_subsi3);
  if (HAVE_mulqihi3)
    set_widening_optab_handler (smul_widen_optab, HImode, QImode, CODE_FOR_mulqihi3);
  if (HAVE_mulhisi3)
    set_widening_optab_handler (smul_widen_optab, SImode, HImode, CODE_FOR_mulhisi3);
  if (HAVE_umulqihi3)
    set_widening_optab_handler (umul_widen_optab, HImode, QImode, CODE_FOR_umulqihi3);
  if (HAVE_umulhisi3)
    set_widening_optab_handler (umul_widen_optab, SImode, HImode, CODE_FOR_umulhisi3);
  set_optab_handler (and_optab, QImode, CODE_FOR_andqi3);
  set_optab_handler (and_optab, HImode, CODE_FOR_andhi3);
  set_optab_handler (and_optab, SImode, CODE_FOR_andsi3);
  set_optab_handler (ior_optab, QImode, CODE_FOR_iorqi3);
  set_optab_handler (ior_optab, HImode, CODE_FOR_iorhi3);
  set_optab_handler (ior_optab, SImode, CODE_FOR_iorsi3);
  set_optab_handler (xor_optab, QImode, CODE_FOR_xorqi3);
  set_optab_handler (xor_optab, HImode, CODE_FOR_xorhi3);
  set_optab_handler (xor_optab, SImode, CODE_FOR_xorsi3);
  set_optab_handler (neg_optab, QImode, CODE_FOR_negqi2);
  set_optab_handler (neg_optab, HImode, CODE_FOR_neghi2);
  set_optab_handler (neg_optab, SImode, CODE_FOR_negsi2);
  set_optab_handler (negv_optab, SFmode, CODE_FOR_negsf2),
    set_optab_handler (neg_optab, SFmode, CODE_FOR_negsf2);
  set_optab_handler (absv_optab, SFmode, CODE_FOR_abssf2),
    set_optab_handler (abs_optab, SFmode, CODE_FOR_abssf2);
  set_optab_handler (one_cmpl_optab, QImode, CODE_FOR_one_cmplqi2);
  set_optab_handler (one_cmpl_optab, HImode, CODE_FOR_one_cmplhi2);
  set_optab_handler (one_cmpl_optab, SImode, CODE_FOR_one_cmplsi2);
  set_optab_handler (cbranch_optab, QImode, CODE_FOR_cbranchqi4);
  set_optab_handler (cbranch_optab, HImode, CODE_FOR_cbranchhi4);
  if (HAVE_cbranchsi4)
    set_optab_handler (cbranch_optab, SImode, CODE_FOR_cbranchsi4);
  set_convert_optab_handler (zext_optab, HImode, QImode, CODE_FOR_zero_extendqihi2);
  set_convert_optab_handler (zext_optab, SImode, QImode, CODE_FOR_zero_extendqisi2);
  set_convert_optab_handler (zext_optab, SImode, HImode, CODE_FOR_zero_extendhisi2);
  set_convert_optab_handler (sext_optab, HImode, QImode, CODE_FOR_extendqihi2);
  set_convert_optab_handler (sext_optab, SImode, QImode, CODE_FOR_extendqisi2);
  set_convert_optab_handler (sext_optab, SImode, HImode, CODE_FOR_extendhisi2);
  set_optab_handler (ashl_optab, QImode, CODE_FOR_ashlqi3);
  set_optab_handler (ashr_optab, QImode, CODE_FOR_ashrqi3);
  set_optab_handler (lshr_optab, QImode, CODE_FOR_lshrqi3);
  set_optab_handler (ashl_optab, HImode, CODE_FOR_ashlhi3);
  set_optab_handler (lshr_optab, HImode, CODE_FOR_lshrhi3);
  set_optab_handler (ashr_optab, HImode, CODE_FOR_ashrhi3);
  set_optab_handler (ashl_optab, SImode, CODE_FOR_ashlsi3);
  set_optab_handler (lshr_optab, SImode, CODE_FOR_lshrsi3);
  set_optab_handler (ashr_optab, SImode, CODE_FOR_ashrsi3);
  set_optab_handler (rotl_optab, QImode, CODE_FOR_rotlqi3);
  set_optab_handler (rotl_optab, HImode, CODE_FOR_rotlhi3);
  if (HAVE_rotlsi3)
    set_optab_handler (rotl_optab, SImode, CODE_FOR_rotlsi3);
  if (HAVE_cstoreqi4)
    set_optab_handler (cstore_optab, QImode, CODE_FOR_cstoreqi4);
  if (HAVE_cstorehi4)
    set_optab_handler (cstore_optab, HImode, CODE_FOR_cstorehi4);
  if (HAVE_cstoresi4)
    set_optab_handler (cstore_optab, SImode, CODE_FOR_cstoresi4);

#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  /* This flag says the same insns that convert to a signed fixnum
     also convert validly to an unsigned one.  */
  for (i = 0; i < NUM_MACHINE_MODES; i++)
    for (j = 0; j < NUM_MACHINE_MODES; j++)
      set_convert_optab_handler
 	(ufixtrunc_optab, (enum machine_mode) i, (enum machine_mode) j,
	 convert_optab_handler (sfixtrunc_optab, (enum machine_mode) i,
						 (enum machine_mode) j));
#endif
}
