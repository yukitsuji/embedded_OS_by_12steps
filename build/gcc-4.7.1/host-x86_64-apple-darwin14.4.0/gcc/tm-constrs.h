/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../.././gcc/config/h8300/h8300.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 77 "../.././gcc/config/h8300/constraints.md"
(ival == 0));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 82 "../.././gcc/config/h8300/constraints.md"
((ival & 0xff) == 0));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 87 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300H || TARGET_H8300S)) ? (
#line 88 "../.././gcc/config/h8300/constraints.md"
(ival == 1 || ival == 2 || ival == 4)) : (
#line 89 "../.././gcc/config/h8300/constraints.md"
(ival == 1 || ival == 2)));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 94 "../.././gcc/config/h8300/constraints.md"
(ival == 1 || ival == 2));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 99 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300H || TARGET_H8300S)) ? (
#line 100 "../.././gcc/config/h8300/constraints.md"
(ival == -1 || ival == -2 || ival == -4)) : (
#line 101 "../.././gcc/config/h8300/constraints.md"
(ival == -1 || ival == -2)));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 106 "../.././gcc/config/h8300/constraints.md"
(ival == -1 || ival == -2));
}
static inline bool
satisfies_constraint_P1_gX (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 111 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300SX)) && (
#line 112 "../.././gcc/config/h8300/constraints.md"
(IN_RANGE (ival, 1, (1 << 1) - 1))));
}
static inline bool
satisfies_constraint_P3_gX (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 117 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300SX)) && (
#line 118 "../.././gcc/config/h8300/constraints.md"
(IN_RANGE (ival, 1, (1 << 3) - 1))));
}
static inline bool
satisfies_constraint_P4_gX (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 123 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300SX)) && (
#line 124 "../.././gcc/config/h8300/constraints.md"
(IN_RANGE (ival, 1, (1 << 4) - 1))));
}
static inline bool
satisfies_constraint_P5_gX (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 129 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300SX)) && (
#line 130 "../.././gcc/config/h8300/constraints.md"
(IN_RANGE (ival, 1, (1 << 5) - 1))));
}
static inline bool
satisfies_constraint_P8_gX (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 135 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300SX)) && (
#line 136 "../.././gcc/config/h8300/constraints.md"
(IN_RANGE (ival, 1, (1 << 8) - 1))));
}
static inline bool
satisfies_constraint_P3_lX (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 141 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300SX)) && (
#line 142 "../.././gcc/config/h8300/constraints.md"
(IN_RANGE (ival, (-(1 << 3)) + 1, -1))));
}
static inline bool
satisfies_constraint_G (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 148 "../.././gcc/config/h8300/constraints.md"
(op == CONST0_RTX (SFmode)));
}
static inline bool
satisfies_constraint_Q (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return (
#line 153 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300SX)) && (memory_operand (op, mode));
}
static inline bool
satisfies_constraint_R (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 159 "../.././gcc/config/h8300/constraints.md"
(!h8300_shift_needs_scratch_p (ival, QImode)));
}
static inline bool
satisfies_constraint_S (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 164 "../.././gcc/config/h8300/constraints.md"
(!h8300_shift_needs_scratch_p (ival, HImode)));
}
static inline bool
satisfies_constraint_T (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 169 "../.././gcc/config/h8300/constraints.md"
(!h8300_shift_needs_scratch_p (ival, SImode)));
}
static inline bool
satisfies_constraint_U (rtx op)
{
  return ((GET_CODE (op) == REG) && (
#line 174 "../.././gcc/config/h8300/constraints.md"
(REG_OK_FOR_BASE_P (op)))) || (((GET_CODE (op) == MEM) && ((GET_CODE (XEXP (op, 0)) == REG) && (
#line 177 "../.././gcc/config/h8300/constraints.md"
(REG_OK_FOR_BASE_P (XEXP (op, 0)))))) || (((GET_CODE (op) == MEM) && ((GET_CODE (XEXP (op, 0)) == SYMBOL_REF) && (
#line 180 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300S)))) || (((GET_CODE (op) == MEM) && ((GET_CODE (XEXP (op, 0)) == CONST) && ((GET_CODE (XEXP (XEXP (op, 0), 0)) == PLUS) && ((GET_CODE (XEXP (XEXP (XEXP (op, 0), 0), 0)) == SYMBOL_REF) && ((GET_CODE (XEXP (XEXP (XEXP (op, 0), 0), 1)) == CONST_INT) && ((
#line 186 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300S)) || (
#line 187 "../.././gcc/config/h8300/constraints.md"
(SYMBOL_REF_FLAG (XEXP (XEXP (XEXP (op, 0), 0), 0)))))))))) || (((GET_CODE (op) == MEM) && (
#line 189 "../.././gcc/config/h8300/constraints.md"
(h8300_eightbit_constant_address_p (XEXP (op, 0))))) || ((GET_CODE (op) == MEM) && (((
#line 191 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300S)) || (
#line 192 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300SX))) && (GET_CODE (XEXP (op, 0)) == CONST_INT)))))));
}
static inline bool
satisfies_constraint_WU (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 198 "../.././gcc/config/h8300/constraints.md"
(satisfies_constraint_U (op)));
}
static inline bool
satisfies_constraint_Y0 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 203 "../.././gcc/config/h8300/constraints.md"
(exact_log2 (~ival & 0xff) != -1));
}
static inline bool
satisfies_constraint_Y2 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 208 "../.././gcc/config/h8300/constraints.md"
(exact_log2 (ival & 0xff) != -1));
}
static inline bool
satisfies_constraint_Z (rtx op)
{
  return (
#line 212 "../.././gcc/config/h8300/constraints.md"
(TARGET_H8300SX)) && ((GET_CODE (op) == MEM) && (
#line 214 "../.././gcc/config/h8300/constraints.md"
(CONSTANT_P (XEXP (op, 0)))));
}
#endif /* tm-constrs.h */
