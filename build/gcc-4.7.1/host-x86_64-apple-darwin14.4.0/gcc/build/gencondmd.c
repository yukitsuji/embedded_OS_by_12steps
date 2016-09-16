/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "tm-constrs.h"

#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

#line 3510 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300SX\n\
   && (GET_MODE (operands[3]) == GET_MODE (operands[4])\n\
       || GET_CODE (operands[4]) == CONST_INT)\n\
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_INT\n\
   && GET_MODE_SIZE (GET_MODE (operands[3])) <= 4",
    __builtin_constant_p 
#line 3510 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && (GET_MODE (operands[3]) == GET_MODE (operands[4])
       || GET_CODE (operands[4]) == CONST_INT)
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) <= 4)
    ? (int) 
#line 3510 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && (GET_MODE (operands[3]) == GET_MODE (operands[4])
       || GET_CODE (operands[4]) == CONST_INT)
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) <= 4)
    : -1 },
#line 4175 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[2]) < 16",
    __builtin_constant_p 
#line 4175 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) < 16)
    ? (int) 
#line 4175 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) < 16)
    : -1 },
  { "((TARGET_H8300H || TARGET_H8300S)) && ( reload_completed)",
    __builtin_constant_p (
#line 4369 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)) && 
#line 4371 "../.././gcc/config/h8300/h8300.md"
( reload_completed))
    ? (int) (
#line 4369 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)) && 
#line 4371 "../.././gcc/config/h8300/h8300.md"
( reload_completed))
    : -1 },
#line 3359 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300 || TARGET_H8300SX",
    __builtin_constant_p 
#line 3359 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300 || TARGET_H8300SX)
    ? (int) 
#line 3359 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300 || TARGET_H8300SX)
    : -1 },
#line 5059 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && !MEM_VOLATILE_P (operands[1])\n\
   && offsettable_memref_p (operands[1])\n\
   && (INTVAL (operands[2]) & ~0xffff) == 0\n\
   && INTVAL (operands[2]) != 255",
    __builtin_constant_p 
#line 5059 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && !MEM_VOLATILE_P (operands[1])
   && offsettable_memref_p (operands[1])
   && (INTVAL (operands[2]) & ~0xffff) == 0
   && INTVAL (operands[2]) != 255)
    ? (int) 
#line 5059 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && !MEM_VOLATILE_P (operands[1])
   && offsettable_memref_p (operands[1])
   && (INTVAL (operands[2]) & ~0xffff) == 0
   && INTVAL (operands[2]) != 255)
    : -1 },
#line 3786 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300H",
    __builtin_constant_p 
#line 3786 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H)
    ? (int) 
#line 3786 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H)
    : -1 },
#line 3260 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300\n\
   && INTVAL (operands[2]) < 16\n\
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])",
    __builtin_constant_p 
#line 3260 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300
   && INTVAL (operands[2]) < 16
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3]))
    ? (int) 
#line 3260 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300
   && INTVAL (operands[2]) < 16
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3]))
    : -1 },
#line 5535 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && peep2_reg_dead_p (1, operands[0])\n\
   && (INTVAL (operands[1]) == -2147483647 - 1\n\
       || (TARGET_H8300S && INTVAL (operands[1]) == 1073741824))",
    __builtin_constant_p 
#line 5535 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == -2147483647 - 1
       || (TARGET_H8300S && INTVAL (operands[1]) == 1073741824)))
    ? (int) 
#line 5535 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == -2147483647 - 1
       || (TARGET_H8300S && INTVAL (operands[1]) == 1073741824)))
    : -1 },
#line 1801 "../.././gcc/config/h8300/h8300.md"
  { "(INTVAL (operands[3]) & 0xffff) != 0",
    __builtin_constant_p 
#line 1801 "../.././gcc/config/h8300/h8300.md"
((INTVAL (operands[3]) & 0xffff) != 0)
    ? (int) 
#line 1801 "../.././gcc/config/h8300/h8300.md"
((INTVAL (operands[3]) & 0xffff) != 0)
    : -1 },
  { "((TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[1]) >= 16) && ( reload_completed)",
    __builtin_constant_p (
#line 953 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) >= 16) && 
#line 956 "../.././gcc/config/h8300/h8300.md"
( reload_completed))
    ? (int) (
#line 953 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) >= 16) && 
#line 956 "../.././gcc/config/h8300/h8300.md"
( reload_completed))
    : -1 },
#line 4347 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && epilogue_completed\n\
   && !(find_regno_note (insn, REG_DEAD, REGNO (operands[1]))\n\
        && REGNO (operands[0]) != REGNO (operands[1]))",
    __builtin_constant_p 
#line 4347 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && epilogue_completed
   && !(find_regno_note (insn, REG_DEAD, REGNO (operands[1]))
        && REGNO (operands[0]) != REGNO (operands[1])))
    ? (int) 
#line 4347 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && epilogue_completed
   && !(find_regno_note (insn, REG_DEAD, REGNO (operands[1]))
        && REGNO (operands[0]) != REGNO (operands[1])))
    : -1 },
#line 4681 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300S && TARGET_NORMAL_MODE\n\
   && (REGNO_REG_CLASS (REGNO (operands[3])) == GENERAL_REGS\n\
       && REGNO (operands[1]) == REGNO (operands[0]) + 1\n\
       && REGNO (operands[2]) == REGNO (operands[0]) + 2\n\
       && REGNO (operands[3]) == REGNO (operands[0]) + 3\n\
       && (TARGET_H8300SX || REGNO (operands[0]) == 0))",
    __builtin_constant_p 
#line 4681 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[3])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && REGNO (operands[2]) == REGNO (operands[0]) + 2
       && REGNO (operands[3]) == REGNO (operands[0]) + 3
       && (TARGET_H8300SX || REGNO (operands[0]) == 0)))
    ? (int) 
#line 4681 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[3])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && REGNO (operands[2]) == REGNO (operands[0]) + 2
       && REGNO (operands[3]) == REGNO (operands[0]) + 3
       && (TARGET_H8300SX || REGNO (operands[0]) == 0)))
    : -1 },
#line 1955 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300SX || register_operand (operands[0], QImode)\n\
   || single_one_operand (operands[2], QImode)",
    __builtin_constant_p 
#line 1955 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX || register_operand (operands[0], QImode)
   || single_one_operand (operands[2], QImode))
    ? (int) 
#line 1955 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX || register_operand (operands[0], QImode)
   || single_one_operand (operands[2], QImode))
    : -1 },
#line 2219 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S) && h8300_operands_match_p (operands)",
    __builtin_constant_p 
#line 2219 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && h8300_operands_match_p (operands))
    ? (int) 
#line 2219 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && h8300_operands_match_p (operands))
    : -1 },
#line 5856 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300H || TARGET_H8300S",
    __builtin_constant_p 
#line 5856 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S)
    ? (int) 
#line 5856 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S)
    : -1 },
#line 4773 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300S && TARGET_NORMAL_MODE\n\
   && (REGNO_REG_CLASS (REGNO (operands[1])) == GENERAL_REGS\n\
       && REGNO (operands[1]) == REGNO (operands[0]) + 1\n\
       && (TARGET_H8300SX || (REGNO (operands[0]) & 1) == 0))",
    __builtin_constant_p 
#line 4773 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[1])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && (TARGET_H8300SX || (REGNO (operands[0]) & 1) == 0)))
    ? (int) 
#line 4773 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[1])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && (TARGET_H8300SX || (REGNO (operands[0]) & 1) == 0)))
    : -1 },
#line 2838 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX",
    __builtin_constant_p 
#line 2838 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX)
    ? (int) 
#line 2838 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX)
    : -1 },
  { "(TARGET_H8300H || TARGET_H8300S) && (Pmode == HImode)",
    __builtin_constant_p (
#line 881 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S) && 
#line 188 "../.././gcc/config/h8300/h8300.md"
(Pmode == HImode))
    ? (int) (
#line 881 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S) && 
#line 188 "../.././gcc/config/h8300/h8300.md"
(Pmode == HImode))
    : -1 },
#line 4522 "../.././gcc/config/h8300/h8300.md"
  { "INTVAL (operands[3]) == (255 >> INTVAL (operands[1]))",
    __builtin_constant_p 
#line 4522 "../.././gcc/config/h8300/h8300.md"
(INTVAL (operands[3]) == (255 >> INTVAL (operands[1])))
    ? (int) 
#line 4522 "../.././gcc/config/h8300/h8300.md"
(INTVAL (operands[3]) == (255 >> INTVAL (operands[1])))
    : -1 },
#line 5496 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && peep2_reg_dead_p (1, operands[0])\n\
   && ((INTVAL (operands[1]) | 0x00ff) == -1\n\
	|| (INTVAL (operands[1]) | 0xff00) == -1)\n\
   && INTVAL (operands[1]) != -1\n\
   && INTVAL (operands[1]) != -2",
    __builtin_constant_p 
#line 5496 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((INTVAL (operands[1]) | 0x00ff) == -1
	|| (INTVAL (operands[1]) | 0xff00) == -1)
   && INTVAL (operands[1]) != -1
   && INTVAL (operands[1]) != -2)
    ? (int) 
#line 5496 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((INTVAL (operands[1]) | 0x00ff) == -1
	|| (INTVAL (operands[1]) | 0xff00) == -1)
   && INTVAL (operands[1]) != -1
   && INTVAL (operands[1]) != -2)
    : -1 },
  { "((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX) && ( reload_completed)",
    __builtin_constant_p (
#line 2838 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX) && 
#line 2840 "../.././gcc/config/h8300/h8300.md"
( reload_completed))
    ? (int) (
#line 2838 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX) && 
#line 2840 "../.././gcc/config/h8300/h8300.md"
( reload_completed))
    : -1 },
#line 691 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300SX && TARGET_NORMAL_MODE",
    __builtin_constant_p 
#line 691 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && TARGET_NORMAL_MODE)
    ? (int) 
#line 691 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && TARGET_NORMAL_MODE)
    : -1 },
#line 2574 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300H && TARGET_H8300S && TARGET_NORMAL_MODE",
    __builtin_constant_p 
#line 2574 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H && TARGET_H8300S && TARGET_NORMAL_MODE)
    ? (int) 
#line 2574 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H && TARGET_H8300S && TARGET_NORMAL_MODE)
    : -1 },
#line 3692 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300SX && reload_completed",
    __builtin_constant_p 
#line 3692 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && reload_completed)
    ? (int) 
#line 3692 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && reload_completed)
    : -1 },
#line 3491 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300SX",
    __builtin_constant_p 
#line 3491 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX)
    ? (int) 
#line 3491 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX)
    : -1 },
#line 5103 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)",
    __builtin_constant_p 
#line 5103 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S))
    ? (int) 
#line 5103 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S))
    : -1 },
#line 4860 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && REG_P (operands[0]) && REG_P (operands[1])\n\
   && REGNO (operands[0]) != REGNO (operands[1])\n\
   && !satisfies_constraint_L (operands[2])\n\
   && !satisfies_constraint_N (operands[2])\n\
   && ((INTVAL (operands[2]) & 0xff) == INTVAL (operands[2])\n\
       || (INTVAL (operands[2]) & 0xff00) == INTVAL (operands[2])\n\
       || INTVAL (operands[2]) == 0xffff\n\
       || INTVAL (operands[2]) == 0xfffe)",
    __builtin_constant_p 
#line 4860 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) != REGNO (operands[1])
   && !satisfies_constraint_L (operands[2])
   && !satisfies_constraint_N (operands[2])
   && ((INTVAL (operands[2]) & 0xff) == INTVAL (operands[2])
       || (INTVAL (operands[2]) & 0xff00) == INTVAL (operands[2])
       || INTVAL (operands[2]) == 0xffff
       || INTVAL (operands[2]) == 0xfffe))
    ? (int) 
#line 4860 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) != REGNO (operands[1])
   && !satisfies_constraint_L (operands[2])
   && !satisfies_constraint_N (operands[2])
   && ((INTVAL (operands[2]) & 0xff) == INTVAL (operands[2])
       || (INTVAL (operands[2]) & 0xff00) == INTVAL (operands[2])
       || INTVAL (operands[2]) == 0xffff
       || INTVAL (operands[2]) == 0xfffe))
    : -1 },
#line 6050 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S) && !TARGET_NORMAL_MODE\n\
   && REGNO (operands[0]) != SP_REG",
    __builtin_constant_p 
#line 6050 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_NORMAL_MODE
   && REGNO (operands[0]) != SP_REG)
    ? (int) 
#line 6050 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_NORMAL_MODE
   && REGNO (operands[0]) != SP_REG)
    : -1 },
#line 6142 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300SX\n\
   && peep2_reg_dead_p (3, operands[0])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[3])\n\
   && h8sx_mergeable_memrefs_p (operands[3], operands[1])",
    __builtin_constant_p 
#line 6142 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[3])
   && h8sx_mergeable_memrefs_p (operands[3], operands[1]))
    ? (int) 
#line 6142 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[3])
   && h8sx_mergeable_memrefs_p (operands[3], operands[1]))
    : -1 },
#line 953 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[1]) >= 16",
    __builtin_constant_p 
#line 953 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) >= 16)
    ? (int) 
#line 953 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) >= 16)
    : -1 },
#line 2736 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX\n\
   && reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && reload_completed",
    __builtin_constant_p 
#line 2736 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX
   && reg_overlap_mentioned_p (operands[0], operands[1])
   && reload_completed)
    ? (int) 
#line 2736 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX
   && reg_overlap_mentioned_p (operands[0], operands[1])
   && reload_completed)
    : -1 },
#line 3105 "../.././gcc/config/h8300/h8300.md"
  { "epilogue_completed\n\
   && !find_regno_note (insn, REG_DEAD, REGNO (operands[1]))",
    __builtin_constant_p 
#line 3105 "../.././gcc/config/h8300/h8300.md"
(epilogue_completed
   && !find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    ? (int) 
#line 3105 "../.././gcc/config/h8300/h8300.md"
(epilogue_completed
   && !find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    : -1 },
#line 3074 "../.././gcc/config/h8300/h8300.md"
  { "epilogue_completed\n\
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1]))",
    __builtin_constant_p 
#line 3074 "../.././gcc/config/h8300/h8300.md"
(epilogue_completed
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    ? (int) 
#line 3074 "../.././gcc/config/h8300/h8300.md"
(epilogue_completed
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    : -1 },
#line 422 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300S || TARGET_H8300H) && !TARGET_H8300SX\n\
   && h8300_move_ok (operands[0], operands[1])",
    __builtin_constant_p 
#line 422 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300S || TARGET_H8300H) && !TARGET_H8300SX
   && h8300_move_ok (operands[0], operands[1]))
    ? (int) 
#line 422 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300S || TARGET_H8300H) && !TARGET_H8300SX
   && h8300_move_ok (operands[0], operands[1]))
    : -1 },
#line 280 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX\n\
   && h8300_move_ok (operands[0], operands[1])",
    __builtin_constant_p 
#line 280 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX
   && h8300_move_ok (operands[0], operands[1]))
    ? (int) 
#line 280 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX
   && h8300_move_ok (operands[0], operands[1]))
    : -1 },
#line 2011 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300S || TARGET_H8300H) && h8300_operands_match_p (operands)",
    __builtin_constant_p 
#line 2011 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300S || TARGET_H8300H) && h8300_operands_match_p (operands))
    ? (int) 
#line 2011 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300S || TARGET_H8300H) && h8300_operands_match_p (operands))
    : -1 },
#line 3037 "../.././gcc/config/h8300/h8300.md"
  { "h8300_operands_match_p (operands)",
    __builtin_constant_p 
#line 3037 "../.././gcc/config/h8300/h8300.md"
(h8300_operands_match_p (operands))
    ? (int) 
#line 3037 "../.././gcc/config/h8300/h8300.md"
(h8300_operands_match_p (operands))
    : -1 },
  { "((TARGET_H8300H || TARGET_H8300S)) && ( reload_completed\n\
   && !satisfies_constraint_U (operands[0]))",
    __builtin_constant_p (
#line 988 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)) && 
#line 993 "../.././gcc/config/h8300/h8300.md"
( reload_completed
   && !satisfies_constraint_U (operands[0])))
    ? (int) (
#line 988 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)) && 
#line 993 "../.././gcc/config/h8300/h8300.md"
( reload_completed
   && !satisfies_constraint_U (operands[0])))
    : -1 },
#line 4637 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300S && TARGET_NORMAL_MODE && REGNO (operands[0]) != SP_REG",
    __builtin_constant_p 
#line 4637 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && TARGET_NORMAL_MODE && REGNO (operands[0]) != SP_REG)
    ? (int) 
#line 4637 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && TARGET_NORMAL_MODE && REGNO (operands[0]) != SP_REG)
    : -1 },
#line 1167 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300 && epilogue_completed",
    __builtin_constant_p 
#line 1167 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300 && epilogue_completed)
    ? (int) 
#line 1167 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300 && epilogue_completed)
    : -1 },
#line 3220 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300 || TARGET_H8300SX)\n\
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])",
    __builtin_constant_p 
#line 3220 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300 || TARGET_H8300SX)
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3]))
    ? (int) 
#line 3220 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300 || TARGET_H8300SX)
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3]))
    : -1 },
#line 705 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300SX && !TARGET_NORMAL_MODE",
    __builtin_constant_p 
#line 705 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && !TARGET_NORMAL_MODE)
    ? (int) 
#line 705 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && !TARGET_NORMAL_MODE)
    : -1 },
#line 5782 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && peep2_reg_dead_p (1, operands[0])\n\
   && ((TARGET_H8300H && INTVAL (operands[1]) == 3)\n\
       || INTVAL (operands[1]) == 7\n\
       || INTVAL (operands[1]) == 15\n\
       || INTVAL (operands[1]) == 31\n\
       || INTVAL (operands[1]) == 63\n\
       || INTVAL (operands[1]) == 127\n\
       || INTVAL (operands[1]) == 255)",
    __builtin_constant_p 
#line 5782 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((TARGET_H8300H && INTVAL (operands[1]) == 3)
       || INTVAL (operands[1]) == 7
       || INTVAL (operands[1]) == 15
       || INTVAL (operands[1]) == 31
       || INTVAL (operands[1]) == 63
       || INTVAL (operands[1]) == 127
       || INTVAL (operands[1]) == 255))
    ? (int) 
#line 5782 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((TARGET_H8300H && INTVAL (operands[1]) == 3)
       || INTVAL (operands[1]) == 7
       || INTVAL (operands[1]) == 15
       || INTVAL (operands[1]) == 31
       || INTVAL (operands[1]) == 63
       || INTVAL (operands[1]) == 127
       || INTVAL (operands[1]) == 255))
    : -1 },
#line 2751 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && reload_completed",
    __builtin_constant_p 
#line 2751 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && reload_completed)
    ? (int) 
#line 2751 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && reload_completed)
    : -1 },
#line 3861 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && exact_log2 (INTVAL (operands[3])) < 16\n\
   && INTVAL (operands[2]) + exact_log2 (INTVAL (operands[3])) == 31",
    __builtin_constant_p 
#line 3861 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && exact_log2 (INTVAL (operands[3])) < 16
   && INTVAL (operands[2]) + exact_log2 (INTVAL (operands[3])) == 31)
    ? (int) 
#line 3861 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && exact_log2 (INTVAL (operands[3])) < 16
   && INTVAL (operands[2]) + exact_log2 (INTVAL (operands[3])) == 31)
    : -1 },
#line 2568 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300H && TARGET_H8300S && !TARGET_NORMAL_MODE",
    __builtin_constant_p 
#line 2568 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H && TARGET_H8300S && !TARGET_NORMAL_MODE)
    ? (int) 
#line 2568 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H && TARGET_H8300S && !TARGET_NORMAL_MODE)
    : -1 },
#line 6197 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300SX\n\
   && peep2_reg_dead_p (2, operands[0])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[2])",
    __builtin_constant_p 
#line 6197 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[2]))
    ? (int) 
#line 6197 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[2]))
    : -1 },
#line 3732 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[1]) < 16",
    __builtin_constant_p 
#line 3732 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) < 16)
    ? (int) 
#line 3732 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) < 16)
    : -1 },
#line 632 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300SX && !TARGET_NORMAL_MODE\n\
   && reload_completed\n\
   && REGNO (operands[4]) != DESTINATION_REG",
    __builtin_constant_p 
#line 632 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && !TARGET_NORMAL_MODE
   && reload_completed
   && REGNO (operands[4]) != DESTINATION_REG)
    ? (int) 
#line 632 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && !TARGET_NORMAL_MODE
   && reload_completed
   && REGNO (operands[4]) != DESTINATION_REG)
    : -1 },
#line 352 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300\n\
   && h8300_move_ok (operands[0], operands[1])",
    __builtin_constant_p 
#line 352 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300
   && h8300_move_ok (operands[0], operands[1]))
    ? (int) 
#line 352 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300
   && h8300_move_ok (operands[0], operands[1]))
    : -1 },
#line 720 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300SX && TARGET_NORMAL_MODE\n\
   && reload_completed\n\
   && REGNO (operands[2]) != DESTINATION_REG",
    __builtin_constant_p 
#line 720 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && TARGET_NORMAL_MODE
   && reload_completed
   && REGNO (operands[2]) != DESTINATION_REG)
    ? (int) 
#line 720 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && TARGET_NORMAL_MODE
   && reload_completed
   && REGNO (operands[2]) != DESTINATION_REG)
    : -1 },
#line 1747 "../.././gcc/config/h8300/h8300.md"
  { "register_operand (operands[0], QImode)\n\
   || single_zero_operand (operands[2], QImode)",
    __builtin_constant_p 
#line 1747 "../.././gcc/config/h8300/h8300.md"
(register_operand (operands[0], QImode)
   || single_zero_operand (operands[2], QImode))
    ? (int) 
#line 1747 "../.././gcc/config/h8300/h8300.md"
(register_operand (operands[0], QImode)
   || single_zero_operand (operands[2], QImode))
    : -1 },
#line 2479 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S) && TARGET_NORMAL_MODE",
    __builtin_constant_p 
#line 2479 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && TARGET_NORMAL_MODE)
    ? (int) 
#line 2479 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && TARGET_NORMAL_MODE)
    : -1 },
#line 4327 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && epilogue_completed\n\
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1]))\n\
   && REGNO (operands[0]) != REGNO (operands[1])",
    __builtin_constant_p 
#line 4327 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && epilogue_completed
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1]))
    ? (int) 
#line 4327 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && epilogue_completed
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1]))
    : -1 },
#line 6169 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300SX\n\
   && peep2_reg_dead_p (2, operands[0])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[2])\n\
   && operands[2] != const0_rtx",
    __builtin_constant_p 
#line 6169 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && operands[2] != const0_rtx)
    ? (int) 
#line 6169 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && operands[2] != const0_rtx)
    : -1 },
#line 4156 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && ((INTVAL (operands[3]) << INTVAL (operands[2])) & ~0xffff) == 0",
    __builtin_constant_p 
#line 4156 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && ((INTVAL (operands[3]) << INTVAL (operands[2])) & ~0xffff) == 0)
    ? (int) 
#line 4156 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && ((INTVAL (operands[3]) << INTVAL (operands[2])) & ~0xffff) == 0)
    : -1 },
#line 5895 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[1]) != 0\n\
   && !peep2_reg_dead_p (1, operands[0])\n\
   && !same_cmp_following_p (insn)",
    __builtin_constant_p 
#line 5895 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) != 0
   && !peep2_reg_dead_p (1, operands[0])
   && !same_cmp_following_p (insn))
    ? (int) 
#line 5895 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) != 0
   && !peep2_reg_dead_p (1, operands[0])
   && !same_cmp_following_p (insn))
    : -1 },
  { "((TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[2]) <= 15\n\
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff)) && ( reload_completed)",
    __builtin_constant_p (
#line 3841 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) <= 15
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff)) && 
#line 3845 "../.././gcc/config/h8300/h8300.md"
( reload_completed))
    ? (int) (
#line 3841 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) <= 15
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff)) && 
#line 3845 "../.././gcc/config/h8300/h8300.md"
( reload_completed))
    : -1 },
#line 3272 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[2]) < 16\n\
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])",
    __builtin_constant_p 
#line 3272 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) < 16
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3]))
    ? (int) 
#line 3272 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) < 16
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3]))
    : -1 },
#line 5039 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 5039 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    ? (int) 
#line 5039 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    : -1 },
#line 4977 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && !reg_overlap_mentioned_p (operands[2], operands[1])\n\
   && REGNO (operands[0]) == REGNO (operands[2])",
    __builtin_constant_p 
#line 4977 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[2], operands[1])
   && REGNO (operands[0]) == REGNO (operands[2]))
    ? (int) 
#line 4977 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[2], operands[1])
   && REGNO (operands[0]) == REGNO (operands[2]))
    : -1 },
#line 5457 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && peep2_reg_dead_p (1, operands[0])\n\
   && ((INTVAL (operands[1]) & 0x00ff) == INTVAL (operands[1])\n\
       || (INTVAL (operands[1]) & 0xff00) == INTVAL (operands[1])\n\
       || INTVAL (operands[1]) == 0x0000ffff)\n\
   && INTVAL (operands[1]) != 0\n\
   && INTVAL (operands[1]) != 1\n\
   && INTVAL (operands[1]) != 2",
    __builtin_constant_p 
#line 5457 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((INTVAL (operands[1]) & 0x00ff) == INTVAL (operands[1])
       || (INTVAL (operands[1]) & 0xff00) == INTVAL (operands[1])
       || INTVAL (operands[1]) == 0x0000ffff)
   && INTVAL (operands[1]) != 0
   && INTVAL (operands[1]) != 1
   && INTVAL (operands[1]) != 2)
    ? (int) 
#line 5457 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((INTVAL (operands[1]) & 0x00ff) == INTVAL (operands[1])
       || (INTVAL (operands[1]) & 0xff00) == INTVAL (operands[1])
       || INTVAL (operands[1]) == 0x0000ffff)
   && INTVAL (operands[1]) != 0
   && INTVAL (operands[1]) != 1
   && INTVAL (operands[1]) != 2)
    : -1 },
#line 4049 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && reload_completed\n\
   && byte_accesses_mergeable_p (XEXP (operands[2], 0), XEXP (operands[1], 0))",
    __builtin_constant_p 
#line 4049 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && reload_completed
   && byte_accesses_mergeable_p (XEXP (operands[2], 0), XEXP (operands[1], 0)))
    ? (int) 
#line 4049 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && reload_completed
   && byte_accesses_mergeable_p (XEXP (operands[2], 0), XEXP (operands[1], 0)))
    : -1 },
#line 740 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300SX && !TARGET_NORMAL_MODE\n\
   && reload_completed\n\
   && REGNO (operands[2]) != DESTINATION_REG",
    __builtin_constant_p 
#line 740 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && !TARGET_NORMAL_MODE
   && reload_completed
   && REGNO (operands[2]) != DESTINATION_REG)
    ? (int) 
#line 740 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && !TARGET_NORMAL_MODE
   && reload_completed
   && REGNO (operands[2]) != DESTINATION_REG)
    : -1 },
#line 781 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300\n\
   && (register_operand (operands[0], SFmode)\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 781 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 781 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 4831 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && REG_P (operands[0]) && REG_P (operands[2])\n\
   && REGNO (operands[0]) != REGNO (operands[2])\n\
   && (satisfies_constraint_L (operands[1])\n\
       || satisfies_constraint_N (operands[1]))",
    __builtin_constant_p 
#line 4831 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && REG_P (operands[0]) && REG_P (operands[2])
   && REGNO (operands[0]) != REGNO (operands[2])
   && (satisfies_constraint_L (operands[1])
       || satisfies_constraint_N (operands[1])))
    ? (int) 
#line 4831 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && REG_P (operands[0]) && REG_P (operands[2])
   && REGNO (operands[0]) != REGNO (operands[2])
   && (satisfies_constraint_L (operands[1])
       || satisfies_constraint_N (operands[1])))
    : -1 },
#line 2623 "../.././gcc/config/h8300/h8300.md"
  { "h8300_can_use_return_insn_p ()",
    __builtin_constant_p 
#line 2623 "../.././gcc/config/h8300/h8300.md"
(h8300_can_use_return_insn_p ())
    ? (int) 
#line 2623 "../.././gcc/config/h8300/h8300.md"
(h8300_can_use_return_insn_p ())
    : -1 },
#line 837 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX\n\
   && (register_operand (operands[0], SFmode)\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 837 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 837 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 5621 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && !peep2_reg_dead_p (1, operands[0])\n\
   && (INTVAL (operands[1]) == 1\n\
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))\n\
   && !same_cmp_preceding_p (insn)",
    __builtin_constant_p 
#line 5621 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && !peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == 1
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))
   && !same_cmp_preceding_p (insn))
    ? (int) 
#line 5621 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && !peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == 1
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))
   && !same_cmp_preceding_p (insn))
    : -1 },
#line 4992 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && !(GET_CODE (operands[1]) == MEM && !offsettable_memref_p (operands[1]))\n\
   && !(GET_CODE (operands[1]) == MEM && MEM_VOLATILE_P (operands[1]))",
    __builtin_constant_p 
#line 4992 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !(GET_CODE (operands[1]) == MEM && !offsettable_memref_p (operands[1]))
   && !(GET_CODE (operands[1]) == MEM && MEM_VOLATILE_P (operands[1])))
    ? (int) 
#line 4992 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !(GET_CODE (operands[1]) == MEM && !offsettable_memref_p (operands[1]))
   && !(GET_CODE (operands[1]) == MEM && MEM_VOLATILE_P (operands[1])))
    : -1 },
#line 4585 "../.././gcc/config/h8300/h8300.md"
  { "INTVAL (operands[3]) == (65535 << INTVAL (operands[1]))",
    __builtin_constant_p 
#line 4585 "../.././gcc/config/h8300/h8300.md"
(INTVAL (operands[3]) == (65535 << INTVAL (operands[1])))
    ? (int) 
#line 4585 "../.././gcc/config/h8300/h8300.md"
(INTVAL (operands[3]) == (65535 << INTVAL (operands[1])))
    : -1 },
#line 4653 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300S && !TARGET_NORMAL_MODE\n\
   && (REGNO_REG_CLASS (REGNO (operands[3])) == GENERAL_REGS\n\
       && REGNO (operands[1]) == REGNO (operands[0]) + 1\n\
       && REGNO (operands[2]) == REGNO (operands[0]) + 2\n\
       && REGNO (operands[3]) == REGNO (operands[0]) + 3\n\
       && (TARGET_H8300SX || REGNO (operands[0]) == 0))",
    __builtin_constant_p 
#line 4653 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && !TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[3])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && REGNO (operands[2]) == REGNO (operands[0]) + 2
       && REGNO (operands[3]) == REGNO (operands[0]) + 3
       && (TARGET_H8300SX || REGNO (operands[0]) == 0)))
    ? (int) 
#line 4653 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && !TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[3])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && REGNO (operands[2]) == REGNO (operands[0]) + 2
       && REGNO (operands[3]) == REGNO (operands[0]) + 3
       && (TARGET_H8300SX || REGNO (operands[0]) == 0)))
    : -1 },
#line 3841 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[2]) <= 15\n\
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff)",
    __builtin_constant_p 
#line 3841 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) <= 15
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff))
    ? (int) 
#line 3841 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) <= 15
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff))
    : -1 },
#line 941 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[1]) <= 15",
    __builtin_constant_p 
#line 941 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) <= 15)
    ? (int) 
#line 941 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) <= 15)
    : -1 },
#line 4732 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300S && TARGET_NORMAL_MODE\n\
   && (REGNO_REG_CLASS (REGNO (operands[2])) == GENERAL_REGS\n\
       && REGNO (operands[1]) == REGNO (operands[0]) + 1\n\
       && REGNO (operands[2]) == REGNO (operands[0]) + 2\n\
       && (TARGET_H8300SX || (REGNO (operands[0]) & 3) == 0))",
    __builtin_constant_p 
#line 4732 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[2])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && REGNO (operands[2]) == REGNO (operands[0]) + 2
       && (TARGET_H8300SX || (REGNO (operands[0]) & 3) == 0)))
    ? (int) 
#line 4732 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[2])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && REGNO (operands[2]) == REGNO (operands[0]) + 2
       && (TARGET_H8300SX || (REGNO (operands[0]) & 3) == 0)))
    : -1 },
#line 609 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300SX && TARGET_NORMAL_MODE\n\
   && reload_completed\n\
   && REGNO (operands[4]) != DESTINATION_REG",
    __builtin_constant_p 
#line 609 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && TARGET_NORMAL_MODE
   && reload_completed
   && REGNO (operands[4]) != DESTINATION_REG)
    ? (int) 
#line 609 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && TARGET_NORMAL_MODE
   && reload_completed
   && REGNO (operands[4]) != DESTINATION_REG)
    : -1 },
#line 3460 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300SX && INTVAL (operands[2]) + INTVAL (operands[3]) <= 8",
    __builtin_constant_p 
#line 3460 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && INTVAL (operands[2]) + INTVAL (operands[3]) <= 8)
    ? (int) 
#line 3460 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && INTVAL (operands[2]) + INTVAL (operands[3]) <= 8)
    : -1 },
#line 5974 "../.././gcc/config/h8300/h8300.md"
  { "peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 5974 "../.././gcc/config/h8300/h8300.md"
(peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 5974 "../.././gcc/config/h8300/h8300.md"
(peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 6082 "../.././gcc/config/h8300/h8300.md"
  { "0 /* Disable because it breaks compiling fp-bit.c.  */\n\
   && TARGET_H8300SX\n\
   && peep2_reg_dead_p (3, operands[0])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[3])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[4])\n\
   && h8sx_mergeable_memrefs_p (operands[4], operands[1])",
    __builtin_constant_p 
#line 6082 "../.././gcc/config/h8300/h8300.md"
(0 /* Disable because it breaks compiling fp-bit.c.  */
   && TARGET_H8300SX
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[4])
   && h8sx_mergeable_memrefs_p (operands[4], operands[1]))
    ? (int) 
#line 6082 "../.././gcc/config/h8300/h8300.md"
(0 /* Disable because it breaks compiling fp-bit.c.  */
   && TARGET_H8300SX
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[4])
   && h8sx_mergeable_memrefs_p (operands[4], operands[1]))
    : -1 },
#line 4564 "../.././gcc/config/h8300/h8300.md"
  { "INTVAL (operands[3]) == (65535 >> INTVAL (operands[1]))",
    __builtin_constant_p 
#line 4564 "../.././gcc/config/h8300/h8300.md"
(INTVAL (operands[3]) == (65535 >> INTVAL (operands[1])))
    ? (int) 
#line 4564 "../.././gcc/config/h8300/h8300.md"
(INTVAL (operands[3]) == (65535 >> INTVAL (operands[1])))
    : -1 },
#line 1214 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300SX && h8300_operands_match_p (operands)",
    __builtin_constant_p 
#line 1214 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && h8300_operands_match_p (operands))
    ? (int) 
#line 1214 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX && h8300_operands_match_p (operands))
    : -1 },
#line 2594 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300S",
    __builtin_constant_p 
#line 2594 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S)
    ? (int) 
#line 2594 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S)
    : -1 },
  { "(TARGET_H8300H || TARGET_H8300S) && (Pmode == SImode)",
    __builtin_constant_p (
#line 881 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S) && 
#line 188 "../.././gcc/config/h8300/h8300.md"
(Pmode == SImode))
    ? (int) (
#line 881 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300H || TARGET_H8300S) && 
#line 188 "../.././gcc/config/h8300/h8300.md"
(Pmode == SImode))
    : -1 },
#line 1559 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_MAC",
    __builtin_constant_p 
#line 1559 "../.././gcc/config/h8300/h8300.md"
(TARGET_MAC)
    ? (int) 
#line 1559 "../.././gcc/config/h8300/h8300.md"
(TARGET_MAC)
    : -1 },
#line 6112 "../.././gcc/config/h8300/h8300.md"
  { "0 /* Disable because it breaks compiling fp-bit.c.  */\n\
   && TARGET_H8300SX\n\
   && peep2_reg_dead_p (2, operands[0])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[4])",
    __builtin_constant_p 
#line 6112 "../.././gcc/config/h8300/h8300.md"
(0 /* Disable because it breaks compiling fp-bit.c.  */
   && TARGET_H8300SX
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[4]))
    ? (int) 
#line 6112 "../.././gcc/config/h8300/h8300.md"
(0 /* Disable because it breaks compiling fp-bit.c.  */
   && TARGET_H8300SX
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[4]))
    : -1 },
#line 4543 "../.././gcc/config/h8300/h8300.md"
  { "INTVAL (operands[3]) == (255 << INTVAL (operands[1]))",
    __builtin_constant_p 
#line 4543 "../.././gcc/config/h8300/h8300.md"
(INTVAL (operands[3]) == (255 << INTVAL (operands[1])))
    ? (int) 
#line 4543 "../.././gcc/config/h8300/h8300.md"
(INTVAL (operands[3]) == (255 << INTVAL (operands[1])))
    : -1 },
#line 3234 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300\n\
   && INTVAL (operands[2]) < 16",
    __builtin_constant_p 
#line 3234 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300
   && INTVAL (operands[2]) < 16)
    ? (int) 
#line 3234 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300
   && INTVAL (operands[2]) < 16)
    : -1 },
#line 1514 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300SXMUL",
    __builtin_constant_p 
#line 1514 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SXMUL)
    ? (int) 
#line 1514 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SXMUL)
    : -1 },
#line 5420 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && peep2_reg_dead_p (1, operands[0])\n\
   && (INTVAL (operands[1]) == -131072\n\
       || INTVAL (operands[1]) == -65536\n\
       || INTVAL (operands[1]) == 65536\n\
       || INTVAL (operands[1]) == 131072)",
    __builtin_constant_p 
#line 5420 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == -131072
       || INTVAL (operands[1]) == -65536
       || INTVAL (operands[1]) == 65536
       || INTVAL (operands[1]) == 131072))
    ? (int) 
#line 5420 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == -131072
       || INTVAL (operands[1]) == -65536
       || INTVAL (operands[1]) == 65536
       || INTVAL (operands[1]) == 131072))
    : -1 },
#line 5700 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && peep2_reg_dead_p (1, operands[0])\n\
   && (INTVAL (operands[1]) == 1\n\
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))",
    __builtin_constant_p 
#line 5700 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == 1
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3)))
    ? (int) 
#line 5700 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == 1
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3)))
    : -1 },
#line 2472 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S) && !TARGET_NORMAL_MODE",
    __builtin_constant_p 
#line 2472 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_NORMAL_MODE)
    ? (int) 
#line 2472 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S) && !TARGET_NORMAL_MODE)
    : -1 },
#line 6001 "../.././gcc/config/h8300/h8300.md"
  { "peep2_reg_dead_p (3, operands[0])\n\
   && (~INTVAL (operands[1]) & INTVAL (operands[2])) == 0",
    __builtin_constant_p 
#line 6001 "../.././gcc/config/h8300/h8300.md"
(peep2_reg_dead_p (3, operands[0])
   && (~INTVAL (operands[1]) & INTVAL (operands[2])) == 0)
    ? (int) 
#line 6001 "../.././gcc/config/h8300/h8300.md"
(peep2_reg_dead_p (3, operands[0])
   && (~INTVAL (operands[1]) & INTVAL (operands[2])) == 0)
    : -1 },
#line 1916 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300SX\n\
   && rtx_equal_p(operands[0], operands[1])",
    __builtin_constant_p 
#line 1916 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && rtx_equal_p(operands[0], operands[1]))
    ? (int) 
#line 1916 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300SX
   && rtx_equal_p(operands[0], operands[1]))
    : -1 },
#line 5386 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[1]) != 0\n\
   && peep2_reg_dead_p (1, operands[0])",
    __builtin_constant_p 
#line 5386 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) != 0
   && peep2_reg_dead_p (1, operands[0]))
    ? (int) 
#line 5386 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) != 0
   && peep2_reg_dead_p (1, operands[0]))
    : -1 },
#line 2562 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300",
    __builtin_constant_p 
#line 2562 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300)
    ? (int) 
#line 2562 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300)
    : -1 },
#line 4709 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300S && !TARGET_NORMAL_MODE\n\
   && (REGNO_REG_CLASS (REGNO (operands[2])) == GENERAL_REGS\n\
       && REGNO (operands[1]) == REGNO (operands[0]) + 1\n\
       && REGNO (operands[2]) == REGNO (operands[0]) + 2\n\
       && (TARGET_H8300SX || (REGNO (operands[0]) & 3) == 0))",
    __builtin_constant_p 
#line 4709 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && !TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[2])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && REGNO (operands[2]) == REGNO (operands[0]) + 2
       && (TARGET_H8300SX || (REGNO (operands[0]) & 3) == 0)))
    ? (int) 
#line 4709 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && !TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[2])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && REGNO (operands[2]) == REGNO (operands[0]) + 2
       && (TARGET_H8300SX || (REGNO (operands[0]) & 3) == 0)))
    : -1 },
#line 4627 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300S && !TARGET_NORMAL_MODE && REGNO (operands[0]) != SP_REG",
    __builtin_constant_p 
#line 4627 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && !TARGET_NORMAL_MODE && REGNO (operands[0]) != SP_REG)
    ? (int) 
#line 4627 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && !TARGET_NORMAL_MODE && REGNO (operands[0]) != SP_REG)
    : -1 },
#line 5009 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && (GET_MODE (operands[0]) == QImode\n\
       || GET_MODE (operands[0]) == HImode\n\
       || GET_MODE (operands[0]) == SImode)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && REGNO (operands[0]) == REGNO (operands[2])\n\
   && !reg_overlap_mentioned_p (operands[2], operands[1])\n\
   && !(GET_MODE (operands[1]) != QImode\n\
	&& GET_CODE (operands[1]) == MEM\n\
	&& !offsettable_memref_p (operands[1]))\n\
   && !(GET_MODE (operands[1]) != QImode\n\
	&& GET_CODE (operands[1]) == MEM\n\
	&& MEM_VOLATILE_P (operands[1]))",
    __builtin_constant_p 
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
	&& MEM_VOLATILE_P (operands[1])))
    ? (int) 
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
	&& MEM_VOLATILE_P (operands[1])))
    : -1 },
#line 4802 "../.././gcc/config/h8300/h8300.md"
  { "REG_P (operands[0]) && REG_P (operands[2])\n\
   && REGNO (operands[0]) != REGNO (operands[2])\n\
   && (satisfies_constraint_J (operands[1])\n\
       || satisfies_constraint_L (operands[1])\n\
       || satisfies_constraint_N (operands[1]))",
    __builtin_constant_p 
#line 4802 "../.././gcc/config/h8300/h8300.md"
(REG_P (operands[0]) && REG_P (operands[2])
   && REGNO (operands[0]) != REGNO (operands[2])
   && (satisfies_constraint_J (operands[1])
       || satisfies_constraint_L (operands[1])
       || satisfies_constraint_N (operands[1])))
    ? (int) 
#line 4802 "../.././gcc/config/h8300/h8300.md"
(REG_P (operands[0]) && REG_P (operands[2])
   && REGNO (operands[0]) != REGNO (operands[2])
   && (satisfies_constraint_J (operands[1])
       || satisfies_constraint_L (operands[1])
       || satisfies_constraint_N (operands[1])))
    : -1 },
#line 3670 "../.././gcc/config/h8300/h8300.md"
  { "reload_completed",
    __builtin_constant_p 
#line 3670 "../.././gcc/config/h8300/h8300.md"
(reload_completed)
    ? (int) 
#line 3670 "../.././gcc/config/h8300/h8300.md"
(reload_completed)
    : -1 },
#line 4137 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && (INTVAL (operands[3]) & ~0xffff) == 0",
    __builtin_constant_p 
#line 4137 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && (INTVAL (operands[3]) & ~0xffff) == 0)
    ? (int) 
#line 4137 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && (INTVAL (operands[3]) & ~0xffff) == 0)
    : -1 },
#line 4755 "../.././gcc/config/h8300/h8300.md"
  { "TARGET_H8300S && !TARGET_NORMAL_MODE\n\
   && (REGNO_REG_CLASS (REGNO (operands[1])) == GENERAL_REGS\n\
       && REGNO (operands[1]) == REGNO (operands[0]) + 1\n\
       && (TARGET_H8300SX || (REGNO (operands[0]) & 1) == 0))",
    __builtin_constant_p 
#line 4755 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && !TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[1])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && (TARGET_H8300SX || (REGNO (operands[0]) & 1) == 0)))
    ? (int) 
#line 4755 "../.././gcc/config/h8300/h8300.md"
(TARGET_H8300S && !TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[1])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && (TARGET_H8300SX || (REGNO (operands[0]) & 1) == 0)))
    : -1 },
#line 3720 "../.././gcc/config/h8300/h8300.md"
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[1]) < 16\n\
   && INTVAL (operands[3]) < 16",
    __builtin_constant_p 
#line 3720 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) < 16
   && INTVAL (operands[3]) < 16)
    ? (int) 
#line 3720 "../.././gcc/config/h8300/h8300.md"
((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) < 16
   && INTVAL (operands[3]) < 16)
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
