/* Generated automatically by the program `genattrtab'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-attr.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "output.h"
#include "diagnostic-core.h"
#include "flags.h"
#include "function.h"

#define operands recog_data.operand

int
insn_current_length (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 190:  /* *brabs */
    case 189:  /* *brabc */
      extract_constrain_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-126)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (126)))
        {
	  return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands)) + 2;
        }
      else
        {
	  if ((((
#line 77 "../.././gcc/config/h8300/h8300.md"
(cpu_type)) == (
(CPU_H8300H)))) && ((((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) >= (-32000)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (32000))))
	    {
	      return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands)) + 4;
	    }
	  else
	    {
	      return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands)) + 6;
	    }
        }

    case 191:  /* jump */
    case 188:  /* branch_false */
    case 187:  /* branch_true */
      extract_constrain_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-126)) && ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) + (
#line 94 "../.././gcc/config/h8300/h8300.md"
(DELAY_SLOT_LENGTH (insn)))) <= (125)))
        {
	  return 2;
        }
      else
        {
	  if ((((
#line 77 "../.././gcc/config/h8300/h8300.md"
(cpu_type)) == (
(CPU_H8300H)))) && ((((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) >= (-32000)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (32000))))
	    {
	      return 4;
	    }
	  else
	    {
	      return 6;
	    }
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_variable_length_p (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 191:  /* jump */
    case 190:  /* *brabs */
    case 189:  /* *brabc */
    case 188:  /* branch_false */
    case 187:  /* branch_true */
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_min_length (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 190:  /* *brabs */
    case 189:  /* *brabc */
      return 2147483647 /* 0x7fffffff */;

    case 170:  /* xorqi3_1 */
    case 167:  /* iorqi3_1 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands));
        }

    case 159:  /* *andqi3_2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands));
        }
      else
        {
	  return 8;
        }

    case 126:  /* *addhi3_h8sx */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands));
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else
        {
	  return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands));
        }

    case 124:  /* *addhi3_h8300hs */
    case 123:  /* *addhi3_h8300 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 2;
        }
      else if (which_alternative == 3)
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 303:  /* *h8300.md:4446 */
    case 302:  /* *h8300.md:4426 */
    case 297:  /* *ashiftsi_sextqi_7 */
    case 296:  /* *addsi3_shift */
    case 295:  /* *iorsi3_ashift_16_ashift_24_mem */
    case 294:  /* *iorsi3_ashift_16_ashift_24 */
    case 292:  /* *iorsi3_shift */
    case 284:  /* *iorsi3_two_qi_sext */
    case 282:  /* *iorsi3_two_qi_zext */
    case 271:  /* *addsi3_and_not_r_1 */
    case 270:  /* *addsi3_and_r_1 */
    case 267:  /* *andsi3_lshiftrt_9_sb */
    case 265:  /* *andsi3_ashift_n_lower */
    case 264:  /* *twoshifts_l16_r1 */
    case 263:  /* *extzv_8_23 */
    case 253:  /* *cmpcondbclrreg */
    case 251:  /* *cmpcondbsetreg */
    case 249:  /* *cmpcondbclr */
    case 247:  /* *cmpcondbset */
    case 244:  /* *cmpstz */
    case 243:  /* *bstzhireg */
    case 216:  /* *extendqisi2_h8300hs */
    case 209:  /* *zero_extendqisi2_h8300hs */
    case 110:  /* *tstsi_upper_bit */
      return 200 /* 0xc8 */;

    case 10:  /* *movsi_h8sx */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands));
        }
      else if (which_alternative == 4)
        {
	  return 2;
        }
      else if (which_alternative == 5)
        {
	  return 6;
        }
      else
        {
	  return 4;
        }

    case 7:  /* movstricthi */
    case 6:  /* *movhi_h8sx */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 2;
        }
      else
        {
	  return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands));
        }

    case 121:  /* cmpsi */
    case 11:  /* *movsf_h8sx */
    case 3:  /* movstrictqi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands));
        }

    case 0:  /* *movqi_h8300 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      extract_constrain_insn_cached (insn);
      if (
#line 174 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
        {
	  return 4;
        }
      else if ((
#line 175 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H)) || (
#line 176 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S)))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 14 /* 0xe */;
        }

    case 301:  /* *h8300.md:4416 */
    case 300:  /* *h8300.md:4406 */
    case 291:  /* *iorsi3_and_lshiftrt_9_sb */
      return 10 /* 0xa */;

    case 299:  /* *h8300.md:4397 */
    case 298:  /* *h8300.md:4386 */
    case 290:  /* *iorsi3_and_lshiftrt_n_sb */
    case 266:  /* *andsi3_lshiftrt_n_sb */
    case 262:  /* *extzv_16_8 */
    case 236:  /* *extzv_1_r_inv_h8300 */
    case 234:  /* *extzv_1_r_h8300 */
    case 233:  /* *h8300.md:3214 */
    case 185:  /* *one_cmplsi2_h8300 */
    case 169:  /* bnothi_msx */
    case 168:  /* bnotqi_msx */
    case 166:  /* bsethi_msx */
    case 165:  /* bsetqi_msx */
    case 158:  /* bclrhi_msx */
    case 157:  /* bclrqi_msx */
      return 8;

    case 293:  /* *iorsi2_and_1_lshiftrt_1 */
    case 289:  /* *iorsi3_zero_extract */
    case 288:  /* *iorsi3_and_lshiftrt */
    case 287:  /* *iorsi3_and_ashift */
    case 286:  /* *iorsi3_ashift_31 */
    case 269:  /* *addsi3_lshiftrt_16_zexthi */
    case 261:  /* *extzv_8_16 */
    case 257:  /* *insv_si_1_n_lshiftrt_16 */
    case 240:  /* *h8300.md:3427 */
    case 239:  /* *h8300.md:3416 */
    case 232:  /* *h8300.md:3201 */
    case 163:  /* *andorsi3 */
    case 162:  /* *andorhi3 */
    case 161:  /* *andorqi3 */
    case 156:  /* divmodhi4 */
    case 154:  /* divmodqi4 */
    case 147:  /* *h8300.md:1539 */
    case 133:  /* *subsi3_h8300 */
      return 6;

    case 285:  /* *iorsi3_w */
    case 160:  /* andqi3_1 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 8;
        }

    case 191:  /* jump */
    case 188:  /* branch_false */
    case 187:  /* branch_true */
    case 283:  /* *iorsi3_e2f */
    case 281:  /* *iorsi3_two_hi */
    case 279:  /* *iorhi3_two_qi */
    case 278:  /* *iorhi3_lshiftrt_8 */
    case 277:  /* *iorhi3_ashift_8 */
    case 276:  /* *ixorsi3_lshiftrt_16 */
    case 275:  /* *ixorsi3_ashift_16 */
    case 274:  /* *ixorsi3_zext_hi */
    case 273:  /* *ixorsi3_zext_qi */
    case 272:  /* *ixorhi3_zext */
    case 268:  /* *addsi3_upper */
    case 259:  /* *insv_si_8_8_lshiftrt_8 */
    case 258:  /* *insv_si_8_8 */
    case 219:  /* *extendhisi2_h8300hs */
    case 217:  /* *extendqisi2_h8sx */
    case 214:  /* *extendqihi2_h8300hs */
    case 212:  /* *zero_extendhisi2_h8300hs */
    case 210:  /* *zero_extendqisi2_h8sx */
    case 204:  /* *return_1 */
    case 203:  /* return_h8sx */
    case 200:  /* nop */
    case 197:  /* *indirect_jump_h8300hs_normal */
    case 196:  /* *indirect_jump_h8300hs_advanced */
    case 195:  /* *indirect_jump_h8300 */
    case 194:  /* *tablejump_h8300hs_normal */
    case 193:  /* *tablejump_h8300hs_advanced */
    case 192:  /* *tablejump_h8300 */
    case 180:  /* *abssf2_h8300 */
    case 178:  /* *negsf2_h8300 */
    case 164:  /* *andorsi3_shift_8 */
    case 152:  /* divsi3 */
    case 151:  /* udivsi3 */
    case 150:  /* divhi3 */
    case 149:  /* udivhi3 */
    case 146:  /* umulsi3_highpart */
    case 145:  /* smulsi3_highpart */
    case 144:  /* mulsi3 */
    case 143:  /* mulhi3 */
    case 142:  /* *umulhisi3 */
    case 140:  /* *umulqihi3 */
    case 129:  /* *addsi3_incdec */
    case 125:  /* *addhi3_incdec */
    case 119:  /* *cmphi_h8300_znvc */
    case 117:  /* *tstsi_upper */
    case 116:  /* *tstsi */
    case 115:  /* *tsthi_upper */
    case 114:  /* *tsthi */
    case 113:  /* *tstqi */
    case 111:  /* *tstsi_variable_bit */
    case 109:  /* *h8300.md:936 */
    case 107:  /* *h8300.md:900 */
    case 101:  /* *pushqi1_h8300 */
      return 2;

    case 280:  /* *iorhi3_two_qi_mem */
      return 16 /* 0x10 */;

    case 260:  /* *extzv_8_8 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 6;
        }
      else
        {
	  return 4;
        }

    case 256:  /* *insv_si_1_n_lshiftrt */
    case 255:  /* *insv_si_1_n */
    case 238:  /* *h8300.md:3345 */
    case 227:  /* *h8300.md:3042 */
    case 224:  /* *h8300.md:2986 */
    case 221:  /* *h8300.md:2930 */
    case 202:  /* stm_h8300sx */
    case 201:  /* ldm_h8300sx */
    case 183:  /* *one_cmplhi2_h8300 */
    case 181:  /* *abssf2_h8300hs */
    case 179:  /* *negsf2_h8300hs */
    case 155:  /* udivmodhi4 */
    case 153:  /* udivmodqi4 */
    case 148:  /* *h8300.md:1551 */
    case 141:  /* *umulhisi3_const */
    case 139:  /* *umulqihi3_const */
    case 138:  /* *mulhisi3 */
    case 137:  /* *mulhisi3_const */
    case 136:  /* *mulqihi3 */
    case 135:  /* *mulqihi3_const */
    case 105:  /* *pushhi1_h8300hs_si */
    case 104:  /* *pushhi1_h8300hs_hi */
    case 103:  /* *pushqi1_h8300hs_si */
    case 102:  /* *pushqi1_h8300hs_hi */
      return 4;

    case 237:  /* *extzv_1_r_inv_h8300hs */
    case 235:  /* *extzv_1_r_h8300hs */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 6;
        }

    case 231:  /* rotlsi3_1 */
    case 230:  /* rotlhi3_1 */
    case 229:  /* rotlqi3_1 */
      extract_constrain_insn_cached (insn);
      return 
#line 3182 "../.././gcc/config/h8300/h8300.md"
(compute_a_rotate_length (operands));

    case 228:  /* *shiftsi */
    case 225:  /* *shifthi */
    case 222:  /* *shiftqi */
      extract_constrain_insn_cached (insn);
      return 
#line 3061 "../.././gcc/config/h8300/h8300.md"
(compute_a_shift_length (insn, operands));

    case 218:  /* *extendhisi2_h8300 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 6;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 215:  /* *extendqisi2_h8300 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 213:  /* *extendqihi2_h8300 */
    case 208:  /* *zero_extendqisi2_h8300 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 211:  /* *zero_extendhisi2_h8300 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else
        {
	  return 6;
        }

    case 207:  /* *zero_extendqihi2_h8300hs */
    case 206:  /* *zero_extendqihi2_h8300 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 205:  /* monitor_prologue */
      return 20 /* 0x14 */;

    case 199:  /* call_value */
    case 198:  /* call */
      extract_insn_cached (insn);
      if (small_call_insn_operand (operands[0], QImode))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 174:  /* *logicalsi3 */
    case 172:  /* *logicalsi3_sn */
      extract_constrain_insn_cached (insn);
      return 
#line 2038 "../.././gcc/config/h8300/h8300.md"
(compute_logical_op_length (SImode, operands));

    case 173:  /* *logicalhi3 */
    case 171:  /* *logicalhi3_sn */
      extract_constrain_insn_cached (insn);
      return 
#line 2026 "../.././gcc/config/h8300/h8300.md"
(compute_logical_op_length (HImode, operands));

    case 131:  /* *subhi3_h8300 */
    case 106:  /* *h8300.md:889 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 128:  /* *addsi_h8300hs */
    case 127:  /* *addsi_h8300 */
      extract_constrain_insn_cached (insn);
      return 
#line 1257 "../.././gcc/config/h8300/h8300.md"
(compute_plussi_length (operands));

    case 112:  /* *tstsi_variable_bit_qi */
    case 108:  /* *tst_extzv_1_n */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 8;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 100:  /* *movsf_h8300hs */
    case 99:  /* *movsf_h8300 */
    case 9:  /* *movsi_h8300hs */
    case 8:  /* *movsi_h8300 */
    case 5:  /* *movhi_h8300hs */
    case 4:  /* *movhi_h8300 */
    case 1:  /* *movqi_h8300hs */
      extract_constrain_insn_cached (insn);
      return 
#line 848 "../.././gcc/config/h8300/h8300.md"
(compute_mov_length (operands));

    case 15:  /* stpcpy_internal */
    case 14:  /* stpcpy_internal_normal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 6;
        }
      else
        {
	  return 18 /* 0x12 */;
        }

    case 13:  /* movmd_internal */
    case 12:  /* movmd_internal_normal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 14 /* 0xe */;
        }

    default:
      extract_constrain_insn_cached (insn);
      return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands));

    }
}

int
insn_default_length (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 190:  /* *brabs */
    case 189:  /* *brabc */
      return 2147483647 /* 0x7fffffff */;

    case 170:  /* xorqi3_1 */
    case 167:  /* iorqi3_1 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands));
        }

    case 159:  /* *andqi3_2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands));
        }
      else
        {
	  return 8;
        }

    case 126:  /* *addhi3_h8sx */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands));
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else
        {
	  return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands));
        }

    case 124:  /* *addhi3_h8300hs */
    case 123:  /* *addhi3_h8300 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 2;
        }
      else if (which_alternative == 3)
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 303:  /* *h8300.md:4446 */
    case 302:  /* *h8300.md:4426 */
    case 297:  /* *ashiftsi_sextqi_7 */
    case 296:  /* *addsi3_shift */
    case 295:  /* *iorsi3_ashift_16_ashift_24_mem */
    case 294:  /* *iorsi3_ashift_16_ashift_24 */
    case 292:  /* *iorsi3_shift */
    case 284:  /* *iorsi3_two_qi_sext */
    case 282:  /* *iorsi3_two_qi_zext */
    case 271:  /* *addsi3_and_not_r_1 */
    case 270:  /* *addsi3_and_r_1 */
    case 267:  /* *andsi3_lshiftrt_9_sb */
    case 265:  /* *andsi3_ashift_n_lower */
    case 264:  /* *twoshifts_l16_r1 */
    case 263:  /* *extzv_8_23 */
    case 253:  /* *cmpcondbclrreg */
    case 251:  /* *cmpcondbsetreg */
    case 249:  /* *cmpcondbclr */
    case 247:  /* *cmpcondbset */
    case 244:  /* *cmpstz */
    case 243:  /* *bstzhireg */
    case 216:  /* *extendqisi2_h8300hs */
    case 209:  /* *zero_extendqisi2_h8300hs */
    case 110:  /* *tstsi_upper_bit */
      return 200 /* 0xc8 */;

    case 10:  /* *movsi_h8sx */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands));
        }
      else if (which_alternative == 4)
        {
	  return 2;
        }
      else if (which_alternative == 5)
        {
	  return 6;
        }
      else
        {
	  return 4;
        }

    case 7:  /* movstricthi */
    case 6:  /* *movhi_h8sx */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 2;
        }
      else
        {
	  return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands));
        }

    case 121:  /* cmpsi */
    case 11:  /* *movsf_h8sx */
    case 3:  /* movstrictqi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands));
        }

    case 0:  /* *movqi_h8300 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      extract_constrain_insn_cached (insn);
      if (
#line 174 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
        {
	  return 4;
        }
      else if ((
#line 175 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H)) || (
#line 176 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S)))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 14 /* 0xe */;
        }

    case 301:  /* *h8300.md:4416 */
    case 300:  /* *h8300.md:4406 */
    case 291:  /* *iorsi3_and_lshiftrt_9_sb */
      return 10 /* 0xa */;

    case 299:  /* *h8300.md:4397 */
    case 298:  /* *h8300.md:4386 */
    case 290:  /* *iorsi3_and_lshiftrt_n_sb */
    case 266:  /* *andsi3_lshiftrt_n_sb */
    case 262:  /* *extzv_16_8 */
    case 236:  /* *extzv_1_r_inv_h8300 */
    case 234:  /* *extzv_1_r_h8300 */
    case 233:  /* *h8300.md:3214 */
    case 185:  /* *one_cmplsi2_h8300 */
    case 169:  /* bnothi_msx */
    case 168:  /* bnotqi_msx */
    case 166:  /* bsethi_msx */
    case 165:  /* bsetqi_msx */
    case 158:  /* bclrhi_msx */
    case 157:  /* bclrqi_msx */
      return 8;

    case 191:  /* jump */
    case 188:  /* branch_false */
    case 187:  /* branch_true */
    case 293:  /* *iorsi2_and_1_lshiftrt_1 */
    case 289:  /* *iorsi3_zero_extract */
    case 288:  /* *iorsi3_and_lshiftrt */
    case 287:  /* *iorsi3_and_ashift */
    case 286:  /* *iorsi3_ashift_31 */
    case 269:  /* *addsi3_lshiftrt_16_zexthi */
    case 261:  /* *extzv_8_16 */
    case 257:  /* *insv_si_1_n_lshiftrt_16 */
    case 240:  /* *h8300.md:3427 */
    case 239:  /* *h8300.md:3416 */
    case 232:  /* *h8300.md:3201 */
    case 163:  /* *andorsi3 */
    case 162:  /* *andorhi3 */
    case 161:  /* *andorqi3 */
    case 156:  /* divmodhi4 */
    case 154:  /* divmodqi4 */
    case 147:  /* *h8300.md:1539 */
    case 133:  /* *subsi3_h8300 */
      return 6;

    case 285:  /* *iorsi3_w */
    case 160:  /* andqi3_1 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 8;
        }

    case 283:  /* *iorsi3_e2f */
    case 281:  /* *iorsi3_two_hi */
    case 279:  /* *iorhi3_two_qi */
    case 278:  /* *iorhi3_lshiftrt_8 */
    case 277:  /* *iorhi3_ashift_8 */
    case 276:  /* *ixorsi3_lshiftrt_16 */
    case 275:  /* *ixorsi3_ashift_16 */
    case 274:  /* *ixorsi3_zext_hi */
    case 273:  /* *ixorsi3_zext_qi */
    case 272:  /* *ixorhi3_zext */
    case 268:  /* *addsi3_upper */
    case 259:  /* *insv_si_8_8_lshiftrt_8 */
    case 258:  /* *insv_si_8_8 */
    case 219:  /* *extendhisi2_h8300hs */
    case 217:  /* *extendqisi2_h8sx */
    case 214:  /* *extendqihi2_h8300hs */
    case 212:  /* *zero_extendhisi2_h8300hs */
    case 210:  /* *zero_extendqisi2_h8sx */
    case 204:  /* *return_1 */
    case 203:  /* return_h8sx */
    case 200:  /* nop */
    case 197:  /* *indirect_jump_h8300hs_normal */
    case 196:  /* *indirect_jump_h8300hs_advanced */
    case 195:  /* *indirect_jump_h8300 */
    case 194:  /* *tablejump_h8300hs_normal */
    case 193:  /* *tablejump_h8300hs_advanced */
    case 192:  /* *tablejump_h8300 */
    case 180:  /* *abssf2_h8300 */
    case 178:  /* *negsf2_h8300 */
    case 164:  /* *andorsi3_shift_8 */
    case 152:  /* divsi3 */
    case 151:  /* udivsi3 */
    case 150:  /* divhi3 */
    case 149:  /* udivhi3 */
    case 146:  /* umulsi3_highpart */
    case 145:  /* smulsi3_highpart */
    case 144:  /* mulsi3 */
    case 143:  /* mulhi3 */
    case 142:  /* *umulhisi3 */
    case 140:  /* *umulqihi3 */
    case 129:  /* *addsi3_incdec */
    case 125:  /* *addhi3_incdec */
    case 119:  /* *cmphi_h8300_znvc */
    case 117:  /* *tstsi_upper */
    case 116:  /* *tstsi */
    case 115:  /* *tsthi_upper */
    case 114:  /* *tsthi */
    case 113:  /* *tstqi */
    case 111:  /* *tstsi_variable_bit */
    case 109:  /* *h8300.md:936 */
    case 107:  /* *h8300.md:900 */
    case 101:  /* *pushqi1_h8300 */
      return 2;

    case 280:  /* *iorhi3_two_qi_mem */
      return 16 /* 0x10 */;

    case 260:  /* *extzv_8_8 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 6;
        }
      else
        {
	  return 4;
        }

    case 256:  /* *insv_si_1_n_lshiftrt */
    case 255:  /* *insv_si_1_n */
    case 238:  /* *h8300.md:3345 */
    case 227:  /* *h8300.md:3042 */
    case 224:  /* *h8300.md:2986 */
    case 221:  /* *h8300.md:2930 */
    case 202:  /* stm_h8300sx */
    case 201:  /* ldm_h8300sx */
    case 183:  /* *one_cmplhi2_h8300 */
    case 181:  /* *abssf2_h8300hs */
    case 179:  /* *negsf2_h8300hs */
    case 155:  /* udivmodhi4 */
    case 153:  /* udivmodqi4 */
    case 148:  /* *h8300.md:1551 */
    case 141:  /* *umulhisi3_const */
    case 139:  /* *umulqihi3_const */
    case 138:  /* *mulhisi3 */
    case 137:  /* *mulhisi3_const */
    case 136:  /* *mulqihi3 */
    case 135:  /* *mulqihi3_const */
    case 105:  /* *pushhi1_h8300hs_si */
    case 104:  /* *pushhi1_h8300hs_hi */
    case 103:  /* *pushqi1_h8300hs_si */
    case 102:  /* *pushqi1_h8300hs_hi */
      return 4;

    case 237:  /* *extzv_1_r_inv_h8300hs */
    case 235:  /* *extzv_1_r_h8300hs */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 6;
        }

    case 231:  /* rotlsi3_1 */
    case 230:  /* rotlhi3_1 */
    case 229:  /* rotlqi3_1 */
      extract_constrain_insn_cached (insn);
      return 
#line 3182 "../.././gcc/config/h8300/h8300.md"
(compute_a_rotate_length (operands));

    case 228:  /* *shiftsi */
    case 225:  /* *shifthi */
    case 222:  /* *shiftqi */
      extract_constrain_insn_cached (insn);
      return 
#line 3061 "../.././gcc/config/h8300/h8300.md"
(compute_a_shift_length (insn, operands));

    case 218:  /* *extendhisi2_h8300 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 6;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 215:  /* *extendqisi2_h8300 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 213:  /* *extendqihi2_h8300 */
    case 208:  /* *zero_extendqisi2_h8300 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 211:  /* *zero_extendhisi2_h8300 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else
        {
	  return 6;
        }

    case 207:  /* *zero_extendqihi2_h8300hs */
    case 206:  /* *zero_extendqihi2_h8300 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 205:  /* monitor_prologue */
      return 20 /* 0x14 */;

    case 199:  /* call_value */
    case 198:  /* call */
      extract_insn_cached (insn);
      if (small_call_insn_operand (operands[0], QImode))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 174:  /* *logicalsi3 */
    case 172:  /* *logicalsi3_sn */
      extract_constrain_insn_cached (insn);
      return 
#line 2038 "../.././gcc/config/h8300/h8300.md"
(compute_logical_op_length (SImode, operands));

    case 173:  /* *logicalhi3 */
    case 171:  /* *logicalhi3_sn */
      extract_constrain_insn_cached (insn);
      return 
#line 2026 "../.././gcc/config/h8300/h8300.md"
(compute_logical_op_length (HImode, operands));

    case 131:  /* *subhi3_h8300 */
    case 106:  /* *h8300.md:889 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 128:  /* *addsi_h8300hs */
    case 127:  /* *addsi_h8300 */
      extract_constrain_insn_cached (insn);
      return 
#line 1257 "../.././gcc/config/h8300/h8300.md"
(compute_plussi_length (operands));

    case 112:  /* *tstsi_variable_bit_qi */
    case 108:  /* *tst_extzv_1_n */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 8;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 100:  /* *movsf_h8300hs */
    case 99:  /* *movsf_h8300 */
    case 9:  /* *movsi_h8300hs */
    case 8:  /* *movsi_h8300 */
    case 5:  /* *movhi_h8300hs */
    case 4:  /* *movhi_h8300 */
    case 1:  /* *movqi_h8300hs */
      extract_constrain_insn_cached (insn);
      return 
#line 848 "../.././gcc/config/h8300/h8300.md"
(compute_mov_length (operands));

    case 15:  /* stpcpy_internal */
    case 14:  /* stpcpy_internal_normal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 6;
        }
      else
        {
	  return 18 /* 0x12 */;
        }

    case 13:  /* movmd_internal */
    case 12:  /* movmd_internal_normal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 14 /* 0xe */;
        }

    default:
      extract_constrain_insn_cached (insn);
      return 
#line 111 "../.././gcc/config/h8300/h8300.md"
(h8300_insn_length_from_table (insn, operands));

    }
}

int
num_delay_slots (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 191:  /* jump */
      extract_constrain_insn_cached (insn);
      if ((
#line 2419 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX)) && ((
#line 164 "../.././gcc/config/h8300/h8300.md"
(get_attr_length (insn))) == (2)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      extract_constrain_insn_cached (insn);
      if ((get_attr_delay_slot (insn) == DELAY_SLOT_JUMP) && ((
#line 164 "../.././gcc/config/h8300/h8300.md"
(get_attr_length (insn))) == (2)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

enum attr_can_delay
get_attr_can_delay (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      extract_constrain_insn_cached (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || ((cached_type == TYPE_BITBRANCH) || ((cached_type == TYPE_CALL) || ((unsigned) (
#line 156 "../.././gcc/config/h8300/h8300.md"
(get_attr_length (insn))) >= (unsigned) (2)))))
        {
	  return CAN_DELAY_NO;
        }
      else
        {
	  return CAN_DELAY_YES;
        }

    case 199:  /* call_value */
    case 198:  /* call */
    case 191:  /* jump */
    case 190:  /* *brabs */
    case 189:  /* *brabc */
    case 188:  /* branch_false */
    case 187:  /* branch_true */
    case 12:  /* movmd_internal_normal */
    case 13:  /* movmd_internal */
    case 203:  /* return_h8sx */
    case 204:  /* *return_1 */
      return CAN_DELAY_NO;

    default:
      extract_constrain_insn_cached (insn);
      if ((unsigned) (
#line 156 "../.././gcc/config/h8300/h8300.md"
(get_attr_length (insn))) >= (unsigned) (2))
        {
	  return CAN_DELAY_NO;
        }
      else
        {
	  return CAN_DELAY_YES;
        }

    }
}

enum attr_cc
get_attr_cc (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 124:  /* *addhi3_h8300hs */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return CC_NONE_0HIT;
        }
      else if (which_alternative == 2)
        {
	  return CC_CLOBBER;
        }
      else
        {
	  return CC_SET_ZN;
        }

    case 123:  /* *addhi3_h8300 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return CC_NONE_0HIT;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  return CC_CLOBBER;
        }
      else
        {
	  return CC_SET_ZN;
        }

    case 10:  /* *movsi_h8sx */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CC_SET_ZN;
        }
      else if (((1 << which_alternative) & 0xe))
        {
	  return CC_SET_ZNV;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return CC_NONE_0HIT;
        }
      else
        {
	  return CC_SET_ZNV;
        }

    case 9:  /* *movsi_h8300hs */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CC_SET_ZN;
        }
      else if (which_alternative == 1)
        {
	  return CC_SET_ZNV;
        }
      else if (which_alternative == 2)
        {
	  return CC_CLOBBER;
        }
      else if (((1 << which_alternative) & 0x78))
        {
	  return CC_SET_ZNV;
        }
      else if (((1 << which_alternative) & 0x180))
        {
	  return CC_NONE_0HIT;
        }
      else
        {
	  return CC_SET_ZNV;
        }

    case 1:  /* *movqi_h8300hs */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CC_SET_ZN;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return CC_SET_ZNV;
        }
      else if (which_alternative == 3)
        {
	  return CC_CLOBBER;
        }
      else
        {
	  return CC_SET_ZNV;
        }

    case 100:  /* *movsf_h8300hs */
    case 7:  /* movstricthi */
    case 6:  /* *movhi_h8sx */
    case 5:  /* *movhi_h8300hs */
    case 4:  /* *movhi_h8300 */
    case 0:  /* *movqi_h8300 */
    case 3:  /* movstrictqi */
    case 11:  /* *movsf_h8sx */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CC_SET_ZN;
        }
      else
        {
	  return CC_SET_ZNV;
        }

    case 12:  /* movmd_internal_normal */
    case 13:  /* movmd_internal */
    case 14:  /* stpcpy_internal_normal */
    case 15:  /* stpcpy_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CC_NONE;
        }
      else
        {
	  return CC_CLOBBER;
        }

    case 127:  /* *addsi_h8300 */
    case 128:  /* *addsi_h8300hs */
      extract_constrain_insn_cached (insn);
      return 
#line 1259 "../.././gcc/config/h8300/h8300.md"
(compute_plussi_cc (operands));

    case 131:  /* *subhi3_h8300 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CC_SET_ZN;
        }
      else
        {
	  return CC_CLOBBER;
        }

    case 159:  /* *andqi3_2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CC_NONE_0HIT;
        }
      else if (which_alternative == 1)
        {
	  return CC_SET_ZNV;
        }
      else
        {
	  return CC_NONE_0HIT;
        }

    case 160:  /* andqi3_1 */
    case 167:  /* iorqi3_1 */
    case 170:  /* xorqi3_1 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CC_NONE_0HIT;
        }
      else
        {
	  return CC_SET_ZNV;
        }

    case 171:  /* *logicalhi3_sn */
    case 173:  /* *logicalhi3 */
      extract_constrain_insn_cached (insn);
      return 
#line 2028 "../.././gcc/config/h8300/h8300.md"
(compute_logical_op_cc (HImode, operands));

    case 172:  /* *logicalsi3_sn */
    case 174:  /* *logicalsi3 */
      extract_constrain_insn_cached (insn);
      return 
#line 2040 "../.././gcc/config/h8300/h8300.md"
(compute_logical_op_cc (SImode, operands));

    case 222:  /* *shiftqi */
    case 225:  /* *shifthi */
    case 228:  /* *shiftsi */
      extract_constrain_insn_cached (insn);
      return 
#line 3063 "../.././gcc/config/h8300/h8300.md"
(compute_a_shift_cc (insn, operands));

    case 244:  /* *cmpstz */
    case 247:  /* *cmpcondbset */
    case 249:  /* *cmpcondbclr */
    case 251:  /* *cmpcondbsetreg */
    case 253:  /* *cmpcondbclrreg */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CC_SET_ZNV;
        }
      else
        {
	  return CC_COMPARE;
        }

    case 260:  /* *extzv_8_8 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CC_SET_ZNV;
        }
      else
        {
	  return CC_CLOBBER;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 8:  /* *movsi_h8300 */
    case 99:  /* *movsf_h8300 */
    case 101:  /* *pushqi1_h8300 */
    case 102:  /* *pushqi1_h8300hs_hi */
    case 103:  /* *pushqi1_h8300hs_si */
    case 104:  /* *pushhi1_h8300hs_hi */
    case 105:  /* *pushhi1_h8300hs_si */
    case 110:  /* *tstsi_upper_bit */
    case 133:  /* *subsi3_h8300 */
    case 149:  /* udivhi3 */
    case 150:  /* divhi3 */
    case 151:  /* udivsi3 */
    case 152:  /* divsi3 */
    case 153:  /* udivmodqi4 */
    case 154:  /* divmodqi4 */
    case 155:  /* udivmodhi4 */
    case 156:  /* divmodhi4 */
    case 157:  /* bclrqi_msx */
    case 158:  /* bclrhi_msx */
    case 161:  /* *andorqi3 */
    case 162:  /* *andorhi3 */
    case 163:  /* *andorsi3 */
    case 164:  /* *andorsi3_shift_8 */
    case 165:  /* bsetqi_msx */
    case 166:  /* bsethi_msx */
    case 168:  /* bnotqi_msx */
    case 169:  /* bnothi_msx */
    case 178:  /* *negsf2_h8300 */
    case 179:  /* *negsf2_h8300hs */
    case 180:  /* *abssf2_h8300 */
    case 181:  /* *abssf2_h8300hs */
    case 183:  /* *one_cmplhi2_h8300 */
    case 185:  /* *one_cmplsi2_h8300 */
    case 198:  /* call */
    case 199:  /* call_value */
    case 205:  /* monitor_prologue */
    case 206:  /* *zero_extendqihi2_h8300 */
    case 208:  /* *zero_extendqisi2_h8300 */
    case 209:  /* *zero_extendqisi2_h8300hs */
    case 211:  /* *zero_extendhisi2_h8300 */
    case 213:  /* *extendqihi2_h8300 */
    case 215:  /* *extendqisi2_h8300 */
    case 216:  /* *extendqisi2_h8300hs */
    case 218:  /* *extendhisi2_h8300 */
    case 229:  /* rotlqi3_1 */
    case 230:  /* rotlhi3_1 */
    case 231:  /* rotlsi3_1 */
    case 232:  /* *h8300.md:3201 */
    case 233:  /* *h8300.md:3214 */
    case 234:  /* *extzv_1_r_h8300 */
    case 236:  /* *extzv_1_r_inv_h8300 */
    case 238:  /* *h8300.md:3345 */
    case 239:  /* *h8300.md:3416 */
    case 240:  /* *h8300.md:3427 */
    case 243:  /* *bstzhireg */
    case 255:  /* *insv_si_1_n */
    case 256:  /* *insv_si_1_n_lshiftrt */
    case 257:  /* *insv_si_1_n_lshiftrt_16 */
    case 258:  /* *insv_si_8_8 */
    case 259:  /* *insv_si_8_8_lshiftrt_8 */
    case 263:  /* *extzv_8_23 */
    case 264:  /* *twoshifts_l16_r1 */
    case 265:  /* *andsi3_ashift_n_lower */
    case 266:  /* *andsi3_lshiftrt_n_sb */
    case 267:  /* *andsi3_lshiftrt_9_sb */
    case 268:  /* *addsi3_upper */
    case 269:  /* *addsi3_lshiftrt_16_zexthi */
    case 270:  /* *addsi3_and_r_1 */
    case 271:  /* *addsi3_and_not_r_1 */
    case 272:  /* *ixorhi3_zext */
    case 273:  /* *ixorsi3_zext_qi */
    case 274:  /* *ixorsi3_zext_hi */
    case 275:  /* *ixorsi3_ashift_16 */
    case 276:  /* *ixorsi3_lshiftrt_16 */
    case 277:  /* *iorhi3_ashift_8 */
    case 278:  /* *iorhi3_lshiftrt_8 */
    case 279:  /* *iorhi3_two_qi */
    case 280:  /* *iorhi3_two_qi_mem */
    case 281:  /* *iorsi3_two_hi */
    case 282:  /* *iorsi3_two_qi_zext */
    case 283:  /* *iorsi3_e2f */
    case 284:  /* *iorsi3_two_qi_sext */
    case 285:  /* *iorsi3_w */
    case 287:  /* *iorsi3_and_ashift */
    case 288:  /* *iorsi3_and_lshiftrt */
    case 289:  /* *iorsi3_zero_extract */
    case 290:  /* *iorsi3_and_lshiftrt_n_sb */
    case 291:  /* *iorsi3_and_lshiftrt_9_sb */
    case 292:  /* *iorsi3_shift */
    case 293:  /* *iorsi2_and_1_lshiftrt_1 */
    case 294:  /* *iorsi3_ashift_16_ashift_24 */
    case 295:  /* *iorsi3_ashift_16_ashift_24_mem */
    case 296:  /* *addsi3_shift */
    case 297:  /* *ashiftsi_sextqi_7 */
    case 302:  /* *h8300.md:4426 */
    case 303:  /* *h8300.md:4446 */
      return CC_CLOBBER;

    case 118:  /* *cmpqi */
    case 119:  /* *cmphi_h8300_znvc */
    case 120:  /* *cmphi_h8300hs_znvc */
    case 121:  /* cmpsi */
      return CC_COMPARE;

    case 106:  /* *h8300.md:889 */
    case 107:  /* *h8300.md:900 */
    case 108:  /* *tst_extzv_1_n */
    case 109:  /* *h8300.md:936 */
    case 111:  /* *tstsi_variable_bit */
    case 112:  /* *tstsi_variable_bit_qi */
    case 122:  /* *addqi3 */
    case 125:  /* *addhi3_incdec */
    case 126:  /* *addhi3_h8sx */
    case 129:  /* *addsi3_incdec */
    case 130:  /* *subqi3 */
    case 132:  /* *subhi3_h8300hs */
    case 134:  /* *subsi3_h8300hs */
    case 135:  /* *mulqihi3_const */
    case 136:  /* *mulqihi3 */
    case 137:  /* *mulhisi3_const */
    case 138:  /* *mulhisi3 */
    case 139:  /* *umulqihi3_const */
    case 141:  /* *umulhisi3_const */
    case 143:  /* mulhi3 */
    case 144:  /* mulsi3 */
    case 145:  /* smulsi3_highpart */
    case 175:  /* *negqi2 */
    case 176:  /* *neghi2_h8300hs */
    case 177:  /* *negsi2_h8300hs */
      return CC_SET_ZN;

    case 2:  /* *movqi_h8sx */
    case 113:  /* *tstqi */
    case 114:  /* *tsthi */
    case 115:  /* *tsthi_upper */
    case 116:  /* *tstsi */
    case 117:  /* *tstsi_upper */
    case 182:  /* *one_cmplqi2 */
    case 184:  /* *one_cmplhi2_h8300hs */
    case 186:  /* *one_cmplsi2_h8300hs */
    case 207:  /* *zero_extendqihi2_h8300hs */
    case 210:  /* *zero_extendqisi2_h8sx */
    case 212:  /* *zero_extendhisi2_h8300hs */
    case 214:  /* *extendqihi2_h8300hs */
    case 217:  /* *extendqisi2_h8sx */
    case 219:  /* *extendhisi2_h8300hs */
    case 220:  /* *h8300.md:2920 */
    case 221:  /* *h8300.md:2930 */
    case 223:  /* *h8300.md:2976 */
    case 224:  /* *h8300.md:2986 */
    case 226:  /* *h8300.md:3032 */
    case 227:  /* *h8300.md:3042 */
    case 235:  /* *extzv_1_r_h8300hs */
    case 237:  /* *extzv_1_r_inv_h8300hs */
    case 261:  /* *extzv_8_16 */
    case 262:  /* *extzv_16_8 */
    case 286:  /* *iorsi3_ashift_31 */
    case 298:  /* *h8300.md:4386 */
    case 299:  /* *h8300.md:4397 */
    case 300:  /* *h8300.md:4406 */
    case 301:  /* *h8300.md:4416 */
      return CC_SET_ZNV;

    case 140:  /* *umulqihi3 */
    case 142:  /* *umulhisi3 */
    case 146:  /* umulsi3_highpart */
    case 147:  /* *h8300.md:1539 */
    case 148:  /* *h8300.md:1551 */
    case 241:  /* bfld */
    case 242:  /* bfst */
    case 245:  /* *bstz */
    case 246:  /* *bistz */
    case 248:  /* *condbset */
    case 250:  /* *condbclr */
    case 252:  /* *condbsetreg */
    case 254:  /* *condbclrreg */
      return CC_NONE_0HIT;

    default:
      return CC_NONE;

    }
}

enum attr_delay_slot
get_attr_delay_slot (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 191:  /* jump */
      extract_constrain_insn_cached (insn);
      if (
#line 2419 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
        {
	  return DELAY_SLOT_JUMP;
        }
      else
        {
	  return DELAY_SLOT_NONE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return DELAY_SLOT_NONE;

    }
}

enum attr_length_table
get_attr_length_table (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 126:  /* *addhi3_h8sx */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return LENGTH_TABLE_SHORT_IMMEDIATE;
        }
      else if (which_alternative == 2)
        {
	  return LENGTH_TABLE_NONE;
        }
      else
        {
	  return LENGTH_TABLE_ADDW;
        }

    case 10:  /* *movsi_h8sx */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return LENGTH_TABLE_NONE;
        }
      else if (which_alternative == 2)
        {
	  return LENGTH_TABLE_SHORT_IMMEDIATE;
        }
      else if (which_alternative == 3)
        {
	  return LENGTH_TABLE_MOVL;
        }
      else
        {
	  return LENGTH_TABLE_NONE;
        }

    case 7:  /* movstricthi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return LENGTH_TABLE_NONE;
        }
      else
        {
	  return LENGTH_TABLE_MOVW;
        }

    case 6:  /* *movhi_h8sx */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return LENGTH_TABLE_NONE;
        }
      else if (which_alternative == 2)
        {
	  return LENGTH_TABLE_MOV_IMM4;
        }
      else if (which_alternative == 3)
        {
	  return LENGTH_TABLE_SHORT_IMMEDIATE;
        }
      else
        {
	  return LENGTH_TABLE_MOVW;
        }

    case 2:  /* *movqi_h8sx */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return LENGTH_TABLE_MOV_IMM4;
        }
      else
        {
	  return LENGTH_TABLE_MOVB;
        }

    case 3:  /* movstrictqi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return LENGTH_TABLE_NONE;
        }
      else
        {
	  return LENGTH_TABLE_MOVB;
        }

    case 11:  /* *movsf_h8sx */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return LENGTH_TABLE_NONE;
        }
      else
        {
	  return LENGTH_TABLE_MOVL;
        }

    case 120:  /* *cmphi_h8300hs_znvc */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return LENGTH_TABLE_SHORT_IMMEDIATE;
        }
      else
        {
	  return LENGTH_TABLE_ADDW;
        }

    case 121:  /* cmpsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return LENGTH_TABLE_NONE;
        }
      else
        {
	  return LENGTH_TABLE_ADDL;
        }

    case 159:  /* *andqi3_2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return LENGTH_TABLE_NONE;
        }
      else if (which_alternative == 1)
        {
	  return LENGTH_TABLE_LOGICB;
        }
      else
        {
	  return LENGTH_TABLE_NONE;
        }

    case 167:  /* iorqi3_1 */
    case 170:  /* xorqi3_1 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return LENGTH_TABLE_NONE;
        }
      else
        {
	  return LENGTH_TABLE_LOGICB;
        }

    case 189:  /* *brabc */
    case 190:  /* *brabs */
      return LENGTH_TABLE_BITBRANCH;

    case 241:  /* bfld */
    case 242:  /* bfst */
      return LENGTH_TABLE_BITFIELD;

    case 175:  /* *negqi2 */
    case 176:  /* *neghi2_h8300hs */
    case 177:  /* *negsi2_h8300hs */
    case 182:  /* *one_cmplqi2 */
    case 184:  /* *one_cmplhi2_h8300hs */
    case 186:  /* *one_cmplsi2_h8300hs */
    case 220:  /* *h8300.md:2920 */
    case 223:  /* *h8300.md:2976 */
    case 226:  /* *h8300.md:3032 */
    case 245:  /* *bstz */
    case 246:  /* *bistz */
      return LENGTH_TABLE_UNARY;

    case 16:  /* *mova.md:20 */
    case 17:  /* *mova.md:30 */
    case 18:  /* *mova.md:40 */
    case 19:  /* *mova.md:50 */
    case 20:  /* *mova.md:60 */
    case 22:  /* *mova.md:78 */
    case 24:  /* *mova.md:98 */
    case 26:  /* *mova.md:119 */
    case 28:  /* *mova.md:139 */
    case 30:  /* *mova.md:159 */
    case 32:  /* *mova.md:180 */
    case 34:  /* *mova.md:200 */
    case 36:  /* *mova.md:220 */
    case 38:  /* *mova.md:241 */
    case 40:  /* *mova.md:261 */
    case 42:  /* *mova.md:281 */
    case 44:  /* *mova.md:302 */
    case 45:  /* *mova.md:313 */
    case 47:  /* *mova.md:331 */
    case 49:  /* *mova.md:351 */
    case 51:  /* *mova.md:372 */
    case 53:  /* *mova.md:392 */
    case 55:  /* *mova.md:412 */
    case 57:  /* *mova.md:433 */
    case 59:  /* *mova.md:453 */
    case 61:  /* *mova.md:473 */
    case 63:  /* *mova.md:494 */
    case 65:  /* *mova.md:514 */
    case 67:  /* *mova.md:534 */
    case 69:  /* *mova.md:555 */
    case 70:  /* *mova.md:566 */
    case 71:  /* *mova.md:576 */
    case 72:  /* *mova.md:586 */
    case 73:  /* *mova.md:596 */
    case 74:  /* *mova.md:606 */
    case 76:  /* *mova.md:624 */
    case 78:  /* *mova.md:644 */
    case 80:  /* *mova.md:665 */
    case 82:  /* *mova.md:685 */
    case 84:  /* *mova.md:705 */
    case 86:  /* *mova.md:726 */
    case 88:  /* *mova.md:746 */
    case 90:  /* *mova.md:766 */
    case 92:  /* *mova.md:787 */
    case 94:  /* *mova.md:807 */
    case 96:  /* *mova.md:827 */
    case 98:  /* *mova.md:848 */
      return LENGTH_TABLE_MOVA;

    case 21:  /* *mova.md:69 */
    case 23:  /* *mova.md:88 */
    case 25:  /* *mova.md:109 */
    case 27:  /* *mova.md:130 */
    case 29:  /* *mova.md:149 */
    case 31:  /* *mova.md:170 */
    case 33:  /* *mova.md:191 */
    case 35:  /* *mova.md:210 */
    case 37:  /* *mova.md:231 */
    case 39:  /* *mova.md:252 */
    case 41:  /* *mova.md:271 */
    case 43:  /* *mova.md:292 */
    case 46:  /* *mova.md:322 */
    case 48:  /* *mova.md:341 */
    case 50:  /* *mova.md:362 */
    case 52:  /* *mova.md:383 */
    case 54:  /* *mova.md:402 */
    case 56:  /* *mova.md:423 */
    case 58:  /* *mova.md:444 */
    case 60:  /* *mova.md:463 */
    case 62:  /* *mova.md:484 */
    case 64:  /* *mova.md:505 */
    case 66:  /* *mova.md:524 */
    case 68:  /* *mova.md:545 */
    case 75:  /* *mova.md:615 */
    case 77:  /* *mova.md:634 */
    case 79:  /* *mova.md:655 */
    case 81:  /* *mova.md:676 */
    case 83:  /* *mova.md:695 */
    case 85:  /* *mova.md:716 */
    case 87:  /* *mova.md:737 */
    case 89:  /* *mova.md:756 */
    case 91:  /* *mova.md:777 */
    case 93:  /* *mova.md:798 */
    case 95:  /* *mova.md:817 */
    case 97:  /* *mova.md:838 */
      return LENGTH_TABLE_MOVA_ZERO;

    case 248:  /* *condbset */
    case 250:  /* *condbclr */
    case 252:  /* *condbsetreg */
    case 254:  /* *condbclrreg */
      return LENGTH_TABLE_LOGICB;

    case 134:  /* *subsi3_h8300hs */
      return LENGTH_TABLE_ADDL;

    case 132:  /* *subhi3_h8300hs */
      return LENGTH_TABLE_ADDW;

    case 118:  /* *cmpqi */
    case 122:  /* *addqi3 */
    case 130:  /* *subqi3 */
      return LENGTH_TABLE_ADDB;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return LENGTH_TABLE_NONE;

    }
}

enum attr_type
get_attr_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 198:  /* call */
    case 199:  /* call_value */
      return TYPE_CALL;

    case 189:  /* *brabc */
    case 190:  /* *brabs */
      return TYPE_BITBRANCH;

    case 187:  /* branch_true */
    case 188:  /* branch_false */
    case 191:  /* jump */
      return TYPE_BRANCH;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return TYPE_ARITH;

    }
}

int
eligible_for_delay (rtx delay_insn ATTRIBUTE_UNUSED, int slot, rtx candidate_insn, int flags ATTRIBUTE_UNUSED)
{
  rtx insn;

  gcc_assert (slot < 1);

  if (!INSN_P (candidate_insn))
    return 0;

  insn = candidate_insn;
  switch (recog_memoized (insn))
    {
    case 204:  /* *return_1 */
    case 203:  /* return_h8sx */
    case 199:  /* call_value */
    case 198:  /* call */
    case 191:  /* jump */
    case 190:  /* *brabs */
    case 189:  /* *brabc */
    case 188:  /* branch_false */
    case 187:  /* branch_true */
    case 13:  /* movmd_internal */
    case 12:  /* movmd_internal_normal */
      return 0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (get_attr_can_delay (insn) == CAN_DELAY_YES)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      extract_constrain_insn_cached (insn);
      if (! ((unsigned) (
#line 156 "../.././gcc/config/h8300/h8300.md"
(get_attr_length (insn))) >= (unsigned) (2)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    }
}

int
const_num_delay_slots (rtx insn)
{
  switch (recog_memoized (insn))
    {
    default:
      return 1;
    }
}

EXPORTED_CONST int length_unit_log = 0;
