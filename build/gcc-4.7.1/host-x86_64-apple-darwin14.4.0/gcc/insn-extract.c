/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

#ifdef ENABLE_CHECKING
  memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
#endif

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 303:  /* *h8300.md:4446 */
    case 302:  /* *h8300.md:4426 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 301:  /* *h8300.md:4416 */
    case 300:  /* *h8300.md:4406 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 295:  /* *iorsi3_ashift_16_ashift_24_mem */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 293:  /* *iorsi2_and_1_lshiftrt_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 296:  /* *addsi3_shift */
    case 292:  /* *iorsi3_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 291:  /* *iorsi3_and_lshiftrt_9_sb */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 289:  /* *iorsi3_zero_extract */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 288:  /* *iorsi3_and_lshiftrt */
    case 287:  /* *iorsi3_and_ashift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 282:  /* *iorsi3_two_qi_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      break;

    case 284:  /* *iorsi3_two_qi_sext */
    case 280:  /* *iorhi3_two_qi_mem */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 276:  /* *ixorsi3_lshiftrt_16 */
    case 275:  /* *ixorsi3_ashift_16 */
    case 274:  /* *ixorsi3_zext_hi */
    case 273:  /* *ixorsi3_zext_qi */
    case 272:  /* *ixorhi3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 266:  /* *andsi3_lshiftrt_n_sb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 265:  /* *andsi3_ashift_n_lower */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 262:  /* *extzv_16_8 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 259:  /* *insv_si_8_8_lshiftrt_8 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 257:  /* *insv_si_1_n_lshiftrt_16 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 256:  /* *insv_si_1_n_lshiftrt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 254:  /* *condbclrreg */
    case 252:  /* *condbsetreg */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 2);
      recog_data.dup_num[0] = 3;
      break;

    case 253:  /* *cmpcondbclrreg */
    case 251:  /* *cmpcondbsetreg */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 2);
      recog_data.dup_num[0] = 4;
      break;

    case 250:  /* *condbclr */
    case 248:  /* *condbset */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 2);
      recog_data.dup_num[0] = 3;
      break;

    case 249:  /* *cmpcondbclr */
    case 247:  /* *cmpcondbset */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 2);
      recog_data.dup_num[0] = 4;
      break;

    case 246:  /* *bistz */
    case 245:  /* *bstz */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 2));
      break;

    case 244:  /* *cmpstz */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 2));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 242:  /* bfst */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 2));
      break;

    case 241:  /* bfld */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 240:  /* *h8300.md:3427 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 1));
      break;

    case 239:  /* *h8300.md:3416 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 1));
      break;

    case 255:  /* *insv_si_1_n */
    case 238:  /* *h8300.md:3345 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 2));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 237:  /* *extzv_1_r_inv_h8300hs */
    case 236:  /* *extzv_1_r_inv_h8300 */
    case 233:  /* *h8300.md:3214 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 235:  /* *extzv_1_r_h8300hs */
    case 234:  /* *extzv_1_r_h8300 */
    case 232:  /* *h8300.md:3201 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 228:  /* *shiftsi */
    case 225:  /* *shifthi */
    case 222:  /* *shiftqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 203:  /* return_h8sx */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      break;

    case 202:  /* stm_h8300sx */
    case 201:  /* ldm_h8300sx */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 205:  /* monitor_prologue */
    case 204:  /* *return_1 */
    case 200:  /* nop */
      break;

    case 194:  /* *tablejump_h8300hs_normal */
    case 193:  /* *tablejump_h8300hs_advanced */
    case 192:  /* *tablejump_h8300 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 190:  /* *brabs */
    case 189:  /* *brabc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      break;

    case 188:  /* branch_false */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 187:  /* branch_true */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 263:  /* *extzv_8_23 */
    case 261:  /* *extzv_8_16 */
    case 260:  /* *extzv_8_8 */
    case 219:  /* *extendhisi2_h8300hs */
    case 218:  /* *extendhisi2_h8300 */
    case 217:  /* *extendqisi2_h8sx */
    case 216:  /* *extendqisi2_h8300hs */
    case 215:  /* *extendqisi2_h8300 */
    case 214:  /* *extendqihi2_h8300hs */
    case 213:  /* *extendqihi2_h8300 */
    case 212:  /* *zero_extendhisi2_h8300hs */
    case 211:  /* *zero_extendhisi2_h8300 */
    case 210:  /* *zero_extendqisi2_h8sx */
    case 209:  /* *zero_extendqisi2_h8300hs */
    case 208:  /* *zero_extendqisi2_h8300 */
    case 207:  /* *zero_extendqihi2_h8300hs */
    case 206:  /* *zero_extendqihi2_h8300 */
    case 186:  /* *one_cmplsi2_h8300hs */
    case 185:  /* *one_cmplsi2_h8300 */
    case 184:  /* *one_cmplhi2_h8300hs */
    case 183:  /* *one_cmplhi2_h8300 */
    case 182:  /* *one_cmplqi2 */
    case 181:  /* *abssf2_h8300hs */
    case 180:  /* *abssf2_h8300 */
    case 179:  /* *negsf2_h8300hs */
    case 178:  /* *negsf2_h8300 */
    case 177:  /* *negsi2_h8300hs */
    case 176:  /* *neghi2_h8300hs */
    case 175:  /* *negqi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 227:  /* *h8300.md:3042 */
    case 226:  /* *h8300.md:3032 */
    case 224:  /* *h8300.md:2986 */
    case 223:  /* *h8300.md:2976 */
    case 221:  /* *h8300.md:2930 */
    case 220:  /* *h8300.md:2920 */
    case 174:  /* *logicalsi3 */
    case 173:  /* *logicalhi3 */
    case 172:  /* *logicalsi3_sn */
    case 171:  /* *logicalhi3_sn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 164:  /* *andorsi3_shift_8 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 163:  /* *andorsi3 */
    case 162:  /* *andorhi3 */
    case 161:  /* *andorqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 156:  /* divmodhi4 */
    case 155:  /* udivmodhi4 */
    case 154:  /* divmodqi4 */
    case 153:  /* udivmodqi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 148:  /* *h8300.md:1551 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 147:  /* *h8300.md:1539 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      break;

    case 146:  /* umulsi3_highpart */
    case 145:  /* smulsi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 294:  /* *iorsi3_ashift_16_ashift_24 */
    case 285:  /* *iorsi3_w */
    case 283:  /* *iorsi3_e2f */
    case 281:  /* *iorsi3_two_hi */
    case 279:  /* *iorhi3_two_qi */
    case 269:  /* *addsi3_lshiftrt_16_zexthi */
    case 142:  /* *umulhisi3 */
    case 140:  /* *umulqihi3 */
    case 138:  /* *mulhisi3 */
    case 136:  /* *mulqihi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 129:  /* *addsi3_incdec */
    case 125:  /* *addhi3_incdec */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 231:  /* rotlsi3_1 */
    case 230:  /* rotlhi3_1 */
    case 229:  /* rotlqi3_1 */
    case 199:  /* call_value */
    case 170:  /* xorqi3_1 */
    case 169:  /* bnothi_msx */
    case 168:  /* bnotqi_msx */
    case 167:  /* iorqi3_1 */
    case 166:  /* bsethi_msx */
    case 165:  /* bsetqi_msx */
    case 160:  /* andqi3_1 */
    case 159:  /* *andqi3_2 */
    case 158:  /* bclrhi_msx */
    case 157:  /* bclrqi_msx */
    case 152:  /* divsi3 */
    case 151:  /* udivsi3 */
    case 150:  /* divhi3 */
    case 149:  /* udivhi3 */
    case 144:  /* mulsi3 */
    case 143:  /* mulhi3 */
    case 134:  /* *subsi3_h8300hs */
    case 133:  /* *subsi3_h8300 */
    case 132:  /* *subhi3_h8300hs */
    case 131:  /* *subhi3_h8300 */
    case 130:  /* *subqi3 */
    case 128:  /* *addsi_h8300hs */
    case 127:  /* *addsi_h8300 */
    case 126:  /* *addhi3_h8sx */
    case 124:  /* *addhi3_h8300hs */
    case 123:  /* *addhi3_h8300 */
    case 122:  /* *addqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 121:  /* cmpsi */
    case 120:  /* *cmphi_h8300hs_znvc */
    case 119:  /* *cmphi_h8300_znvc */
    case 118:  /* *cmpqi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 117:  /* *tstsi_upper */
    case 115:  /* *tsthi_upper */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 191:  /* jump */
    case 116:  /* *tstsi */
    case 114:  /* *tsthi */
    case 113:  /* *tstqi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 112:  /* *tstsi_variable_bit_qi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 111:  /* *tstsi_variable_bit */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      break;

    case 110:  /* *tstsi_upper_bit */
    case 108:  /* *tst_extzv_1_n */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 109:  /* *h8300.md:936 */
    case 107:  /* *h8300.md:900 */
    case 106:  /* *h8300.md:889 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 197:  /* *indirect_jump_h8300hs_normal */
    case 196:  /* *indirect_jump_h8300hs_advanced */
    case 195:  /* *indirect_jump_h8300 */
    case 105:  /* *pushhi1_h8300hs_si */
    case 104:  /* *pushhi1_h8300hs_hi */
    case 103:  /* *pushqi1_h8300hs_si */
    case 102:  /* *pushqi1_h8300hs_hi */
    case 101:  /* *pushqi1_h8300 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 96:  /* *mova.md:827 */
    case 90:  /* *mova.md:766 */
    case 84:  /* *mova.md:705 */
    case 78:  /* *mova.md:644 */
    case 67:  /* *mova.md:534 */
    case 61:  /* *mova.md:473 */
    case 55:  /* *mova.md:412 */
    case 49:  /* *mova.md:351 */
    case 42:  /* *mova.md:281 */
    case 36:  /* *mova.md:220 */
    case 30:  /* *mova.md:159 */
    case 24:  /* *mova.md:98 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 95:  /* *mova.md:817 */
    case 89:  /* *mova.md:756 */
    case 83:  /* *mova.md:695 */
    case 77:  /* *mova.md:634 */
    case 66:  /* *mova.md:524 */
    case 60:  /* *mova.md:463 */
    case 54:  /* *mova.md:402 */
    case 48:  /* *mova.md:341 */
    case 41:  /* *mova.md:271 */
    case 35:  /* *mova.md:210 */
    case 29:  /* *mova.md:149 */
    case 23:  /* *mova.md:88 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 290:  /* *iorsi3_and_lshiftrt_n_sb */
    case 271:  /* *addsi3_and_not_r_1 */
    case 98:  /* *mova.md:848 */
    case 94:  /* *mova.md:807 */
    case 92:  /* *mova.md:787 */
    case 88:  /* *mova.md:746 */
    case 86:  /* *mova.md:726 */
    case 82:  /* *mova.md:685 */
    case 80:  /* *mova.md:665 */
    case 76:  /* *mova.md:624 */
    case 69:  /* *mova.md:555 */
    case 65:  /* *mova.md:514 */
    case 63:  /* *mova.md:494 */
    case 59:  /* *mova.md:453 */
    case 57:  /* *mova.md:433 */
    case 53:  /* *mova.md:392 */
    case 51:  /* *mova.md:372 */
    case 47:  /* *mova.md:331 */
    case 44:  /* *mova.md:302 */
    case 40:  /* *mova.md:261 */
    case 38:  /* *mova.md:241 */
    case 34:  /* *mova.md:200 */
    case 32:  /* *mova.md:180 */
    case 28:  /* *mova.md:139 */
    case 26:  /* *mova.md:119 */
    case 22:  /* *mova.md:78 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 299:  /* *h8300.md:4397 */
    case 298:  /* *h8300.md:4386 */
    case 297:  /* *ashiftsi_sextqi_7 */
    case 267:  /* *andsi3_lshiftrt_9_sb */
    case 264:  /* *twoshifts_l16_r1 */
    case 97:  /* *mova.md:838 */
    case 93:  /* *mova.md:798 */
    case 91:  /* *mova.md:777 */
    case 87:  /* *mova.md:737 */
    case 85:  /* *mova.md:716 */
    case 81:  /* *mova.md:676 */
    case 79:  /* *mova.md:655 */
    case 75:  /* *mova.md:615 */
    case 68:  /* *mova.md:545 */
    case 64:  /* *mova.md:505 */
    case 62:  /* *mova.md:484 */
    case 58:  /* *mova.md:444 */
    case 56:  /* *mova.md:423 */
    case 52:  /* *mova.md:383 */
    case 50:  /* *mova.md:362 */
    case 46:  /* *mova.md:322 */
    case 43:  /* *mova.md:292 */
    case 39:  /* *mova.md:252 */
    case 37:  /* *mova.md:231 */
    case 33:  /* *mova.md:191 */
    case 31:  /* *mova.md:170 */
    case 27:  /* *mova.md:130 */
    case 25:  /* *mova.md:109 */
    case 21:  /* *mova.md:69 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 286:  /* *iorsi3_ashift_31 */
    case 278:  /* *iorhi3_lshiftrt_8 */
    case 277:  /* *iorhi3_ashift_8 */
    case 270:  /* *addsi3_and_r_1 */
    case 268:  /* *addsi3_upper */
    case 141:  /* *umulhisi3_const */
    case 139:  /* *umulqihi3_const */
    case 137:  /* *mulhisi3_const */
    case 135:  /* *mulqihi3_const */
    case 74:  /* *mova.md:606 */
    case 73:  /* *mova.md:596 */
    case 72:  /* *mova.md:586 */
    case 71:  /* *mova.md:576 */
    case 70:  /* *mova.md:566 */
    case 45:  /* *mova.md:313 */
    case 20:  /* *mova.md:60 */
    case 19:  /* *mova.md:50 */
    case 18:  /* *mova.md:40 */
    case 17:  /* *mova.md:30 */
    case 16:  /* *mova.md:20 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 15:  /* stpcpy_internal */
    case 14:  /* stpcpy_internal_normal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 13:  /* movmd_internal */
    case 12:  /* movmd_internal_normal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 1));
      break;

    case 258:  /* *insv_si_8_8 */
    case 7:  /* movstricthi */
    case 3:  /* movstrictqi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 243:  /* *bstzhireg */
    case 198:  /* call */
    case 100:  /* *movsf_h8300hs */
    case 99:  /* *movsf_h8300 */
    case 11:  /* *movsf_h8sx */
    case 10:  /* *movsi_h8sx */
    case 9:  /* *movsi_h8300hs */
    case 8:  /* *movsi_h8300 */
    case 6:  /* *movhi_h8sx */
    case 5:  /* *movhi_h8300hs */
    case 4:  /* *movhi_h8300 */
    case 2:  /* *movqi_h8sx */
    case 1:  /* *movqi_h8300hs */
    case 0:  /* *movqi_h8300 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    }
}
