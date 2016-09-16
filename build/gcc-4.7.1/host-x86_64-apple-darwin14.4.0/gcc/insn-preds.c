/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../.././gcc/config/h8300/h8300.md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tree.h"
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

static inline int
general_operand_src_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 25 "../.././gcc/config/h8300/predicates.md"
{
  if (GET_MODE (op) == mode
      && GET_CODE (op) == MEM
      && GET_CODE (XEXP (op, 0)) == POST_INC)
    return 1;
  return general_operand (op, mode);
}

int
general_operand_src (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
    case SUBREG:
    case REG:
    case MEM:
      break;
    default:
      return false;
    }
  return 
(general_operand_src_1 (op, mode));
}

static inline int
general_operand_dst_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 38 "../.././gcc/config/h8300/predicates.md"
{
  if (GET_MODE (op) == mode
      && GET_CODE (op) == MEM
      && GET_CODE (XEXP (op, 0)) == PRE_DEC)
    return 1;
  return general_operand (op, mode);
}

int
general_operand_dst (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SUBREG:
    case REG:
    case MEM:
      break;
    default:
      return false;
    }
  return (
(general_operand_dst_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
h8300_src_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 50 "../.././gcc/config/h8300/predicates.md"
{
  if (TARGET_H8300SX)
    return general_operand (op, mode);
  return nonmemory_operand (op, mode);
}

int
h8300_src_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
    case SUBREG:
    case REG:
    case MEM:
      break;
    default:
      return false;
    }
  return 
(h8300_src_operand_1 (op, mode));
}

static inline int
h8300_dst_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 61 "../.././gcc/config/h8300/predicates.md"
{
  if (TARGET_H8300SX)
    return nonimmediate_operand (op, mode);
  return register_operand (op, mode);
}

int
h8300_dst_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SUBREG:
    case REG:
    case MEM:
      break;
    default:
      return false;
    }
  return (
(h8300_dst_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
nibble_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 72 "../.././gcc/config/h8300/predicates.md"
{
  return (GET_CODE (op) == CONST_INT && TARGET_H8300SX
	  && INTVAL (op) >= 0 && INTVAL (op) <= 15);
}

int
nibble_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(nibble_operand_1 (op, mode)));
}

static inline int
reg_or_nibble_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 82 "../.././gcc/config/h8300/predicates.md"
{
  return (nibble_operand (op, mode) || register_operand (op, mode));
}

int
reg_or_nibble_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case SUBREG:
    case REG:
      break;
    default:
      return false;
    }
  return 
(reg_or_nibble_operand_1 (op, mode));
}

static inline int
h8sx_unary_shift_operator_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 90 "../.././gcc/config/h8300/predicates.md"
{
  return (BINARY_P (op) && NON_COMMUTATIVE_P (op)
	  && (h8sx_classify_shift (GET_MODE (op), GET_CODE (op), XEXP (op, 1))
	      == H8SX_SHIFT_UNARY));
}

int
h8sx_unary_shift_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case ASHIFTRT:
    case LSHIFTRT:
    case ASHIFT:
    case ROTATE:
      break;
    default:
      return false;
    }
  return (
(h8sx_unary_shift_operator_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
h8sx_binary_shift_operator_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 100 "../.././gcc/config/h8300/predicates.md"
{
  return (BINARY_P (op) && NON_COMMUTATIVE_P (op)
	  && (h8sx_classify_shift (GET_MODE (op), GET_CODE (op), XEXP (op, 1))
	      == H8SX_SHIFT_BINARY));
}

int
h8sx_binary_shift_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case ASHIFTRT:
    case LSHIFTRT:
    case ASHIFT:
      break;
    default:
      return false;
    }
  return (
(h8sx_binary_shift_operator_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
h8sx_binary_memory_operator_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 111 "../.././gcc/config/h8300/predicates.md"
{
  if (!TARGET_H8300SX)
    return false;

  if (GET_MODE (op) != QImode
      && GET_MODE (op) != HImode
      && GET_MODE (op) != SImode)
    return false;

  switch (GET_CODE (op))
    {
    case PLUS:
    case MINUS:
    case AND:
    case IOR:
    case XOR:
      return true;

    default:
      return h8sx_unary_shift_operator (op, mode);
    }
}

int
h8sx_binary_memory_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MINUS:
    case AND:
    case IOR:
    case XOR:
    case ASHIFT:
    case ASHIFTRT:
    case LSHIFTRT:
    case ROTATE:
      break;
    default:
      return false;
    }
  return (
(h8sx_binary_memory_operator_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
h8sx_unary_memory_operator_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 138 "../.././gcc/config/h8300/predicates.md"
{
  if (!TARGET_H8300SX)
    return false;

  if (GET_MODE (op) != QImode
      && GET_MODE (op) != HImode
      && GET_MODE (op) != SImode)
    return false;

  switch (GET_CODE (op))
    {
    case NEG:
    case NOT:
      return true;

    default:
      return false;
    }
}

int
h8sx_unary_memory_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case NEG:
    case NOT:
      break;
    default:
      return false;
    }
  return (
(h8sx_unary_memory_operator_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
h8300_ldm_parallel_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 162 "../.././gcc/config/h8300/predicates.md"
{
  return h8300_ldm_stm_parallel (XVEC (op, 0), 1, 0);
}

int
h8300_ldm_parallel (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(h8300_ldm_parallel_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
h8300_stm_parallel_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 170 "../.././gcc/config/h8300/predicates.md"
{
  return h8300_ldm_stm_parallel (XVEC (op, 0), 0, 0);
}

int
h8300_stm_parallel (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(h8300_stm_parallel_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
h8300_return_parallel_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 179 "../.././gcc/config/h8300/predicates.md"
{
  return h8300_ldm_stm_parallel (XVEC (op, 0), 1, 1);
}

int
h8300_return_parallel (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(h8300_return_parallel_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
single_one_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 188 "../.././gcc/config/h8300/predicates.md"
{
  if (GET_CODE (op) == CONST_INT)
    {
      /* We really need to do this masking because 0x80 in QImode is
	 represented as -128 for example.  */
      if (exact_log2 (INTVAL (op) & GET_MODE_MASK (mode)) >= 0)
	return 1;
    }

  return 0;
}

int
single_one_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(single_one_operand_1 (op, mode)));
}

static inline int
single_zero_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 205 "../.././gcc/config/h8300/predicates.md"
{
  if (GET_CODE (op) == CONST_INT)
    {
      /* We really need to do this masking because 0x80 in QImode is
	 represented as -128 for example.  */
      if (exact_log2 (~INTVAL (op) & GET_MODE_MASK (mode)) >= 0)
	return 1;
    }

  return 0;
}

int
single_zero_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(single_zero_operand_1 (op, mode)));
}

static inline int
call_insn_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 221 "../.././gcc/config/h8300/predicates.md"
{
  if (GET_CODE (op) == MEM)
    {
      rtx inside = XEXP (op, 0);
      if (register_operand (inside, Pmode))
	return 1;
      if (CONSTANT_ADDRESS_P (inside))
	return 1;
    }
  return 0;
}

int
call_insn_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(call_insn_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
small_call_insn_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 238 "../.././gcc/config/h8300/predicates.md"
{
  if (GET_CODE (op) == MEM)
    {
      rtx inside = XEXP (op, 0);

      /* Register indirect is a small call.  */
      if (register_operand (inside, Pmode))
	return 1;

      /* A call through the function vector is a small call too.  */
      if (GET_CODE (inside) == SYMBOL_REF
	  && (SYMBOL_REF_FLAGS (inside) & SYMBOL_FLAG_FUNCVEC_FUNCTION))
	return 1;
    }
  /* Otherwise it's a large call.  */
  return 0;
}

int
small_call_insn_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(small_call_insn_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
jump_address_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 260 "../.././gcc/config/h8300/predicates.md"
{
  if (GET_CODE (op) == REG)
    return GET_MODE (op) == Pmode;

  if (GET_CODE (op) == MEM)
    {
      rtx inside = XEXP (op, 0);
      if (register_operand (inside, Pmode))
	return 1;
      if (CONSTANT_ADDRESS_P (inside))
	return 1;
    }
  return 0;
}

int
jump_address_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case MEM:
      break;
    default:
      return false;
    }
  return (
(jump_address_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
two_insn_adds_subs_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 281 "../.././gcc/config/h8300/predicates.md"
{
  if (TARGET_H8300SX)
    return 0;

  if (GET_CODE (op) == CONST_INT)
    {
      HOST_WIDE_INT value = INTVAL (op);

      /* Force VALUE to be positive so that we do not have to consider
         the negative case.  */
      if (value < 0)
	value = -value;
      if (TARGET_H8300H || TARGET_H8300S)
	{
	  /* A constant addition/subtraction takes 2 states in QImode,
	     4 states in HImode, and 6 states in SImode.  Thus, the
	     only case we can win is when SImode is used, in which
	     case, two adds/subs are used, taking 4 states.  */
	  if (mode == SImode
	      && (value == 2 + 1
		  || value == 4 + 1
		  || value == 4 + 2
		  || value == 4 + 4))
	    return 1;
	}
      else
	{
	  /* We do not profit directly by splitting addition or
	     subtraction of 3 and 4.  However, since these are
	     implemented as a sequence of adds or subs, they do not
	     clobber (cc0) unlike a sequence of add.b and add.x.  */
	  if (mode == HImode
	      && (value == 2 + 1
		  || value == 2 + 2))
	    return 1;
	}
    }

  return 0;
}

int
two_insn_adds_subs_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(two_insn_adds_subs_operand_1 (op, mode)));
}

static inline int
bit_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 326 "../.././gcc/config/h8300/predicates.md"
{
  /* We can accept any nonimmediate operand, except that MEM operands must
     be limited to those that use addresses valid for the 'U' constraint.  */
  if (!nonimmediate_operand (op, mode) && !satisfies_constraint_U (op))
    return 0;

  /* H8SX accepts pretty much anything here.  */
  if (TARGET_H8300SX)
    return 1;

  /* Accept any mem during RTL generation.  Otherwise, the code that does
     insv and extzv will think that we cannot handle memory.  However,
     to avoid reload problems, we only accept 'U' MEM operands after RTL
     generation.  This means that any named pattern which uses this predicate
     must force its operands to match 'U' before emitting RTL.  */

  if (GET_CODE (op) == REG)
    return 1;
  if (GET_CODE (op) == SUBREG)
    return 1;
  return (GET_CODE (op) == MEM
	  && satisfies_constraint_U (op));
}

int
bit_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case MEM:
      break;
    default:
      return false;
    }
  return (
(bit_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
bit_memory_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 354 "../.././gcc/config/h8300/predicates.md"
{
  return (GET_CODE (op) == MEM
	  && satisfies_constraint_U (op));
}

int
bit_memory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(bit_memory_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
bit_register_indirect_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 364 "../.././gcc/config/h8300/predicates.md"
{
  return (GET_CODE (op) == MEM
          && (GET_CODE (XEXP (op, 0)) == REG
              || GET_CODE (XEXP (op, 0)) == CONST_INT));
}

int
bit_register_indirect_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(bit_register_indirect_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
stack_pointer_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 374 "../.././gcc/config/h8300/predicates.md"
{
  return op == stack_pointer_rtx;
}

int
stack_pointer_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
(stack_pointer_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
register_no_sp_elim_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 382 "../.././gcc/config/h8300/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);
  return !(op == stack_pointer_rtx
	   || op == arg_pointer_rtx
	   || op == frame_pointer_rtx
	   || IN_RANGE (REGNO (op),
			FIRST_PSEUDO_REGISTER, LAST_VIRTUAL_REGISTER));
}

int
register_no_sp_elim_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(register_no_sp_elim_operand_1 (op, mode)));
}

static inline int
const_int_gt_2_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 397 "../.././gcc/config/h8300/predicates.md"
{
  return (GET_CODE (op) == CONST_INT
	  && abs (INTVAL (op)) > 2);
}

int
const_int_gt_2_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const_int_gt_2_operand_1 (op, mode)));
}

static inline int
const_int_ge_8_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 407 "../.././gcc/config/h8300/predicates.md"
{
  return (GET_CODE (op) == CONST_INT
	  && abs (INTVAL (op)) >= 8);
}

int
const_int_ge_8_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const_int_ge_8_operand_1 (op, mode)));
}

static inline int
const_int_qi_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 416 "../.././gcc/config/h8300/predicates.md"
{
  return (GET_CODE (op) == CONST_INT
	  && (INTVAL (op) & 0xff) == INTVAL (op));
}

int
const_int_qi_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const_int_qi_operand_1 (op, mode)));
}

static inline int
const_int_hi_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 425 "../.././gcc/config/h8300/predicates.md"
{
  return (GET_CODE (op) == CONST_INT
	  && (INTVAL (op) & 0xffff) == INTVAL (op));
}

int
const_int_hi_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const_int_hi_operand_1 (op, mode)));
}

int
incdec_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((
#line 434 "../.././gcc/config/h8300/predicates.md"
(satisfies_constraint_M (op))) || (
#line 435 "../.././gcc/config/h8300/predicates.md"
(satisfies_constraint_O (op))));
}

static inline int
bit_operator_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 441 "../.././gcc/config/h8300/predicates.md"
{
  enum rtx_code code = GET_CODE (op);

  return (code == XOR
	  || code == AND
	  || code == IOR);
}

int
bit_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case XOR:
    case AND:
    case IOR:
      break;
    default:
      return false;
    }
  return (
(bit_operator_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
nshift_operator_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 453 "../.././gcc/config/h8300/predicates.md"
{
  switch (GET_CODE (op))
    {
    case ASHIFTRT:
    case LSHIFTRT:
    case ASHIFT:
      return 1;

    default:
      return 0;
    }
}

int
nshift_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case ASHIFTRT:
    case LSHIFTRT:
    case ASHIFT:
      break;
    default:
      return false;
    }
  return (
(nshift_operator_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
eqne_operator_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 470 "../.././gcc/config/h8300/predicates.md"
{
  enum rtx_code code = GET_CODE (op);

  return (code == EQ || code == NE);
}

int
eqne_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
      break;
    default:
      return false;
    }
  return (
(eqne_operator_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
gtle_operator_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 480 "../.././gcc/config/h8300/predicates.md"
{
  enum rtx_code code = GET_CODE (op);

  return (code == GT || code == LE);
}

int
gtle_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case GT:
    case LE:
    case GTU:
    case LEU:
      break;
    default:
      return false;
    }
  return (
(gtle_operator_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
gtuleu_operator_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 490 "../.././gcc/config/h8300/predicates.md"
{
  enum rtx_code code = GET_CODE (op);

  return (code == GTU || code == LEU);
}

int
gtuleu_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case GTU:
    case LEU:
      break;
    default:
      return false;
    }
  return (
(gtuleu_operator_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
iorxor_operator_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 500 "../.././gcc/config/h8300/predicates.md"
{
  enum rtx_code code = GET_CODE (op);

  return (code == IOR || code == XOR);
}

int
iorxor_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case IOR:
    case XOR:
      break;
    default:
      return false;
    }
  return (
(iorxor_operator_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

enum constraint_num
lookup_constraint (const char *str)
{
  switch (str[0])
    {
    case 'D':
      return CONSTRAINT_D;
    case 'G':
      return CONSTRAINT_G;
    case 'I':
      return CONSTRAINT_I;
    case 'J':
      return CONSTRAINT_J;
    case 'L':
      return CONSTRAINT_L;
    case 'M':
      return CONSTRAINT_M;
    case 'N':
      return CONSTRAINT_N;
    case 'O':
      return CONSTRAINT_O;
    case 'P':
      if (!strncmp (str, "P3>X", 4))
        return CONSTRAINT_P3_gX;
      if (!strncmp (str, "P4>X", 4))
        return CONSTRAINT_P4_gX;
      if (!strncmp (str, "P5>X", 4))
        return CONSTRAINT_P5_gX;
      if (!strncmp (str, "P8>X", 4))
        return CONSTRAINT_P8_gX;
      if (!strncmp (str, "P3<X", 4))
        return CONSTRAINT_P3_lX;
      if (!strncmp (str, "P1>X", 4))
        return CONSTRAINT_P1_gX;
      break;
    case 'Q':
      return CONSTRAINT_Q;
    case 'R':
      return CONSTRAINT_R;
    case 'S':
      return CONSTRAINT_S;
    case 'T':
      return CONSTRAINT_T;
    case 'U':
      return CONSTRAINT_U;
    case 'W':
      if (!strncmp (str, "WU", 2))
        return CONSTRAINT_WU;
      break;
    case 'Y':
      if (!strncmp (str, "Y2", 2))
        return CONSTRAINT_Y2;
      if (!strncmp (str, "Y0", 2))
        return CONSTRAINT_Y0;
      break;
    case 'Z':
      return CONSTRAINT_Z;
    case 'a':
      return CONSTRAINT_a;
    case 'c':
      return CONSTRAINT_c;
    case 'd':
      return CONSTRAINT_d;
    case 'f':
      return CONSTRAINT_f;
    default: break;
    }
  return CONSTRAINT__UNKNOWN;
}

enum reg_class
regclass_for_constraint (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_a: return MAC_REGS;
    case CONSTRAINT_c: return COUNTER_REGS;
    case CONSTRAINT_d: return (!flag_omit_frame_pointer && !reload_completed
    ? NO_REGS
    : (frame_pointer_needed && reload_in_progress
       ? NO_REGS
       : DESTINATION_REGS));
    case CONSTRAINT_D: return GENERAL_REGS;
    case CONSTRAINT_f: return SOURCE_REGS;
    default: break;
    }
  return NO_REGS;
}

bool
constraint_satisfied_p (rtx op, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_I: return satisfies_constraint_I (op);
    case CONSTRAINT_J: return satisfies_constraint_J (op);
    case CONSTRAINT_L: return satisfies_constraint_L (op);
    case CONSTRAINT_M: return satisfies_constraint_M (op);
    case CONSTRAINT_N: return satisfies_constraint_N (op);
    case CONSTRAINT_O: return satisfies_constraint_O (op);
    case CONSTRAINT_P1_gX: return satisfies_constraint_P1_gX (op);
    case CONSTRAINT_P3_gX: return satisfies_constraint_P3_gX (op);
    case CONSTRAINT_P4_gX: return satisfies_constraint_P4_gX (op);
    case CONSTRAINT_P5_gX: return satisfies_constraint_P5_gX (op);
    case CONSTRAINT_P8_gX: return satisfies_constraint_P8_gX (op);
    case CONSTRAINT_P3_lX: return satisfies_constraint_P3_lX (op);
    case CONSTRAINT_G: return satisfies_constraint_G (op);
    case CONSTRAINT_Q: return satisfies_constraint_Q (op);
    case CONSTRAINT_R: return satisfies_constraint_R (op);
    case CONSTRAINT_S: return satisfies_constraint_S (op);
    case CONSTRAINT_T: return satisfies_constraint_T (op);
    case CONSTRAINT_U: return satisfies_constraint_U (op);
    case CONSTRAINT_WU: return satisfies_constraint_WU (op);
    case CONSTRAINT_Y0: return satisfies_constraint_Y0 (op);
    case CONSTRAINT_Y2: return satisfies_constraint_Y2 (op);
    case CONSTRAINT_Z: return satisfies_constraint_Z (op);
    default: break;
    }
  return false;
}

bool
insn_const_int_ok_for_constraint (HOST_WIDE_INT ival, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_I:
      return 
#line 77 "../.././gcc/config/h8300/constraints.md"
(ival == 0);

    case CONSTRAINT_J:
      return 
#line 82 "../.././gcc/config/h8300/constraints.md"
((ival & 0xff) == 0);

    case CONSTRAINT_L:
      return (
#line 87 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300H || TARGET_H8300S)) ? (
#line 88 "../.././gcc/config/h8300/constraints.md"
(ival == 1 || ival == 2 || ival == 4)) : (
#line 89 "../.././gcc/config/h8300/constraints.md"
(ival == 1 || ival == 2));

    case CONSTRAINT_M:
      return 
#line 94 "../.././gcc/config/h8300/constraints.md"
(ival == 1 || ival == 2);

    case CONSTRAINT_N:
      return (
#line 99 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300H || TARGET_H8300S)) ? (
#line 100 "../.././gcc/config/h8300/constraints.md"
(ival == -1 || ival == -2 || ival == -4)) : (
#line 101 "../.././gcc/config/h8300/constraints.md"
(ival == -1 || ival == -2));

    case CONSTRAINT_O:
      return 
#line 106 "../.././gcc/config/h8300/constraints.md"
(ival == -1 || ival == -2);

    case CONSTRAINT_P1_gX:
      return (
#line 111 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300SX)) && (
#line 112 "../.././gcc/config/h8300/constraints.md"
(IN_RANGE (ival, 1, (1 << 1) - 1)));

    case CONSTRAINT_P3_gX:
      return (
#line 117 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300SX)) && (
#line 118 "../.././gcc/config/h8300/constraints.md"
(IN_RANGE (ival, 1, (1 << 3) - 1)));

    case CONSTRAINT_P4_gX:
      return (
#line 123 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300SX)) && (
#line 124 "../.././gcc/config/h8300/constraints.md"
(IN_RANGE (ival, 1, (1 << 4) - 1)));

    case CONSTRAINT_P5_gX:
      return (
#line 129 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300SX)) && (
#line 130 "../.././gcc/config/h8300/constraints.md"
(IN_RANGE (ival, 1, (1 << 5) - 1)));

    case CONSTRAINT_P8_gX:
      return (
#line 135 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300SX)) && (
#line 136 "../.././gcc/config/h8300/constraints.md"
(IN_RANGE (ival, 1, (1 << 8) - 1)));

    case CONSTRAINT_P3_lX:
      return (
#line 141 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300SX)) && (
#line 142 "../.././gcc/config/h8300/constraints.md"
(IN_RANGE (ival, (-(1 << 3)) + 1, -1)));

    default: break;
    }
  return false;
}

bool
insn_extra_memory_constraint (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_WU:
      return true;

    default: break;
    }
  return false;
}

