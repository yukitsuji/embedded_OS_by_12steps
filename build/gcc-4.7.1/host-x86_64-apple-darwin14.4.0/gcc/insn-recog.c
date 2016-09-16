/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "tm-constrs.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx gen_split_309 (rtx, rtx *);
extern rtx gen_split_310 (rtx, rtx *);
extern rtx gen_split_313 (rtx, rtx *);
extern rtx gen_split_314 (rtx, rtx *);
extern rtx gen_split_316 (rtx, rtx *);
extern rtx gen_split_317 (rtx, rtx *);
extern rtx gen_split_318 (rtx, rtx *);
extern rtx gen_split_321 (rtx, rtx *);
extern rtx gen_peephole2_322 (rtx, rtx *);
extern rtx gen_split_323 (rtx, rtx *);
extern rtx gen_split_325 (rtx, rtx *);
extern rtx gen_split_333 (rtx, rtx *);
extern rtx gen_split_337 (rtx, rtx *);
extern rtx gen_split_341 (rtx, rtx *);
extern rtx gen_split_370 (rtx, rtx *);
extern rtx gen_split_372 (rtx, rtx *);
extern rtx gen_split_373 (rtx, rtx *);
extern rtx gen_split_377 (rtx, rtx *);
extern rtx gen_split_388 (rtx, rtx *);
extern rtx gen_split_389 (rtx, rtx *);
extern rtx gen_split_398 (rtx, rtx *);
extern rtx gen_split_399 (rtx, rtx *);
extern rtx gen_split_400 (rtx, rtx *);
extern rtx gen_split_401 (rtx, rtx *);
extern rtx gen_split_402 (rtx, rtx *);
extern rtx gen_split_403 (rtx, rtx *);
extern rtx gen_split_404 (rtx, rtx *);
extern rtx gen_split_405 (rtx, rtx *);
extern rtx gen_split_406 (rtx, rtx *);
extern rtx gen_split_407 (rtx, rtx *);
extern rtx gen_split_408 (rtx, rtx *);
extern rtx gen_split_409 (rtx, rtx *);
extern rtx gen_split_410 (rtx, rtx *);
extern rtx gen_split_411 (rtx, rtx *);
extern rtx gen_split_412 (rtx, rtx *);
extern rtx gen_split_413 (rtx, rtx *);
extern rtx gen_split_414 (rtx, rtx *);
extern rtx gen_split_415 (rtx, rtx *);
extern rtx gen_split_416 (rtx, rtx *);
extern rtx gen_split_417 (rtx, rtx *);
extern rtx gen_split_418 (rtx, rtx *);
extern rtx gen_split_419 (rtx, rtx *);
extern rtx gen_split_420 (rtx, rtx *);
extern rtx gen_peephole2_421 (rtx, rtx *);
extern rtx gen_peephole2_422 (rtx, rtx *);
extern rtx gen_peephole2_423 (rtx, rtx *);
extern rtx gen_peephole2_424 (rtx, rtx *);
extern rtx gen_peephole2_425 (rtx, rtx *);
extern rtx gen_peephole2_426 (rtx, rtx *);
extern rtx gen_peephole2_427 (rtx, rtx *);
extern rtx gen_peephole2_428 (rtx, rtx *);
extern rtx gen_peephole2_429 (rtx, rtx *);
extern rtx gen_peephole2_430 (rtx, rtx *);
extern rtx gen_peephole2_431 (rtx, rtx *);
extern rtx gen_peephole2_432 (rtx, rtx *);
extern rtx gen_peephole2_433 (rtx, rtx *);
extern rtx gen_peephole2_434 (rtx, rtx *);
extern rtx gen_peephole2_435 (rtx, rtx *);
extern rtx gen_peephole2_436 (rtx, rtx *);
extern rtx gen_peephole2_437 (rtx, rtx *);
extern rtx gen_peephole2_438 (rtx, rtx *);
extern rtx gen_peephole2_439 (rtx, rtx *);
extern rtx gen_peephole2_440 (rtx, rtx *);
extern rtx gen_peephole2_441 (rtx, rtx *);
extern rtx gen_peephole2_442 (rtx, rtx *);
extern rtx gen_peephole2_443 (rtx, rtx *);
extern rtx gen_peephole2_444 (rtx, rtx *);
extern rtx gen_peephole2_445 (rtx, rtx *);
extern rtx gen_peephole2_446 (rtx, rtx *);
extern rtx gen_peephole2_447 (rtx, rtx *);
extern rtx gen_peephole2_448 (rtx, rtx *);
extern rtx gen_peephole2_449 (rtx, rtx *);
extern rtx gen_peephole2_450 (rtx, rtx *);
extern rtx gen_peephole2_451 (rtx, rtx *);
extern rtx gen_peephole2_452 (rtx, rtx *);
extern rtx gen_peephole2_453 (rtx, rtx *);
extern rtx gen_peephole2_454 (rtx, rtx *);
extern rtx gen_peephole2_455 (rtx, rtx *);
extern rtx gen_peephole2_456 (rtx, rtx *);
extern rtx gen_peephole2_457 (rtx, rtx *);
extern rtx gen_peephole2_458 (rtx, rtx *);
extern rtx gen_peephole2_459 (rtx, rtx *);
extern rtx gen_peephole2_460 (rtx, rtx *);
extern rtx gen_peephole2_461 (rtx, rtx *);
extern rtx gen_peephole2_462 (rtx, rtx *);
extern rtx gen_peephole2_463 (rtx, rtx *);
extern rtx gen_peephole2_464 (rtx, rtx *);
extern rtx gen_peephole2_465 (rtx, rtx *);
extern rtx gen_peephole2_466 (rtx, rtx *);
extern rtx gen_peephole2_467 (rtx, rtx *);
extern rtx gen_peephole2_468 (rtx, rtx *);
extern rtx gen_peephole2_469 (rtx, rtx *);
extern rtx gen_peephole2_470 (rtx, rtx *);
extern rtx gen_peephole2_471 (rtx, rtx *);
extern rtx gen_peephole2_472 (rtx, rtx *);
extern rtx gen_peephole2_473 (rtx, rtx *);
extern rtx gen_peephole2_474 (rtx, rtx *);
extern rtx gen_peephole2_475 (rtx, rtx *);
extern rtx gen_peephole2_476 (rtx, rtx *);
extern rtx gen_peephole2_477 (rtx, rtx *);
extern rtx gen_peephole2_478 (rtx, rtx *);
extern rtx gen_peephole2_479 (rtx, rtx *);



static int
recog_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L143;
    case MULT:
      goto L150;
    case AND:
      goto L165;
    case ASHIFT:
      goto L201;
    case UNSPEC:
      goto L3723;
    case MINUS:
      goto L1067;
    case UDIV:
      goto L1208;
    case DIV:
      goto L1214;
    case IOR:
      goto L1323;
    case NOT:
      goto L1445;
    default:
     break;
   }
  goto ret0;

 L143: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode)
    goto L3724;
  goto ret0;

 L3724: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L144;
    case MULT:
      goto L157;
    case AND:
      goto L174;
    case ASHIFT:
      goto L208;
    case REG:
    case SUBREG:
      goto L3728;
    default:
      goto ret0;
   }
 L3728: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1020;
    }
  goto ret0;

 L144: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (h8300_dst_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L145;
    }
  goto ret0;

 L145: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L146;
    }
  goto ret0;

 L146: ATTRIBUTE_UNUSED_LABEL
  if (
#line 64 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 20;  /* *mova.md:60 */
    }
  goto ret0;

 L157: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode)
    goto L3729;
  goto ret0;

 L3729: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ZERO_EXTEND)
    goto L158;
  if (h8300_dst_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L567;
    }
  goto ret0;

 L158: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (h8300_dst_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L159;
    }
  goto ret0;

 L159: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3731;
  goto ret0;

 L3731: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2L:
        goto L160;
      case 4L:
        goto L262;
      default:
        break;
      }
  goto ret0;

 L160: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L161;
    }
  goto ret0;

 L161: ATTRIBUTE_UNUSED_LABEL
  if (
#line 83 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 22;  /* *mova.md:78 */
    }
  goto ret0;

 L262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L263;
    }
  goto ret0;

 L263: ATTRIBUTE_UNUSED_LABEL
  if (
#line 205 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 34;  /* *mova.md:200 */
    }
  goto ret0;

 L567: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3733;
  goto ret0;

 L3733: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2L:
        goto L568;
      case 4L:
        goto L584;
      default:
        break;
      }
  goto ret0;

 L568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L569;
    }
  goto ret0;

 L569: ATTRIBUTE_UNUSED_LABEL
  if (
#line 571 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 70;  /* *mova.md:566 */
    }
  goto ret0;

 L584: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L585;
    }
  goto ret0;

 L585: ATTRIBUTE_UNUSED_LABEL
  if (
#line 591 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 72;  /* *mova.md:586 */
    }
  goto ret0;

 L174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode)
    goto L3735;
  goto ret0;

 L3735: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case MULT:
      goto L175;
    case ASHIFT:
      goto L226;
    default:
     break;
   }
  goto ret0;

 L175: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode)
    goto L3737;
  goto ret0;

 L3737: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L176;
 L3738: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L194;
    }
  goto ret0;

 L176: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (memory_operand (x5, QImode))
    {
      operands[1] = x5;
      goto L177;
    }
  goto L3738;

 L177: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L3739;
  x4 = XEXP (x3, 0);
  goto L3738;

 L3739: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 2L:
        goto L178;
      case 4L:
        goto L280;
      default:
        break;
      }
  x4 = XEXP (x3, 0);
  goto L3738;

 L178: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 510L)
    goto L179;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3738;

 L179: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L180;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3738;

 L180: ATTRIBUTE_UNUSED_LABEL
  if (
#line 104 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 24;  /* *mova.md:98 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3738;

 L280: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1020L)
    goto L281;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3738;

 L281: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L282;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3738;

 L282: ATTRIBUTE_UNUSED_LABEL
  if (
#line 226 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 36;  /* *mova.md:220 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3738;

 L194: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L3741;
  goto ret0;

 L3741: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 2L:
        goto L195;
      case 4L:
        goto L297;
      default:
        break;
      }
  goto ret0;

 L195: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 510L)
    goto L196;
  goto ret0;

 L196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L197;
    }
  goto ret0;

 L197: ATTRIBUTE_UNUSED_LABEL
  if (
#line 125 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 26;  /* *mova.md:119 */
    }
  goto ret0;

 L297: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1020L)
    goto L298;
  goto ret0;

 L298: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L299;
    }
  goto ret0;

 L299: ATTRIBUTE_UNUSED_LABEL
  if (
#line 247 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 38;  /* *mova.md:241 */
    }
  goto ret0;

 L226: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode)
    goto L3743;
  goto ret0;

 L3743: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L227;
 L3744: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L245;
    }
  goto ret0;

 L227: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (memory_operand (x5, QImode))
    {
      operands[1] = x5;
      goto L228;
    }
  goto L3744;

 L228: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L3745;
  x4 = XEXP (x3, 0);
  goto L3744;

 L3745: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 1L:
        goto L229;
      case 2L:
        goto L331;
      default:
        break;
      }
  x4 = XEXP (x3, 0);
  goto L3744;

 L229: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 510L)
    goto L230;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3744;

 L230: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L231;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3744;

 L231: ATTRIBUTE_UNUSED_LABEL
  if (
#line 165 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 30;  /* *mova.md:159 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3744;

 L331: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1020L)
    goto L332;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3744;

 L332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L333;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3744;

 L333: ATTRIBUTE_UNUSED_LABEL
  if (
#line 287 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 42;  /* *mova.md:281 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3744;

 L245: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L3747;
  goto ret0;

 L3747: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 1L:
        goto L246;
      case 2L:
        goto L348;
      default:
        break;
      }
  goto ret0;

 L246: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 510L)
    goto L247;
  goto ret0;

 L247: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L248;
    }
  goto ret0;

 L248: ATTRIBUTE_UNUSED_LABEL
  if (
#line 186 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 32;  /* *mova.md:180 */
    }
  goto ret0;

 L348: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1020L)
    goto L349;
  goto ret0;

 L349: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L350;
    }
  goto ret0;

 L350: ATTRIBUTE_UNUSED_LABEL
  if (
#line 308 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 44;  /* *mova.md:302 */
    }
  goto ret0;

 L208: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode)
    goto L3749;
  goto ret0;

 L3749: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ZERO_EXTEND)
    goto L209;
  if (h8300_dst_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L575;
    }
  goto ret0;

 L209: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (h8300_dst_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L210;
    }
  goto ret0;

 L210: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3751;
  goto ret0;

 L3751: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1L:
        goto L211;
      case 2L:
        goto L313;
      default:
        break;
      }
  goto ret0;

 L211: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L212;
    }
  goto ret0;

 L212: ATTRIBUTE_UNUSED_LABEL
  if (
#line 144 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 28;  /* *mova.md:139 */
    }
  goto ret0;

 L313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L314;
    }
  goto ret0;

 L314: ATTRIBUTE_UNUSED_LABEL
  if (
#line 266 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 40;  /* *mova.md:261 */
    }
  goto ret0;

 L575: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3753;
  goto ret0;

 L3753: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1L:
        goto L576;
      case 2L:
        goto L592;
      default:
        break;
      }
  goto ret0;

 L576: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L577;
    }
  goto ret0;

 L577: ATTRIBUTE_UNUSED_LABEL
  if (
#line 581 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 71;  /* *mova.md:576 */
    }
  goto ret0;

 L592: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L593;
    }
  goto ret0;

 L593: ATTRIBUTE_UNUSED_LABEL
  if (
#line 601 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 73;  /* *mova.md:596 */
    }
  goto ret0;

 L1020: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1021;
    }
  goto ret0;

 L1021: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1145 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 123;  /* *addhi3_h8300 */
    }
 L1027: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1188 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX))
    {
      return 124;  /* *addhi3_h8300hs */
    }
  goto ret0;

 L150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode)
    goto L3755;
  goto ret0;

 L3755: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L151;
    case SIGN_EXTEND:
      goto L1092;
    case REG:
    case SUBREG:
      goto L3757;
    default:
      goto ret0;
   }
 L3757: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1151;
    }
  goto ret0;

 L151: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode)
    goto L3758;
  goto ret0;

 L3758: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L152;
    }
 L3759: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1130;
    }
  goto ret0;

 L152: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3760;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3759;

 L3760: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 2L:
        goto L3762;
      case 4L:
        goto L3763;
      default:
        break;
      }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3759;

 L3762: ATTRIBUTE_UNUSED_LABEL
  if (
#line 73 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 21;  /* *mova.md:69 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3759;

 L3763: ATTRIBUTE_UNUSED_LABEL
  if (
#line 195 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 33;  /* *mova.md:191 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3759;

 L1130: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L1131;
  if (nibble_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1124;
    }
  goto ret0;

 L1131: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      return 140;  /* *umulqihi3 */
    }
  goto ret0;

 L1124: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1441 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 139;  /* *umulqihi3_const */
    }
  goto ret0;

 L1092: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1100;
    }
  goto ret0;

 L1100: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L1101;
  if (nibble_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1094;
    }
  goto ret0;

 L1101: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1102;
    }
  goto ret0;

 L1102: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1390 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 136;  /* *mulqihi3 */
    }
  goto ret0;

 L1094: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1381 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 135;  /* *mulqihi3_const */
    }
  goto ret0;

 L1151: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_nibble_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1152;
    }
  goto ret0;

 L1152: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1492 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 143;  /* mulhi3 */
    }
  goto ret0;

 L165: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode)
    goto L3764;
  goto ret0;

 L3764: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L166;
    case ASHIFT:
      goto L217;
    default:
     break;
   }
  goto ret0;

 L166: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode)
    goto L3766;
  goto ret0;

 L3766: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L167;
 L3767: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L186;
    }
  goto ret0;

 L167: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (memory_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L168;
    }
  goto L3767;

 L168: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3768;
  x3 = XEXP (x2, 0);
  goto L3767;

 L3768: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2L:
        goto L169;
      case 4L:
        goto L271;
      default:
        break;
      }
  x3 = XEXP (x2, 0);
  goto L3767;

 L169: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 510L
      && 
#line 93 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 23;  /* *mova.md:88 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3767;

 L271: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1020L
      && 
#line 215 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 35;  /* *mova.md:210 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3767;

 L186: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3770;
  goto ret0;

 L3770: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2L:
        goto L187;
      case 4L:
        goto L289;
      default:
        break;
      }
  goto ret0;

 L187: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 510L
      && 
#line 114 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 25;  /* *mova.md:109 */
    }
  goto ret0;

 L289: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1020L
      && 
#line 236 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 37;  /* *mova.md:231 */
    }
  goto ret0;

 L217: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode)
    goto L3772;
  goto ret0;

 L3772: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L218;
 L3773: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L237;
    }
  goto ret0;

 L218: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (memory_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L219;
    }
  goto L3773;

 L219: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3774;
  x3 = XEXP (x2, 0);
  goto L3773;

 L3774: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1L:
        goto L220;
      case 2L:
        goto L322;
      default:
        break;
      }
  x3 = XEXP (x2, 0);
  goto L3773;

 L220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 510L
      && 
#line 154 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 29;  /* *mova.md:149 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3773;

 L322: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1020L
      && 
#line 276 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 41;  /* *mova.md:271 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3773;

 L237: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3776;
  goto ret0;

 L3776: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1L:
        goto L238;
      case 2L:
        goto L340;
      default:
        break;
      }
  goto ret0;

 L238: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 510L
      && 
#line 175 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 31;  /* *mova.md:170 */
    }
  goto ret0;

 L340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1020L
      && 
#line 297 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 43;  /* *mova.md:292 */
    }
  goto ret0;

 L201: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L202;
  goto ret0;

 L202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (h8300_dst_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L203;
    }
  goto ret0;

 L203: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3778;
  goto ret0;

 L3778: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 1L:
        goto L3780;
      case 2L:
        goto L3781;
      default:
        break;
      }
  goto ret0;

 L3780: ATTRIBUTE_UNUSED_LABEL
  if (
#line 134 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 27;  /* *mova.md:130 */
    }
  goto ret0;

 L3781: ATTRIBUTE_UNUSED_LABEL
  if (
#line 256 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 39;  /* *mova.md:252 */
    }
  goto ret0;

 L3723: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 0)
    goto L1031;
  goto ret0;

 L1031: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1032;
    }
  goto ret0;

 L1032: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (incdec_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1033;
    }
  goto ret0;

 L1033: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1203 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 125;  /* *addhi3_incdec */
    }
  goto ret0;

 L1067: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1068;
    }
  goto ret0;

 L1068: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1069;
    }
  goto ret0;

 L1069: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1312 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 131;  /* *subhi3_h8300 */
    }
  goto ret0;

 L1208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1209;
    }
  goto ret0;

 L1209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_nibble_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1210;
    }
  goto ret0;

 L1210: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1573 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 149;  /* udivhi3 */
    }
  goto ret0;

 L1214: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1215;
    }
  goto ret0;

 L1215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_nibble_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1216;
    }
  goto ret0;

 L1216: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1582 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 150;  /* divhi3 */
    }
  goto ret0;

 L1323: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == AND)
    goto L1324;
  goto ret0;

 L1324: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1325;
    }
  goto ret0;

 L1325: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (single_one_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L1326;
    }
  goto ret0;

 L1326: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      return 162;  /* *andorhi3 */
    }
  goto ret0;

 L1445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1446;
    }
  goto ret0;

 L1446: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2191 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 183;  /* *one_cmplhi2_h8300 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_2 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L355;
    case MULT:
      goto L368;
    case AND:
      goto L385;
    case ASHIFT:
      goto L419;
    case REG:
    case SUBREG:
      goto L3803;
    default:
      goto ret0;
   }
 L3803: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1044;
    }
  goto ret0;

 L355: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case QImode:
      goto L3804;
    case HImode:
      goto L3805;
    default:
      break;
    }
  goto ret0;

 L3804: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L356;
    }
  goto ret0;

 L356: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L357;
    }
  goto ret0;

 L357: ATTRIBUTE_UNUSED_LABEL
  if (
#line 317 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 45;  /* *mova.md:313 */
    }
  goto ret0;

 L3805: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L599;
    }
  goto ret0;

 L599: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L600;
    }
  goto ret0;

 L600: ATTRIBUTE_UNUSED_LABEL
  if (
#line 610 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 74;  /* *mova.md:606 */
    }
  goto ret0;

 L368: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L3806;
  goto ret0;

 L3806: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L369;
    case SIGN_EXTEND:
      goto L1196;
    default:
     break;
   }
  goto ret0;

 L369: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case QImode:
      goto L3808;
    case HImode:
      goto L3809;
    default:
      break;
    }
  goto ret0;

 L3808: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L370;
    }
  goto ret0;

 L370: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3810;
  goto ret0;

 L3810: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2L:
        goto L371;
      case 4L:
        goto L473;
      default:
        break;
      }
  goto ret0;

 L371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L372;
    }
  goto ret0;

 L372: ATTRIBUTE_UNUSED_LABEL
  if (
#line 336 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 47;  /* *mova.md:331 */
    }
  goto ret0;

 L473: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L474;
    }
  goto ret0;

 L474: ATTRIBUTE_UNUSED_LABEL
  if (
#line 458 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 59;  /* *mova.md:453 */
    }
  goto ret0;

 L3809: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L613;
    }
  goto ret0;

 L613: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3812;
  goto ret0;

 L3812: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2L:
        goto L614;
      case 4L:
        goto L716;
      default:
        break;
      }
  goto ret0;

 L614: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L615;
    }
  goto ret0;

 L615: ATTRIBUTE_UNUSED_LABEL
  if (
#line 629 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 76;  /* *mova.md:624 */
    }
  goto ret0;

 L716: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L717;
    }
  goto ret0;

 L717: ATTRIBUTE_UNUSED_LABEL
  if (
#line 751 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 88;  /* *mova.md:746 */
    }
  goto ret0;

 L1196: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == MEM)
    goto L1197;
  goto ret0;

 L1197: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == POST_INC)
    goto L1198;
  goto ret0;

 L1198: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L1199;
    }
  goto ret0;

 L1199: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L1200;
  goto ret0;

 L1200: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == MEM)
    goto L1201;
  goto ret0;

 L1201: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == POST_INC)
    goto L1202;
  goto ret0;

 L1202: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L1203;
    }
  goto ret0;

 L1203: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1204;
    }
  goto ret0;

 L1204: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1559 "../.././gcc/config/h8300/h8300.md"
(TARGET_MAC))
    {
      return 148;  /* *h8300.md:1551 */
    }
  goto ret0;

 L385: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L3814;
  goto ret0;

 L3814: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case MULT:
      goto L386;
    case ASHIFT:
      goto L437;
    default:
     break;
   }
  goto ret0;

 L386: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L3816;
  goto ret0;

 L3816: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L387;
 L3817: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L405;
    }
  goto ret0;

 L387: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  switch (GET_MODE (x5))
    {
    case QImode:
      goto L3818;
    case HImode:
      goto L3819;
    default:
      break;
    }
  goto L3817;

 L3818: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x5, QImode))
    {
      operands[1] = x5;
      goto L388;
    }
  goto L3817;

 L388: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L3820;
  x4 = XEXP (x3, 0);
  goto L3817;

 L3820: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 2L:
        goto L389;
      case 4L:
        goto L491;
      default:
        break;
      }
  x4 = XEXP (x3, 0);
  goto L3817;

 L389: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 510L)
    goto L390;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3817;

 L390: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L391;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3817;

 L391: ATTRIBUTE_UNUSED_LABEL
  if (
#line 357 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 49;  /* *mova.md:351 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3817;

 L491: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1020L)
    goto L492;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3817;

 L492: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L493;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3817;

 L493: ATTRIBUTE_UNUSED_LABEL
  if (
#line 479 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 61;  /* *mova.md:473 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3817;

 L3819: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x5, HImode))
    {
      operands[1] = x5;
      goto L631;
    }
  goto L3817;

 L631: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L3822;
  x4 = XEXP (x3, 0);
  goto L3817;

 L3822: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 2L:
        goto L632;
      case 4L:
        goto L734;
      default:
        break;
      }
  x4 = XEXP (x3, 0);
  goto L3817;

 L632: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 131070L)
    goto L633;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3817;

 L633: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L634;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3817;

 L634: ATTRIBUTE_UNUSED_LABEL
  if (
#line 650 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 78;  /* *mova.md:644 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3817;

 L734: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 262140L)
    goto L735;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3817;

 L735: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L736;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3817;

 L736: ATTRIBUTE_UNUSED_LABEL
  if (
#line 772 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 90;  /* *mova.md:766 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3817;

 L405: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L3824;
  goto ret0;

 L3824: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 2L:
        goto L406;
      case 4L:
        goto L508;
      default:
        break;
      }
  goto ret0;

 L406: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3826;
  goto ret0;

 L3826: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 510L:
        goto L407;
      case 131070L:
        goto L650;
      default:
        break;
      }
  goto ret0;

 L407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L408;
    }
  goto ret0;

 L408: ATTRIBUTE_UNUSED_LABEL
  if (
#line 378 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 51;  /* *mova.md:372 */
    }
  goto ret0;

 L650: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L651;
    }
  goto ret0;

 L651: ATTRIBUTE_UNUSED_LABEL
  if (
#line 671 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 80;  /* *mova.md:665 */
    }
  goto ret0;

 L508: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3828;
  goto ret0;

 L3828: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1020L:
        goto L509;
      case 262140L:
        goto L752;
      default:
        break;
      }
  goto ret0;

 L509: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L510;
    }
  goto ret0;

 L510: ATTRIBUTE_UNUSED_LABEL
  if (
#line 500 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 63;  /* *mova.md:494 */
    }
  goto ret0;

 L752: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L753;
    }
  goto ret0;

 L753: ATTRIBUTE_UNUSED_LABEL
  if (
#line 793 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 92;  /* *mova.md:787 */
    }
  goto ret0;

 L437: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L3830;
  goto ret0;

 L3830: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L438;
 L3831: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L456;
    }
  goto ret0;

 L438: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  switch (GET_MODE (x5))
    {
    case QImode:
      goto L3832;
    case HImode:
      goto L3833;
    default:
      break;
    }
  goto L3831;

 L3832: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x5, QImode))
    {
      operands[1] = x5;
      goto L439;
    }
  goto L3831;

 L439: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L3834;
  x4 = XEXP (x3, 0);
  goto L3831;

 L3834: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 1L:
        goto L440;
      case 2L:
        goto L542;
      default:
        break;
      }
  x4 = XEXP (x3, 0);
  goto L3831;

 L440: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 510L)
    goto L441;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3831;

 L441: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L442;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3831;

 L442: ATTRIBUTE_UNUSED_LABEL
  if (
#line 418 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 55;  /* *mova.md:412 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3831;

 L542: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1020L)
    goto L543;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3831;

 L543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L544;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3831;

 L544: ATTRIBUTE_UNUSED_LABEL
  if (
#line 540 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 67;  /* *mova.md:534 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3831;

 L3833: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x5, HImode))
    {
      operands[1] = x5;
      goto L682;
    }
  goto L3831;

 L682: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L3836;
  x4 = XEXP (x3, 0);
  goto L3831;

 L3836: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 1L:
        goto L683;
      case 2L:
        goto L785;
      default:
        break;
      }
  x4 = XEXP (x3, 0);
  goto L3831;

 L683: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 131070L)
    goto L684;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3831;

 L684: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L685;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3831;

 L685: ATTRIBUTE_UNUSED_LABEL
  if (
#line 711 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 84;  /* *mova.md:705 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3831;

 L785: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 262140L)
    goto L786;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3831;

 L786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L787;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3831;

 L787: ATTRIBUTE_UNUSED_LABEL
  if (
#line 833 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 96;  /* *mova.md:827 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3831;

 L456: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L3838;
  goto ret0;

 L3838: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 1L:
        goto L457;
      case 2L:
        goto L559;
      default:
        break;
      }
  goto ret0;

 L457: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3840;
  goto ret0;

 L3840: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 510L:
        goto L458;
      case 131070L:
        goto L701;
      default:
        break;
      }
  goto ret0;

 L458: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L459;
    }
  goto ret0;

 L459: ATTRIBUTE_UNUSED_LABEL
  if (
#line 439 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 57;  /* *mova.md:433 */
    }
  goto ret0;

 L701: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L702;
    }
  goto ret0;

 L702: ATTRIBUTE_UNUSED_LABEL
  if (
#line 732 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 86;  /* *mova.md:726 */
    }
  goto ret0;

 L559: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3842;
  goto ret0;

 L3842: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1020L:
        goto L560;
      case 262140L:
        goto L803;
      default:
        break;
      }
  goto ret0;

 L560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L561;
    }
  goto ret0;

 L561: ATTRIBUTE_UNUSED_LABEL
  if (
#line 561 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 69;  /* *mova.md:555 */
    }
  goto ret0;

 L803: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L804;
    }
  goto ret0;

 L804: ATTRIBUTE_UNUSED_LABEL
  if (
#line 854 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 98;  /* *mova.md:848 */
    }
  goto ret0;

 L419: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L420;
  goto ret0;

 L420: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case QImode:
      goto L3844;
    case HImode:
      goto L3845;
    default:
      break;
    }
  goto ret0;

 L3844: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L421;
    }
  goto ret0;

 L421: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3846;
  goto ret0;

 L3846: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1L:
        goto L422;
      case 2L:
        goto L524;
      default:
        break;
      }
  goto ret0;

 L422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L423;
    }
  goto ret0;

 L423: ATTRIBUTE_UNUSED_LABEL
  if (
#line 397 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 53;  /* *mova.md:392 */
    }
  goto ret0;

 L524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L525;
    }
  goto ret0;

 L525: ATTRIBUTE_UNUSED_LABEL
  if (
#line 519 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 65;  /* *mova.md:514 */
    }
  goto ret0;

 L3845: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L664;
    }
  goto ret0;

 L664: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3848;
  goto ret0;

 L3848: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1L:
        goto L665;
      case 2L:
        goto L767;
      default:
        break;
      }
  goto ret0;

 L665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L666;
    }
  goto ret0;

 L666: ATTRIBUTE_UNUSED_LABEL
  if (
#line 690 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 82;  /* *mova.md:685 */
    }
  goto ret0;

 L767: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L768;
    }
  goto ret0;

 L768: ATTRIBUTE_UNUSED_LABEL
  if (
#line 812 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 94;  /* *mova.md:807 */
    }
  goto ret0;

 L1044: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1045;
    }
  goto ret0;

 L1045: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1243 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 127;  /* *addsi_h8300 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_3 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L354;
    case MULT:
      goto L361;
    case AND:
      goto L376;
    case ASHIFT:
      goto L412;
    case UNSPEC:
      goto L3798;
    case MINUS:
      goto L1079;
    case TRUNCATE:
      goto L1162;
    case UDIV:
      goto L1220;
    case DIV:
      goto L1226;
    case IOR:
      goto L1330;
    case NOT:
      goto L1455;
    default:
     break;
   }
  goto ret0;

 L354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3799;
  goto ret0;

 L3799: ATTRIBUTE_UNUSED_LABEL
  return recog_2 (x0, insn, pnum_clobbers);

 L361: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3850;
  goto ret0;

 L3850: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L362;
    case SIGN_EXTEND:
      goto L1107;
    case REG:
    case SUBREG:
      goto L3852;
    default:
      goto ret0;
   }
 L3852: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1157;
    }
  goto ret0;

 L362: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case QImode:
      goto L3853;
    case HImode:
      goto L3854;
    default:
      break;
    }
  goto ret0;

 L3853: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L363;
    }
  goto ret0;

 L363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3856;
  goto ret0;

 L3856: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 2L:
        goto L3858;
      case 4L:
        goto L3859;
      default:
        break;
      }
  goto ret0;

 L3858: ATTRIBUTE_UNUSED_LABEL
  if (
#line 326 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 46;  /* *mova.md:322 */
    }
  goto ret0;

 L3859: ATTRIBUTE_UNUSED_LABEL
  if (
#line 448 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 58;  /* *mova.md:444 */
    }
  goto ret0;

 L3854: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L606;
    }
 L3855: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1144;
    }
  goto ret0;

 L606: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3860;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3855;

 L3860: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 2L:
        goto L3862;
      case 4L:
        goto L3863;
      default:
        break;
      }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3855;

 L3862: ATTRIBUTE_UNUSED_LABEL
  if (
#line 619 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 75;  /* *mova.md:615 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3855;

 L3863: ATTRIBUTE_UNUSED_LABEL
  if (
#line 741 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 87;  /* *mova.md:737 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3855;

 L1144: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L1145;
  if (nibble_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1138;
    }
  goto ret0;

 L1145: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1146;
    }
  goto ret0;

 L1146: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1480 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 142;  /* *umulhisi3 */
    }
  goto ret0;

 L1138: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1471 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 141;  /* *umulhisi3_const */
    }
  goto ret0;

 L1107: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode)
    goto L3865;
  goto ret0;

 L3865: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == MEM)
    goto L1184;
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1115;
    }
  goto ret0;

 L1184: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == POST_INC)
    goto L1185;
  goto ret0;

 L1185: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1186;
    }
  goto ret0;

 L1186: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L1187;
  goto ret0;

 L1187: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == MEM)
    goto L1188;
  goto ret0;

 L1188: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == POST_INC)
    goto L1189;
  goto ret0;

 L1189: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1190;
    }
  goto ret0;

 L1190: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1546 "../.././gcc/config/h8300/h8300.md"
(TARGET_MAC))
    {
      return 147;  /* *h8300.md:1539 */
    }
  goto ret0;

 L1115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L1116;
  if (nibble_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1109;
    }
  goto ret0;

 L1116: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1117;
    }
  goto ret0;

 L1117: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1420 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 138;  /* *mulhisi3 */
    }
  goto ret0;

 L1109: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1411 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 137;  /* *mulhisi3_const */
    }
  goto ret0;

 L1157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_nibble_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1158;
    }
  goto ret0;

 L1158: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1501 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 144;  /* mulsi3 */
    }
  goto ret0;

 L376: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3866;
  goto ret0;

 L3866: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L377;
    case ASHIFT:
      goto L428;
    default:
     break;
   }
  goto ret0;

 L377: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L3868;
  goto ret0;

 L3868: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L378;
 L3869: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L397;
    }
  goto ret0;

 L378: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case QImode:
      goto L3870;
    case HImode:
      goto L3871;
    default:
      break;
    }
  goto L3869;

 L3870: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L379;
    }
  goto L3869;

 L379: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3872;
  x3 = XEXP (x2, 0);
  goto L3869;

 L3872: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2L:
        goto L380;
      case 4L:
        goto L482;
      default:
        break;
      }
  x3 = XEXP (x2, 0);
  goto L3869;

 L380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 510L
      && 
#line 346 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 48;  /* *mova.md:341 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3869;

 L482: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1020L
      && 
#line 468 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 60;  /* *mova.md:463 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3869;

 L3871: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L622;
    }
  goto L3869;

 L622: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3874;
  x3 = XEXP (x2, 0);
  goto L3869;

 L3874: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2L:
        goto L623;
      case 4L:
        goto L725;
      default:
        break;
      }
  x3 = XEXP (x2, 0);
  goto L3869;

 L623: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 131070L
      && 
#line 639 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 77;  /* *mova.md:634 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3869;

 L725: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 262140L
      && 
#line 761 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 89;  /* *mova.md:756 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3869;

 L397: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3876;
  goto ret0;

 L3876: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2L:
        goto L398;
      case 4L:
        goto L500;
      default:
        break;
      }
  goto ret0;

 L398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3878;
  goto ret0;

 L3878: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 510L:
        goto L3880;
      case 131070L:
        goto L3881;
      default:
        break;
      }
  goto ret0;

 L3880: ATTRIBUTE_UNUSED_LABEL
  if (
#line 367 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 50;  /* *mova.md:362 */
    }
  goto ret0;

 L3881: ATTRIBUTE_UNUSED_LABEL
  if (
#line 660 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 79;  /* *mova.md:655 */
    }
  goto ret0;

 L500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3882;
  goto ret0;

 L3882: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 1020L:
        goto L3884;
      case 262140L:
        goto L3885;
      default:
        break;
      }
  goto ret0;

 L3884: ATTRIBUTE_UNUSED_LABEL
  if (
#line 489 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 62;  /* *mova.md:484 */
    }
  goto ret0;

 L3885: ATTRIBUTE_UNUSED_LABEL
  if (
#line 782 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 91;  /* *mova.md:777 */
    }
  goto ret0;

 L428: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L3886;
  goto ret0;

 L3886: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L429;
 L3887: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L448;
    }
  goto ret0;

 L429: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case QImode:
      goto L3888;
    case HImode:
      goto L3889;
    default:
      break;
    }
  goto L3887;

 L3888: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L430;
    }
  goto L3887;

 L430: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3890;
  x3 = XEXP (x2, 0);
  goto L3887;

 L3890: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1L:
        goto L431;
      case 2L:
        goto L533;
      default:
        break;
      }
  x3 = XEXP (x2, 0);
  goto L3887;

 L431: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 510L
      && 
#line 407 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 54;  /* *mova.md:402 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3887;

 L533: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1020L
      && 
#line 529 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 66;  /* *mova.md:524 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3887;

 L3889: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L673;
    }
  goto L3887;

 L673: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3892;
  x3 = XEXP (x2, 0);
  goto L3887;

 L3892: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1L:
        goto L674;
      case 2L:
        goto L776;
      default:
        break;
      }
  x3 = XEXP (x2, 0);
  goto L3887;

 L674: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 131070L
      && 
#line 700 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 83;  /* *mova.md:695 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3887;

 L776: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 262140L
      && 
#line 822 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 95;  /* *mova.md:817 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3887;

 L448: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3894;
  goto ret0;

 L3894: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1L:
        goto L449;
      case 2L:
        goto L551;
      default:
        break;
      }
  goto ret0;

 L449: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3896;
  goto ret0;

 L3896: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 510L:
        goto L3898;
      case 131070L:
        goto L3899;
      default:
        break;
      }
  goto ret0;

 L3898: ATTRIBUTE_UNUSED_LABEL
  if (
#line 428 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 56;  /* *mova.md:423 */
    }
  goto ret0;

 L3899: ATTRIBUTE_UNUSED_LABEL
  if (
#line 721 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 85;  /* *mova.md:716 */
    }
  goto ret0;

 L551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3900;
  goto ret0;

 L3900: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 1020L:
        goto L3902;
      case 262140L:
        goto L3903;
      default:
        break;
      }
  goto ret0;

 L3902: ATTRIBUTE_UNUSED_LABEL
  if (
#line 550 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 68;  /* *mova.md:545 */
    }
  goto ret0;

 L3903: ATTRIBUTE_UNUSED_LABEL
  if (
#line 843 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 97;  /* *mova.md:838 */
    }
  goto ret0;

 L412: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L413;
  goto ret0;

 L413: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case QImode:
      goto L3904;
    case HImode:
      goto L3905;
    default:
      break;
    }
  goto ret0;

 L3904: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L414;
    }
  goto ret0;

 L414: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3906;
  goto ret0;

 L3906: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 1L:
        goto L3908;
      case 2L:
        goto L3909;
      default:
        break;
      }
  goto ret0;

 L3908: ATTRIBUTE_UNUSED_LABEL
  if (
#line 387 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 52;  /* *mova.md:383 */
    }
  goto ret0;

 L3909: ATTRIBUTE_UNUSED_LABEL
  if (
#line 509 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 64;  /* *mova.md:505 */
    }
  goto ret0;

 L3905: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L657;
    }
  goto ret0;

 L657: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3910;
  goto ret0;

 L3910: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 1L:
        goto L3912;
      case 2L:
        goto L3913;
      default:
        break;
      }
  goto ret0;

 L3912: ATTRIBUTE_UNUSED_LABEL
  if (
#line 680 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 81;  /* *mova.md:676 */
    }
  goto ret0;

 L3913: ATTRIBUTE_UNUSED_LABEL
  if (
#line 802 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 93;  /* *mova.md:798 */
    }
  goto ret0;

 L3798: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 0)
    goto L1055;
  goto ret0;

 L1055: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1056;
    }
  goto ret0;

 L1056: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (incdec_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1057;
    }
  goto ret0;

 L1057: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1266 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 129;  /* *addsi3_incdec */
    }
  goto ret0;

 L1079: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1080;
    }
  goto ret0;

 L1080: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1081;
    }
  goto ret0;

 L1081: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1344 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 133;  /* *subsi3_h8300 */
    }
  goto ret0;

 L1162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3914;
  goto ret0;

 L3914: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case LSHIFTRT:
      goto L1163;
    case ASHIFTRT:
      goto L1173;
    default:
     break;
   }
  goto ret0;

 L1163: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L1164;
  goto ret0;

 L1164: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L1165;
  goto ret0;

 L1165: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1166;
    }
  goto ret0;

 L1166: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L1167;
  goto ret0;

 L1167: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (reg_or_nibble_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1168;
    }
  goto ret0;

 L1168: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 1514 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SXMUL))
    {
      return 145;  /* smulsi3_highpart */
    }
  goto ret0;

 L1173: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L1174;
  goto ret0;

 L1174: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L1175;
  goto ret0;

 L1175: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1176;
    }
  goto ret0;

 L1176: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L1177;
  goto ret0;

 L1177: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (reg_or_nibble_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1178;
    }
  goto ret0;

 L1178: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 1527 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 146;  /* umulsi3_highpart */
    }
  goto ret0;

 L1220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1221;
    }
  goto ret0;

 L1221: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_nibble_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1222;
    }
  goto ret0;

 L1222: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1591 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 151;  /* udivsi3 */
    }
  goto ret0;

 L1226: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1227;
    }
  goto ret0;

 L1227: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_nibble_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1228;
    }
  goto ret0;

 L1228: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1600 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 152;  /* divsi3 */
    }
  goto ret0;

 L1330: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L1331;
  goto ret0;

 L1331: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L3917;
  goto ret0;

 L3917: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ASHIFT)
    goto L1340;
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1332;
    }
  goto ret0;

 L1340: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1341;
    }
  goto ret0;

 L1341: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1342;
  goto ret0;

 L1342: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 65280L)
    goto L1343;
  goto ret0;

 L1343: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 164;  /* *andorsi3_shift_8 */
    }
  goto ret0;

 L1332: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (single_one_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1333;
    }
  goto ret0;

 L1333: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1334;
    }
  goto ret0;

 L1334: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1801 "../.././gcc/config/h8300/h8300.md"
((INTVAL (operands[3]) & 0xffff) != 0))
    {
      return 163;  /* *andorsi3 */
    }
  goto ret0;

 L1455: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1456;
    }
  goto ret0;

 L1456: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2212 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 185;  /* *one_cmplsi2_h8300 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_4 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case ROTATE:
      goto L1730;
    case ZERO_EXTRACT:
      goto L1752;
    case AND:
      goto L2014;
    case PLUS:
      goto L2055;
    case IOR:
      goto L2155;
    case ASHIFT:
      goto L2340;
    default:
     break;
   }
 L3974: ATTRIBUTE_UNUSED_LABEL
  if (h8sx_binary_shift_operator (x1, SImode))
    {
      operands[3] = x1;
      goto L1701;
    }
 L3975: ATTRIBUTE_UNUSED_LABEL
  if (nshift_operator (x1, SImode))
    {
      operands[3] = x1;
      goto L1714;
    }
 L3980: ATTRIBUTE_UNUSED_LABEL
  if (iorxor_operator (x1, SImode))
    {
      operands[1] = x1;
      goto L2095;
    }
  goto ret0;

 L1730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1731;
    }
  goto ret0;

 L1731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1732;
    }
  goto ret0;

 L1732: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3179 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 231;  /* rotlsi3_1 */
    }
  goto ret0;

 L1752: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L3985;
    case SImode:
      goto L3986;
    default:
      break;
    }
  goto ret0;

 L3985: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == XOR)
    goto L1767;
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1753;
    }
  goto ret0;

 L1767: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1768;
    }
  goto ret0;

 L1768: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L1769;
    }
  goto ret0;

 L1769: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1770;
  goto ret0;

 L1770: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1771;
    }
  goto ret0;

 L1771: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3260 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300
   && INTVAL (operands[2]) < 16
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])))
    {
      return 236;  /* *extzv_1_r_inv_h8300 */
    }
  goto ret0;

 L1753: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1754;
  goto ret0;

 L1754: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1755;
    }
  goto ret0;

 L1755: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3234 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300
   && INTVAL (operands[2]) < 16))
    {
      return 234;  /* *extzv_1_r_h8300 */
    }
  goto ret0;

 L3986: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == XOR)
    goto L1776;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1760;
    }
  goto ret0;

 L1776: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1777;
    }
  goto ret0;

 L1777: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L1778;
    }
  goto ret0;

 L1778: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1779;
  goto ret0;

 L1779: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1780;
    }
  goto ret0;

 L1780: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3272 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) < 16
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])))
    {
      return 237;  /* *extzv_1_r_inv_h8300hs */
    }
  goto ret0;

 L1760: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3987;
  goto ret0;

 L3987: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 1L:
        goto L1761;
      case 8L:
        goto L1982;
      case 16L:
        goto L2004;
      default:
        break;
      }
  goto ret0;

 L1761: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1762;
    }
  goto ret0;

 L1762: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3244 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) < 16))
    {
      return 235;  /* *extzv_1_r_h8300hs */
    }
  goto ret0;

 L1982: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT)
    goto L3990;
  goto ret0;

 L3990: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 8L:
        goto L3993;
      case 16L:
        goto L3994;
      case 23L:
        goto L3995;
      default:
        break;
      }
  goto ret0;

 L3993: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3763 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 260;  /* *extzv_8_8 */
    }
  goto ret0;

 L3994: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3775 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 261;  /* *extzv_8_16 */
    }
  goto ret0;

 L3995: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3798 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)))
    {
      return 263;  /* *extzv_8_23 */
    }
  goto ret0;

 L2004: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 3786 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 262;  /* *extzv_16_8 */
    }
  goto ret0;

 L2014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3996;
  goto ret0;

 L3996: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L2015;
    case LSHIFTRT:
      goto L2041;
    default:
     break;
   }
  goto ret0;

 L2015: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2016;
    }
  goto ret0;

 L2016: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3998;
  goto ret0;

 L3998: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 15L)
    goto L2017;
 L3999: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2035;
    }
  goto ret0;

 L2017: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 2147450880L
      && 
#line 3820 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)))
    {
      return 264;  /* *twoshifts_l16_r1 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L3999;

 L2035: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2036;
    }
  goto ret0;

 L2036: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3841 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) <= 15
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 265;  /* *andsi3_ashift_n_lower */
    }
  goto ret0;

 L2041: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2042;
    }
  goto ret0;

 L2042: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L4000;
  goto ret0;

 L4000: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2043;
    }
 L4001: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 9L)
    goto L2051;
  goto ret0;

 L2043: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (single_one_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2044;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4001;

 L2044: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3861 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && exact_log2 (INTVAL (operands[3])) < 16
   && INTVAL (operands[2]) + exact_log2 (INTVAL (operands[3])) == 31))
    {
      return 266;  /* *andsi3_lshiftrt_n_sb */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4001;

 L2051: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 4194304L
      && 
#line 3876 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)))
    {
      return 267;  /* *andsi3_lshiftrt_9_sb */
    }
  goto ret0;

 L2055: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L4002;
  goto ret0;

 L4002: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L2056;
    case LSHIFTRT:
      goto L2064;
    case AND:
      goto L2073;
    default:
     break;
   }
  goto ret0;

 L2056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2057;
    }
  goto ret0;

 L2057: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L4005;
  goto ret0;

 L4005: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 65536L:
        goto L2058;
      case 8388608L:
        goto L2335;
      default:
        break;
      }
  goto ret0;

 L2058: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2059;
    }
  goto ret0;

 L2059: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3896 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 268;  /* *addsi3_upper */
    }
  goto ret0;

 L2335: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2336;
    }
  goto ret0;

 L2336: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4318 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 296;  /* *addsi3_shift */
    }
  goto ret0;

 L2064: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2065;
    }
  goto ret0;

 L2065: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)])
    goto L2066;
  goto ret0;

 L2066: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L2067;
  goto ret0;

 L2067: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2068;
    }
  goto ret0;

 L2068: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3905 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 269;  /* *addsi3_lshiftrt_16_zexthi */
    }
  goto ret0;

 L2073: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L4008;
  goto ret0;

 L4008: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NOT)
    goto L2082;
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2074;
    }
  goto ret0;

 L2082: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2083;
    }
  goto ret0;

 L2083: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2084;
  goto ret0;

 L2084: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2085;
    }
  goto ret0;

 L2085: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3937 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)))
    {
      return 271;  /* *addsi3_and_not_r_1 */
    }
  goto ret0;

 L2074: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2075;
  goto ret0;

 L2075: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2076;
    }
  goto ret0;

 L2076: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3914 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)))
    {
      return 270;  /* *addsi3_and_r_1 */
    }
  goto ret0;

 L2155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L4009;
  goto L3980;

 L4009: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L2156;
    case AND:
      goto L2175;
    case ASHIFT:
      goto L2202;
    case ZERO_EXTRACT:
      goto L2230;
    default:
     break;
   }
  goto L3980;

 L2156: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L4013;
    case QImode:
      goto L4014;
    default:
      break;
    }
  goto L3980;

 L4013: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2157;
    }
  goto L3980;

 L2157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L2158;
  goto L3980;

 L2158: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2159;
    }
  goto L3980;

 L2159: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)]
      && 
#line 4063 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 281;  /* *iorsi3_two_hi */
    }
  goto L3980;

 L4014: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2165;
    }
 L4015: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2185;
    }
  goto L3980;

 L2165: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2166;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4015;

 L2166: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L2167;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4015;

 L2167: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L2168;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4015;

 L2168: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (memory_operand (x5, QImode))
    {
      operands[2] = x5;
      goto L2169;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4015;

 L2169: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2170;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4015;

 L2170: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 65280L
      && 
#line 4074 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)))
    {
      return 282;  /* *iorsi3_two_qi_zext */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4015;

 L2185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L2186;
  goto L3980;

 L2186: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L2187;
  goto L3980;

 L2187: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2188;
    }
  goto L3980;

 L2188: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 4100 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)))
    {
      return 284;  /* *iorsi3_two_qi_sext */
    }
  goto L3980;

 L2175: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L4017;
  goto L3980;

 L4017: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ASHIFT:
      goto L2211;
    case LSHIFTRT:
      goto L2221;
    case REG:
    case SUBREG:
      goto L4016;
    default:
      goto L3980;
   }
 L4016: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2176;
    }
  goto L3980;

 L2211: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L4020;
  goto L3980;

 L4020: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L2311;
 L4019: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2212;
    }
  goto L3980;

 L2311: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (memory_operand (x5, QImode))
    {
      operands[1] = x5;
      goto L2312;
    }
  goto L4019;

 L2312: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (16)])
    goto L2313;
  x4 = XEXP (x3, 0);
  goto L4019;

 L2313: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16711680L)
    goto L2314;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4019;

 L2314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L2315;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4019;

 L2315: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L2316;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4019;

 L2316: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (memory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2317;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4019;

 L2317: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (24)]
      && 
#line 4297 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)))
    {
      return 295;  /* *iorsi3_ashift_16_ashift_24_mem */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4019;

 L2212: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2213;
    }
  goto L3980;

 L2213: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (single_one_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2214;
    }
  goto L3980;

 L2214: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L2215;
    }
  goto L3980;

 L2215: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4137 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && (INTVAL (operands[3]) & ~0xffff) == 0))
    {
      return 287;  /* *iorsi3_and_ashift */
    }
  x1 = XEXP (x0, 1);
  goto L3980;

 L2221: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2222;
    }
  goto L3980;

 L2222: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L4021;
  goto L3980;

 L4021: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2223;
    }
 L4022: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 30L:
        goto L2242;
      case 9L:
        goto L2265;
      default:
        break;
      }
  goto L3980;

 L2223: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (single_one_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2224;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4022;

 L2224: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L2225;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4022;

 L2225: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4156 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && ((INTVAL (operands[3]) << INTVAL (operands[2])) & ~0xffff) == 0))
    {
      return 288;  /* *iorsi3_and_lshiftrt */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4022;

 L2242: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L2243;
  goto L3980;

 L2243: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2244;
    }
  goto L3980;

 L2244: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4186 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)))
    {
      return 290;  /* *iorsi3_and_lshiftrt_n_sb */
    }
  x1 = XEXP (x0, 1);
  goto L3980;

 L2265: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 4194304L)
    goto L2266;
  goto L3980;

 L2266: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2267;
    }
  goto L3980;

 L2267: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4197 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 291;  /* *iorsi3_and_lshiftrt_9_sb */
    }
  x1 = XEXP (x0, 1);
  goto L3980;

 L2176: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L4024;
  goto L3980;

 L4024: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case -65536L:
        goto L2177;
      case -256L:
        goto L2195;
      case 1L:
        goto L2293;
      default:
        break;
      }
  goto L3980;

 L2177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L2178;
  goto L3980;

 L2178: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2179;
    }
  goto L3980;

 L2179: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)]
      && 
#line 4091 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 283;  /* *iorsi3_e2f */
    }
  goto L3980;

 L2195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L2196;
  goto L3980;

 L2196: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand_src (x3, QImode))
    {
      operands[2] = x3;
      goto L2197;
    }
  goto L3980;

 L2197: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4117 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 285;  /* *iorsi3_w */
    }
  x1 = XEXP (x0, 1);
  goto L3980;

 L2293: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L2294;
  goto L3980;

 L2294: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2295;
  goto L3980;

 L2295: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 4266 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 293;  /* *iorsi2_and_1_lshiftrt_1 */
    }
  goto L3980;

 L2202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2203;
    }
  goto L3980;

 L2203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L4027;
  goto L3980;

 L4027: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 31L:
        goto L2204;
      case 23L:
        goto L2285;
      case 16L:
        goto L2302;
      default:
        break;
      }
  goto L3980;

 L2204: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2205;
    }
  goto L3980;

 L2205: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4126 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 286;  /* *iorsi3_ashift_31 */
    }
  x1 = XEXP (x0, 1);
  goto L3980;

 L2285: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2286;
    }
  goto L3980;

 L2286: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4215 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 292;  /* *iorsi3_shift */
    }
  x1 = XEXP (x0, 1);
  goto L3980;

 L2302: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L2303;
  goto L3980;

 L2303: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2304;
    }
  goto L3980;

 L2304: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (24)]
      && 
#line 4276 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)))
    {
      return 294;  /* *iorsi3_ashift_16_ashift_24 */
    }
  goto L3980;

 L2230: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2231;
    }
  goto L3980;

 L2231: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2232;
  goto L3980;

 L2232: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2233;
    }
  goto L3980;

 L2233: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2234;
    }
  goto L3980;

 L2234: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4175 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) < 16))
    {
      return 289;  /* *iorsi3_zero_extract */
    }
  x1 = XEXP (x0, 1);
  goto L3980;

 L2340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L2341;
  goto L3974;

 L2341: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2342;
    }
  goto L3974;

 L2342: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (7)]
      && 
#line 4369 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)))
    {
      return 297;  /* *ashiftsi_sextqi_7 */
    }
  goto L3974;

 L1701: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1702;
    }
  goto L3975;

 L1702: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      return 227;  /* *h8300.md:3042 */
    }
  goto L3975;

 L1714: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1715;
    }
  goto ret0;

 L1715: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1716;
    }
  goto ret0;

 L1716: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 228;  /* *shiftsi */
    }
  goto ret0;

 L2095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L4030;
  goto ret0;

 L4030: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L2096;
    case ASHIFT:
      goto L2109;
    case LSHIFTRT:
      goto L2117;
    default:
     break;
   }
  goto ret0;

 L2096: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case QImode:
      goto L4033;
    case HImode:
      goto L4034;
    default:
      break;
    }
  goto ret0;

 L4033: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2097;
    }
  goto ret0;

 L2097: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      return 273;  /* *ixorsi3_zext_qi */
    }
  goto ret0;

 L4034: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2103;
    }
  goto ret0;

 L2103: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2104;
    }
  goto ret0;

 L2104: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3982 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 274;  /* *ixorsi3_zext_hi */
    }
  goto ret0;

 L2109: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2110;
    }
  goto ret0;

 L2110: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)])
    goto L2111;
  goto ret0;

 L2111: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2112;
    }
  goto ret0;

 L2112: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3992 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 275;  /* *ixorsi3_ashift_16 */
    }
  goto ret0;

 L2117: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2118;
    }
  goto ret0;

 L2118: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)])
    goto L2119;
  goto ret0;

 L2119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2120;
    }
  goto ret0;

 L2120: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4002 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 276;  /* *ixorsi3_lshiftrt_16 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_5 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_CODE (x1))
    {
    case ZERO_EXTRACT:
      goto L1815;
    case MEM:
      goto L4035;
    default:
     break;
   }
 L3673: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1644;
    }
 L3674: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1650;
    }
 L3682: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1852;
    }
 L3685: ATTRIBUTE_UNUSED_LABEL
  if (general_operand_dst (x1, QImode))
    {
      operands[0] = x1;
      goto L2345;
    }
  goto ret0;

 L1815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_memory_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1828;
    }
  goto ret0;

 L1828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1829;
 L1816: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1817;
    }
  goto ret0;

 L1829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1830;
    }
  x2 = XEXP (x1, 1);
  goto L1816;

 L1830: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L4037;
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 1);
  goto L1816;

 L4037: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case EQ:
      goto L1840;
    case NE:
      goto L1848;
    default:
     break;
   }
 L4036: ATTRIBUTE_UNUSED_LABEL
  if (eqne_operator (x1, QImode))
    {
      operands[2] = x1;
      goto L1831;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 1);
  goto L1816;

 L1840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L1841;
  goto L4036;

 L1841: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 3528 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && reload_completed))
    {
      return 245;  /* *bstz */
    }
  goto L4036;

 L1848: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L1849;
  goto L4036;

 L1849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 3538 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && reload_completed))
    {
      return 246;  /* *bistz */
    }
  goto L4036;

 L1831: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1832;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 1);
  goto L1816;

 L1832: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L1833;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 1);
  goto L1816;

 L1833: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3510 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && (GET_MODE (operands[3]) == GET_MODE (operands[4])
       || GET_CODE (operands[4]) == CONST_INT)
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) <= 4))
    {
      return 244;  /* *cmpstz */
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 1);
  goto L1816;

 L1817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L1818;
    }
  goto ret0;

 L1818: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L1819;
    }
  goto ret0;

 L1819: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3460 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && INTVAL (operands[2]) + INTVAL (operands[3]) <= 8))
    {
      return 242;  /* bfst */
    }
  goto ret0;

 L4035: ATTRIBUTE_UNUSED_LABEL
  if (bit_memory_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1862;
    }
  goto L3673;

 L1862: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == IF_THEN_ELSE)
    goto L1863;
  x1 = XEXP (x0, 0);
  goto L3673;

 L1863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (eqne_operator (x2, QImode))
    {
      operands[2] = x2;
      goto L1864;
    }
  x1 = XEXP (x0, 0);
  goto L3673;

 L1864: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L1865;
  x1 = XEXP (x0, 0);
  goto L3673;

 L1865: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1866;
  x1 = XEXP (x0, 0);
  goto L3673;

 L1866: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L4039;
  x1 = XEXP (x0, 0);
  goto L3673;

 L4039: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case IOR:
      goto L1867;
    case AND:
      goto L1887;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L3673;

 L1867: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (bit_memory_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L1910;
    }
  x1 = XEXP (x0, 0);
  goto L3673;

 L1910: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == ASHIFT)
    goto L1911;
  if (single_one_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1869;
    }
  x1 = XEXP (x0, 0);
  goto L3673;

 L1911: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1912;
  x1 = XEXP (x0, 0);
  goto L3673;

 L1912: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L1913;
    }
  x1 = XEXP (x0, 0);
  goto L3673;

 L1913: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[3])
      && 
#line 3651 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && reload_completed))
    {
      return 252;  /* *condbsetreg */
    }
  x1 = XEXP (x0, 0);
  goto L3673;

 L1869: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[3])
      && 
#line 3574 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && reload_completed))
    {
      return 248;  /* *condbset */
    }
  x1 = XEXP (x0, 0);
  goto L3673;

 L1887: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (bit_memory_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L1934;
    }
  x1 = XEXP (x0, 0);
  goto L3673;

 L1934: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == ASHIFT)
    goto L1935;
  if (single_zero_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1889;
    }
  x1 = XEXP (x0, 0);
  goto L3673;

 L1935: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1936;
  x1 = XEXP (x0, 0);
  goto L3673;

 L1936: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L1937;
    }
  x1 = XEXP (x0, 0);
  goto L3673;

 L1937: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[3])
      && 
#line 3692 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && reload_completed))
    {
      return 254;  /* *condbclrreg */
    }
  x1 = XEXP (x0, 0);
  goto L3673;

 L1889: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[3])
      && 
#line 3610 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && reload_completed))
    {
      return 250;  /* *condbclr */
    }
  x1 = XEXP (x0, 0);
  goto L3673;

 L1644: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (h8sx_unary_shift_operator (x1, QImode))
    {
      operands[3] = x1;
      goto L1645;
    }
  x1 = XEXP (x0, 0);
  goto L3674;

 L1645: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1646;
    }
  x1 = XEXP (x0, 0);
  goto L3674;

 L1646: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1647;
    }
  x1 = XEXP (x0, 0);
  goto L3674;

 L1647: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2925 "../.././gcc/config/h8300/h8300.md"
(h8300_operands_match_p (operands)))
    {
      return 220;  /* *h8300.md:2920 */
    }
  x1 = XEXP (x0, 0);
  goto L3674;

 L1650: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L4043;
  x1 = XEXP (x0, 0);
  goto L3682;

 L4043: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ROTATE:
      goto L1720;
    case ZERO_EXTRACT:
      goto L1809;
    case ASHIFT:
    case ASHIFTRT:
    case LSHIFTRT:
      goto L4041;
    default:
      goto L4042;
   }
 L4041: ATTRIBUTE_UNUSED_LABEL
  if (h8sx_binary_shift_operator (x1, QImode))
    {
      operands[3] = x1;
      goto L1651;
    }
 L4042: ATTRIBUTE_UNUSED_LABEL
  if (nshift_operator (x1, QImode))
    {
      operands[3] = x1;
      goto L1664;
    }
  x1 = XEXP (x0, 0);
  goto L3682;

 L1720: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1721;
    }
  x1 = XEXP (x0, 0);
  goto L3682;

 L1721: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      return 229;  /* rotlqi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L3682;

 L1809: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1810;
    }
  x1 = XEXP (x0, 0);
  goto L3682;

 L1810: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1811;
    }
  x1 = XEXP (x0, 0);
  goto L3682;

 L1811: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L1812;
    }
  x1 = XEXP (x0, 0);
  goto L3682;

 L1812: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3445 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && INTVAL (operands[2]) + INTVAL (operands[3]) <= 8))
    {
      return 241;  /* bfld */
    }
  x1 = XEXP (x0, 0);
  goto L3682;

 L1651: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1652;
    }
  goto L4042;

 L1652: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      return 221;  /* *h8300.md:2930 */
    }
  goto L4042;

 L1664: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1665;
    }
  x1 = XEXP (x0, 0);
  goto L3682;

 L1665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1666;
    }
  x1 = XEXP (x0, 0);
  goto L3682;

 L1666: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 222;  /* *shiftqi */
    }
  x1 = XEXP (x0, 0);
  goto L3682;

 L1852: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == IF_THEN_ELSE)
    goto L1853;
  x1 = XEXP (x0, 0);
  goto L3685;

 L1853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (eqne_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L1854;
    }
  x1 = XEXP (x0, 0);
  goto L3685;

 L1854: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (h8300_dst_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L1855;
    }
  x1 = XEXP (x0, 0);
  goto L3685;

 L1855: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (h8300_src_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L1856;
    }
  x1 = XEXP (x0, 0);
  goto L3685;

 L1856: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L4045;
  x1 = XEXP (x0, 0);
  goto L3685;

 L4045: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case IOR:
      goto L1857;
    case AND:
      goto L1877;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L3685;

 L1857: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (bit_memory_operand (x3, QImode))
    {
      operands[4] = x3;
      goto L1898;
    }
  x1 = XEXP (x0, 0);
  goto L3685;

 L1898: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == ASHIFT)
    goto L1899;
  if (single_one_operand (x3, QImode))
    {
      operands[5] = x3;
      goto L1859;
    }
  x1 = XEXP (x0, 0);
  goto L3685;

 L1899: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1900;
  x1 = XEXP (x0, 0);
  goto L3685;

 L1900: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, QImode))
    {
      operands[5] = x4;
      goto L1901;
    }
  x1 = XEXP (x0, 0);
  goto L3685;

 L1901: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[4])
      && 
#line 3627 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 251;  /* *cmpcondbsetreg */
    }
  x1 = XEXP (x0, 0);
  goto L3685;

 L1859: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[4])
      && 
#line 3554 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 247;  /* *cmpcondbset */
    }
  x1 = XEXP (x0, 0);
  goto L3685;

 L1877: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (bit_memory_operand (x3, QImode))
    {
      operands[4] = x3;
      goto L1922;
    }
  x1 = XEXP (x0, 0);
  goto L3685;

 L1922: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == ASHIFT)
    goto L1923;
  if (single_zero_operand (x3, QImode))
    {
      operands[5] = x3;
      goto L1879;
    }
  x1 = XEXP (x0, 0);
  goto L3685;

 L1923: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1924;
  x1 = XEXP (x0, 0);
  goto L3685;

 L1924: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, QImode))
    {
      operands[5] = x4;
      goto L1925;
    }
  x1 = XEXP (x0, 0);
  goto L3685;

 L1925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[4])
      && 
#line 3668 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 253;  /* *cmpcondbclrreg */
    }
  x1 = XEXP (x0, 0);
  goto L3685;

 L1879: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[4])
      && 
#line 3590 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 249;  /* *cmpcondbclr */
    }
  x1 = XEXP (x0, 0);
  goto L3685;

 L2345: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L4047;
  goto ret0;

 L4047: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == SUBREG)
    goto L4049;
  goto ret0;

 L4049: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1L:
      goto L2346;
    case 3L:
      goto L2352;
    default:
      break;
    }
  goto ret0;

 L2346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L2347;
  goto ret0;

 L2347: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2348;
    }
  goto ret0;

 L2348: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    {
      return 298;  /* *h8300.md:4386 */
    }
  goto ret0;

 L2352: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L2353;
  goto ret0;

 L2353: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2354;
    }
  goto ret0;

 L2354: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L4051;
  goto ret0;

 L4051: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 8L:
        goto L4054;
      case 16L:
        goto L4055;
      case 24L:
        goto L4056;
      default:
        break;
      }
  goto ret0;

 L4054: ATTRIBUTE_UNUSED_LABEL
  return 299;  /* *h8300.md:4397 */

 L4055: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4411 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 300;  /* *h8300.md:4406 */
    }
  goto ret0;

 L4056: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4421 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 301;  /* *h8300.md:4416 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_6 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case QImode:
      goto L3666;
    case HImode:
      goto L3667;
    case SImode:
      goto L3656;
    case SFmode:
      goto L3657;
    default:
      break;
    }
 L13: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case STRICT_LOW_PART:
      goto L14;
    case CC0:
      goto L860;
    case PC:
      goto L1534;
    default:
     break;
   }
 L1548: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L1549;
 L1573: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case HImode:
      goto L3679;
    case SImode:
      goto L3684;
    case QImode:
      goto L3681;
    default:
      break;
    }
 L2388: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PC)
    goto L2389;
  goto ret0;

 L3666: ATTRIBUTE_UNUSED_LABEL
  if (bit_register_indirect_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1291;
    }
 L3654: ATTRIBUTE_UNUSED_LABEL
  if (general_operand_dst (x1, QImode))
    {
      operands[0] = x1;
      goto L2;
    }
 L3661: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L815;
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L110;
    }
 L3663: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1012;
    }
 L3668: ATTRIBUTE_UNUSED_LABEL
  if (bit_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1303;
    }
  goto L13;

 L1291: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L3686;
  x1 = XEXP (x0, 0);
  goto L3654;

 L3686: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L1292;
    case IOR:
      goto L1347;
    case XOR:
      goto L1365;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L3654;

 L1292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_register_indirect_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1293;
    }
  x1 = XEXP (x0, 0);
  goto L3654;

 L1293: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (single_zero_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1294;
    }
  x1 = XEXP (x0, 0);
  goto L3654;

 L1294: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1695 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && rtx_equal_p(operands[0], operands[1])))
    {
      return 157;  /* bclrqi_msx */
    }
  x1 = XEXP (x0, 0);
  goto L3654;

 L1347: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_register_indirect_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1348;
    }
  x1 = XEXP (x0, 0);
  goto L3654;

 L1348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (single_one_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1349;
    }
  x1 = XEXP (x0, 0);
  goto L3654;

 L1349: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1839 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && rtx_equal_p(operands[0], operands[1])))
    {
      return 165;  /* bsetqi_msx */
    }
  x1 = XEXP (x0, 0);
  goto L3654;

 L1365: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_register_indirect_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1366;
    }
  x1 = XEXP (x0, 0);
  goto L3654;

 L1366: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (single_one_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1367;
    }
  x1 = XEXP (x0, 0);
  goto L3654;

 L1367: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1916 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && rtx_equal_p(operands[0], operands[1])))
    {
      return 168;  /* bnotqi_msx */
    }
  x1 = XEXP (x0, 0);
  goto L3654;

 L2: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand_src (x1, QImode))
    {
      operands[1] = x1;
      goto L3;
    }
  x1 = XEXP (x0, 0);
  goto L3661;

 L3: ATTRIBUTE_UNUSED_LABEL
  if (
#line 200 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300
   && h8300_move_ok (operands[0], operands[1])))
    {
      return 0;  /* *movqi_h8300 */
    }
 L7: ATTRIBUTE_UNUSED_LABEL
  if (
#line 215 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX
   && h8300_move_ok (operands[0], operands[1])))
    {
      return 1;  /* *movqi_h8300hs */
    }
 L11: ATTRIBUTE_UNUSED_LABEL
  if (
#line 231 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 2;  /* *movqi_h8sx */
    }
  x1 = XEXP (x0, 0);
  goto L3661;

 L815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L3689;
    case SImode:
      goto L3690;
    default:
      break;
    }
  goto L3663;

 L3689: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PRE_MODIFY)
    goto L816;
  goto L3663;

 L816: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L817;
  goto L3663;

 L817: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L818;
  goto L3663;

 L818: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L819;
  goto L3663;

 L819: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L3691;
  goto L3663;

 L3691: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case -2L:
        goto L820;
      case -4L:
        goto L829;
      default:
        break;
      }
  goto L3663;

 L820: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_no_sp_elim_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L821;
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L821: ATTRIBUTE_UNUSED_LABEL
  if (
#line 861 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 101;  /* *pushqi1_h8300 */
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L829: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_no_sp_elim_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L830;
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L830: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 871 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S) && 
#line 188 "../.././gcc/config/h8300/h8300.md"
(Pmode == HImode)))
    {
      return 102;  /* *pushqi1_h8300hs_hi */
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L3690: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PRE_MODIFY)
    goto L834;
  goto L3663;

 L834: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L835;
  goto L3663;

 L835: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L836;
  goto L3663;

 L836: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L837;
  goto L3663;

 L837: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (-4)])
    goto L838;
  goto L3663;

 L838: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_no_sp_elim_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L839;
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L839: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 871 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S) && 
#line 188 "../.././gcc/config/h8300/h8300.md"
(Pmode == SImode)))
    {
      return 103;  /* *pushqi1_h8300hs_si */
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L110: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L3693;
  x1 = XEXP (x0, 0);
  goto L3663;

 L3693: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L111;
    case IOR:
      goto L1316;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L3663;

 L111: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode)
    goto L3695;
  x1 = XEXP (x0, 0);
  goto L3663;

 L3695: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L112;
    case ASHIFT:
      goto L120;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L3663;

 L112: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (h8300_dst_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L113;
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L113: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3697;
  x1 = XEXP (x0, 0);
  goto L3663;

 L3697: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2L:
        goto L114;
      case 4L:
        goto L130;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  goto L3663;

 L114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L115;
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L115: ATTRIBUTE_UNUSED_LABEL
  if (
#line 25 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 16;  /* *mova.md:20 */
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L130: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L131;
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L131: ATTRIBUTE_UNUSED_LABEL
  if (
#line 45 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 18;  /* *mova.md:40 */
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (h8300_dst_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L121;
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L121: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3699;
  x1 = XEXP (x0, 0);
  goto L3663;

 L3699: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1L:
        goto L122;
      case 2L:
        goto L138;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  goto L3663;

 L122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L123;
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L123: ATTRIBUTE_UNUSED_LABEL
  if (
#line 35 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 17;  /* *mova.md:30 */
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L139;
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L139: ATTRIBUTE_UNUSED_LABEL
  if (
#line 55 "../.././gcc/config/h8300/mova.md"
(TARGET_H8300SX))
    {
      return 19;  /* *mova.md:50 */
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L1316: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == AND)
    goto L1317;
  x1 = XEXP (x0, 0);
  goto L3663;

 L1317: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1318;
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L1318: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (single_one_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L1319;
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L1319: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      return 161;  /* *andorqi3 */
    }
  x1 = XEXP (x0, 0);
  goto L3663;

 L1012: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L3701;
  x1 = XEXP (x0, 0);
  goto L3668;

 L3701: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L1013;
    case MINUS:
      goto L1061;
    case NEG:
      goto L1407;
    case NOT:
      goto L1441;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L3668;

 L1013: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1014;
    }
  x1 = XEXP (x0, 0);
  goto L3668;

 L1014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1015;
    }
  x1 = XEXP (x0, 0);
  goto L3668;

 L1015: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1129 "../.././gcc/config/h8300/h8300.md"
(h8300_operands_match_p (operands)))
    {
      return 122;  /* *addqi3 */
    }
  x1 = XEXP (x0, 0);
  goto L3668;

 L1061: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1062;
    }
  x1 = XEXP (x0, 0);
  goto L3668;

 L1062: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_dst_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1063;
    }
  x1 = XEXP (x0, 0);
  goto L3668;

 L1063: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1296 "../.././gcc/config/h8300/h8300.md"
(h8300_operands_match_p (operands)))
    {
      return 130;  /* *subqi3 */
    }
  x1 = XEXP (x0, 0);
  goto L3668;

 L1407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, QImode))
    {
      operands[1] = x2;
      return 175;  /* *negqi2 */
    }
  x1 = XEXP (x0, 0);
  goto L3668;

 L1441: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, QImode))
    {
      operands[1] = x2;
      return 182;  /* *one_cmplqi2 */
    }
  x1 = XEXP (x0, 0);
  goto L3668;

 L1303: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L3705;
  x1 = XEXP (x0, 0);
  goto L13;

 L3705: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L1304;
    case IOR:
      goto L1359;
    case XOR:
      goto L1377;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L13;

 L1304: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1305;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1305: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1306;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1306: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1734 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 159;  /* *andqi3_2 */
    }
 L1312: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1747 "../.././gcc/config/h8300/h8300.md"
(register_operand (operands[0], QImode)
   || single_zero_operand (operands[2], QImode)))
    {
      return 160;  /* andqi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1359: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1360;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1360: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1361;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1361: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1878 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX || register_operand (operands[0], QImode)
   || single_one_operand (operands[2], QImode)))
    {
      return 167;  /* iorqi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1377: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1378;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1378: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1379;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1379: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1955 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX || register_operand (operands[0], QImode)
   || single_one_operand (operands[2], QImode)))
    {
      return 170;  /* xorqi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L3667: ATTRIBUTE_UNUSED_LABEL
  if (bit_register_indirect_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1297;
    }
 L3655: ATTRIBUTE_UNUSED_LABEL
  if (general_operand_dst (x1, HImode))
    {
      operands[0] = x1;
      goto L18;
    }
 L3662: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L842;
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L142;
    }
 L3664: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1036;
    }
  goto L13;

 L1297: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L3708;
  x1 = XEXP (x0, 0);
  goto L3655;

 L3708: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L1298;
    case IOR:
      goto L1353;
    case XOR:
      goto L1371;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L3655;

 L1298: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_register_indirect_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1299;
    }
  x1 = XEXP (x0, 0);
  goto L3655;

 L1299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (single_zero_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1300;
    }
  x1 = XEXP (x0, 0);
  goto L3655;

 L1300: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1726 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 158;  /* bclrhi_msx */
    }
  x1 = XEXP (x0, 0);
  goto L3655;

 L1353: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_register_indirect_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1354;
    }
  x1 = XEXP (x0, 0);
  goto L3655;

 L1354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (single_one_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1355;
    }
  x1 = XEXP (x0, 0);
  goto L3655;

 L1355: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1870 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 166;  /* bsethi_msx */
    }
  x1 = XEXP (x0, 0);
  goto L3655;

 L1371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_register_indirect_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1372;
    }
  x1 = XEXP (x0, 0);
  goto L3655;

 L1372: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (single_one_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1373;
    }
  x1 = XEXP (x0, 0);
  goto L3655;

 L1373: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1947 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 169;  /* bnothi_msx */
    }
  x1 = XEXP (x0, 0);
  goto L3655;

 L18: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand_src (x1, HImode))
    {
      operands[1] = x1;
      goto L19;
    }
  x1 = XEXP (x0, 0);
  goto L3662;

 L19: ATTRIBUTE_UNUSED_LABEL
  if (
#line 264 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300
   && h8300_move_ok (operands[0], operands[1])))
    {
      return 4;  /* *movhi_h8300 */
    }
 L23: ATTRIBUTE_UNUSED_LABEL
  if (
#line 280 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX
   && h8300_move_ok (operands[0], operands[1])))
    {
      return 5;  /* *movhi_h8300hs */
    }
 L27: ATTRIBUTE_UNUSED_LABEL
  if (
#line 296 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 6;  /* *movhi_h8sx */
    }
  x1 = XEXP (x0, 0);
  goto L3662;

 L842: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L3711;
    case SImode:
      goto L3712;
    default:
      break;
    }
  goto L3664;

 L3711: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PRE_MODIFY)
    goto L843;
  goto L3664;

 L843: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L844;
  goto L3664;

 L844: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L845;
  goto L3664;

 L845: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L846;
  goto L3664;

 L846: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (-4)])
    goto L847;
  goto L3664;

 L847: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_no_sp_elim_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L848;
    }
  x1 = XEXP (x0, 0);
  goto L3664;

 L848: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 881 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S) && 
#line 188 "../.././gcc/config/h8300/h8300.md"
(Pmode == HImode)))
    {
      return 104;  /* *pushhi1_h8300hs_hi */
    }
  x1 = XEXP (x0, 0);
  goto L3664;

 L3712: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PRE_MODIFY)
    goto L852;
  goto L3664;

 L852: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L853;
  goto L3664;

 L853: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L854;
  goto L3664;

 L854: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L855;
  goto L3664;

 L855: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (-4)])
    goto L856;
  goto L3664;

 L856: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_no_sp_elim_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L857;
    }
  x1 = XEXP (x0, 0);
  goto L3664;

 L857: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 881 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S) && 
#line 188 "../.././gcc/config/h8300/h8300.md"
(Pmode == SImode)))
    {
      return 105;  /* *pushhi1_h8300hs_si */
    }
  x1 = XEXP (x0, 0);
  goto L3664;

 L142: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L3713;
  x1 = XEXP (x0, 0);
  goto L3664;

 L3713: ATTRIBUTE_UNUSED_LABEL
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3664;

 L1036: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L3782;
  x1 = XEXP (x0, 0);
  goto L13;

 L3782: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L1037;
    case MINUS:
      goto L1073;
    case NEG:
      goto L1411;
    case NOT:
      goto L1450;
    case AND:
    case IOR:
    case XOR:
      goto L3784;
    default:
      x1 = XEXP (x0, 0);
      goto L13;
   }
 L3784: ATTRIBUTE_UNUSED_LABEL
  if (bit_operator (x1, HImode))
    {
      operands[3] = x1;
      goto L1383;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1037: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1038;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1039;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1039: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1214 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && h8300_operands_match_p (operands)))
    {
      return 126;  /* *addhi3_h8sx */
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1073: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1074;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1074: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1075;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1075: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1323 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && h8300_operands_match_p (operands)))
    {
      return 132;  /* *subhi3_h8300hs */
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1411: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1412;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1412: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2085 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && h8300_operands_match_p (operands)))
    {
      return 176;  /* *neghi2_h8300hs */
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1450: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1451;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1451: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2198 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && h8300_operands_match_p (operands)))
    {
      return 184;  /* *one_cmplhi2_h8300hs */
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1383: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1384;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1384: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1385;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1385: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1999 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300S || TARGET_H8300H) && h8300_operands_match_p (operands)))
    {
      return 171;  /* *logicalhi3_sn */
    }
 L1397: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2023 "../.././gcc/config/h8300/h8300.md"
(h8300_operands_match_p (operands)))
    {
      return 173;  /* *logicalhi3 */
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L3656: ATTRIBUTE_UNUSED_LABEL
  if (general_operand_dst (x1, SImode))
    {
      operands[0] = x1;
      goto L34;
    }
 L3660: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L353;
    }
 L3665: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1048;
    }
  goto L13;

 L34: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand_src (x1, SImode))
    {
      operands[1] = x1;
      goto L35;
    }
  x1 = XEXP (x0, 0);
  goto L3660;

 L35: ATTRIBUTE_UNUSED_LABEL
  if (
#line 352 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300
   && h8300_move_ok (operands[0], operands[1])))
    {
      return 8;  /* *movsi_h8300 */
    }
 L39: ATTRIBUTE_UNUSED_LABEL
  if (
#line 422 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300S || TARGET_H8300H) && !TARGET_H8300SX
   && h8300_move_ok (operands[0], operands[1])))
    {
      return 9;  /* *movsi_h8300hs */
    }
 L43: ATTRIBUTE_UNUSED_LABEL
  if (
#line 492 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 10;  /* *movsi_h8sx */
    }
  x1 = XEXP (x0, 0);
  goto L3660;

 L353: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3787;
  x1 = XEXP (x0, 0);
  goto L3665;

 L3787: ATTRIBUTE_UNUSED_LABEL
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3665;

 L1048: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3918;
  x1 = XEXP (x0, 0);
  goto L13;

 L3918: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L1049;
    case MINUS:
      goto L1085;
    case NEG:
      goto L1416;
    case NOT:
      goto L1460;
    case AND:
    case IOR:
    case XOR:
      goto L3920;
    default:
      x1 = XEXP (x0, 0);
      goto L13;
   }
 L3920: ATTRIBUTE_UNUSED_LABEL
  if (bit_operator (x1, SImode))
    {
      operands[3] = x1;
      goto L1389;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1049: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1050;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1050: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1051;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1051: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1254 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && h8300_operands_match_p (operands)))
    {
      return 128;  /* *addsi_h8300hs */
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1085: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1086;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1086: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1087;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1087: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1352 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && h8300_operands_match_p (operands)))
    {
      return 134;  /* *subsi3_h8300hs */
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1416: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1417;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1417: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2115 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && h8300_operands_match_p (operands)))
    {
      return 177;  /* *negsi2_h8300hs */
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1460: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1461;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1461: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2219 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && h8300_operands_match_p (operands)))
    {
      return 186;  /* *one_cmplsi2_h8300hs */
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1390;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1390: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1391;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1391: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2011 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300S || TARGET_H8300H) && h8300_operands_match_p (operands)))
    {
      return 172;  /* *logicalsi3_sn */
    }
 L1403: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2035 "../.././gcc/config/h8300/h8300.md"
(h8300_operands_match_p (operands)))
    {
      return 174;  /* *logicalsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L3657: ATTRIBUTE_UNUSED_LABEL
  if (general_operand_dst (x1, SFmode))
    {
      operands[0] = x1;
      goto L46;
    }
 L3670: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L1420;
    }
  goto L13;

 L46: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand_src (x1, SFmode))
    {
      operands[1] = x1;
      goto L47;
    }
  x1 = XEXP (x0, 0);
  goto L3670;

 L47: ATTRIBUTE_UNUSED_LABEL
  if (
#line 508 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 11;  /* *movsf_h8sx */
    }
 L808: ATTRIBUTE_UNUSED_LABEL
  if (
#line 781 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode))))
    {
      return 99;  /* *movsf_h8300 */
    }
 L812: ATTRIBUTE_UNUSED_LABEL
  if (
#line 837 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode))))
    {
      return 100;  /* *movsf_h8300hs */
    }
  x1 = XEXP (x0, 0);
  goto L3670;

 L1420: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L3923;
  x1 = XEXP (x0, 0);
  goto L13;

 L3923: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NEG:
      goto L1421;
    case ABS:
      goto L1431;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L13;

 L1421: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1422;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1422: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2129 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 178;  /* *negsf2_h8300 */
    }
 L1427: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2136 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 179;  /* *negsf2_h8300hs */
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1431: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1432;
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L1432: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2153 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 180;  /* *abssf2_h8300 */
    }
 L1437: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2160 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 181;  /* *abssf2_h8300hs */
    }
  x1 = XEXP (x0, 0);
  goto L13;

 L14: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L3925;
    case HImode:
      goto L3926;
    default:
      break;
    }
  goto L1548;

 L3925: ATTRIBUTE_UNUSED_LABEL
  if (general_operand_dst (x2, QImode))
    {
      operands[0] = x2;
      goto L15;
    }
  goto L1548;

 L15: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand_src (x1, QImode))
    {
      operands[1] = x1;
      return 3;  /* movstrictqi */
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L3926: ATTRIBUTE_UNUSED_LABEL
  if (general_operand_dst (x2, HImode))
    {
      operands[0] = x2;
      goto L31;
    }
  goto L1548;

 L31: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand_src (x1, HImode))
    {
      operands[1] = x1;
      return 7;  /* movstricthi */
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L860: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == COMPARE)
    goto L861;
  x1 = XEXP (x0, 0);
  goto L1548;

 L861: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L3927;
    case HImode:
      goto L3928;
    case SImode:
      goto L3929;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L3927: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == ZERO_EXTRACT)
    goto L862;
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L962;
    }
 L3935: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L991;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L862: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (bit_memory_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L863;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L863: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L864;
  x1 = XEXP (x0, 0);
  goto L1548;

 L864: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L865;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 895 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 106;  /* *h8300.md:889 */
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L962: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 113;  /* *tstqi */
    }
  x2 = XEXP (x1, 0);
  goto L3935;

 L991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, QImode))
    {
      operands[1] = x2;
      return 118;  /* *cmpqi */
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L3928: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTRACT:
      goto L870;
    case AND:
      goto L972;
    case REG:
    case SUBREG:
      goto L3931;
    default:
      goto L3936;
   }
 L3931: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L996;
    }
 L3936: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1002;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L871;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L871: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L872;
  x1 = XEXP (x0, 0);
  goto L1548;

 L872: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L873;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L873: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 906 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 107;  /* *h8300.md:900 */
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L972: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L973;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L973: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -256L)
    goto L974;
  x1 = XEXP (x0, 0);
  goto L1548;

 L974: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 115;  /* *tsthi_upper */
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L996: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L997;
    }
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 114;  /* *tsthi */
    }
  x2 = XEXP (x1, 0);
  goto L3936;

 L997: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1062 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 119;  /* *cmphi_h8300_znvc */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3936;

 L1002: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1003;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L1003: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1071 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 120;  /* *cmphi_h8300hs_znvc */
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L3929: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTRACT:
      goto L898;
    case AND:
      goto L984;
    case REG:
    case SUBREG:
      goto L3933;
    default:
      goto L3937;
   }
 L3933: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L979;
    }
 L3937: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1008;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L898: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L3939;
  if (general_operand_src (x3, QImode))
    {
      operands[0] = x3;
      goto L891;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L3939: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ZERO_EXTEND)
    goto L952;
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L899;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L952: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand_src (x4, QImode))
    {
      operands[0] = x4;
      goto L953;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L953: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L954;
  x1 = XEXP (x0, 0);
  goto L1548;

 L954: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == AND)
    goto L955;
  x1 = XEXP (x0, 0);
  goto L1548;

 L955: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L956;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L956: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L957;
  x1 = XEXP (x0, 0);
  goto L1548;

 L957: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 988 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 112;  /* *tstsi_variable_bit_qi */
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L899: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L928;
  x1 = XEXP (x0, 0);
  goto L1548;

 L928: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == AND)
    goto L929;
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L901;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L929: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L930;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L930: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L931;
  x1 = XEXP (x0, 0);
  goto L1548;

 L931: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 974 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 111;  /* *tstsi_variable_bit */
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L901: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3940;
  x1 = XEXP (x0, 0);
  goto L1548;

 L3940: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0L)
    goto L3942;
  x1 = XEXP (x0, 0);
  goto L1548;

 L3942: ATTRIBUTE_UNUSED_LABEL
  if (
#line 941 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) <= 15))
    {
      return 109;  /* *h8300.md:936 */
    }
 L3943: ATTRIBUTE_UNUSED_LABEL
  if (
#line 953 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) >= 16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 110;  /* *tstsi_upper_bit */
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L891: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L892;
  x1 = XEXP (x0, 0);
  goto L1548;

 L892: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L893;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L893: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 918 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 108;  /* *tst_extzv_1_n */
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L984: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L985;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L985: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -65536L)
    goto L986;
  x1 = XEXP (x0, 0);
  goto L1548;

 L986: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 117;  /* *tstsi_upper */
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L979: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1035 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 116;  /* *tstsi */
    }
  x2 = XEXP (x1, 0);
  goto L3937;

 L1008: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1009;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L1009: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1094 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 121;  /* cmpsi */
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L1534: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    case HImode:
      goto L3944;
    case SImode:
      goto L3945;
    default:
      break;
    }
 L1464: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L1483;
    case LABEL_REF:
      goto L1507;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1548;

 L3944: ATTRIBUTE_UNUSED_LABEL
  if (jump_address_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1535;
    }
  goto L1464;

 L1535: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2465 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 195;  /* *indirect_jump_h8300 */
    }
 L1543: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2479 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && TARGET_NORMAL_MODE))
    {
      return 197;  /* *indirect_jump_h8300hs_normal */
    }
  x1 = XEXP (x0, 1);
  goto L1464;

 L3945: ATTRIBUTE_UNUSED_LABEL
  if (jump_address_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1539;
    }
  goto L1464;

 L1539: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2472 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_NORMAL_MODE))
    {
      return 196;  /* *indirect_jump_h8300hs_advanced */
    }
  x1 = XEXP (x0, 1);
  goto L1464;

 L1483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case EQ:
      goto L1484;
    case NE:
      goto L1496;
    default:
     break;
   }
 L1465: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L1466;
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L1484: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == ZERO_EXTRACT)
    goto L1485;
  goto L1465;

 L1485: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (bit_memory_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L1486;
    }
  goto L1465;

 L1486: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1487;
  goto L1465;

 L1487: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1488;
    }
  goto L1465;

 L1488: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1489;
  goto L1465;

 L1489: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1490;
  x2 = XEXP (x1, 0);
  goto L1465;

 L1490: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L1491;

 L1491: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 2329 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 189;  /* *brabc */
    }
  x2 = XEXP (x1, 0);
  goto L1465;

 L1496: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == ZERO_EXTRACT)
    goto L1497;
  goto L1465;

 L1497: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (bit_memory_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L1498;
    }
  goto L1465;

 L1498: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1499;
  goto L1465;

 L1499: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1500;
    }
  goto L1465;

 L1500: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1501;
  goto L1465;

 L1501: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1502;
  x2 = XEXP (x1, 0);
  goto L1465;

 L1502: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L1503;

 L1503: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 2358 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 190;  /* *brabs */
    }
  x2 = XEXP (x1, 0);
  goto L1465;

 L1466: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L1467;
  x1 = XEXP (x0, 0);
  goto L1548;

 L1467: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1468;
  x1 = XEXP (x0, 0);
  goto L1548;

 L1468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L1469;
    case PC:
      goto L1478;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1548;

 L1469: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L1470;

 L1470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 187;  /* branch_true */
    }
  x1 = XEXP (x0, 0);
  goto L1548;

 L1478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1479;
  x1 = XEXP (x0, 0);
  goto L1548;

 L1479: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 188;  /* branch_false */

 L1507: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  return 191;  /* jump */

 L1549: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L1550;
  x1 = XEXP (x0, 0);
  goto L1573;

 L1550: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (call_insn_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1551;
    }
  x1 = XEXP (x0, 0);
  goto L1573;

 L1551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      return 199;  /* call_value */
    }
  x1 = XEXP (x0, 0);
  goto L1573;

 L3679: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == ZERO_EXTRACT)
    goto L1783;
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1574;
    }
 L3675: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1669;
    }
 L3676: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1675;
    }
 L3680: ATTRIBUTE_UNUSED_LABEL
  if (bit_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1789;
    }
  goto L2388;

 L1783: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1784;
    }
  goto L2388;

 L1784: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1785;
  goto L2388;

 L1785: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1786;
    }
  goto L2388;

 L1786: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, HImode))
    {
      operands[2] = x1;
      return 238;  /* *h8300.md:3345 */
    }
  x1 = XEXP (x0, 0);
  goto L2388;

 L1574: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L3946;
  x1 = XEXP (x0, 0);
  goto L3675;

 L3946: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L1575;
    case SIGN_EXTEND:
      goto L1610;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L3675;

 L1575: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand_src (x2, QImode))
    {
      operands[1] = x2;
      goto L1576;
    }
  x1 = XEXP (x0, 0);
  goto L3675;

 L1576: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2678 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 206;  /* *zero_extendqihi2_h8300 */
    }
 L1581: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2687 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 207;  /* *zero_extendqihi2_h8300hs */
    }
  x1 = XEXP (x0, 0);
  goto L3675;

 L1610: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand_src (x2, QImode))
    {
      operands[1] = x2;
      goto L1611;
    }
 L1615: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1616;
    }
  x1 = XEXP (x0, 0);
  goto L3675;

 L1611: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2802 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 213;  /* *extendqihi2_h8300 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L1615;

 L1616: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2811 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 214;  /* *extendqihi2_h8300hs */
    }
  x1 = XEXP (x0, 0);
  goto L3675;

 L1669: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (h8sx_unary_shift_operator (x1, HImode))
    {
      operands[3] = x1;
      goto L1670;
    }
  x1 = XEXP (x0, 0);
  goto L3676;

 L1670: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1671;
    }
  x1 = XEXP (x0, 0);
  goto L3676;

 L1671: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1672;
    }
  x1 = XEXP (x0, 0);
  goto L3676;

 L1672: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2981 "../.././gcc/config/h8300/h8300.md"
(h8300_operands_match_p (operands)))
    {
      return 223;  /* *h8300.md:2976 */
    }
  x1 = XEXP (x0, 0);
  goto L3676;

 L1675: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L3950;
  x1 = XEXP (x0, 0);
  goto L3680;

 L3950: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ROTATE:
      goto L1725;
    case ZERO_EXTRACT:
      goto L1736;
    case IOR:
      goto L2124;
    case ASHIFT:
    case ASHIFTRT:
    case LSHIFTRT:
      goto L3948;
    default:
      goto L3949;
   }
 L3948: ATTRIBUTE_UNUSED_LABEL
  if (h8sx_binary_shift_operator (x1, HImode))
    {
      operands[3] = x1;
      goto L1676;
    }
 L3949: ATTRIBUTE_UNUSED_LABEL
  if (nshift_operator (x1, HImode))
    {
      operands[3] = x1;
      goto L1689;
    }
  if (eqne_operator (x1, HImode))
    {
      operands[1] = x1;
      goto L1823;
    }
 L3953: ATTRIBUTE_UNUSED_LABEL
  if (iorxor_operator (x1, HImode))
    {
      operands[1] = x1;
      goto L2089;
    }
  x1 = XEXP (x0, 0);
  goto L3680;

 L1725: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1726;
    }
  x1 = XEXP (x0, 0);
  goto L3680;

 L1726: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      return 230;  /* rotlhi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L3680;

 L1736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode)
    goto L3956;
  x1 = XEXP (x0, 0);
  goto L3680;

 L3956: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == XOR)
    goto L1744;
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1737;
    }
  x1 = XEXP (x0, 0);
  goto L3680;

 L1744: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1745;
    }
  x1 = XEXP (x0, 0);
  goto L3680;

 L1745: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L1746;
    }
  x1 = XEXP (x0, 0);
  goto L3680;

 L1746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1747;
  x1 = XEXP (x0, 0);
  goto L3680;

 L1747: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1748;
    }
  x1 = XEXP (x0, 0);
  goto L3680;

 L1748: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3220 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300 || TARGET_H8300SX)
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])))
    {
      return 233;  /* *h8300.md:3214 */
    }
  x1 = XEXP (x0, 0);
  goto L3680;

 L1737: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1738;
  x1 = XEXP (x0, 0);
  goto L3680;

 L1738: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1739;
    }
  x1 = XEXP (x0, 0);
  goto L3680;

 L1739: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3206 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 232;  /* *h8300.md:3201 */
    }
  x1 = XEXP (x0, 0);
  goto L3680;

 L2124: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode)
    goto L3957;
  goto L3953;

 L3957: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L2125;
    case LSHIFTRT:
      goto L2132;
    case ZERO_EXTEND:
      goto L2139;
    default:
     break;
   }
  goto L3953;

 L2125: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2126;
    }
  goto L3953;

 L2126: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2127;
  goto L3953;

 L2127: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      return 277;  /* *iorhi3_ashift_8 */
    }
  goto L3953;

 L2132: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2133;
    }
  goto L3953;

 L2133: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2134;
  goto L3953;

 L2134: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      return 278;  /* *iorhi3_lshiftrt_8 */
    }
  goto L3953;

 L2139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode)
    goto L3960;
  goto L3953;

 L3960: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2140;
    }
 L3961: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2148;
    }
  goto L3953;

 L2140: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFT)
    goto L2141;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3961;

 L2141: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2142;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3961;

 L2142: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    {
      return 279;  /* *iorhi3_two_qi */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3961;

 L2148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFT)
    goto L2149;
  goto L3953;

 L2149: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L2150;
  goto L3953;

 L2150: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (memory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2151;
    }
  goto L3953;

 L2151: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    {
      return 280;  /* *iorhi3_two_qi_mem */
    }
  goto L3953;

 L1676: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1677;
    }
  goto L3949;

 L1677: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      return 224;  /* *h8300.md:2986 */
    }
  goto L3949;

 L1689: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1690;
    }
  x1 = XEXP (x0, 0);
  goto L3680;

 L1690: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1691;
    }
  x1 = XEXP (x0, 0);
  goto L3680;

 L1691: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 225;  /* *shifthi */
    }
  x1 = XEXP (x0, 0);
  goto L3680;

 L1823: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L1824;
  x1 = XEXP (x0, 0);
  goto L3680;

 L1824: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 3497 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 243;  /* *bstzhireg */
    }
  x1 = XEXP (x0, 0);
  goto L3680;

 L2089: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L2090;
  x1 = XEXP (x0, 0);
  goto L3680;

 L2090: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2091;
    }
  x1 = XEXP (x0, 0);
  goto L3680;

 L2091: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      return 272;  /* *ixorhi3_zext */
    }
  x1 = XEXP (x0, 0);
  goto L3680;

 L1789: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L3962;
  x1 = XEXP (x0, 0);
  goto L2388;

 L3962: ATTRIBUTE_UNUSED_LABEL
  if (bit_operator (x1, HImode))
    {
      operands[4] = x1;
      goto L1790;
    }
 L3963: ATTRIBUTE_UNUSED_LABEL
  if (bit_operator (x1, HImode))
    {
      operands[5] = x1;
      goto L1798;
    }
  x1 = XEXP (x0, 0);
  goto L2388;

 L1790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L1791;
  goto L3963;

 L1791: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1792;
    }
  goto L3963;

 L1792: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1793;
  goto L3963;

 L1793: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (immediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1794;
    }
  goto L3963;

 L1794: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (bit_operand (x2, HImode))
    {
      operands[3] = x2;
      return 239;  /* *h8300.md:3416 */
    }
  goto L3963;

 L1798: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L1799;
  x1 = XEXP (x0, 0);
  goto L2388;

 L1799: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1800;
    }
  x1 = XEXP (x0, 0);
  goto L2388;

 L1800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1801;
  x1 = XEXP (x0, 0);
  goto L2388;

 L1801: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (immediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1802;
    }
  x1 = XEXP (x0, 0);
  goto L2388;

 L1802: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L1803;
  x1 = XEXP (x0, 0);
  goto L2388;

 L1803: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L1804;
    }
  x1 = XEXP (x0, 0);
  goto L2388;

 L1804: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1805;
  x1 = XEXP (x0, 0);
  goto L2388;

 L1805: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (immediate_operand (x3, HImode))
    {
      operands[4] = x3;
      return 240;  /* *h8300.md:3427 */
    }
  x1 = XEXP (x0, 0);
  goto L2388;

 L3684: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == ZERO_EXTRACT)
    goto L1940;
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1584;
    }
 L3677: ATTRIBUTE_UNUSED_LABEL
  if (h8300_dst_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1694;
    }
 L3678: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1700;
    }
  goto L2388;

 L1940: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1941;
    }
  goto L2388;

 L1941: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3964;
  goto L2388;

 L3964: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 1L:
        goto L1942;
      case 8L:
        goto L1966;
      default:
        break;
      }
  goto L2388;

 L1942: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1943;
    }
  goto L2388;

 L1943: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3967;
  x1 = XEXP (x0, 0);
  goto L2388;

 L3967: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == LSHIFTRT)
    goto L1951;
  if (register_operand (x1, SImode))
    {
      operands[2] = x1;
      goto L1944;
    }
  x1 = XEXP (x0, 0);
  goto L2388;

 L1951: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1952;
    }
  x1 = XEXP (x0, 0);
  goto L2388;

 L1952: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3968;
  x1 = XEXP (x0, 0);
  goto L2388;

 L3968: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1953;
    }
 L3969: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 16L
      && 
#line 3732 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) < 16))
    {
      return 257;  /* *insv_si_1_n_lshiftrt_16 */
    }
  x1 = XEXP (x0, 0);
  goto L2388;

 L1953: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3720 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) < 16
   && INTVAL (operands[3]) < 16))
    {
      return 256;  /* *insv_si_1_n_lshiftrt */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3969;

 L1944: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3709 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) < 16))
    {
      return 255;  /* *insv_si_1_n */
    }
  x1 = XEXP (x0, 0);
  goto L2388;

 L1966: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1967;
  goto L2388;

 L1967: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3971;
  x1 = XEXP (x0, 0);
  goto L2388;

 L3971: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == LSHIFTRT)
    goto L1975;
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L1968;
    }
  x1 = XEXP (x0, 0);
  goto L2388;

 L1975: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1976;
    }
  x1 = XEXP (x0, 0);
  goto L2388;

 L1976: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 3752 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 259;  /* *insv_si_8_8_lshiftrt_8 */
    }
  x1 = XEXP (x0, 0);
  goto L2388;

 L1968: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3742 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 258;  /* *insv_si_8_8 */
    }
  x1 = XEXP (x0, 0);
  goto L2388;

 L1584: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3972;
  x1 = XEXP (x0, 0);
  goto L3677;

 L3972: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L1585;
    case SIGN_EXTEND:
      goto L1620;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L3677;

 L1585: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand_src (x2, QImode))
    {
      operands[1] = x2;
      goto L1586;
    }
 L1595: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1596;
    }
  if (general_operand_src (x2, HImode))
    {
      operands[1] = x2;
      goto L1601;
    }
 L1605: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1606;
    }
  x1 = XEXP (x0, 0);
  goto L3677;

 L1586: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2721 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 208;  /* *zero_extendqisi2_h8300 */
    }
 L1591: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2730 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX))
    {
      return 209;  /* *zero_extendqisi2_h8300hs */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L1595;

 L1596: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2763 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 210;  /* *zero_extendqisi2_h8sx */
    }
  x1 = XEXP (x0, 0);
  goto L3677;

 L1601: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2778 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 211;  /* *zero_extendhisi2_h8300 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L1605;

 L1606: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2788 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 212;  /* *zero_extendhisi2_h8300hs */
    }
  x1 = XEXP (x0, 0);
  goto L3677;

 L1620: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand_src (x2, QImode))
    {
      operands[1] = x2;
      goto L1621;
    }
 L1625: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1626;
    }
  if (general_operand_src (x2, HImode))
    {
      operands[1] = x2;
      goto L1636;
    }
 L1640: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1641;
    }
  x1 = XEXP (x0, 0);
  goto L3677;

 L1621: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2825 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 215;  /* *extendqisi2_h8300 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L1625;

 L1626: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2838 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX))
    {
      return 216;  /* *extendqisi2_h8300hs */
    }
 L1631: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2850 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 217;  /* *extendqisi2_h8sx */
    }
  x1 = XEXP (x0, 0);
  goto L3677;

 L1636: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2864 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 218;  /* *extendhisi2_h8300 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L1640;

 L1641: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2873 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 219;  /* *extendhisi2_h8300hs */
    }
  x1 = XEXP (x0, 0);
  goto L3677;

 L1694: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (h8sx_unary_shift_operator (x1, SImode))
    {
      operands[3] = x1;
      goto L1695;
    }
  x1 = XEXP (x0, 0);
  goto L3678;

 L1695: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1696;
    }
  x1 = XEXP (x0, 0);
  goto L3678;

 L1696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1697;
    }
  x1 = XEXP (x0, 0);
  goto L3678;

 L1697: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3037 "../.././gcc/config/h8300/h8300.md"
(h8300_operands_match_p (operands)))
    {
      return 226;  /* *h8300.md:3032 */
    }
  x1 = XEXP (x0, 0);
  goto L3678;

 L1700: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3976;
  x1 = XEXP (x0, 0);
  goto L2388;

 L3976: ATTRIBUTE_UNUSED_LABEL
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L2388;

 L3681: ATTRIBUTE_UNUSED_LABEL
  tem = recog_5 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L2388;

 L2389: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == IF_THEN_ELSE)
    goto L2390;
  goto ret0;

 L2390: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case EQ:
      goto L2391;
    case NE:
      goto L2404;
    default:
     break;
   }
  goto ret0;

 L2391: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L2392;
  goto ret0;

 L2392: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L2393;
  goto ret0;

 L2393: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, QImode))
    {
      operands[0] = x5;
      goto L2394;
    }
  goto ret0;

 L2394: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2395;
  goto ret0;

 L2395: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L2396;
  goto ret0;

 L2396: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2397;
  goto ret0;

 L2397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2398;
  goto ret0;

 L2398: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2399;

 L2399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 302;  /* *h8300.md:4426 */
    }
  goto ret0;

 L2404: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L2405;
  goto ret0;

 L2405: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L2406;
  goto ret0;

 L2406: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, QImode))
    {
      operands[0] = x5;
      goto L2407;
    }
  goto ret0;

 L2407: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2408;
  goto ret0;

 L2408: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L2409;
  goto ret0;

 L2409: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2410;
  goto ret0;

 L2410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2411;
  goto ret0;

 L2411: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2412;

 L2412: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 303;  /* *h8300.md:4446 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_7 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L4061;
    case HImode:
      goto L4062;
    case SImode:
      goto L4063;
    default:
      break;
    }
 L876: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case CC0:
      goto L877;
    case PC:
      goto L1511;
    default:
     break;
   }
  goto ret0;

 L4061: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1232;
    }
 L4064: ATTRIBUTE_UNUSED_LABEL
  if (general_operand_dst (x2, QImode))
    {
      operands[0] = x2;
      goto L2358;
    }
  goto L876;

 L1232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L4065;
  x2 = XEXP (x1, 0);
  goto L4064;

 L4065: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1233;
  if (nshift_operator (x2, QImode))
    {
      operands[3] = x2;
      goto L1657;
    }
  x2 = XEXP (x1, 0);
  goto L4064;

 L1233: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode)
    goto L4067;
  x2 = XEXP (x1, 0);
  goto L4064;

 L4067: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case UDIV:
      goto L1234;
    case DIV:
      goto L1249;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L4064;

 L1234: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L1235;
    }
  x2 = XEXP (x1, 0);
  goto L4064;

 L1235: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L1236;
  x2 = XEXP (x1, 0);
  goto L4064;

 L1236: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, QImode))
    {
      operands[2] = x5;
      goto L1237;
    }
  x2 = XEXP (x1, 0);
  goto L4064;

 L1237: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1238;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4064;

 L1238: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L1239;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4064;

 L1239: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == TRUNCATE)
    goto L1240;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4064;

 L1240: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == UMOD)
    goto L1241;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4064;

 L1241: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1242;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4064;

 L1242: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L1243;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4064;

 L1243: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    {
      return 153;  /* udivmodqi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4064;

 L1249: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L1250;
    }
  x2 = XEXP (x1, 0);
  goto L4064;

 L1250: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L1251;
  x2 = XEXP (x1, 0);
  goto L4064;

 L1251: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, QImode))
    {
      operands[2] = x5;
      goto L1252;
    }
  x2 = XEXP (x1, 0);
  goto L4064;

 L1252: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1253;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4064;

 L1253: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L1254;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4064;

 L1254: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == TRUNCATE)
    goto L1255;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4064;

 L1255: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == MOD)
    goto L1256;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4064;

 L1256: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1257;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4064;

 L1257: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L1258;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4064;

 L1258: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2])
      && 
#line 1636 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 154;  /* divmodqi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4064;

 L1657: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1658;
    }
  x2 = XEXP (x1, 0);
  goto L4064;

 L1658: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1659;
    }
  x2 = XEXP (x1, 0);
  goto L4064;

 L1659: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1660;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4064;

 L1660: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[4] = x2;
      return 222;  /* *shiftqi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4064;

 L2358: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 3)
    goto L2359;
  x2 = XEXP (x1, 0);
  goto L876;

 L2359: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L2360;
  x2 = XEXP (x1, 0);
  goto L876;

 L2360: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2361;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L2361: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L4069;
  x2 = XEXP (x1, 0);
  goto L876;

 L4069: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 16L:
        goto L2362;
      case 24L:
        goto L2378;
      default:
        break;
      }
  x2 = XEXP (x1, 0);
  goto L876;

 L2362: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2363;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L2363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2364;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L2364: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4411 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 300;  /* *h8300.md:4406 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L2378: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2379;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L2379: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2380;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L2380: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4421 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 301;  /* *h8300.md:4416 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L4062: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1262;
    }
  goto L876;

 L1262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L4071;
  x2 = XEXP (x1, 0);
  goto L876;

 L4071: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1263;
  if (nshift_operator (x2, HImode))
    {
      operands[3] = x2;
      goto L1682;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L1263: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L4073;
  x2 = XEXP (x1, 0);
  goto L876;

 L4073: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case UDIV:
      goto L1264;
    case DIV:
      goto L1279;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L876;

 L1264: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1265;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L1265: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L1266;
  x2 = XEXP (x1, 0);
  goto L876;

 L1266: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, HImode))
    {
      operands[2] = x5;
      goto L1267;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L1267: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1268;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L1269;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1269: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == TRUNCATE)
    goto L1270;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1270: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UMOD)
    goto L1271;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1271: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1272;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1272: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L1273;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1273: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2])
      && 
#line 1657 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 155;  /* udivmodhi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1279: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1280;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L1280: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L1281;
  x2 = XEXP (x1, 0);
  goto L876;

 L1281: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, HImode))
    {
      operands[2] = x5;
      goto L1282;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L1282: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1283;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L1284;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1284: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == TRUNCATE)
    goto L1285;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1285: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MOD)
    goto L1286;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1286: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1287;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1287: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L1288;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1288: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2])
      && 
#line 1678 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 156;  /* divmodhi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1682: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1683;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L1683: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1684;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L1684: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1685;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1685: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[4] = x2;
      return 225;  /* *shifthi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L4063: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1706;
    }
  goto L876;

 L1706: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L4076;
  x2 = XEXP (x1, 0);
  goto L876;

 L4076: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTRACT:
      goto L1993;
    case AND:
      goto L2022;
    case IOR:
      goto L2249;
    case PLUS:
      goto L2322;
    case ASHIFT:
    case ASHIFTRT:
    case LSHIFTRT:
      goto L4075;
    default:
      x2 = XEXP (x1, 0);
      goto L876;
   }
 L4075: ATTRIBUTE_UNUSED_LABEL
  if (nshift_operator (x2, SImode))
    {
      operands[3] = x2;
      goto L1707;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L1993: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1994;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L1994: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)])
    goto L1995;
  x2 = XEXP (x1, 0);
  goto L876;

 L1995: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1996;
  x2 = XEXP (x1, 0);
  goto L876;

 L1996: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1997;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1997: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1998;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1998: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3786 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H))
    {
      return 262;  /* *extzv_16_8 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L2022: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L2023;
  x2 = XEXP (x1, 0);
  goto L876;

 L2023: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2024;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L2024: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2025;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L2025: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2026;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L2026: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2027;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L2027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[4] = x2;
      goto L2028;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L2028: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3841 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) <= 15
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff)))
    {
      return 265;  /* *andsi3_ashift_n_lower */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L2249: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L4080;
  x2 = XEXP (x1, 0);
  goto L876;

 L4080: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L2250;
    case ASHIFT:
      goto L2273;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L876;

 L2250: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == LSHIFTRT)
    goto L2251;
  x2 = XEXP (x1, 0);
  goto L876;

 L2251: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L2252;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L2252: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (9)])
    goto L2253;
  x2 = XEXP (x1, 0);
  goto L876;

 L2253: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4194304L)
    goto L2254;
  x2 = XEXP (x1, 0);
  goto L876;

 L2254: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2255;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L2255: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2256;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L2256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L2257;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L2257: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4197 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)))
    {
      return 291;  /* *iorsi3_and_lshiftrt_9_sb */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L2273: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2274;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L2274: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (23)])
    goto L2275;
  x2 = XEXP (x1, 0);
  goto L876;

 L2275: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2276;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L2276: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2277;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L2277: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2278;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L2278: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4215 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 292;  /* *iorsi3_shift */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L2322: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2323;
  x2 = XEXP (x1, 0);
  goto L876;

 L2323: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2324;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L2324: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8388608L)
    goto L2325;
  x2 = XEXP (x1, 0);
  goto L876;

 L2325: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2326;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L2326: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2327;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L2327: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2328;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L2328: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4318 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return 296;  /* *addsi3_shift */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1707: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1708;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L1708: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1709;
    }
  x2 = XEXP (x1, 0);
  goto L876;

 L1709: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1710;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L1710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[4] = x2;
      return 228;  /* *shiftsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L876;

 L877: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L878;
  goto ret0;

 L878: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L907;
  goto ret0;

 L907: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L4083;
  if (general_operand_src (x4, QImode))
    {
      operands[0] = x4;
      goto L880;
    }
  goto ret0;

 L4083: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == ZERO_EXTEND)
    goto L938;
  if (register_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L908;
    }
  goto ret0;

 L938: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (general_operand_src (x5, QImode))
    {
      operands[0] = x5;
      goto L939;
    }
  goto ret0;

 L939: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L940;
  goto ret0;

 L940: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == AND)
    goto L941;
  goto ret0;

 L941: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L942;
    }
  goto ret0;

 L942: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L943;
  goto ret0;

 L943: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L944;
  goto ret0;

 L944: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L945;
  goto ret0;

 L945: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L946;
    }
  goto ret0;

 L946: ATTRIBUTE_UNUSED_LABEL
  if (
#line 988 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)))
    {
      return 112;  /* *tstsi_variable_bit_qi */
    }
  goto ret0;

 L908: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L909;
  goto ret0;

 L909: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L910;
    }
  goto ret0;

 L910: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L911;
  goto ret0;

 L911: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L912;
  goto ret0;

 L912: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L913;
    }
  goto ret0;

 L913: ATTRIBUTE_UNUSED_LABEL
  if (
#line 953 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) >= 16))
    {
      return 110;  /* *tstsi_upper_bit */
    }
  goto ret0;

 L880: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L881;
  goto ret0;

 L881: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L882;
    }
  goto ret0;

 L882: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L883;
  goto ret0;

 L883: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L884;
  goto ret0;

 L884: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L885;
    }
  goto ret0;

 L885: ATTRIBUTE_UNUSED_LABEL
  if (
#line 918 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)))
    {
      return 108;  /* *tst_extzv_1_n */
    }
  goto ret0;

 L1511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L4084;
    case SImode:
      goto L4085;
    default:
      break;
    }
  goto ret0;

 L4084: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1512;
    }
  goto ret0;

 L1512: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1513;
  goto ret0;

 L1513: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1514;
  goto ret0;

 L1514: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1515;

 L1515: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2435 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      return 192;  /* *tablejump_h8300 */
    }
 L1531: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2451 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && TARGET_NORMAL_MODE))
    {
      return 194;  /* *tablejump_h8300hs_normal */
    }
  goto ret0;

 L4085: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1520;
    }
  goto ret0;

 L1520: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1521;
  goto ret0;

 L1521: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1522;
  goto ret0;

 L1522: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1523;

 L1523: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2443 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_NORMAL_MODE))
    {
      return 193;  /* *tablejump_h8300hs_advanced */
    }
  goto ret0;
 ret0:
  return -1;
}

int
recog (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case SET:
      goto L1;
    case PARALLEL:
      goto L3645;
    case CALL:
      goto L1545;
    case CONST_INT:
      goto L3648;
    case RETURN:
      goto L3652;
    case UNSPEC_VOLATILE:
      goto L3653;
    default:
     break;
   }
  goto ret0;

 L1: ATTRIBUTE_UNUSED_LABEL
  return recog_6 (x0, insn, pnum_clobbers);

 L3645: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 5:
      goto L49;
    case 4:
      goto L81;
    case 2:
      goto L875;
    default:
      break;
    }
 L3649: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) >= 1
      && h8300_ldm_parallel (x0, VOIDmode))
    {
      operands[0] = x0;
      goto L1554;
    }
 L3650: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) >= 1
      && h8300_stm_parallel (x0, VOIDmode))
    {
      operands[0] = x0;
      goto L1559;
    }
 L3651: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) >= 2
      && h8300_return_parallel (x0, VOIDmode))
    {
      operands[0] = x0;
      goto L1564;
    }
  goto ret0;

 L49: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L50;
  goto L3649;

 L50: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L51;
  goto L3649;

 L51: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L4057;
    case SImode:
      goto L4058;
    default:
      break;
    }
  goto L3649;

 L4057: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L52;
    }
  goto L3649;

 L52: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L53;
  goto L3649;

 L53: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[4] = x3;
      goto L54;
    }
  goto L3649;

 L54: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 100)
    goto L55;
  goto L3649;

 L55: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, HImode))
    {
      operands[5] = x2;
      goto L56;
    }
  goto L3649;

 L56: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, HImode))
    {
      operands[6] = x2;
      goto L57;
    }
  goto L3649;

 L57: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L58;
  goto L3649;

 L58: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L59;
    }
  goto L3649;

 L59: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L60;
  goto L3649;

 L60: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L61;
    }
  goto L3649;

 L61: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET)
    goto L62;
  goto L3649;

 L62: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L63;
    }
  goto L3649;

 L63: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 564 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && TARGET_NORMAL_MODE))
    {
      return 12;  /* movmd_internal_normal */
    }
  goto L3649;

 L4058: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L68;
    }
  goto L3649;

 L68: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L69;
  goto L3649;

 L69: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L70;
    }
  goto L3649;

 L70: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 100)
    goto L71;
  goto L3649;

 L71: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, HImode))
    {
      operands[5] = x2;
      goto L72;
    }
  goto L3649;

 L72: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, HImode))
    {
      operands[6] = x2;
      goto L73;
    }
  goto L3649;

 L73: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L74;
  goto L3649;

 L74: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L75;
    }
  goto L3649;

 L75: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L76;
  goto L3649;

 L76: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L77;
    }
  goto L3649;

 L77: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET)
    goto L78;
  goto L3649;

 L78: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L79;
    }
  goto L3649;

 L79: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 581 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && !TARGET_NORMAL_MODE))
    {
      return 13;  /* movmd_internal */
    }
  goto L3649;

 L81: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L82;
  goto L3649;

 L82: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L83;
  goto L3649;

 L83: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L4059;
    case SImode:
      goto L4060;
    default:
      break;
    }
  goto L3649;

 L4059: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L84;
    }
  goto L3649;

 L84: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 101)
    goto L85;
  goto L3649;

 L85: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == BLKmode
      && GET_CODE (x3) == MEM)
    goto L86;
  goto L3649;

 L86: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[4] = x4;
      goto L87;
    }
  goto L3649;

 L87: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L88;
  goto L3649;

 L88: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L89;
    }
  goto L3649;

 L89: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L90;
  goto L3649;

 L90: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L91;
    }
  goto L3649;

 L91: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L92;
  goto L3649;

 L92: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L93;
    }
  goto L3649;

 L93: ATTRIBUTE_UNUSED_LABEL
  if (
#line 691 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && TARGET_NORMAL_MODE))
    {
      return 14;  /* stpcpy_internal_normal */
    }
  goto L3649;

 L4060: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L98;
    }
  goto L3649;

 L98: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 101)
    goto L99;
  goto L3649;

 L99: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == BLKmode
      && GET_CODE (x3) == MEM)
    goto L100;
  goto L3649;

 L100: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L101;
    }
  goto L3649;

 L101: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L102;
  goto L3649;

 L102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L103;
    }
  goto L3649;

 L103: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L104;
  goto L3649;

 L104: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L105;
    }
  goto L3649;

 L105: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L106;
  goto L3649;

 L106: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L107;
    }
  goto L3649;

 L107: ATTRIBUTE_UNUSED_LABEL
  if (
#line 705 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && !TARGET_NORMAL_MODE))
    {
      return 15;  /* stpcpy_internal */
    }
  goto L3649;

 L875: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1231;
  goto L3649;

 L1231: ATTRIBUTE_UNUSED_LABEL
  tem = recog_7 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L3649;

 L1554: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1555;
  goto L3650;

 L1555: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1556;
    }
  goto L3650;

 L1556: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1557;
    }
  goto L3650;

 L1557: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2581 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S))
    {
      return 201;  /* ldm_h8300sx */
    }
  goto L3650;

 L1559: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1560;
  goto L3651;

 L1560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1561;
    }
  goto L3651;

 L1561: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1562;
    }
  goto L3651;

 L1562: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2594 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S))
    {
      return 202;  /* stm_h8300sx */
    }
  goto L3651;

 L1564: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == RETURN)
    goto L1565;
  goto ret0;

 L1565: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1566;
  goto ret0;

 L1566: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1567;
    }
  goto ret0;

 L1567: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1568;
    }
  goto ret0;

 L1568: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2608 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return 203;  /* return_h8sx */
    }
  goto ret0;

 L1545: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (call_insn_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1546;
    }
  goto ret0;

 L1546: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    {
      operands[1] = x1;
      return 198;  /* call */
    }
  goto ret0;

 L3648: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x0, 0) == 0L)
    {
      return 200;  /* nop */
    }
  goto ret0;

 L3652: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2628 "../.././gcc/config/h8300/h8300.md"
(reload_completed))
    {
      return 204;  /* *return_1 */
    }
  goto ret0;

 L3653: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 1
      && XINT (x0, 1) == 1)
    goto L1571;
  goto ret0;

 L1571: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 205;  /* monitor_prologue */
    }
  goto ret0;
 ret0:
  return -1;
}

static rtx
split_1 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  switch (XVECLEN (x0, 0))
    {
    case 5:
      goto L2414;
    case 4:
      goto L2442;
    case 2:
      goto L2466;
    default:
      break;
    }
  goto ret0;

 L2414: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L2415;
  goto ret0;

 L2415: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[0] = x2;
      goto L2416;
    }
  goto ret0;

 L2416: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L2417;
    }
  goto ret0;

 L2417: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 100)
    goto L2418;
  goto ret0;

 L2418: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L2419;
    }
  goto ret0;

 L2419: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L2420;
    }
  goto ret0;

 L2420: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2421;
  goto ret0;

 L2421: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L4089;
    case SImode:
      goto L4090;
    default:
      break;
    }
  goto ret0;

 L4089: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L2422;
    }
  goto ret0;

 L2422: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L2423;
  goto ret0;

 L2423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[5] = x2;
      goto L2424;
    }
  goto ret0;

 L2424: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET)
    goto L2425;
  goto ret0;

 L2425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[2]))
    goto L2426;
  goto ret0;

 L2426: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 609 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && TARGET_NORMAL_MODE
   && reload_completed
   && REGNO (operands[4]) != DESTINATION_REG))
    {
      return gen_split_309 (insn, operands);
    }
  goto ret0;

 L4090: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L2436;
    }
  goto ret0;

 L2436: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L2437;
  goto ret0;

 L2437: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L2438;
    }
  goto ret0;

 L2438: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET)
    goto L2439;
  goto ret0;

 L2439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[2]))
    goto L2440;
  goto ret0;

 L2440: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 632 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && !TARGET_NORMAL_MODE
   && reload_completed
   && REGNO (operands[4]) != DESTINATION_REG))
    {
      return gen_split_310 (insn, operands);
    }
  goto ret0;

 L2442: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L2443;
  goto ret0;

 L2443: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[0] = x2;
      goto L2444;
    }
  goto ret0;

 L2444: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 101)
    goto L2445;
  goto ret0;

 L2445: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, BLKmode))
    {
      operands[1] = x3;
      goto L2446;
    }
  goto ret0;

 L2446: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2447;
  goto ret0;

 L2447: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L4091;
    case SImode:
      goto L4092;
    default:
      break;
    }
  goto ret0;

 L4091: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L2448;
    }
  goto ret0;

 L2448: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2449;
  goto ret0;

 L2449: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L2450;
    }
  goto ret0;

 L2450: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L2451;
  goto ret0;

 L2451: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L2452;
    }
  goto ret0;

 L2452: ATTRIBUTE_UNUSED_LABEL
  if (
#line 720 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && TARGET_NORMAL_MODE
   && reload_completed
   && REGNO (operands[2]) != DESTINATION_REG))
    {
      return gen_split_313 (insn, operands);
    }
  goto ret0;

 L4092: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2460;
    }
  goto ret0;

 L2460: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2461;
  goto ret0;

 L2461: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2462;
    }
  goto ret0;

 L2462: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L2463;
  goto ret0;

 L2463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L2464;
    }
  goto ret0;

 L2464: ATTRIBUTE_UNUSED_LABEL
  if (
#line 740 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && !TARGET_NORMAL_MODE
   && reload_completed
   && REGNO (operands[2]) != DESTINATION_REG))
    {
      return gen_split_314 (insn, operands);
    }
  goto ret0;

 L2466: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L2652;
  goto ret0;

 L2652: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2653;
    }
  if (GET_CODE (x2) == CC0)
    goto L2468;
 L2568: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2569;
    }
  goto ret0;

 L2653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L4093;
  x2 = XEXP (x1, 0);
  goto L2568;

 L4093: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L2654;
    case IOR:
      goto L2718;
    case PLUS:
      goto L2762;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2568;

 L2654: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L2655;
  x2 = XEXP (x1, 0);
  goto L2568;

 L2655: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2656;
    }
  x2 = XEXP (x1, 0);
  goto L2568;

 L2656: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2657;
    }
  x2 = XEXP (x1, 0);
  goto L2568;

 L2657: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2658;
    }
  x2 = XEXP (x1, 0);
  goto L2568;

 L2658: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2659;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2568;

 L2659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[4] = x2;
      goto L2660;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2568;

 L2660: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3841 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) <= 15
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff)) && 
#line 3845 "../.././gcc/config/h8300/h8300.md"
( reload_completed)))
    {
      return gen_split_405 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2568;

 L2718: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L2719;
  x2 = XEXP (x1, 0);
  goto L2568;

 L2719: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2720;
    }
  x2 = XEXP (x1, 0);
  goto L2568;

 L2720: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (23)])
    goto L2721;
  x2 = XEXP (x1, 0);
  goto L2568;

 L2721: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L2722;
  x2 = XEXP (x1, 0);
  goto L2568;

 L2722: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2723;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2568;

 L2723: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2724;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2568;

 L2724: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4224 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && epilogue_completed
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])))
    {
      return gen_split_412 (insn, operands);
    }
 L2735: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4244 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && epilogue_completed
   && !(find_regno_note (insn, REG_DEAD, REGNO (operands[1]))
        && REGNO (operands[0]) != REGNO (operands[1]))))
    {
      return gen_split_413 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2568;

 L2762: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2763;
  x2 = XEXP (x1, 0);
  goto L2568;

 L2763: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2764;
    }
  x2 = XEXP (x1, 0);
  goto L2568;

 L2764: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8388608L)
    goto L2765;
  x2 = XEXP (x1, 0);
  goto L2568;

 L2765: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L2766;
  x2 = XEXP (x1, 0);
  goto L2568;

 L2766: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2767;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2568;

 L2767: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2768;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2568;

 L2768: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4327 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && epilogue_completed
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])))
    {
      return gen_split_416 (insn, operands);
    }
 L2779: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4347 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && epilogue_completed
   && !(find_regno_note (insn, REG_DEAD, REGNO (operands[1]))
        && REGNO (operands[0]) != REGNO (operands[1]))))
    {
      return gen_split_417 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2568;

 L2468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L2469;
  goto ret0;

 L2469: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L2482;
  goto ret0;

 L2482: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L4097;
  if (general_operand_src (x4, QImode))
    {
      operands[0] = x4;
      goto L2471;
    }
  goto ret0;

 L4097: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == ZERO_EXTEND)
    goto L2495;
  if (register_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L2483;
    }
  goto ret0;

 L2495: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (general_operand_src (x5, QImode))
    {
      operands[0] = x5;
      goto L2496;
    }
  goto ret0;

 L2496: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2497;
  goto ret0;

 L2497: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == AND)
    goto L2498;
  goto ret0;

 L2498: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L2499;
    }
  goto ret0;

 L2499: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L2500;
  goto ret0;

 L2500: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2501;
  goto ret0;

 L2501: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2502;
  goto ret0;

 L2502: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2503;
    }
  goto ret0;

 L2503: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 988 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)) && 
#line 993 "../.././gcc/config/h8300/h8300.md"
( reload_completed
   && !satisfies_constraint_U (operands[0]))))
    {
      return gen_split_318 (insn, operands);
    }
  goto ret0;

 L2483: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2484;
  goto ret0;

 L2484: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2485;
    }
  goto ret0;

 L2485: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2486;
  goto ret0;

 L2486: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2487;
  goto ret0;

 L2487: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2488;
    }
  goto ret0;

 L2488: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 953 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) >= 16) && 
#line 956 "../.././gcc/config/h8300/h8300.md"
( reload_completed)))
    {
      return gen_split_317 (insn, operands);
    }
  goto ret0;

 L2471: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2472;
  goto ret0;

 L2472: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2473;
    }
  goto ret0;

 L2473: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2474;
  goto ret0;

 L2474: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2475;
  goto ret0;

 L2475: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2476;
    }
  goto ret0;

 L2476: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 918 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)) && 
#line 923 "../.././gcc/config/h8300/h8300.md"
( reload_completed
   && !satisfies_constraint_U (operands[0]))))
    {
      return gen_split_316 (insn, operands);
    }
  goto ret0;

 L2569: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nshift_operator (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2570;
    }
  goto ret0;

 L2570: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2571;
  goto ret0;

 L2571: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2572;
    }
  goto ret0;

 L2572: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2573;
  goto ret0;

 L2573: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L2574;
    }
  goto ret0;

 L2574: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3074 "../.././gcc/config/h8300/h8300.md"
(epilogue_completed
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1]))))
    {
      return gen_split_388 (insn, operands);
    }
 L2583: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3105 "../.././gcc/config/h8300/h8300.md"
(epilogue_completed
   && !find_regno_note (insn, REG_DEAD, REGNO (operands[1]))))
    {
      return gen_split_389 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx
split_2 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case HImode:
      goto L4098;
    case SImode:
      goto L4100;
    case QImode:
      goto L4102;
    default:
      break;
    }
 L2787: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PC)
    goto L2788;
  goto ret0;

 L4098: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case REG:
      goto L4104;
    case MEM:
      goto L4105;
    default:
     break;
   }
 L4099: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L2519;
    }
  goto L2787;

 L4104: ATTRIBUTE_UNUSED_LABEL
  if (stack_pointer_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L2506;
    }
  goto L4099;

 L2506: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == PLUS)
    goto L2507;
  x1 = XEXP (x0, 0);
  goto L4099;

 L2507: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2508;
  x1 = XEXP (x0, 0);
  goto L4099;

 L2508: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_gt_2_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L2509;
    }
  x1 = XEXP (x0, 0);
  goto L4099;

 L2509: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1167 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300 && epilogue_completed))
    {
      return gen_split_321 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4099;

 L4105: ATTRIBUTE_UNUSED_LABEL
  if (bit_register_indirect_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L2530;
    }
  goto L2787;

 L2530: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L4106;
  x1 = XEXP (x0, 0);
  goto L2787;

 L4106: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L2531;
    case IOR:
      goto L2537;
    case XOR:
      goto L2543;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2531: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_register_indirect_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2532;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2532: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (single_zero_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L2533;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2533: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1704 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return gen_split_333 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2537: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_register_indirect_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2538;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (single_one_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L2539;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2539: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1848 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return gen_split_337 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_register_indirect_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2544;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2544: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (single_one_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L2545;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2545: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1925 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX))
    {
      return gen_split_341 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2519: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L4109;
  x1 = XEXP (x0, 0);
  goto L2787;

 L4109: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L2520;
    case ZERO_EXTEND:
      goto L2549;
    case IOR:
      goto L2688;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2521;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2521: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (two_insn_adds_subs_operand (x2, HImode))
    {
      operands[1] = x2;
      return gen_split_323 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand_src (x2, QImode))
    {
      operands[1] = x2;
      goto L2550;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2550: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2702 "../.././gcc/config/h8300/h8300.md"
(reload_completed))
    {
      return gen_split_370 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2688: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L2689;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2689: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2690;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2690: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFT)
    goto L2691;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2691: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L2692;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2692: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (memory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2693;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2693: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 4049 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && reload_completed
   && byte_accesses_mergeable_p (XEXP (operands[2], 0), XEXP (operands[1], 0))))
    {
      return gen_split_409 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L4100: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2524;
    }
  goto L2787;

 L2524: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L4112;
  x1 = XEXP (x0, 0);
  goto L2787;

 L4112: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L2671;
    case ZERO_EXTEND:
      goto L2554;
    case SIGN_EXTEND:
      goto L2564;
    case ZERO_EXTRACT:
      goto L2640;
    case AND:
      goto L2646;
    case IOR:
      goto L2697;
    case ASHIFT:
      goto L2783;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2671: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2672;
 L2525: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L2526;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2672: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L4120;
  goto L2525;

 L4120: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NOT)
    goto L2681;
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2673;
    }
  goto L2525;

 L2681: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2682;
    }
  goto L2525;

 L2682: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2683;
  goto L2525;

 L2683: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2684;
    }
  x2 = XEXP (x1, 0);
  goto L2525;

 L2684: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3937 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)) && 
#line 3939 "../.././gcc/config/h8300/h8300.md"
( reload_completed)))
    {
      return gen_split_408 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2525;

 L2673: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2674;
  goto L2525;

 L2674: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2675;
    }
  x2 = XEXP (x1, 0);
  goto L2525;

 L2675: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3914 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)) && 
#line 3916 "../.././gcc/config/h8300/h8300.md"
( reload_completed)))
    {
      return gen_split_407 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2525;

 L2526: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (two_insn_adds_subs_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2527;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2527: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1277 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      return gen_split_325 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2554: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand_src (x2, QImode))
    {
      operands[1] = x2;
      goto L2555;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2555: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2736 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX
   && reg_overlap_mentioned_p (operands[0], operands[1])
   && reload_completed))
    {
      return gen_split_372 (insn, operands);
    }
 L2560: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2751 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && reload_completed))
    {
      return gen_split_373 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2565;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2565: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2838 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX) && 
#line 2840 "../.././gcc/config/h8300/h8300.md"
( reload_completed)))
    {
      return gen_split_377 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2640: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2641;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2641: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2642;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2642: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (23)]
      && (
#line 3798 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)) && 
#line 3800 "../.././gcc/config/h8300/h8300.md"
( reload_completed)))
    {
      return gen_split_403 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2646: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L4121;
  x1 = XEXP (x0, 0);
  goto L2787;

 L4121: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L2647;
    case LSHIFTRT:
      goto L2665;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2647: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2648;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2648: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (15)])
    goto L2649;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 2147450880L
      && (
#line 3820 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)) && 
#line 3822 "../.././gcc/config/h8300/h8300.md"
( reload_completed)))
    {
      return gen_split_404 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2665: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2666;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2666: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (9)])
    goto L2667;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2667: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 4194304L
      && (
#line 3876 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)) && 
#line 3878 "../.././gcc/config/h8300/h8300.md"
( reload_completed)))
    {
      return gen_split_406 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2697: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L4123;
  x1 = XEXP (x0, 0);
  goto L2787;

 L4123: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L2698;
    case ASHIFT:
      goto L2740;
    case AND:
      goto L2749;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2698: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode)
    goto L4126;
  x1 = XEXP (x0, 0);
  goto L2787;

 L4126: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2699;
    }
 L4127: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2710;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2699: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2700;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4127;

 L2700: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L2701;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4127;

 L2701: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L2702;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4127;

 L2702: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (memory_operand (x5, QImode))
    {
      operands[2] = x5;
      goto L2703;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4127;

 L2703: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2704;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4127;

 L2704: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 65280L
      && (
#line 4074 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)) && 
#line 4076 "../.././gcc/config/h8300/h8300.md"
( reload_completed)))
    {
      return gen_split_410 (insn, operands);
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4127;

 L2710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L2711;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L2712;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2712: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2713;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2713: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && (
#line 4100 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)) && 
#line 4102 "../.././gcc/config/h8300/h8300.md"
( reload_completed)))
    {
      return gen_split_411 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2740: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2741;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2741: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)])
    goto L2742;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L2743;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2743: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2744;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2744: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (24)]
      && (
#line 4276 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)) && 
#line 4278 "../.././gcc/config/h8300/h8300.md"
( reload_completed)))
    {
      return gen_split_414 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2749: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L2750;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2750: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L2751;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2751: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (memory_operand (x5, QImode))
    {
      operands[1] = x5;
      goto L2752;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2752: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (16)])
    goto L2753;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2753: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16711680L)
    goto L2754;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2754: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L2755;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2755: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L2756;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2756: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (memory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2757;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2757: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (24)]
      && (
#line 4297 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)) && 
#line 4299 "../.././gcc/config/h8300/h8300.md"
( reload_completed)))
    {
      return gen_split_415 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2783: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L2784;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2784: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2785;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2785: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (7)]
      && (
#line 4369 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)) && 
#line 4371 "../.././gcc/config/h8300/h8300.md"
( reload_completed)))
    {
      return gen_split_418 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L4102: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == ZERO_EXTRACT)
    goto L2586;
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L2595;
    }
  goto L2787;

 L2586: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_memory_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L2587;
    }
  goto L2787;

 L2587: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2588;
  goto L2787;

 L2588: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2589;
    }
  goto L2787;

 L2589: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (eqne_operator (x1, QImode))
    {
      operands[2] = x1;
      goto L2590;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2590: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (h8300_dst_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2591;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2591: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8300_src_operand (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L2592;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2592: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3516 "../.././gcc/config/h8300/h8300.md"
(reload_completed))
    {
      return gen_split_398 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2595: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == IF_THEN_ELSE)
    goto L2596;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2596: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (eqne_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L2597;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2597: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (h8300_dst_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2598;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2598: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (h8300_src_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L2599;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2599: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L4128;
  x1 = XEXP (x0, 0);
  goto L2787;

 L4128: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case IOR:
      goto L2600;
    case AND:
      goto L2610;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2600: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (bit_memory_operand (x3, QImode))
    {
      operands[4] = x3;
      goto L2621;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2621: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == ASHIFT)
    goto L2622;
  if (single_one_operand (x3, QImode))
    {
      operands[5] = x3;
      goto L2602;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2622: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2623;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2623: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, QImode))
    {
      operands[5] = x4;
      goto L2624;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2624: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[4])
      && 
#line 3629 "../.././gcc/config/h8300/h8300.md"
(reload_completed))
    {
      return gen_split_401 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2602: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[4])
      && 
#line 3556 "../.././gcc/config/h8300/h8300.md"
(reload_completed))
    {
      return gen_split_399 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2610: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (bit_memory_operand (x3, QImode))
    {
      operands[4] = x3;
      goto L2633;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2633: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == ASHIFT)
    goto L2634;
  if (single_zero_operand (x3, QImode))
    {
      operands[5] = x3;
      goto L2612;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2634: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2635;
  x1 = XEXP (x0, 0);
  goto L2787;

 L2635: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, QImode))
    {
      operands[5] = x4;
      goto L2636;
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2636: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[4])
      && 
#line 3670 "../.././gcc/config/h8300/h8300.md"
(reload_completed))
    {
      return gen_split_402 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2612: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[4])
      && 
#line 3592 "../.././gcc/config/h8300/h8300.md"
(reload_completed))
    {
      return gen_split_400 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L2787;

 L2788: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == IF_THEN_ELSE)
    goto L2789;
  goto ret0;

 L2789: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case EQ:
      goto L2790;
    case NE:
      goto L2803;
    default:
     break;
   }
  goto ret0;

 L2790: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L2791;
  goto ret0;

 L2791: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L2792;
  goto ret0;

 L2792: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, QImode))
    {
      operands[0] = x5;
      goto L2793;
    }
  goto ret0;

 L2793: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2794;
  goto ret0;

 L2794: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L2795;
  goto ret0;

 L2795: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2796;
  goto ret0;

 L2796: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2797;
  goto ret0;

 L2797: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2798;

 L2798: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return gen_split_419 (insn, operands);
    }
  goto ret0;

 L2803: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L2804;
  goto ret0;

 L2804: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L2805;
  goto ret0;

 L2805: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, QImode))
    {
      operands[0] = x5;
      goto L2806;
    }
  goto ret0;

 L2806: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2807;
  goto ret0;

 L2807: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L2808;
  goto ret0;

 L2808: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2809;
  goto ret0;

 L2809: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2810;
  goto ret0;

 L2810: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2811;

 L2811: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return gen_split_420 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
split_insns (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case PARALLEL:
      goto L4086;
    case SET:
      goto L2505;
    default:
     break;
   }
  goto ret0;

 L4086: ATTRIBUTE_UNUSED_LABEL
  return split_1 (x0, insn);

 L2505: ATTRIBUTE_UNUSED_LABEL
  return split_2 (x0, insn);
 ret0:
  return 0;
}

static rtx
peephole2_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *_pmatch_len ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L4146;
    case HImode:
      goto L4147;
    default:
      break;
    }
 L3610: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L3611;
    }
  goto ret0;

 L4146: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L3005;
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3113;
    }
  goto L3610;

 L3005: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4149;
    case HImode:
      goto L4150;
    default:
      break;
    }
  goto L3610;

 L4149: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PRE_DEC)
    goto L3006;
  goto L3610;

 L3006: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L3007;
  goto L3610;

 L3007: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3008;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3008: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3009;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3009: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3010;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3010: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PRE_DEC)
    goto L3011;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3011: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L3012;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3012: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3013;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3013: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3014;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3015;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3015: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PRE_DEC)
    goto L3016;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3016: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L3017;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3017: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3018;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3018: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4709 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && !TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[2])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && REGNO (operands[2]) == REGNO (operands[0]) + 2
       && (TARGET_H8300SX || (REGNO (operands[0]) & 3) == 0))))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_433 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L4150: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PRE_DEC)
    goto L3023;
  goto L3610;

 L3023: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L3024;
  goto L3610;

 L3024: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3025;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3025: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3026;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3026: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3027;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3027: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PRE_DEC)
    goto L3028;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3028: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L3029;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3029: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3030;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3030: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3031;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3031: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3032;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3032: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PRE_DEC)
    goto L3033;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3033: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L3034;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3035;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3035: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4732 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[2])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && REGNO (operands[2]) == REGNO (operands[0]) + 2
       && (TARGET_H8300SX || (REGNO (operands[0]) & 3) == 0))))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_434 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3113: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L4151;
  x1 = XEXP (x0, 0);
  goto L3610;

 L4151: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L3114;
    case AND:
      goto L3525;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3115;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (incdec_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L3116;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3116: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3117;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3117: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L3118;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L3119;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3119: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3120;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3121;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3121: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3122;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L3123;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L3124;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3124: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L3125;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3125: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3126;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3126: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3127;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3127: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3128;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3128: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L3129;

 L3129: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 4924 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_441 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3525: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3526;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3526: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L4153;
  x1 = XEXP (x0, 0);
  goto L3610;

 L4153: ATTRIBUTE_UNUSED_LABEL
  if (const_int_qi_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3527;
    }
 L4154: ATTRIBUTE_UNUSED_LABEL
  if (const_int_hi_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3547;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3527: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3528;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4154;

 L3528: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L3529;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4154;

 L3529: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L3530;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4154;

 L3530: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3531;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4154;

 L3531: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3532;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4154;

 L3532: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3533;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4154;

 L3533: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L3534;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4154;

 L3534: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L3535;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4154;

 L3535: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L3536;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4154;

 L3536: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3537;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4154;

 L3537: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3538;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4154;

 L3538: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3539;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4154;

 L3539: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L3540;

 L3540: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5950 "../.././gcc/config/h8300/h8300.md"
(peep2_reg_dead_p (2, operands[0])))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_471 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4154;

 L3547: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3548;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3548: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L3549;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L3550;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3550: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3551;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3551: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3552;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3552: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3553;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3553: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L3554;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3554: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L3555;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3555: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L3556;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3556: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3557;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3557: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3558;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3558: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3559;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3559: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L3560;

 L3560: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5974 "../.././gcc/config/h8300/h8300.md"
(peep2_reg_dead_p (2, operands[0])))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_472 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L4147: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L3093;
    }
  goto L3610;

 L3093: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L4155;
  x1 = XEXP (x0, 0);
  goto L3610;

 L4155: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L3094;
    case AND:
      goto L3505;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3094: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3095;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (incdec_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L3096;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3096: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3097;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3097: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L3098;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3098: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L3099;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3099: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3100;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3100: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3101;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3101: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3102;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L3103;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3103: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L3104;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3104: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L3105;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3105: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3106;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3106: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3107;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3107: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3108;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3108: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L3109;

 L3109: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 4898 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_440 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3505: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3506;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3506: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_qi_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3507;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3507: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3508;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3508: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L3509;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3509: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L3510;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3510: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3511;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3511: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3512;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3512: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3513;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3513: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L3514;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L3515;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3515: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L3516;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3516: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3517;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3517: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3518;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3518: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3519;
  x1 = XEXP (x0, 0);
  goto L3610;

 L3519: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L3520;

 L3520: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5926 "../.././gcc/config/h8300/h8300.md"
(peep2_reg_dead_p (2, operands[0])))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_470 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3610;

 L3611: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (memory_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L3612;
    }
  goto ret0;

 L3612: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3613;
  goto ret0;

 L3613: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3614;
  goto ret0;

 L3614: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (h8sx_unary_memory_operator (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L3615;
    }
  goto ret0;

 L3615: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3616;
  goto ret0;

 L3616: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3617;
  goto ret0;

 L3617: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L3618;
    }
  goto ret0;

 L3618: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 6142 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[3])
   && h8sx_mergeable_memrefs_p (operands[3], operands[1])))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_476 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx
peephole2_2 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *_pmatch_len ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  switch (GET_CODE (x0))
    {
    case SET:
      goto L3038;
    case PARALLEL:
      goto L4157;
    default:
     break;
   }
  goto ret0;

 L3038: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L4158;
    case HImode:
      goto L4159;
    case QImode:
      goto L4161;
    default:
      break;
    }
 L3171: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L3172;
    }
 L3181: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3182;
    }
  goto ret0;

 L4158: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L3039;
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3083;
    }
  goto L3171;

 L3039: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4162;
    case HImode:
      goto L4163;
    default:
      break;
    }
  goto L3171;

 L4162: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PRE_DEC)
    goto L3040;
  goto L3171;

 L3040: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L3041;
  goto L3171;

 L3041: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3042;
    }
  x1 = XEXP (x0, 0);
  goto L3171;

 L3042: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3043;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3043: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3044;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3044: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PRE_DEC)
    goto L3045;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3045: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L3046;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3046: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3047;
    }
  x1 = XEXP (x0, 0);
  goto L3171;

 L3047: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4755 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && !TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[1])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && (TARGET_H8300SX || (REGNO (operands[0]) & 1) == 0))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_435 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3171;

 L4163: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PRE_DEC)
    goto L3052;
  goto L3171;

 L3052: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L3053;
  goto L3171;

 L3053: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3054;
    }
  x1 = XEXP (x0, 0);
  goto L3171;

 L3054: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3055;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3055: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3056;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PRE_DEC)
    goto L3057;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3057: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L3058;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3058: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3059;
    }
  x1 = XEXP (x0, 0);
  goto L3171;

 L3059: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4773 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[1])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && (TARGET_H8300SX || (REGNO (operands[0]) & 1) == 0))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_436 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3171;

 L3083: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3084;
    }
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3074;
    }
 L3163: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3164;
    }
  x1 = XEXP (x0, 0);
  goto L3171;

 L3084: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3085;
  x1 = XEXP (x0, 1);
  goto L3163;

 L3085: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3086;
  x1 = XEXP (x0, 1);
  goto L3163;

 L3086: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3087;
  x1 = XEXP (x0, 1);
  goto L3163;

 L3087: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3088;
  x1 = XEXP (x0, 1);
  goto L3163;

 L3088: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3089;
    }
  x1 = XEXP (x0, 1);
  goto L3163;

 L3089: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4860 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) != REGNO (operands[1])
   && !satisfies_constraint_L (operands[2])
   && !satisfies_constraint_N (operands[2])
   && ((INTVAL (operands[2]) & 0xff) == INTVAL (operands[2])
       || (INTVAL (operands[2]) & 0xff00) == INTVAL (operands[2])
       || INTVAL (operands[2]) == 0xffff
       || INTVAL (operands[2]) == 0xfffe)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_439 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  goto L3163;

 L3074: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3075;
  x1 = XEXP (x0, 1);
  goto L3163;

 L3075: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3076;
  x1 = XEXP (x0, 1);
  goto L3163;

 L3076: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3077;
  x1 = XEXP (x0, 1);
  goto L3163;

 L3077: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3078;
  x1 = XEXP (x0, 1);
  goto L3163;

 L3078: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3079;
    }
  x1 = XEXP (x0, 1);
  goto L3163;

 L3079: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4831 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && REG_P (operands[0]) && REG_P (operands[2])
   && REGNO (operands[0]) != REGNO (operands[2])
   && (satisfies_constraint_L (operands[1])
       || satisfies_constraint_N (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_438 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  goto L3163;

 L3164: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3165;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3165: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3166;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L3167;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3167: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3168;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3168: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 255L
      && 
#line 4992 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !(GET_CODE (operands[1]) == MEM && !offsettable_memref_p (operands[1]))
   && !(GET_CODE (operands[1]) == MEM && MEM_VOLATILE_P (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_444 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3171;

 L4159: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L3063;
    }
  goto L3171;

 L3063: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L3064;
    }
  x1 = XEXP (x0, 0);
  goto L3171;

 L3064: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3065;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3065: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3066;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3066: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L3067;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3067: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3068;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3068: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L3069;
    }
  x1 = XEXP (x0, 0);
  goto L3171;

 L3069: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4802 "../.././gcc/config/h8300/h8300.md"
(REG_P (operands[0]) && REG_P (operands[2])
   && REGNO (operands[0]) != REGNO (operands[2])
   && (satisfies_constraint_J (operands[1])
       || satisfies_constraint_L (operands[1])
       || satisfies_constraint_N (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_437 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3171;

 L4161: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L3154;
    }
  goto L3171;

 L3154: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L3155;
    }
  x1 = XEXP (x0, 0);
  goto L3171;

 L3155: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3156;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3156: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3157;
    }
  x1 = XEXP (x0, 0);
  goto L3171;

 L3157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L3158;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3158: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L3159;
  x1 = XEXP (x0, 0);
  goto L3171;

 L3159: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 255L
      && 
#line 4977 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[2], operands[1])
   && REGNO (operands[0]) == REGNO (operands[2])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_443 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3171;

 L3172: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L3173;
    }
  x1 = XEXP (x0, 0);
  goto L3181;

 L3173: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3174;
  x1 = XEXP (x0, 0);
  goto L3181;

 L3174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3175;
    }
  x1 = XEXP (x0, 0);
  goto L3181;

 L3175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L3176;
  x1 = XEXP (x0, 0);
  goto L3181;

 L3176: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L3177;
  x1 = XEXP (x0, 0);
  goto L3181;

 L3177: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_qi_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3178;
    }
  x1 = XEXP (x0, 0);
  goto L3181;

 L3178: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5009 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && (GET_MODE (operands[0]) == QImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == SImode)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && REGNO (operands[0]) == REGNO (operands[2])
   && !reg_overlap_mentioned_p (operands[2], operands[1])
   && !(GET_MODE (operands[1]) != QImode
	&& GET_CODE (operands[1]) == MEM
	&& !offsettable_memref_p (operands[1]))
   && !(GET_MODE (operands[1]) != QImode
	&& GET_CODE (operands[1]) == MEM
	&& MEM_VOLATILE_P (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_445 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3181;

 L3182: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L4164;
  goto ret0;

 L4164: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3183;
    }
 L4165: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3192;
    }
  goto ret0;

 L3183: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3184;
  x1 = XEXP (x0, 1);
  goto L4165;

 L3184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3185;
  x1 = XEXP (x0, 1);
  goto L4165;

 L3185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L3186;
  x1 = XEXP (x0, 1);
  goto L4165;

 L3186: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3187;
  x1 = XEXP (x0, 1);
  goto L4165;

 L3187: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 65280L
      && 
#line 5039 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_446 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  goto L4165;

 L3192: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3193;
  goto ret0;

 L3193: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3194;
  goto ret0;

 L3194: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L3195;
  goto ret0;

 L3195: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3196;
  goto ret0;

 L3196: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3197;
    }
  goto ret0;

 L3197: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5059 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && !MEM_VOLATILE_P (operands[1])
   && offsettable_memref_p (operands[1])
   && (INTVAL (operands[2]) & ~0xffff) == 0
   && INTVAL (operands[2]) != 255))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_447 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L4157: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 2)
    goto L3132;
  goto ret0;

 L3132: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L3133;
  goto ret0;

 L3133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L3134;
  goto ret0;

 L3134: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L3135;
  goto ret0;

 L3135: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L3136;
  goto ret0;

 L3136: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[0] = x4;
      goto L3137;
    }
  goto ret0;

 L3137: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L3138;
  goto ret0;

 L3138: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L3139;
  goto ret0;

 L3139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3140;
  goto ret0;

 L3140: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3141;
  goto ret0;

 L3141: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == SCRATCH)
    goto L3142;
  goto ret0;

 L3142: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3143;
  goto ret0;

 L3143: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L3144;
  goto ret0;

 L3144: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L3145;
  goto ret0;

 L3145: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L3146;
    }
  goto ret0;

 L3146: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3147;
  goto ret0;

 L3147: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3148;
  goto ret0;

 L3148: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3149;
  goto ret0;

 L3149: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L3150;

 L3150: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 4949 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_442 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx
peephole2_3 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *_pmatch_len ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L4171;
    case SImode:
      goto L4172;
    default:
      break;
    }
  goto ret0;

 L4171: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3221;
    }
  goto ret0;

 L3221: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L4173;
  goto ret0;

 L4173: ATTRIBUTE_UNUSED_LABEL
  if (incdec_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3222;
    }
 L4174: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3237;
    }
 L4175: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 255L)
    goto L3267;
  goto ret0;

 L3222: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3223;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4174;

 L3223: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L3224;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4174;

 L3224: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L3225;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4174;

 L3225: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L3226;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4174;

 L3226: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3227;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4174;

 L3227: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3228;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4174;

 L3228: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3229;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4174;

 L3229: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L3230;

 L3230: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5151 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) != 0
   && peep2_reg_dead_p (1, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_451 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4174;

 L3237: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3238;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4175;

 L3238: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L3239;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4175;

 L3239: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L3240;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4175;

 L3240: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (gtle_operator (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3241;
    }
 L3255: ATTRIBUTE_UNUSED_LABEL
  if (gtuleu_operator (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3256;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4175;

 L3241: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3242;
  goto L3255;

 L3242: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3243;
  goto L3255;

 L3243: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3244;
  x3 = XEXP (x2, 0);
  goto L3255;

 L3244: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L3245;

 L3245: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5185 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == 1
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_452 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x3 = XEXP (x2, 0);
  goto L3255;

 L3256: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3257;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4175;

 L3257: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3258;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4175;

 L3258: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3259;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4175;

 L3259: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L3260;

 L3260: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5220 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == 1
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_453 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4175;

 L3267: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3268;
  goto ret0;

 L3268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L3269;
  goto ret0;

 L3269: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L3270;
  goto ret0;

 L3270: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (gtle_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L3271;
    }
 L3285: ATTRIBUTE_UNUSED_LABEL
  if (gtuleu_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L3286;
    }
  goto ret0;

 L3271: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3272;
  goto L3285;

 L3272: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3273;
  goto L3285;

 L3273: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3274;
  x3 = XEXP (x2, 0);
  goto L3285;

 L3274: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L3275;

 L3275: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5261 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_454 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x3 = XEXP (x2, 0);
  goto L3285;

 L3286: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3287;
  goto ret0;

 L3287: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3288;
  goto ret0;

 L3288: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3289;
  goto ret0;

 L3289: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L3290;

 L3290: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5290 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_455 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L4172: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3296;
    }
  goto ret0;

 L3296: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L4176;
  goto ret0;

 L4176: ATTRIBUTE_UNUSED_LABEL
  if (incdec_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3297;
    }
 L4177: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3312;
    }
 L4178: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 65535L)
    goto L3462;
 L4179: ATTRIBUTE_UNUSED_LABEL
  if (incdec_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3492;
    }
  goto ret0;

 L3297: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3298;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4177;

 L3298: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L3299;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4177;

 L3299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L3300;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4177;

 L3300: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L3301;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4177;

 L3301: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3302;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4177;

 L3302: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3303;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4177;

 L3303: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3304;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4177;

 L3304: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L3305;

 L3305: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5386 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) != 0
   && peep2_reg_dead_p (1, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_456 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4177;

 L3312: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3313;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4178;

 L3313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L3314;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4178;

 L3314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L3315;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4178;

 L3315: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L3316;
    }
  if (gtle_operator (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3376;
    }
 L3390: ATTRIBUTE_UNUSED_LABEL
  if (gtuleu_operator (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3391;
    }
 L3405: ATTRIBUTE_UNUSED_LABEL
  if (gtle_operator (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3406;
    }
 L3420: ATTRIBUTE_UNUSED_LABEL
  if (gtuleu_operator (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3421;
    }
 L3435: ATTRIBUTE_UNUSED_LABEL
  if (gtle_operator (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3436;
    }
 L3450: ATTRIBUTE_UNUSED_LABEL
  if (gtuleu_operator (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3451;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4178;

 L3316: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3317;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4178;

 L3317: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3318;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4178;

 L3318: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3319;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4178;

 L3319: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L3320;

 L3320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L4180;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4178;

 L4180: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5420 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == -131072
       || INTVAL (operands[1]) == -65536
       || INTVAL (operands[1]) == 65536
       || INTVAL (operands[1]) == 131072)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_457 (insn, operands);
      if (tem != 0)
        return tem;
    }
 L4181: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5457 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((INTVAL (operands[1]) & 0x00ff) == INTVAL (operands[1])
       || (INTVAL (operands[1]) & 0xff00) == INTVAL (operands[1])
       || INTVAL (operands[1]) == 0x0000ffff)
   && INTVAL (operands[1]) != 0
   && INTVAL (operands[1]) != 1
   && INTVAL (operands[1]) != 2))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_458 (insn, operands);
      if (tem != 0)
        return tem;
    }
 L4182: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5496 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((INTVAL (operands[1]) | 0x00ff) == -1
	|| (INTVAL (operands[1]) | 0xff00) == -1)
   && INTVAL (operands[1]) != -1
   && INTVAL (operands[1]) != -2))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_459 (insn, operands);
      if (tem != 0)
        return tem;
    }
 L4183: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5535 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == -2147483647 - 1
       || (TARGET_H8300S && INTVAL (operands[1]) == 1073741824))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_460 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4178;

 L3376: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3377;
  goto L3390;

 L3377: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3378;
  goto L3390;

 L3378: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3379;
  x3 = XEXP (x2, 0);
  goto L3390;

 L3379: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L3380;

 L3380: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5578 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && !peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == 1
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))
   && !same_cmp_preceding_p (insn)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_461 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x3 = XEXP (x2, 0);
  goto L3390;

 L3391: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3392;
  goto L3405;

 L3392: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3393;
  goto L3405;

 L3393: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3394;
  x3 = XEXP (x2, 0);
  goto L3405;

 L3394: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L3395;

 L3395: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5621 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && !peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == 1
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))
   && !same_cmp_preceding_p (insn)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_462 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x3 = XEXP (x2, 0);
  goto L3405;

 L3406: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3407;
  goto L3420;

 L3407: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3408;
  goto L3420;

 L3408: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3409;
  x3 = XEXP (x2, 0);
  goto L3420;

 L3409: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L3410;

 L3410: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5665 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == 1
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_463 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x3 = XEXP (x2, 0);
  goto L3420;

 L3421: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3422;
  goto L3435;

 L3422: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3423;
  goto L3435;

 L3423: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3424;
  x3 = XEXP (x2, 0);
  goto L3435;

 L3424: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L3425;

 L3425: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5700 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == 1
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_464 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x3 = XEXP (x2, 0);
  goto L3435;

 L3436: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3437;
  goto L3450;

 L3437: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3438;
  goto L3450;

 L3438: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3439;
  x3 = XEXP (x2, 0);
  goto L3450;

 L3439: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L3440;

 L3440: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5742 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((TARGET_H8300H && INTVAL (operands[1]) == 3)
       || INTVAL (operands[1]) == 7
       || INTVAL (operands[1]) == 15
       || INTVAL (operands[1]) == 31
       || INTVAL (operands[1]) == 63
       || INTVAL (operands[1]) == 127
       || INTVAL (operands[1]) == 255)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_465 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x3 = XEXP (x2, 0);
  goto L3450;

 L3451: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3452;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4178;

 L3452: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3453;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4178;

 L3453: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3454;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4178;

 L3454: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L3455;

 L3455: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5782 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((TARGET_H8300H && INTVAL (operands[1]) == 3)
       || INTVAL (operands[1]) == 7
       || INTVAL (operands[1]) == 15
       || INTVAL (operands[1]) == 31
       || INTVAL (operands[1]) == 63
       || INTVAL (operands[1]) == 127
       || INTVAL (operands[1]) == 255)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_466 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4178;

 L3462: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3463;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4179;

 L3463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L3464;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4179;

 L3464: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L3465;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4179;

 L3465: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (gtle_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L3466;
    }
 L3480: ATTRIBUTE_UNUSED_LABEL
  if (gtuleu_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L3481;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4179;

 L3466: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3467;
  goto L3480;

 L3467: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3468;
  goto L3480;

 L3468: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3469;
  x3 = XEXP (x2, 0);
  goto L3480;

 L3469: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L3470;

 L3470: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5827 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_467 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x3 = XEXP (x2, 0);
  goto L3480;

 L3481: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3482;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4179;

 L3482: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3483;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4179;

 L3483: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3484;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4179;

 L3484: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L3485;

 L3485: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5856 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_468 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4179;

 L3492: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3493;
  goto ret0;

 L3493: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L3494;
  goto ret0;

 L3494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L3495;
  goto ret0;

 L3495: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L3496;
    }
  goto ret0;

 L3496: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3497;
  goto ret0;

 L3497: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3498;
  goto ret0;

 L3498: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3499;
  goto ret0;

 L3499: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L3500;

 L3500: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 5895 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) != 0
   && !peep2_reg_dead_p (1, operands[0])
   && !same_cmp_following_p (insn)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_469 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
peephole2_insns (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *_pmatch_len ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  if (GET_CODE (x0) == SET)
    goto L2512;
 L2812: ATTRIBUTE_UNUSED_LABEL
  if (peep2_current_count >= 2)
    goto L2813;
 L2903: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == PARALLEL
      && XVECLEN (x0, 0) == 2)
    goto L2904;
 L2958: ATTRIBUTE_UNUSED_LABEL
  if (peep2_current_count >= 4)
    goto L2959;
 L3002: ATTRIBUTE_UNUSED_LABEL
  if (peep2_current_count >= 3)
    goto L3003;
 L3036: ATTRIBUTE_UNUSED_LABEL
  if (peep2_current_count >= 2)
    goto L3037;
 L3199: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == SET)
    goto L3200;
 L3216: ATTRIBUTE_UNUSED_LABEL
  if (peep2_current_count >= 2)
    goto L3217;
  goto ret0;

 L2512: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (stack_pointer_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L2513;
    }
  goto L2812;

 L2513: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == PLUS)
    goto L2514;
  goto L2812;

 L2514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2515;
  goto L2812;

 L2515: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_ge_8_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2516;
    }
  goto L2812;

 L2516: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1176 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_322 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L2812;

 L2813: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == PARALLEL
      && XVECLEN (x0, 0) == 2)
    goto L2814;
  goto L2903;

 L2814: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L2815;
  goto L2903;

 L2815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L4130;
    case SImode:
      goto L4131;
    default:
      break;
    }
  goto L2903;

 L4130: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2816;
    }
  goto L2903;

 L2816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L4132;
  goto L2903;

 L4132: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case LSHIFTRT:
      goto L2817;
    case ASHIFT:
      goto L2832;
    default:
     break;
   }
  goto L2903;

 L2817: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2818;
  goto L2903;

 L2818: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2819;
    }
  goto L2903;

 L2819: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2820;
  goto L2903;

 L2820: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L2821;

 L2821: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2822;
  goto L2903;

 L2822: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2823;
  goto L2903;

 L2823: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == AND)
    goto L2824;
  goto L2903;

 L2824: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2825;
  goto L2903;

 L2825: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L2826;
    }
  goto L2903;

 L2826: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4480 "../.././gcc/config/h8300/h8300.md"
(INTVAL (operands[3]) == (255 >> INTVAL (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_421 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L2903;

 L2832: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2833;
  goto L2903;

 L2833: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2834;
    }
  goto L2903;

 L2834: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2835;
  goto L2903;

 L2835: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L2836;

 L2836: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2837;
  goto L2903;

 L2837: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2838;
  goto L2903;

 L2838: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == AND)
    goto L2839;
  goto L2903;

 L2839: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2840;
  goto L2903;

 L2840: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L2841;
    }
  goto L2903;

 L2841: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4501 "../.././gcc/config/h8300/h8300.md"
(INTVAL (operands[3]) == (255 << INTVAL (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_422 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L2903;

 L4131: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2846;
    }
  goto L2903;

 L2846: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L4134;
  goto L2903;

 L4134: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case LSHIFTRT:
      goto L2847;
    case ASHIFT:
      goto L2862;
    default:
     break;
   }
  goto L2903;

 L2847: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2848;
  goto L2903;

 L2848: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2849;
    }
  goto L2903;

 L2849: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2850;
  goto L2903;

 L2850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L2851;

 L2851: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2852;
  goto L2903;

 L2852: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2853;
  goto L2903;

 L2853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2854;
  goto L2903;

 L2854: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2855;
  goto L2903;

 L2855: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2856;
    }
  goto L2903;

 L2856: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4522 "../.././gcc/config/h8300/h8300.md"
(INTVAL (operands[3]) == (255 >> INTVAL (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_423 (insn, operands);
      if (tem != 0)
        return tem;
    }
 L2886: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4564 "../.././gcc/config/h8300/h8300.md"
(INTVAL (operands[3]) == (65535 >> INTVAL (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_425 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L2903;

 L2862: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2863;
  goto L2903;

 L2863: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2864;
    }
  goto L2903;

 L2864: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2865;
  goto L2903;

 L2865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L2866;

 L2866: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2867;
  goto L2903;

 L2867: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2868;
  goto L2903;

 L2868: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2869;
  goto L2903;

 L2869: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2870;
  goto L2903;

 L2870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2871;
    }
  goto L2903;

 L2871: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4543 "../.././gcc/config/h8300/h8300.md"
(INTVAL (operands[3]) == (255 << INTVAL (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_424 (insn, operands);
      if (tem != 0)
        return tem;
    }
 L2901: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4585 "../.././gcc/config/h8300/h8300.md"
(INTVAL (operands[3]) == (65535 << INTVAL (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_426 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L2903;

 L2904: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L2905;
  goto L2958;

 L2905: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4136;
    case HImode:
      goto L4137;
    default:
      break;
    }
  goto L2958;

 L4136: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L2906;
  goto L2958;

 L2906: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2907;
  goto L2958;

 L2907: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L2908;
  goto L2958;

 L2908: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (-4)])
    goto L2909;
  goto L2958;

 L2909: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2910;
  goto L2958;

 L2910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L4138;
    case HImode:
      goto L4139;
    default:
      break;
    }
  goto L2958;

 L4138: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2911;
  goto L2958;

 L2911: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2912;
  goto L2958;

 L2912: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L2913;
  goto L2958;

 L2913: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (-3)])
    goto L2914;
  goto L2958;

 L2914: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L2915;
    }
  goto L2958;

 L2915: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4604 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && !TARGET_NORMAL_MODE && REGNO (operands[0]) != SP_REG))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_427 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L2958;

 L4139: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2939;
  goto L2958;

 L2939: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2940;
  goto L2958;

 L2940: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L2941;
  goto L2958;

 L2941: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (-2)])
    goto L2942;
  goto L2958;

 L2942: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2943;
    }
  goto L2958;

 L2943: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4627 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && !TARGET_NORMAL_MODE && REGNO (operands[0]) != SP_REG))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_429 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L2958;

 L4137: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L2920;
  goto L2958;

 L2920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L2921;
  goto L2958;

 L2921: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L2922;
  goto L2958;

 L2922: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (-4)])
    goto L2923;
  goto L2958;

 L2923: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2924;
  goto L2958;

 L2924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L4140;
    case HImode:
      goto L4141;
    default:
      break;
    }
  goto L2958;

 L4140: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2925;
  goto L2958;

 L2925: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L2926;
  goto L2958;

 L2926: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L2927;
  goto L2958;

 L2927: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (-3)])
    goto L2928;
  goto L2958;

 L2928: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L2929;
    }
  goto L2958;

 L2929: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4614 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && TARGET_NORMAL_MODE && REGNO (operands[0]) != SP_REG))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_428 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L2958;

 L4141: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2953;
  goto L2958;

 L2953: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L2954;
  goto L2958;

 L2954: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L2955;
  goto L2958;

 L2955: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (-2)])
    goto L2956;
  goto L2958;

 L2956: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2957;
    }
  goto L2958;

 L2957: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4637 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && TARGET_NORMAL_MODE && REGNO (operands[0]) != SP_REG))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_430 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L2958;

 L2959: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == SET)
    goto L2960;
  goto L3002;

 L2960: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == SImode)
    goto L4142;
  goto L3002;

 L4142: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L2961;
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3564;
    }
  goto L3002;

 L2961: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4144;
    case HImode:
      goto L4145;
    default:
      break;
    }
  goto L3002;

 L4144: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PRE_DEC)
    goto L2962;
  goto L3002;

 L2962: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L2963;
  goto L3002;

 L2963: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2964;
    }
  goto L3002;

 L2964: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2965;
  goto L3002;

 L2965: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2966;
  goto L3002;

 L2966: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PRE_DEC)
    goto L2967;
  goto L3002;

 L2967: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L2968;
  goto L3002;

 L2968: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2969;
    }
  goto L3002;

 L2969: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2970;
  goto L3002;

 L2970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2971;
  goto L3002;

 L2971: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PRE_DEC)
    goto L2972;
  goto L3002;

 L2972: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L2973;
  goto L3002;

 L2973: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2974;
    }
  goto L3002;

 L2974: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (3);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2975;
  goto L3002;

 L2975: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2976;
  goto L3002;

 L2976: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PRE_DEC)
    goto L2977;
  goto L3002;

 L2977: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L2978;
  goto L3002;

 L2978: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2979;
    }
  goto L3002;

 L2979: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4653 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && !TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[3])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && REGNO (operands[2]) == REGNO (operands[0]) + 2
       && REGNO (operands[3]) == REGNO (operands[0]) + 3
       && (TARGET_H8300SX || REGNO (operands[0]) == 0))))
    {
      *_pmatch_len = 3;
      tem = gen_peephole2_431 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L3002;

 L4145: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PRE_DEC)
    goto L2984;
  goto L3002;

 L2984: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L2985;
  goto L3002;

 L2985: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2986;
    }
  goto L3002;

 L2986: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2987;
  goto L3002;

 L2987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2988;
  goto L3002;

 L2988: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PRE_DEC)
    goto L2989;
  goto L3002;

 L2989: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L2990;
  goto L3002;

 L2990: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2991;
    }
  goto L3002;

 L2991: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2992;
  goto L3002;

 L2992: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2993;
  goto L3002;

 L2993: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PRE_DEC)
    goto L2994;
  goto L3002;

 L2994: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L2995;
  goto L3002;

 L2995: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2996;
    }
  goto L3002;

 L2996: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (3);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2997;
  goto L3002;

 L2997: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2998;
  goto L3002;

 L2998: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PRE_DEC)
    goto L2999;
  goto L3002;

 L2999: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L3000;
  goto L3002;

 L3000: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3001;
    }
  goto L3002;

 L3001: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4681 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[3])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && REGNO (operands[2]) == REGNO (operands[0]) + 2
       && REGNO (operands[3]) == REGNO (operands[0]) + 3
       && (TARGET_H8300SX || REGNO (operands[0]) == 0))))
    {
      *_pmatch_len = 3;
      tem = gen_peephole2_432 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L3002;

 L3564: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == AND)
    goto L3565;
  goto L3002;

 L3565: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3566;
  goto L3002;

 L3566: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_qi_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3567;
    }
  goto L3002;

 L3567: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3568;
  goto L3002;

 L3568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3569;
  goto L3002;

 L3569: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == XOR)
    goto L3570;
  goto L3002;

 L3570: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3571;
  goto L3002;

 L3571: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_qi_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3572;
    }
  goto L3002;

 L3572: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3573;
  goto L3002;

 L3573: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L3574;
  goto L3002;

 L3574: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L3575;
  goto L3002;

 L3575: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3576;
  goto L3002;

 L3576: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3577;
  goto L3002;

 L3577: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (3);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3578;
  goto L3002;

 L3578: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L3579;
  goto L3002;

 L3579: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L3580;
  goto L3002;

 L3580: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L3581;
    }
  goto L3002;

 L3581: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L3582;
  goto L3002;

 L3582: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3583;
  goto L3002;

 L3583: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3584;
  goto L3002;

 L3584: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L3585;

 L3585: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && 
#line 6001 "../.././gcc/config/h8300/h8300.md"
(peep2_reg_dead_p (3, operands[0])
   && (~INTVAL (operands[1]) & INTVAL (operands[2])) == 0))
    {
      *_pmatch_len = 3;
      tem = gen_peephole2_473 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L3002;

 L3003: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == SET)
    goto L3004;
  goto L3036;

 L3004: ATTRIBUTE_UNUSED_LABEL
  tem = peephole2_1 (x0, insn, _pmatch_len);
  if (tem != 0)
    return tem;
  goto L3036;

 L3037: ATTRIBUTE_UNUSED_LABEL
  tem = peephole2_2 (x0, insn, _pmatch_len);
  if (tem != 0)
    return tem;
  goto L3199;

 L3200: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_CODE (x1) == CC0)
    goto L3201;
  goto L3216;

 L3201: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == COMPARE)
    goto L3202;
  goto L3216;

 L3202: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L4166;
    case HImode:
      goto L4167;
    case SImode:
      goto L4168;
    default:
      break;
    }
  goto L3216;

 L4166: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3203;
    }
  goto L3216;

 L3203: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_448 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L3216;

 L4167: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3209;
    }
  goto L3216;

 L3209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 5091 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_449 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L3216;

 L4168: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3215;
    }
  goto L3216;

 L3215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 5103 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_450 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L3216;

 L3217: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == SET)
    goto L3588;
  goto ret0;

 L3588: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 7)
    goto L3589;
  if (GET_CODE (x1) == CC0)
    goto L3219;
 L3621: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L3622;
    }
  goto ret0;

 L3589: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == PLUS)
    goto L3590;
  x1 = XEXP (x0, 0);
  goto L3621;

 L3590: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L3591;
  x1 = XEXP (x0, 0);
  goto L3621;

 L3591: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L4169;
  x1 = XEXP (x0, 0);
  goto L3621;

 L4169: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case -4L:
        goto L3592;
      case -12L:
        goto L3603;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  goto L3621;

 L3592: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3593;
  x1 = XEXP (x0, 0);
  goto L3621;

 L3593: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3594;
  x1 = XEXP (x0, 0);
  goto L3621;

 L3594: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L3595;
  x1 = XEXP (x0, 0);
  goto L3621;

 L3595: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3596;
    }
  x1 = XEXP (x0, 0);
  goto L3621;

 L3596: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6033 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_NORMAL_MODE
   && REGNO (operands[0]) != SP_REG))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_474 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3621;

 L3603: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3604;
  x1 = XEXP (x0, 0);
  goto L3621;

 L3604: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3605;
  x1 = XEXP (x0, 0);
  goto L3621;

 L3605: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L3606;
  x1 = XEXP (x0, 0);
  goto L3621;

 L3606: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3607;
    }
  x1 = XEXP (x0, 0);
  goto L3621;

 L3607: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6050 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_NORMAL_MODE
   && REGNO (operands[0]) != SP_REG))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_475 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3621;

 L3219: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == COMPARE)
    goto L3220;
  goto ret0;

 L3220: ATTRIBUTE_UNUSED_LABEL
  return peephole2_3 (x0, insn, _pmatch_len);

 L3622: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (h8300_dst_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L3623;
    }
 L3632: ATTRIBUTE_UNUSED_LABEL
  if (h8300_src_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L3633;
    }
  goto ret0;

 L3623: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3624;
  x1 = XEXP (x0, 1);
  goto L3632;

 L3624: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L3625;
  x1 = XEXP (x0, 1);
  goto L3632;

 L3625: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L3626;
  x1 = XEXP (x0, 1);
  goto L3632;

 L3626: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3627;
  x1 = XEXP (x0, 1);
  goto L3632;

 L3627: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (h8300_src_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3628;
    }
  x1 = XEXP (x0, 1);
  goto L3632;

 L3628: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6169 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && operands[2] != const0_rtx))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_477 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  goto L3632;

 L3633: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3634;
  goto ret0;

 L3634: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L3635;
  if (h8300_dst_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L3644;
    }
  goto ret0;

 L3635: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L3636;
  goto ret0;

 L3636: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (h8300_dst_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3637;
    }
  goto ret0;

 L3637: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 6184 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_478 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L3644: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 6197 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_479 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;
 ret0:
  return 0;
}

