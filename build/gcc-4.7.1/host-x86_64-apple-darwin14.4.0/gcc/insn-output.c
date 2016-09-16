/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "diagnostic-core.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char * const output_0[] = {
  "sub.b	%X0,%X0",
  "mov.b	%R1,%X0",
  "mov.b	%X1,%R0",
  "mov.b	%R1,%X0",
  "mov.b	%R1,%X0",
  "mov.b	%X1,%R0",
};

static const char * const output_1[] = {
  "sub.b	%X0,%X0",
  "mov.b	%R1,%X0",
  "mov.b	%X1,%R0",
  "mov.b	%R1,%X0",
  "mov.b	%R1,%X0",
  "mov.b	%X1,%R0",
};

static const char * const output_2[] = {
  "mov.b	%X1:4,%X0",
  "mov.b	%X1,%X0",
};

static const char * const output_3[] = {
  "sub.b	%X0,%X0",
  "mov.b	%X1,%X0",
};

static const char * const output_4[] = {
  "sub.w	%T0,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
};

static const char * const output_5[] = {
  "sub.w	%T0,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
};

static const char * const output_6[] = {
  "sub.w	%T0,%T0",
  "mov.w	%T1:3,%T0",
  "mov.w	%T1:4,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
};

static const char * const output_7[] = {
  "sub.w	%T0,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
};

static const char *
output_8 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 354 "../.././gcc/config/h8300/h8300.md"

{
  unsigned int rn = -1;
  switch (which_alternative)
    {
    case 0:
      return "sub.w	%e0,%e0\n\tsub.w	%f0,%f0";
    case 1:
      if (REGNO (operands[0]) < REGNO (operands[1]))
	return "mov.w	%e1,%e0\n\tmov.w	%f1,%f0";
      else
	return "mov.w	%f1,%f0\n\tmov.w	%e1,%e0";
    case 2:
      /* Make sure we don't trample the register we index with.  */
      if (GET_CODE (operands[1]) == MEM)
	{
	  rtx inside = XEXP (operands[1], 0);
	  if (REG_P (inside))
	    {
	      rn = REGNO (inside);
	    }
	  else if (GET_CODE (inside) == PLUS)
	    {
	      rtx lhs = XEXP (inside, 0);
	      rtx rhs = XEXP (inside, 1);
	      if (REG_P (lhs)) rn = REGNO (lhs);
	      if (REG_P (rhs)) rn = REGNO (rhs);
	    }
	}
      if (rn == REGNO (operands[0]))
	{
	  /* Move the second word first.  */
	  return "mov.w	%f1,%f0\n\tmov.w	%e1,%e0";
	}
      else
	{
	  if (GET_CODE (operands[1]) == CONST_INT)
	    {
	      /* If either half is zero, use sub.w to clear that
		 half.  */
	      if ((INTVAL (operands[1]) & 0xffff) == 0)
		return "mov.w	%e1,%e0\n\tsub.w	%f0,%f0";
	      if (((INTVAL (operands[1]) >> 16) & 0xffff) == 0)
		return "sub.w	%e0,%e0\n\tmov.w	%f1,%f0";
	      /* If the upper half and the lower half are the same,
		 copy one half to the other.  */
	      if ((INTVAL (operands[1]) & 0xffff)
		  == ((INTVAL (operands[1]) >> 16) & 0xffff))
		return "mov.w\t%e1,%e0\n\tmov.w\t%e0,%f0";
	    }
	  return "mov.w	%e1,%e0\n\tmov.w	%f1,%f0";
	}
    case 3:
      return "mov.w	%e1,%e0\n\tmov.w	%f1,%f0";
    case 4:
      return "mov.w	%f1,%T0\n\tmov.w	%e1,%T0";
    case 5:
      return "mov.w	%T1,%e0\n\tmov.w	%T1,%f0";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_9 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 424 "../.././gcc/config/h8300/h8300.md"

{
  switch (which_alternative)
    {
    case 0:
      return "sub.l	%S0,%S0";
    case 7:
      return "clrmac";
    case 8:
      return "clrmac\n\tldmac %1,macl";
    case 9:
      return "stmac	macl,%0";
    default:
      if (GET_CODE (operands[1]) == CONST_INT)
	{
	  int val = INTVAL (operands[1]);

	  /* Look for constants which can be made by adding an 8-bit
	     number to zero in one of the two low bytes.  */
	  if (val == (val & 0xff))
	    {
	      operands[1] = GEN_INT ((char) val & 0xff);
	      return "sub.l\t%S0,%S0\n\tadd.b\t%1,%w0";
	    }

	  if (val == (val & 0xff00))
	    {
	      operands[1] = GEN_INT ((char) (val >> 8) & 0xff);
	      return "sub.l\t%S0,%S0\n\tadd.b\t%1,%x0";
	    }

	  /* Look for constants that can be obtained by subs, inc, and
	     dec to 0.  */
	  switch (val & 0xffffffff)
	    {
	    case 0xffffffff:
	      return "sub.l\t%S0,%S0\n\tsubs\t#1,%S0";
	    case 0xfffffffe:
	      return "sub.l\t%S0,%S0\n\tsubs\t#2,%S0";
	    case 0xfffffffc:
	      return "sub.l\t%S0,%S0\n\tsubs\t#4,%S0";

	    case 0x0000ffff:
	      return "sub.l\t%S0,%S0\n\tdec.w\t#1,%f0";
	    case 0x0000fffe:
	      return "sub.l\t%S0,%S0\n\tdec.w\t#2,%f0";

	    case 0xffff0000:
	      return "sub.l\t%S0,%S0\n\tdec.w\t#1,%e0";
	    case 0xfffe0000:
	      return "sub.l\t%S0,%S0\n\tdec.w\t#2,%e0";

	    case 0x00010000:
	      return "sub.l\t%S0,%S0\n\tinc.w\t#1,%e0";
	    case 0x00020000:
	      return "sub.l\t%S0,%S0\n\tinc.w\t#2,%e0";
	    }
	}
    }
   return "mov.l	%S1,%S0";
}
}

static const char * const output_10[] = {
  "sub.l	%S0,%S0",
  "mov.l	%S1:3,%S0",
  "mov.l	%S1,%S0",
  "mov.l	%S1,%S0",
  "clrmac",
  "clrmac\n\tldmac	%1,macl",
  "stmac	macl,%0",
};

static const char * const output_11[] = {
  "sub.l	%S0,%S0",
  "mov.l	%S1,%S0",
};

static const char * const output_12[] = {
  "movmd%m6",
  "#",
};

static const char * const output_13[] = {
  "movmd%m6",
  "#",
};

static const char * const output_14[] = {
  "\n1:\tmovsd\t2f\n\tbra\t1b\n2:",
  "#",
};

static const char * const output_15[] = {
  "\n1:\tmovsd\t2f\n\tbra\t1b\n2:",
  "#",
};

static const char *
output_99 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 784 "../.././gcc/config/h8300/h8300.md"

{
  /* Copy of the movsi stuff.  */
  unsigned int rn = -1;
  switch (which_alternative)
    {
    case 0:
      return "sub.w	%e0,%e0\n\tsub.w	%f0,%f0";
    case 1:
      if (REGNO (operands[0]) < REGNO (operands[1]))
	return "mov.w	%e1,%e0\n\tmov.w	%f1,%f0";
      else
	return "mov.w	%f1,%f0\n\tmov.w	%e1,%e0";
    case 2:
      /* Make sure we don't trample the register we index with.  */
      if (GET_CODE (operands[1]) == MEM)
	{
	  rtx inside = XEXP (operands[1], 0);
	  if (REG_P (inside))
	    {
	      rn = REGNO (inside);
	    }
	  else if (GET_CODE (inside) == PLUS)
	    {
	      rtx lhs = XEXP (inside, 0);
	      rtx rhs = XEXP (inside, 1);
	      if (REG_P (lhs)) rn = REGNO (lhs);
	      if (REG_P (rhs)) rn = REGNO (rhs);
	    }
	}
      if (rn == REGNO (operands[0]))
	/* Move the second word first.  */
	return "mov.w	%f1,%f0\n\tmov.w	%e1,%e0";
      else
	/* Move the first word first.  */
	return "mov.w	%e1,%e0\n\tmov.w	%f1,%f0";

    case 3:
      return "mov.w	%e1,%e0\n\tmov.w	%f1,%f0";
    case 4:
      return "mov.w	%f1,%T0\n\tmov.w	%e1,%T0";
    case 5:
      return "mov.w	%T1,%e0\n\tmov.w	%T1,%f0";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_100[] = {
  "sub.l	%S0,%S0",
  "mov.l	%S1,%S0",
  "mov.l	%S1,%S0",
  "mov.l	%S1,%S0",
  "mov.l	%S1,%S0",
  "mov.l	%S1,%S0",
};

static const char * const output_108[] = {
  "btst\t%Z1,%Y0",
  "btst\t%Z1,%Y0",
  "#",
};

static const char * const output_112[] = {
  "btst\t%w1,%X0",
  "btst\t%w1,%X0",
  "#",
};

static const char *
output_120 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1072 "../.././gcc/config/h8300/h8300.md"

{
  switch (which_alternative)
    {
    case 0:
      if (!TARGET_H8300SX)
	return "cmp.w	%T1,%T0";
      else
	return "cmp.w	%T1:3,%T0";
    case 1:
      return "cmp.w	%T1,%T0";
    default:
      gcc_unreachable ();
      }
}
}

static const char *
output_121 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1095 "../.././gcc/config/h8300/h8300.md"

{
  switch (which_alternative)
    {
    case 0:
      if (!TARGET_H8300SX)
	return "cmp.l	%S1,%S0";
      else
	return "cmp.l	%S1:3,%S0";
    case 1:
      return "cmp.l	%S1,%S0";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_123[] = {
  "adds	%2,%T0",
  "subs	%G2,%T0",
  "add.b	%t2,%t0",
  "add.b	%s2,%s0\n\taddx	%t2,%t0",
  "add.w	%T2,%T0",
};

static const char * const output_124[] = {
  "adds	%2,%S0",
  "subs	%G2,%S0",
  "add.b	%t2,%t0",
  "add.w	%T2,%T0",
  "add.w	%T2,%T0",
};

static const char * const output_125[] = {
  "inc.w	%2,%T0",
  "dec.w	%G2,%T0",
};

static const char * const output_126[] = {
  "add.w	%T2:3,%T0",
  "sub.w	%G2:3,%T0",
  "add.b	%t2,%t0",
  "add.w	%T2,%T0",
};

static const char *
output_127 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1244 "../.././gcc/config/h8300/h8300.md"
 return output_plussi (operands);
}

static const char *
output_128 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1255 "../.././gcc/config/h8300/h8300.md"
 return output_plussi (operands);
}

static const char * const output_129[] = {
  "inc.l	%2,%S0",
  "dec.l	%G2,%S0",
};

static const char * const output_131[] = {
  "sub.w	%T2,%T0",
  "add.b	%E2,%s0\n\taddx	%F2,%t0",
};

static const char * const output_132[] = {
  "sub.w	%T2,%T0",
  "sub.w	%T2,%T0",
};

static const char * const output_134[] = {
  "sub.l	%S2,%S0",
  "sub.l	%S2,%S0",
};

static const char *
output_153 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1616 "../.././gcc/config/h8300/h8300.md"

{
  if (find_reg_note (insn, REG_UNUSED, operands[3]))
    return "divxu.b\t%X2,%T0";
  else
    return "divxu.b\t%X2,%T0\n\tmov.b\t%t0,%s3";
}
}

static const char *
output_154 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1637 "../.././gcc/config/h8300/h8300.md"

{
  if (find_reg_note (insn, REG_UNUSED, operands[3]))
    return "divxs.b\t%X2,%T0";
  else
    return "divxs.b\t%X2,%T0\n\tmov.b\t%t0,%s3";
}
}

static const char *
output_155 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1658 "../.././gcc/config/h8300/h8300.md"

{
  if (find_reg_note (insn, REG_UNUSED, operands[3]))
    return "divxu.w\t%T2,%S0";
  else
    return "divxu.w\t%T2,%S0\n\tmov.w\t%e0,%f3";
}
}

static const char *
output_156 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1679 "../.././gcc/config/h8300/h8300.md"

{
  if (find_reg_note (insn, REG_UNUSED, operands[3]))
    return "divxs.w\t%T2,%S0";
  else
    return "divxs.w\t%T2,%S0\n\tmov.w\t%e0,%f3";
}
}

static const char * const output_159[] = {
  "bclr\t %W2,%R0",
  "and  %X2,%X0",
  "bfld %2,%1,%R0",
};

static const char * const output_160[] = {
  "bclr %W2,%R0",
  "and  %X2,%X0",
};

static const char *
output_162 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1784 "../.././gcc/config/h8300/h8300.md"

{
  operands[3] = GEN_INT (INTVAL (operands[3]) & 0xffff);
  if (INTVAL (operands[3]) > 128)
    {
      operands[3] = GEN_INT (INTVAL (operands[3]) >> 8);
      return "bld\t%V3,%t2\n\tbor\t%V3,%t0\n\tbst\t%V3,%t0";
    }
  return "bld\t%V3,%s2\n\tbor\t%V3,%s0\n\tbst\t%V3,%s0";
}
}

static const char *
output_163 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1802 "../.././gcc/config/h8300/h8300.md"

{
  operands[3] = GEN_INT (INTVAL (operands[3]) & 0xffff);
  if (INTVAL (operands[3]) > 128)
    {
      operands[3] = GEN_INT (INTVAL (operands[3]) >> 8);
      return "bld\t%V3,%x2\n\tbor\t%V3,%x0\n\tbst\t%V3,%x0";
    }
  return "bld\t%V3,%w2\n\tbor\t%V3,%w0\n\tbst\t%V3,%w0";
}
}

static const char * const output_167[] = {
  "bset\t%V2,%R0",
  "or\t%X2,%X0",
};

static const char * const output_170[] = {
  "bnot\t%V2,%R0",
  "xor\t%X2,%X0",
};

static const char *
output_171 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2000 "../.././gcc/config/h8300/h8300.md"
 return output_logical_op (HImode, operands);
}

static const char *
output_172 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2012 "../.././gcc/config/h8300/h8300.md"
 return output_logical_op (SImode, operands);
}

static const char *
output_173 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2024 "../.././gcc/config/h8300/h8300.md"
 return output_logical_op (HImode, operands);
}

static const char *
output_174 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2036 "../.././gcc/config/h8300/h8300.md"
 return output_logical_op (SImode, operands);
}

static const char *
output_187 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2269 "../.././gcc/config/h8300/h8300.md"

{
  if ((cc_status.flags & CC_OVERFLOW_UNUSABLE) != 0
      && (GET_CODE (operands[1]) == GT
	  || GET_CODE (operands[1]) == GE
	  || GET_CODE (operands[1]) == LE
	  || GET_CODE (operands[1]) == LT))
    {
      cc_status.flags &= ~CC_OVERFLOW_UNUSABLE;
      return 0;
    }

  if (get_attr_length (insn) == 2)
    return "b%j1	%l0";
  else if (get_attr_length (insn) == 4)
    return "b%j1	%l0:16";
  else
    return "b%k1	.Lh8BR%=\n\tjmp	@%l0\n.Lh8BR%=:";
}
}

static const char *
output_188 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2298 "../.././gcc/config/h8300/h8300.md"

{
  if ((cc_status.flags & CC_OVERFLOW_UNUSABLE) != 0
      && (GET_CODE (operands[1]) == GT
	  || GET_CODE (operands[1]) == GE
	  || GET_CODE (operands[1]) == LE
	  || GET_CODE (operands[1]) == LT))
    {
      cc_status.flags &= ~CC_OVERFLOW_UNUSABLE;
      return 0;
    }

  if (get_attr_length (insn) == 2)
    return "b%k1	%l0";
  else if (get_attr_length (insn) == 4)
    return "b%k1	%l0:16";
  else
    return "b%j1	.Lh8BR%=\n\tjmp	@%l0\n.Lh8BR%=:";
}
}

static const char *
output_189 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2330 "../.././gcc/config/h8300/h8300.md"

{
  switch (get_attr_length (insn)
	  - h8300_insn_length_from_table (insn, operands))
    {
    case 2:
      return "bra/bc	%2,%R1,%l0";

    case 4:
      return "bra/bc	%2,%R1,%l0:16";

    default:
      return "bra/bs	%2,%R1,.Lh8BR%=\n\tjmp	@%l0\n.Lh8BR%=:";
    }
}
}

static const char *
output_190 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2359 "../.././gcc/config/h8300/h8300.md"

{
  switch (get_attr_length (insn)
	  - h8300_insn_length_from_table (insn, operands))
    {
    case 2:
      return "bra/bs	%2,%R1,%l0";

    case 4:
      return "bra/bs	%2,%R1,%l0:16";

    default:
      return "bra/bc	%2,%R1,.Lh8BR%=\n\tjmp	@%l0\n.Lh8BR%=:";
    }
}
}

static const char *
output_191 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2384 "../.././gcc/config/h8300/h8300.md"

{
  if (final_sequence != 0)
    {
      if (get_attr_length (insn) == 2)
	return "bra/s	%l0";
      else
	{
	  /* The branch isn't short enough to use bra/s.  Output the
	     branch and delay slot in their normal order.

	     If this is a backward branch, it will now be branching two
	     bytes further than previously thought.  The length-based
	     test for bra vs. jump is very conservative though, so the
	     branch will still be within range.  */
	  rtvec vec;
	  int seen;

	  vec = XVEC (final_sequence, 0);
	  final_sequence = 0;
	  final_scan_insn (RTVEC_ELT (vec, 1), asm_out_file, optimize, 1, & seen);
	  final_scan_insn (RTVEC_ELT (vec, 0), asm_out_file, optimize, 1, & seen);
	  INSN_DELETED_P (RTVEC_ELT (vec, 1)) = 1;
	  return "";
	}
    }
  else if (get_attr_length (insn) == 2)
    return "bra	%l0";
  else if (get_attr_length (insn) == 4)
    return "bra	%l0:16";
  else
    return "jmp	@%l0";
}
}

static const char *
output_198 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2492 "../.././gcc/config/h8300/h8300.md"

{
  if (GET_CODE (XEXP (operands[0], 0)) == SYMBOL_REF
      && SYMBOL_REF_FLAG (XEXP (operands[0], 0)))
    return "jsr\t@%0:8";
  else
    return "jsr\t%0";
}
}

static const char *
output_199 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2516 "../.././gcc/config/h8300/h8300.md"

{
  if (GET_CODE (XEXP (operands[1], 0)) == SYMBOL_REF
      && SYMBOL_REF_FLAG (XEXP (operands[1], 0)))
    return "jsr\t@%1:8";
  else
    return "jsr\t%1";
}
}

static const char *
output_201 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2582 "../.././gcc/config/h8300/h8300.md"
{
    operands[3] = SET_DEST (XVECEXP (operands[0], 0,
				     XVECLEN (operands[0], 0) - 2));
    return "ldm.l\t@er7+,%S1-%S3";
  }
}

static const char *
output_202 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2595 "../.././gcc/config/h8300/h8300.md"
{
    operands[3] = SET_SRC (XVECEXP (operands[0], 0,
				    XVECLEN (operands[0], 0) - 2));
    return "stm.l\t%S2-%S3,@-er7";
  }
}

static const char *
output_203 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2609 "../.././gcc/config/h8300/h8300.md"
{
    operands[3] = SET_DEST (XVECEXP (operands[0], 0,
				     XVECLEN (operands[0], 0) - 2));
    if (h8300_current_function_interrupt_function_p ())
      return "rte/l\t%S1-%S3";
    else
      return "rts/l\t%S1-%S3";
  }
}

static const char *
output_204 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2629 "../.././gcc/config/h8300/h8300.md"

{
  if (h8300_current_function_interrupt_function_p ())
    return "rte";
  else
    return "rts";
}
}

static const char *
output_205 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2653 "../.././gcc/config/h8300/h8300.md"

{
  if (TARGET_H8300)
    return "subs\t#2,r7\n\tmov.w\tr0,@-r7\n\tstc\tccr,r0l\n\tmov.b\tr0l,@(2,r7)\n\tmov.w\t@r7+,r0\n\torc\t#128,ccr";
  else if (TARGET_H8300H)
    return "mov.l\ter0,@-er7\n\tstc\tccr,r0l\n\tmov.b\tr0l,@(4,er7)\n\tmov.l\t@er7+,er0\n\torc\t#128,ccr";
  else if (TARGET_H8300S)
    return "stc\texr,@-er7\n\tmov.l\ter0,@-er7\n\tstc\tccr,r0l\n\tmov.b\tr0l,@(6,er7)\n\tmov.l\t@er7+,er0\n\torc\t#128,ccr";
  gcc_unreachable ();
}
}

static const char * const output_206[] = {
  "mov.b	#0,%t0",
  "#",
};

static const char * const output_207[] = {
  "extu.w	%T0",
  "#",
};

static const char * const output_208[] = {
  "mov.b	#0,%x0\n\tsub.w	%e0,%e0",
  "mov.b	%R1,%w0\n\tmov.b	#0,%x0\n\tsub.w	%e0,%e0",
};

static const char * const output_211[] = {
  "sub.w	%e0,%e0",
  "mov.w	%f1,%f0\n\tsub.w	%e0,%e0",
  "mov.w	%e1,%f0\n\tsub.w	%e0,%e0",
};

static const char * const output_213[] = {
  "bld	#7,%s0\n\tsubx	%t0,%t0",
  "mov.b	%R1,%s0\n\tbld	#7,%s0\n\tsubx	%t0,%t0",
};

static const char * const output_215[] = {
  "bld	#7,%w0\n\tsubx	%x0,%x0\n\tsubx	%y0,%y0\n\tsubx	%z0,%z0",
  "mov.b	%R1,%w0\n\tbld	#7,%w0\n\tsubx	%x0,%x0\n\tsubx	%y0,%y0\n\tsubx	%z0,%z0",
};

static const char * const output_218[] = {
  "bld	#7,%x0\n\tsubx	%y0,%y0\n\tsubx	%z0,%z0",
  "mov.w	%T1,%f0\n\tbld	#7,%x0\n\tsubx	%y0,%y0\n\tsubx	%z0,%z0",
};

static const char *
output_220 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2926 "../.././gcc/config/h8300/h8300.md"
{ return output_h8sx_shift (operands, 'b', 'X'); }
}

static const char *
output_221 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2936 "../.././gcc/config/h8300/h8300.md"
{ return output_h8sx_shift (operands, 'b', 'X'); }
}

static const char *
output_222 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2947 "../.././gcc/config/h8300/h8300.md"
 return output_a_shift (operands);
}

static const char *
output_223 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2982 "../.././gcc/config/h8300/h8300.md"
{ return output_h8sx_shift (operands, 'w', 'T'); }
}

static const char *
output_224 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2992 "../.././gcc/config/h8300/h8300.md"
{ return output_h8sx_shift (operands, 'w', 'T'); }
}

static const char *
output_225 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3003 "../.././gcc/config/h8300/h8300.md"
 return output_a_shift (operands);
}

static const char *
output_226 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3038 "../.././gcc/config/h8300/h8300.md"
{ return output_h8sx_shift (operands, 'l', 'S'); }
}

static const char *
output_227 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3048 "../.././gcc/config/h8300/h8300.md"
{ return output_h8sx_shift (operands, 'l', 'S'); }
}

static const char *
output_228 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3059 "../.././gcc/config/h8300/h8300.md"
 return output_a_shift (operands);
}

static const char *
output_229 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3148 "../.././gcc/config/h8300/h8300.md"
 return output_a_rotate (ROTATE, operands);
}

static const char *
output_230 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3164 "../.././gcc/config/h8300/h8300.md"
 return output_a_rotate (ROTATE, operands);
}

static const char *
output_231 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3180 "../.././gcc/config/h8300/h8300.md"
 return output_a_rotate (ROTATE, operands);
}

static const char *
output_234 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3236 "../.././gcc/config/h8300/h8300.md"
 return output_simode_bld (0, operands);
}

static const char *
output_235 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3246 "../.././gcc/config/h8300/h8300.md"
 return output_simode_bld (0, operands);
}

static const char *
output_236 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3263 "../.././gcc/config/h8300/h8300.md"
 return output_simode_bld (1, operands);
}

static const char *
output_237 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3275 "../.././gcc/config/h8300/h8300.md"
 return output_simode_bld (1, operands);
}

static const char *
output_241 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3446 "../.././gcc/config/h8300/h8300.md"

{
  operands[2] = GEN_INT ((1 << (INTVAL (operands[2]) + INTVAL (operands[3])))
			 - (1 << INTVAL (operands[3])));
  return "bfld	%2,%1,%R0";
}
}

static const char *
output_242 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3461 "../.././gcc/config/h8300/h8300.md"

{
  operands[2] = GEN_INT ((1 << (INTVAL (operands[2]) + INTVAL (operands[3])))
			 - (1 << INTVAL (operands[3])));
  return "bfst	%R1,%2,%0";
}
}

static const char * const output_260[] = {
  "mov.b\t%x1,%w0\n\textu.w\t%f0\n\textu.l\t%S0",
  "sub.l\t%S0,%S0\n\tmov.b\t%x1,%w0",
};

static const char *
output_266 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3864 "../.././gcc/config/h8300/h8300.md"

{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  return "shll.l\t%S0\n\txor.l\t%S0,%S0\n\tbst\t%Z3,%Y0";
}
}

static const char *
output_287 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4139 "../.././gcc/config/h8300/h8300.md"

{
  rtx srcpos = GEN_INT (exact_log2 (INTVAL (operands[3]))
			- INTVAL (operands[2]));
  rtx dstpos = GEN_INT (exact_log2 (INTVAL (operands[3])));
  operands[2] = srcpos;
  operands[3] = dstpos;
  return "bld\t%Z2,%Y1\n\tbor\t%Z3,%Y0\n\tbst\t%Z3,%Y0";
}
}

static const char *
output_288 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4158 "../.././gcc/config/h8300/h8300.md"

{
  rtx srcpos = GEN_INT (exact_log2 (INTVAL (operands[3]))
			+ INTVAL (operands[2]));
  rtx dstpos = GEN_INT (exact_log2 (INTVAL (operands[3])));
  operands[2] = srcpos;
  operands[3] = dstpos;
  return "bld\t%Z2,%Y1\n\tbor\t%Z3,%Y0\n\tbst\t%Z3,%Y0";
}
}

static const char *
output_291 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4198 "../.././gcc/config/h8300/h8300.md"

{
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "shll.l\t%S1\n\txor.w\t%T3,%T3\n\tbst\t#6,%s3\n\tor.w\t%T3,%e0";
  else
    return "rotl.l\t%S1\n\trotr.l\t%S1\n\txor.w\t%T3,%T3\n\tbst\t#6,%s3\n\tor.w\t%T3,%e0";
}
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    general_operand_dst,
    "=r,r,<,r,r,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_src,
    "I,r>,r,n,m,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_dst,
    "=Z,rQ",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_src,
    "P4>X,rQi",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_dst,
    "+r,r",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand_src,
    "I,rmi>",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_dst,
    "=r,r,<,r,r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_src,
    "I,r>,r,i,m,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_dst,
    "=r,r,Z,Q,rQ",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_src,
    "I,P3>X,P4>X,IP8>X,rQi",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_dst,
    "+r,r,r",
    HImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand_src,
    "I,P3>X,rmi",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_dst,
    "=r,r,r,o,<,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_src,
    "I,r,io,r,r,>",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_dst,
    "=r,r,r,<,r,r,m,*a,*a,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_src,
    "I,r,i,r,>,m,r,I,r,*a",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_dst,
    "=r,r,Q,rQ,*a,*a,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_src,
    "I,P3>X,IP8>X,rQi,I,r,*a",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_dst,
    "=r,rQ",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_src,
    "G,rQi",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d,??D",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c,c",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1,1",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "2,2",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n,n",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,??D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c,c",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1,1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "2,2",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n,n",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,??D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1,1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    h8300_dst_operand,
    "0,rQ",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    h8300_dst_operand,
    "0,rQ",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    h8300_dst_operand,
    "0,rQ",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    h8300_dst_operand,
    "0,rQ",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    h8300_dst_operand,
    "0,rQ",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand_dst,
    "=r,r,r,o,<,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_src,
    "G,r,io,r,r,>",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_dst,
    "=r,r,r,m,<,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_src,
    "G,r,im,r,r,>",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_no_sp_elim_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_no_sp_elim_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    bit_memory_operand,
    "r,U",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n,n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand_src,
    "r,U,mn>",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n,n,n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,X,&r",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand_src,
    "r,U,mn>",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,X,&r",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    h8300_dst_operand,
    "rQ",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "rQi",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    h8300_dst_operand,
    "rU,rQ",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "P3>X,rQi",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "r,rQ",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "P3>X,rQi",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "=rQ",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "%0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "rQi",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r,r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,0,0,0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    h8300_src_operand,
    "L,N,J,n,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    incdec_operand,
    "M,O",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    h8300_dst_operand,
    "=rU,rU,r,rQ",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "%0,0,0,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "P3>X,P3<X,J,rQi",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    h8300_src_operand,
    "n,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "=rQ,rQ",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "%0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "i,rQ",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    incdec_operand,
    "M,O",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    h8300_dst_operand,
    "=rQ",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "rQ",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    h8300_src_operand,
    "r,n",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "=rQ,rQ",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "0,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "rQ,i",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    h8300_dst_operand,
    "=rQ,rQ",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "rQ,i",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nibble_operand,
    "IP4>X",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nibble_operand,
    "IP4>X",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_nibble_operand,
    "rIP4>X",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_nibble_operand,
    "rIP4>X",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_nibble_operand,
    "rIP4>X",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_nibble_operand,
    "rIP4>X",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    bit_register_indirect_operand,
    "=WU",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    bit_register_indirect_operand,
    "%0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    single_zero_operand,
    "Y0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    bit_register_indirect_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    bit_register_indirect_operand,
    "%0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    single_zero_operand,
    "Y0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    bit_operand,
    "=U,rQ,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    bit_operand,
    "%0,0,WU",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "Y0,rQi,IP1>X",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    bit_operand,
    "=U,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    bit_operand,
    "%0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "Y0,rn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    single_one_operand,
    "n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    single_one_operand,
    "n",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    single_one_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    bit_register_indirect_operand,
    "=WU",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    bit_register_indirect_operand,
    "%0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    single_one_operand,
    "Y2",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    bit_register_indirect_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    bit_register_indirect_operand,
    "%0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    single_one_operand,
    "Y2",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    bit_operand,
    "=U,rQ",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    bit_operand,
    "%0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "Y2,rQi",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    bit_operand,
    "=U,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    bit_operand,
    "%0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "Y2,rQi",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "=rQ",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "%0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "rQi",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    bit_operator,
    "",
    HImode,
    0,
    1,
    0,
    0
  },
  {
    h8300_dst_operand,
    "=rQ",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "rQi",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    bit_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    h8300_dst_operand,
    "=rQ",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "=rQ",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bit_memory_operand,
    "WU",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    jump_address_operand,
    "Vr",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    jump_address_operand,
    "Vr",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    call_insn_operand,
    "or",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "g",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "=r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "or",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "g",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_ldm_parallel,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_stm_parallel,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    h8300_return_parallel,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand_src,
    "0,g>",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand_src,
    "0,g>",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand_src,
    "0,i,g>",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand_src,
    "0,g>",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "=rQ",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    h8sx_unary_shift_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "rP3>X",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    h8sx_binary_shift_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "R,rn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nshift_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "=X,&r",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    h8300_dst_operand,
    "=rQ",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    h8sx_unary_shift_operator,
    "",
    HImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "rP4>X",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    h8sx_binary_shift_operator,
    "",
    HImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "S,rn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nshift_operator,
    "",
    HImode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "=X,&r",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    h8300_dst_operand,
    "=rQ",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    h8sx_unary_shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "rP5>X",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    h8sx_binary_shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "T,rn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nshift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "=X,&r",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "?0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n,n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "?0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n,n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n,n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    bit_operand,
    "=Ur",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    bit_operand,
    "0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    bit_operator,
    "",
    HImode,
    0,
    1,
    0,
    0
  },
  {
    bit_operand,
    "=Ur",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    bit_operator,
    "",
    HImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    bit_memory_operand,
    "WU",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    bit_memory_operand,
    "+WU",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    HImode,
    0,
    1,
    0,
    0
  },
  {
    bit_memory_operand,
    "+WU,+WU",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "n,n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    h8300_dst_operand,
    "r,rQ",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "I,rQi",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    bit_memory_operand,
    "+WU",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=WU,WU",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    h8300_dst_operand,
    "r,rQ",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "I,rQi",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    bit_memory_operand,
    "0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    single_one_operand,
    "n,n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    bit_memory_operand,
    "=WU",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    single_one_operand,
    "n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    bit_memory_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=WU,WU",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    h8300_dst_operand,
    "r,rQ",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "I,rQi",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    bit_memory_operand,
    "0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    single_zero_operand,
    "n,n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    bit_memory_operand,
    "=WU",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    single_zero_operand,
    "n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    bit_memory_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=WU,WU",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    h8300_dst_operand,
    "r,rQ",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "I,rQi",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    bit_memory_operand,
    "0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    bit_memory_operand,
    "=WU",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    bit_memory_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "S,n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,&r",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    single_one_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    iorxor_operator,
    "",
    HImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    iorxor_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    iorxor_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    iorxor_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand_src,
    "r,g>",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    single_one_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    general_operand_dst,
    "=rm<",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand_dst,
    "=rm<",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand_dst,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_src,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_dst,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_src,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_dst,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_src,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand_dst,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_src,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand_src,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    general_operand_src,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    h8300_src_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    h8300_src_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    stack_pointer_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_gt_2_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    stack_pointer_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_ge_8_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    two_insn_adds_subs_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    h8300_src_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    two_insn_adds_subs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_nibble_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_nibble_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    bit_register_indirect_operand,
    "=U",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    bit_register_indirect_operand,
    "%0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    single_zero_operand,
    "Y0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    bit_register_indirect_operand,
    "=U",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    bit_register_indirect_operand,
    "%0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    single_one_operand,
    "Y2",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    h8300_dst_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    h8300_dst_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    h8300_dst_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    jump_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand_src,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand_src,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nshift_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    bit_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    h8300_dst_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    h8300_dst_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    h8300_dst_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    bit_memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    h8300_dst_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    h8300_dst_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    bit_memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    single_one_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    h8300_dst_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    bit_memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    single_zero_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    h8300_dst_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    bit_memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    incdec_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    incdec_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_qi_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    incdec_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    gtle_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    gtuleu_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    gtle_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    gtuleu_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    incdec_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    gtle_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    gtuleu_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    gtle_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    gtuleu_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    incdec_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_qi_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_qi_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_hi_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_qi_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_qi_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    h8sx_unary_memory_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    h8300_dst_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    h8300_src_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    h8300_src_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    h8300_dst_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data_d insn_data[] = 
{
  /* ../.././gcc/config/h8300/h8300.md:197 */
  {
    "*movqi_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_0 },
#else
    { 0, output_0, 0 },
#endif
    0,
    &operand_data[1],
    2,
    2,
    0,
    6,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:212 */
  {
    "*movqi_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_1 },
#else
    { 0, output_1, 0 },
#endif
    0,
    &operand_data[1],
    2,
    2,
    0,
    6,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:228 */
  {
    "*movqi_h8sx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_2 },
#else
    { 0, output_2, 0 },
#endif
    0,
    &operand_data[3],
    2,
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:248 */
  {
    "movstrictqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_3 },
#else
    { 0, output_3, 0 },
#endif
    (insn_gen_fn) gen_movstrictqi,
    &operand_data[5],
    2,
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:261 */
  {
    "*movhi_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_4 },
#else
    { 0, output_4, 0 },
#endif
    0,
    &operand_data[7],
    2,
    2,
    0,
    6,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:277 */
  {
    "*movhi_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_5 },
#else
    { 0, output_5, 0 },
#endif
    0,
    &operand_data[7],
    2,
    2,
    0,
    6,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:293 */
  {
    "*movhi_h8sx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_6 },
#else
    { 0, output_6, 0 },
#endif
    0,
    &operand_data[9],
    2,
    2,
    0,
    5,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:317 */
  {
    "movstricthi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_7 },
#else
    { 0, output_7, 0 },
#endif
    (insn_gen_fn) gen_movstricthi,
    &operand_data[11],
    2,
    2,
    0,
    3,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:349 */
  {
    "*movsi_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_8 },
#else
    { 0, 0, output_8 },
#endif
    0,
    &operand_data[13],
    2,
    2,
    0,
    6,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:419 */
  {
    "*movsi_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_9 },
#else
    { 0, 0, output_9 },
#endif
    0,
    &operand_data[15],
    2,
    2,
    0,
    10,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:489 */
  {
    "*movsi_h8sx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_10 },
#else
    { 0, output_10, 0 },
#endif
    0,
    &operand_data[17],
    2,
    2,
    0,
    7,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:505 */
  {
    "*movsf_h8sx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_11 },
#else
    { 0, output_11, 0 },
#endif
    0,
    &operand_data[19],
    2,
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:555 */
  {
    "movmd_internal_normal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_12 },
#else
    { 0, output_12, 0 },
#endif
    (insn_gen_fn) gen_movmd_internal_normal,
    &operand_data[21],
    7,
    7,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:572 */
  {
    "movmd_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_13 },
#else
    { 0, output_13, 0 },
#endif
    (insn_gen_fn) gen_movmd_internal,
    &operand_data[28],
    7,
    7,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:684 */
  {
    "stpcpy_internal_normal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_14 },
#else
    { 0, output_14, 0 },
#endif
    (insn_gen_fn) gen_stpcpy_internal_normal,
    &operand_data[21],
    5,
    5,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:698 */
  {
    "stpcpy_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_15 },
#else
    { 0, output_15, 0 },
#endif
    (insn_gen_fn) gen_stpcpy_internal,
    &operand_data[35],
    5,
    5,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/mova.md:20 */
  {
    "*mova.md:20",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:30 */
  {
    "*mova.md:30",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:40 */
  {
    "*mova.md:40",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:50 */
  {
    "*mova.md:50",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:60 */
  {
    "*mova.md:60",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/b.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:69 */
  {
    "*mova.md:69",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    2,
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:78 */
  {
    "*mova.md:78",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:88 */
  {
    "*mova.md:88",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[46],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:98 */
  {
    "*mova.md:98",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[46],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:109 */
  {
    "*mova.md:109",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[49],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:119 */
  {
    "*mova.md:119",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[49],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:130 */
  {
    "*mova.md:130",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    2,
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:139 */
  {
    "*mova.md:139",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:149 */
  {
    "*mova.md:149",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[46],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:159 */
  {
    "*mova.md:159",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[46],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:170 */
  {
    "*mova.md:170",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[49],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:180 */
  {
    "*mova.md:180",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[49],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:191 */
  {
    "*mova.md:191",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    2,
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:200 */
  {
    "*mova.md:200",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:210 */
  {
    "*mova.md:210",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[46],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:220 */
  {
    "*mova.md:220",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[46],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:231 */
  {
    "*mova.md:231",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[49],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:241 */
  {
    "*mova.md:241",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[49],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:252 */
  {
    "*mova.md:252",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    2,
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:261 */
  {
    "*mova.md:261",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:271 */
  {
    "*mova.md:271",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[46],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:281 */
  {
    "*mova.md:281",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[46],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:292 */
  {
    "*mova.md:292",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[49],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:302 */
  {
    "*mova.md:302",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[49],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:313 */
  {
    "*mova.md:313",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/b.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[52],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:322 */
  {
    "*mova.md:322",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[52],
    2,
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:331 */
  {
    "*mova.md:331",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[52],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:341 */
  {
    "*mova.md:341",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[55],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:351 */
  {
    "*mova.md:351",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[55],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:362 */
  {
    "*mova.md:362",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:372 */
  {
    "*mova.md:372",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:383 */
  {
    "*mova.md:383",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[52],
    2,
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:392 */
  {
    "*mova.md:392",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[52],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:402 */
  {
    "*mova.md:402",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[55],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:412 */
  {
    "*mova.md:412",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[55],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:423 */
  {
    "*mova.md:423",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:433 */
  {
    "*mova.md:433",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:444 */
  {
    "*mova.md:444",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[52],
    2,
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:453 */
  {
    "*mova.md:453",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[52],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:463 */
  {
    "*mova.md:463",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[55],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:473 */
  {
    "*mova.md:473",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[55],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:484 */
  {
    "*mova.md:484",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:494 */
  {
    "*mova.md:494",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:505 */
  {
    "*mova.md:505",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[52],
    2,
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:514 */
  {
    "*mova.md:514",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[52],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:524 */
  {
    "*mova.md:524",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[55],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:534 */
  {
    "*mova.md:534",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[55],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:545 */
  {
    "*mova.md:545",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:555 */
  {
    "*mova.md:555",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%X1.b),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:566 */
  {
    "*mova.md:566",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[61],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:576 */
  {
    "*mova.md:576",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[61],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:586 */
  {
    "*mova.md:586",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[61],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:596 */
  {
    "*mova.md:596",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[61],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:606 */
  {
    "*mova.md:606",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/b.l @(%o2,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[64],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:615 */
  {
    "*mova.md:615",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[64],
    2,
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:624 */
  {
    "*mova.md:624",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[64],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:634 */
  {
    "*mova.md:634",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[67],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:644 */
  {
    "*mova.md:644",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[67],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:655 */
  {
    "*mova.md:655",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:665 */
  {
    "*mova.md:665",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:676 */
  {
    "*mova.md:676",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[64],
    2,
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:685 */
  {
    "*mova.md:685",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[64],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:695 */
  {
    "*mova.md:695",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[67],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:705 */
  {
    "*mova.md:705",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[67],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:716 */
  {
    "*mova.md:716",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(0,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:726 */
  {
    "*mova.md:726",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/w.l @(%o2,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:737 */
  {
    "*mova.md:737",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[64],
    2,
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:746 */
  {
    "*mova.md:746",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[64],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:756 */
  {
    "*mova.md:756",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[67],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:766 */
  {
    "*mova.md:766",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[67],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:777 */
  {
    "*mova.md:777",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:787 */
  {
    "*mova.md:787",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:798 */
  {
    "*mova.md:798",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[64],
    2,
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:807 */
  {
    "*mova.md:807",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[64],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:817 */
  {
    "*mova.md:817",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[67],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:827 */
  {
    "*mova.md:827",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[67],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:838 */
  {
    "*mova.md:838",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(0,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/mova.md:848 */
  {
    "*mova.md:848",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mova/l.l @(%o2,%T1.w),%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:778 */
  {
    "*movsf_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_99 },
#else
    { 0, 0, output_99 },
#endif
    0,
    &operand_data[70],
    2,
    2,
    0,
    6,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:834 */
  {
    "*movsf_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_100 },
#else
    { 0, output_100, 0 },
#endif
    0,
    &operand_data[72],
    2,
    2,
    0,
    6,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:855 */
  {
    "*pushqi1_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w\t%T0,@-r7",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[74],
    1,
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:865 */
  {
    "*pushqi1_h8300hs_hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.l\t%S0,@-er7",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[74],
    1,
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:865 */
  {
    "*pushqi1_h8300hs_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.l\t%S0,@-er7",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[74],
    1,
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:875 */
  {
    "*pushhi1_h8300hs_hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.l\t%S0,@-er7",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[75],
    1,
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:875 */
  {
    "*pushhi1_h8300hs_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.l\t%S0,@-er7",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[75],
    1,
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:889 */
  {
    "*h8300.md:889",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "btst	%Z1,%Y0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[76],
    2,
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:900 */
  {
    "*h8300.md:900",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "btst	%Z1,%Y0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[78],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:911 */
  {
    "*tst_extzv_1_n",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_108 },
#else
    { 0, output_108, 0 },
#endif
    0,
    &operand_data[80],
    2,
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:936 */
  {
    "*h8300.md:936",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "btst	%Z1,%Y0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[83],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:947 */
  {
    "*tstsi_upper_bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[83],
    2,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:968 */
  {
    "*tstsi_variable_bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "btst	%w1,%w0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[86],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:979 */
  {
    "*tstsi_variable_bit_qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_112 },
#else
    { 0, output_112, 0 },
#endif
    0,
    &operand_data[88],
    2,
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:1007 */
  {
    "*tstqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b	%X0,%X0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[91],
    1,
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1015 */
  {
    "*tsthi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w	%T0,%T0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[78],
    1,
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1023 */
  {
    "*tsthi_upper",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b	%t0,%t0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[78],
    1,
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1032 */
  {
    "*tstsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.l	%S0,%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[83],
    1,
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1040 */
  {
    "*tstsi_upper",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w	%e0,%e0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[83],
    1,
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1049 */
  {
    "*cmpqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp.b	%X1,%X0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[92],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1058 */
  {
    "*cmphi_h8300_znvc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp.w	%T1,%T0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[94],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1067 */
  {
    "*cmphi_h8300hs_znvc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_120 },
#else
    { 0, 0, output_120 },
#endif
    0,
    &operand_data[96],
    2,
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:1090 */
  {
    "cmpsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_121 },
#else
    { 0, 0, output_121 },
#endif
    (insn_gen_fn) gen_cmpsi,
    &operand_data[98],
    2,
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:1125 */
  {
    "*addqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add.b	%X2,%X0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[100],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1141 */
  {
    "*addhi3_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_123 },
#else
    { 0, output_123, 0 },
#endif
    0,
    &operand_data[103],
    3,
    3,
    0,
    5,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:1184 */
  {
    "*addhi3_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_124 },
#else
    { 0, output_124, 0 },
#endif
    0,
    &operand_data[103],
    3,
    3,
    0,
    5,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:1198 */
  {
    "*addhi3_incdec",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_125 },
#else
    { 0, output_125, 0 },
#endif
    0,
    &operand_data[106],
    3,
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:1210 */
  {
    "*addhi3_h8sx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_126 },
#else
    { 0, output_126, 0 },
#endif
    0,
    &operand_data[109],
    3,
    3,
    0,
    4,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:1239 */
  {
    "*addsi_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_127 },
#else
    { 0, 0, output_127 },
#endif
    0,
    &operand_data[112],
    3,
    3,
    0,
    2,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:1250 */
  {
    "*addsi_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_128 },
#else
    { 0, 0, output_128 },
#endif
    0,
    &operand_data[115],
    3,
    3,
    0,
    2,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:1261 */
  {
    "*addsi3_incdec",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_129 },
#else
    { 0, output_129, 0 },
#endif
    0,
    &operand_data[118],
    3,
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:1292 */
  {
    "*subqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.b	%X2,%X0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[121],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1308 */
  {
    "*subhi3_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_131 },
#else
    { 0, output_131, 0 },
#endif
    0,
    &operand_data[124],
    3,
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:1319 */
  {
    "*subhi3_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_132 },
#else
    { 0, output_132, 0 },
#endif
    0,
    &operand_data[127],
    3,
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:1340 */
  {
    "*subsi3_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.w	%f2,%f0\n\tsubx	%y2,%y0\n\tsubx	%z2,%z0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1348 */
  {
    "*subsi3_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_134 },
#else
    { 0, output_134, 0 },
#endif
    0,
    &operand_data[133],
    3,
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:1377 */
  {
    "*mulqihi3_const",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulxs.b	%X2,%T0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[136],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1386 */
  {
    "*mulqihi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulxs.b	%X2,%T0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[139],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1407 */
  {
    "*mulhisi3_const",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulxs.w	%T2,%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[142],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1416 */
  {
    "*mulhisi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulxs.w	%T2,%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[145],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1437 */
  {
    "*umulqihi3_const",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulxu.b	%X2,%T0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[136],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1446 */
  {
    "*umulqihi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulxu.b	%X2,%T0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[139],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1467 */
  {
    "*umulhisi3_const",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulxu.w	%T2,%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[142],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1476 */
  {
    "*umulhisi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulxu.w	%T2,%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[145],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1488 */
  {
    "mulhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "muls.w\t%T2,%T0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulhi3,
    &operand_data[148],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1497 */
  {
    "mulsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "muls.l\t%S2,%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsi3,
    &operand_data[151],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1506 */
  {
    "smulsi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "muls/u.l\t%S2,%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart,
    &operand_data[151],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1519 */
  {
    "umulsi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulu/u.l\t%S2,%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart,
    &operand_data[151],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1539 */
  {
    "*h8300.md:1539",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "clrmac\n\tmac	@%2+,@%1+",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[154],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1551 */
  {
    "*h8300.md:1551",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mac	@%2+,@%1+",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[154],
    4,
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1568 */
  {
    "udivhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "divu.w\t%T2,%T0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivhi3,
    &operand_data[158],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1577 */
  {
    "divhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "divs.w\t%T2,%T0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divhi3,
    &operand_data[158],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1586 */
  {
    "udivsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "divu.l\t%S2,%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivsi3,
    &operand_data[161],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1595 */
  {
    "divsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "divs.l\t%S2,%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divsi3,
    &operand_data[161],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1604 */
  {
    "udivmodqi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_153 },
#else
    { 0, 0, output_153 },
#endif
    (insn_gen_fn) gen_udivmodqi4,
    &operand_data[164],
    4,
    4,
    2,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:1625 */
  {
    "divmodqi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_154 },
#else
    { 0, 0, output_154 },
#endif
    (insn_gen_fn) gen_divmodqi4,
    &operand_data[164],
    4,
    4,
    2,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:1646 */
  {
    "udivmodhi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_155 },
#else
    { 0, 0, output_155 },
#endif
    (insn_gen_fn) gen_udivmodhi4,
    &operand_data[168],
    4,
    4,
    2,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:1667 */
  {
    "divmodhi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_156 },
#else
    { 0, 0, output_156 },
#endif
    (insn_gen_fn) gen_divmodhi4,
    &operand_data[168],
    4,
    4,
    2,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:1691 */
  {
    "bclrqi_msx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bclr\t%W2,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bclrqi_msx,
    &operand_data[172],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1722 */
  {
    "bclrhi_msx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bclr\t%W2,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bclrhi_msx,
    &operand_data[175],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1730 */
  {
    "*andqi3_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_159 },
#else
    { 0, output_159, 0 },
#endif
    0,
    &operand_data[178],
    3,
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:1743 */
  {
    "andqi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_160 },
#else
    { 0, output_160, 0 },
#endif
    (insn_gen_fn) gen_andqi3_1,
    &operand_data[181],
    3,
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:1769 */
  {
    "*andorqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bld\t%V3,%X2\n\tbor\t%V3,%X0\n\tbst\t%V3,%X0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[184],
    4,
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1778 */
  {
    "*andorhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_162 },
#else
    { 0, 0, output_162 },
#endif
    0,
    &operand_data[188],
    4,
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:1796 */
  {
    "*andorsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_163 },
#else
    { 0, 0, output_163 },
#endif
    0,
    &operand_data[192],
    4,
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:1814 */
  {
    "*andorsi3_shift_8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or.b\t%w2,%x0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1835 */
  {
    "bsetqi_msx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bset\t%V2,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bsetqi_msx,
    &operand_data[196],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1866 */
  {
    "bsethi_msx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bset\t%V2,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bsethi_msx,
    &operand_data[199],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1874 */
  {
    "iorqi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_167 },
#else
    { 0, output_167, 0 },
#endif
    (insn_gen_fn) gen_iorqi3_1,
    &operand_data[202],
    3,
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:1912 */
  {
    "bnotqi_msx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bnot\t%V2,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bnotqi_msx,
    &operand_data[196],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1943 */
  {
    "bnothi_msx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bnot\t%V2,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bnothi_msx,
    &operand_data[199],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:1951 */
  {
    "xorqi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_170 },
#else
    { 0, output_170, 0 },
#endif
    (insn_gen_fn) gen_xorqi3_1,
    &operand_data[205],
    3,
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:1994 */
  {
    "*logicalhi3_sn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_171 },
#else
    { 0, 0, output_171 },
#endif
    0,
    &operand_data[208],
    4,
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2006 */
  {
    "*logicalsi3_sn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_172 },
#else
    { 0, 0, output_172 },
#endif
    0,
    &operand_data[212],
    4,
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2018 */
  {
    "*logicalhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_173 },
#else
    { 0, 0, output_173 },
#endif
    0,
    &operand_data[208],
    4,
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2030 */
  {
    "*logicalsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_174 },
#else
    { 0, 0, output_174 },
#endif
    0,
    &operand_data[212],
    4,
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2052 */
  {
    "*negqi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg	%X0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[121],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2082 */
  {
    "*neghi2_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg.w	%T0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2112 */
  {
    "*negsi2_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg.l	%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[218],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2126 */
  {
    "*negsf2_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor.b\t#128,%z0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[220],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2133 */
  {
    "*negsf2_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor.w\t#32768,%e0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[220],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2150 */
  {
    "*abssf2_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and.b\t#127,%z0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[220],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2157 */
  {
    "*abssf2_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and.w\t#32767,%e0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[220],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2174 */
  {
    "*one_cmplqi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "not	%X0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[121],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2188 */
  {
    "*one_cmplhi2_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "not	%s0\n\tnot	%t0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[49],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2195 */
  {
    "*one_cmplhi2_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "not.w	%T0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2209 */
  {
    "*one_cmplsi2_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "not	%w0\n\tnot	%x0\n\tnot	%y0\n\tnot	%z0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2216 */
  {
    "*one_cmplsi2_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "not.l	%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[218],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2262 */
  {
    "branch_true",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_187 },
#else
    { 0, 0, output_187 },
#endif
    (insn_gen_fn) gen_branch_true,
    &operand_data[222],
    2,
    2,
    0,
    0,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2291 */
  {
    "branch_false",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_188 },
#else
    { 0, 0, output_188 },
#endif
    (insn_gen_fn) gen_branch_false,
    &operand_data[222],
    2,
    2,
    0,
    0,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2320 */
  {
    "*brabc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_189 },
#else
    { 0, 0, output_189 },
#endif
    0,
    &operand_data[224],
    3,
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2349 */
  {
    "*brabs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_190 },
#else
    { 0, 0, output_190 },
#endif
    0,
    &operand_data[224],
    3,
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2380 */
  {
    "jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_191 },
#else
    { 0, 0, output_191 },
#endif
    (insn_gen_fn) gen_jump,
    &operand_data[222],
    1,
    1,
    0,
    0,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2432 */
  {
    "*tablejump_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp	@%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[227],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2440 */
  {
    "*tablejump_h8300hs_advanced",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp	@%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[229],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2448 */
  {
    "*tablejump_h8300hs_normal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp @%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[227],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2463 */
  {
    "*indirect_jump_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp	@%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[231],
    1,
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2470 */
  {
    "*indirect_jump_h8300hs_advanced",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp @%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[232],
    1,
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2477 */
  {
    "*indirect_jump_h8300hs_normal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp @%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[231],
    1,
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2488 */
  {
    "call",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_198 },
#else
    { 0, 0, output_198 },
#endif
    (insn_gen_fn) gen_call,
    &operand_data[233],
    2,
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2511 */
  {
    "call_value",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_199 },
#else
    { 0, 0, output_199 },
#endif
    (insn_gen_fn) gen_call_value,
    &operand_data[235],
    3,
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2530 */
  {
    "nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2577 */
  {
    "ldm_h8300sx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_201 },
#else
    { 0, 0, output_201 },
#endif
    (insn_gen_fn) gen_ldm_h8300sx,
    &operand_data[238],
    3,
    3,
    0,
    0,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2590 */
  {
    "stm_h8300sx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_202 },
#else
    { 0, 0, output_202 },
#endif
    (insn_gen_fn) gen_stm_h8300sx,
    &operand_data[241],
    3,
    3,
    0,
    0,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2603 */
  {
    "return_h8sx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_203 },
#else
    { 0, 0, output_203 },
#endif
    (insn_gen_fn) gen_return_h8sx,
    &operand_data[244],
    3,
    3,
    0,
    0,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2626 */
  {
    "*return_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_204 },
#else
    { 0, 0, output_204 },
#endif
    0,
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2650 */
  {
    "monitor_prologue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_205 },
#else
    { 0, 0, output_205 },
#endif
    (insn_gen_fn) gen_monitor_prologue,
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2675 */
  {
    "*zero_extendqihi2_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_206 },
#else
    { 0, output_206, 0 },
#endif
    0,
    &operand_data[247],
    2,
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:2684 */
  {
    "*zero_extendqihi2_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_207 },
#else
    { 0, output_207, 0 },
#endif
    0,
    &operand_data[247],
    2,
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:2718 */
  {
    "*zero_extendqisi2_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_208 },
#else
    { 0, output_208, 0 },
#endif
    0,
    &operand_data[249],
    2,
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:2727 */
  {
    "*zero_extendqisi2_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[249],
    2,
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2760 */
  {
    "*zero_extendqisi2_h8sx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "extu.l\t#2,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[251],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2775 */
  {
    "*zero_extendhisi2_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_211 },
#else
    { 0, output_211, 0 },
#endif
    0,
    &operand_data[253],
    2,
    2,
    0,
    3,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:2785 */
  {
    "*zero_extendhisi2_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "extu.l	%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[255],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2799 */
  {
    "*extendqihi2_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_213 },
#else
    { 0, output_213, 0 },
#endif
    0,
    &operand_data[247],
    2,
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:2808 */
  {
    "*extendqihi2_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts.w	%T0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[257],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2822 */
  {
    "*extendqisi2_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_215 },
#else
    { 0, output_215, 0 },
#endif
    0,
    &operand_data[249],
    2,
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:2835 */
  {
    "*extendqisi2_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[251],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2847 */
  {
    "*extendqisi2_h8sx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts.l\t#2,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[251],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2861 */
  {
    "*extendhisi2_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_218 },
#else
    { 0, output_218, 0 },
#endif
    0,
    &operand_data[259],
    2,
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:2870 */
  {
    "*extendhisi2_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts.l	%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[255],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:2920 */
  {
    "*h8300.md:2920",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_220 },
#else
    { 0, 0, output_220 },
#endif
    0,
    &operand_data[261],
    4,
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2930 */
  {
    "*h8300.md:2930",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_221 },
#else
    { 0, 0, output_221 },
#endif
    0,
    &operand_data[265],
    4,
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2940 */
  {
    "*shiftqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_222 },
#else
    { 0, 0, output_222 },
#endif
    0,
    &operand_data[269],
    4,
    5,
    0,
    2,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2976 */
  {
    "*h8300.md:2976",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_223 },
#else
    { 0, 0, output_223 },
#endif
    0,
    &operand_data[274],
    4,
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2986 */
  {
    "*h8300.md:2986",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_224 },
#else
    { 0, 0, output_224 },
#endif
    0,
    &operand_data[278],
    4,
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:2996 */
  {
    "*shifthi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_225 },
#else
    { 0, 0, output_225 },
#endif
    0,
    &operand_data[282],
    4,
    5,
    0,
    2,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:3032 */
  {
    "*h8300.md:3032",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_226 },
#else
    { 0, 0, output_226 },
#endif
    0,
    &operand_data[287],
    4,
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:3042 */
  {
    "*h8300.md:3042",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_227 },
#else
    { 0, 0, output_227 },
#endif
    0,
    &operand_data[291],
    4,
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:3052 */
  {
    "*shiftsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_228 },
#else
    { 0, 0, output_228 },
#endif
    0,
    &operand_data[295],
    4,
    5,
    0,
    2,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:3143 */
  {
    "rotlqi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_229 },
#else
    { 0, 0, output_229 },
#endif
    (insn_gen_fn) gen_rotlqi3_1,
    &operand_data[300],
    3,
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:3159 */
  {
    "rotlhi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_230 },
#else
    { 0, 0, output_230 },
#endif
    (insn_gen_fn) gen_rotlhi3_1,
    &operand_data[303],
    3,
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:3175 */
  {
    "rotlsi3_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_231 },
#else
    { 0, 0, output_231 },
#endif
    (insn_gen_fn) gen_rotlsi3_1,
    &operand_data[306],
    3,
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:3201 */
  {
    "*h8300.md:3201",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.w	%0,%0\n\tbld	%Z2,%Y1\n\tbst	#0,%X0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[309],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3214 */
  {
    "*h8300.md:3214",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.w	%0,%0\n\tbild	%Z2,%Y1\n\tbst	#0,%X0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[312],
    4,
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3229 */
  {
    "*extzv_1_r_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_234 },
#else
    { 0, 0, output_234 },
#endif
    0,
    &operand_data[316],
    3,
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:3239 */
  {
    "*extzv_1_r_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_235 },
#else
    { 0, 0, output_235 },
#endif
    0,
    &operand_data[319],
    3,
    3,
    0,
    2,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:3254 */
  {
    "*extzv_1_r_inv_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_236 },
#else
    { 0, 0, output_236 },
#endif
    0,
    &operand_data[322],
    4,
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:3266 */
  {
    "*extzv_1_r_inv_h8300hs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_237 },
#else
    { 0, 0, output_237 },
#endif
    0,
    &operand_data[326],
    4,
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:3345 */
  {
    "*h8300.md:3345",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bld	#0,%R2\n\tbst	%Z1,%Y0 ; i1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[330],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3416 */
  {
    "*h8300.md:3416",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bld	%Z2,%Y1\n\tb%c4	#0,%R0\n\tbst	#0,%R0; bl1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[333],
    5,
    5,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3427 */
  {
    "*h8300.md:3427",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bld	%Z2,%Y1\n\tb%c5	%Z4,%Y3\n\tbst	#0,%R0; bl3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[338],
    6,
    6,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3440 */
  {
    "bfld",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_241 },
#else
    { 0, 0, output_241 },
#endif
    (insn_gen_fn) gen_bfld,
    &operand_data[344],
    4,
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:3455 */
  {
    "bfst",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_242 },
#else
    { 0, 0, output_242 },
#endif
    (insn_gen_fn) gen_bfst,
    &operand_data[348],
    4,
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:3494 */
  {
    "*bstzhireg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulu.w	#0,%T0\n\tb%k1	.Lh8BR%=\n\tinc.w	#1,%T0\n.Lh8BR%=:",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[352],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3501 */
  {
    "*cmpstz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[354],
    5,
    5,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3523 */
  {
    "*bstz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bstz	%1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[359],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3533 */
  {
    "*bistz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bistz	%1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[359],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3543 */
  {
    "*cmpcondbset",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[361],
    6,
    6,
    1,
    2,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3565 */
  {
    "*condbset",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bset/%j2\t%V1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[367],
    4,
    4,
    1,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3579 */
  {
    "*cmpcondbclr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[371],
    6,
    6,
    1,
    2,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3601 */
  {
    "*condbclr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bclr/%j2\t%W1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[377],
    4,
    4,
    1,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3615 */
  {
    "*cmpcondbsetreg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[381],
    6,
    6,
    1,
    2,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3641 */
  {
    "*condbsetreg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bset/%j2\t%R1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[387],
    4,
    4,
    1,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3656 */
  {
    "*cmpcondbclrreg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[381],
    6,
    6,
    1,
    2,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3682 */
  {
    "*condbclrreg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bclr/%j2\t%R1,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[387],
    4,
    4,
    1,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3704 */
  {
    "*insv_si_1_n",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bld\t#0,%w2\n\tbst\t%Z1,%Y0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[391],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3714 */
  {
    "*insv_si_1_n_lshiftrt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bld\t%Z3,%Y2\n\tbst\t%Z1,%Y0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[391],
    4,
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3726 */
  {
    "*insv_si_1_n_lshiftrt_16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rotr.w\t%e2\n\trotl.w\t%e2\n\tbst\t%Z1,%Y0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[391],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3737 */
  {
    "*insv_si_8_8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b\t%w1,%x0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[395],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3746 */
  {
    "*insv_si_8_8_lshiftrt_8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b\t%x1,%x0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[395],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3758 */
  {
    "*extzv_8_8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_260 },
#else
    { 0, output_260, 0 },
#endif
    0,
    &operand_data[319],
    2,
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/h8300/h8300.md:3770 */
  {
    "*extzv_8_16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w\t%e1,%f0\n\textu.w\t%f0\n\textu.l\t%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[397],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3780 */
  {
    "*extzv_16_8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w\t%e1,%f2\n\tmov.b\t%x1,%w0\n\tmov.b\t%w2,%x0\n\textu.l\t%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[397],
    2,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3793 */
  {
    "*extzv_8_23",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3815 */
  {
    "*twoshifts_l16_r1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3835 */
  {
    "*andsi3_ashift_n_lower",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[400],
    4,
    5,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3856 */
  {
    "*andsi3_lshiftrt_n_sb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_266 },
#else
    { 0, 0, output_266 },
#endif
    0,
    &operand_data[405],
    4,
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:3871 */
  {
    "*andsi3_lshiftrt_9_sb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3891 */
  {
    "*addsi3_upper",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add.w\t%f1,%e0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[409],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3900 */
  {
    "*addsi3_lshiftrt_16_zexthi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add.w\t%e1,%f0\n\txor.w\t%e0,%e0\n\trotxl.w\t%e0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[412],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3909 */
  {
    "*addsi3_and_r_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[409],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3932 */
  {
    "*addsi3_and_not_r_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[409],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3957 */
  {
    "*ixorhi3_zext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%c1.b\t%X2,%s0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[415],
    4,
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3968 */
  {
    "*ixorsi3_zext_qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%c1.b\t%X2,%w0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[419],
    4,
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3977 */
  {
    "*ixorsi3_zext_hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%c1.w\t%T2,%f0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[423],
    4,
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3986 */
  {
    "*ixorsi3_ashift_16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%c1.w\t%f2,%e0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[427],
    4,
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:3996 */
  {
    "*ixorsi3_lshiftrt_16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%c1.w\t%e2,%f0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[427],
    4,
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4008 */
  {
    "*iorhi3_ashift_8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or.b\t%s1,%t0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[431],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4017 */
  {
    "*iorhi3_lshiftrt_8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or.b\t%t1,%s0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[431],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4026 */
  {
    "*iorhi3_two_qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b\t%s2,%t0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[434],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4035 */
  {
    "*iorhi3_two_qi_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b\t%X2,%t0\n\tmov.b\t%X1,%s0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[437],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4058 */
  {
    "*iorsi3_two_hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w\t%f2,%e0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[440],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4067 */
  {
    "*iorsi3_two_qi_zext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[443],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4085 */
  {
    "*iorsi3_e2f",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w\t%e2,%f0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4095 */
  {
    "*iorsi3_two_qi_sext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[446],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4112 */
  {
    "*iorsi3_w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b\t%X2,%w0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[449],
    3,
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4121 */
  {
    "*iorsi3_ashift_31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rotxl.l\t%S0\n\tbor\t#0,%w1\n\trotxr.l\t%S0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[452],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4131 */
  {
    "*iorsi3_and_ashift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_287 },
#else
    { 0, 0, output_287 },
#endif
    0,
    &operand_data[455],
    5,
    5,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:4150 */
  {
    "*iorsi3_and_lshiftrt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_288 },
#else
    { 0, 0, output_288 },
#endif
    0,
    &operand_data[455],
    5,
    5,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:4169 */
  {
    "*iorsi3_zero_extract",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bld\t%Z2,%Y1\n\tbor\t#0,%w0\n\tbst\t#0,%w0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[460],
    4,
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4180 */
  {
    "*iorsi3_and_lshiftrt_n_sb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rotl.l\t%S1\n\trotr.l\t%S1\n\tbor\t#1,%w0\n\tbst\t#1,%w0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[409],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4190 */
  {
    "*iorsi3_and_lshiftrt_9_sb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_291 },
#else
    { 0, 0, output_291 },
#endif
    0,
    &operand_data[464],
    3,
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/h8300/h8300.md:4209 */
  {
    "*iorsi3_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[468],
    3,
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4260 */
  {
    "*iorsi2_and_1_lshiftrt_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "shlr.l\t%S0\n\tbor\t#0,%w0\n\tbst\t#0,%w0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    2,
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4270 */
  {
    "*iorsi3_ashift_16_ashift_24",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4290 */
  {
    "*iorsi3_ashift_16_ashift_24_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[443],
    3,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4312 */
  {
    "*addsi3_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[468],
    3,
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4365 */
  {
    "*ashiftsi_sextqi_7",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[251],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4386 */
  {
    "*h8300.md:4386",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b\t%t1,%R0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[472],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4397 */
  {
    "*h8300.md:4397",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b\t%x1,%R0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[474],
    2,
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4406 */
  {
    "*h8300.md:4406",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w\t%e1,%f2\n\tmov.b\t%w2,%R0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[474],
    2,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4416 */
  {
    "*h8300.md:4416",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w\t%e1,%f2\n\tmov.b\t%x2,%R0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[474],
    2,
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4426 */
  {
    "*h8300.md:4426",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[477],
    2,
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:4446 */
  {
    "*h8300.md:4446",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[477],
    2,
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/h8300/h8300.md:238 */
  {
    "movqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movqi,
    &operand_data[479],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:307 */
  {
    "movhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhi,
    &operand_data[481],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:331 */
  {
    "movsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsi,
    &operand_data[483],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:519 */
  {
    "movmemsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmemsi,
    &operand_data[485],
    4,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:536 */
  {
    "movmd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmd,
    &operand_data[489],
    4,
    4,
    3,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:600 */
  {
    "movmd+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[489],
    0,
    6,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:623 */
  {
    "movstr-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[495],
    0,
    6,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:649 */
  {
    "movstr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movstr,
    &operand_data[501],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:669 */
  {
    "movsd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsd,
    &operand_data[502],
    3,
    3,
    2,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:714 */
  {
    "movsd+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[505],
    0,
    5,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:734 */
  {
    "movsf-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[510],
    0,
    5,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:756 */
  {
    "movsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsf,
    &operand_data[515],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:911 */
  {
    "movsf+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[517],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:947 */
  {
    "movsf+2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[520],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:979 */
  {
    "addqi3-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[523],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1118 */
  {
    "addqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addqi3,
    &operand_data[526],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1134 */
  {
    "addhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addhi3,
    &operand_data[529],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1163 */
  {
    "addhi3+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[532],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1171 */
  {
    "addhi3+2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[534],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1224 */
  {
    "addsi3-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[537],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1232 */
  {
    "addsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addsi3,
    &operand_data[539],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1273 */
  {
    "addsi3+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[542],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1285 */
  {
    "subqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subqi3,
    &operand_data[526],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1301 */
  {
    "subhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subhi3,
    &operand_data[529],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1330 */
  {
    "subsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subsi3,
    &operand_data[539],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1365 */
  {
    "mulqihi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulqihi3,
    &operand_data[544],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1395 */
  {
    "mulhisi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulhisi3,
    &operand_data[547],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1425 */
  {
    "umulqihi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulqihi3,
    &operand_data[544],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1455 */
  {
    "umulhisi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulhisi3,
    &operand_data[547],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1700 */
  {
    "umulhisi3+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[550],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1755 */
  {
    "andqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andqi3,
    &operand_data[526],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1762 */
  {
    "andhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andhi3,
    &operand_data[529],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1824 */
  {
    "andsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andsi3,
    &operand_data[539],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1844 */
  {
    "andsi3+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[553],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1888 */
  {
    "iorqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorqi3,
    &operand_data[526],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1895 */
  {
    "iorhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorhi3,
    &operand_data[529],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1902 */
  {
    "iorsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorsi3,
    &operand_data[539],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1921 */
  {
    "iorsi3+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[553],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1965 */
  {
    "xorqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorqi3,
    &operand_data[526],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1972 */
  {
    "xorhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorhi3,
    &operand_data[529],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:1979 */
  {
    "xorsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorsi3,
    &operand_data[539],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2046 */
  {
    "negqi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negqi2,
    &operand_data[526],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2060 */
  {
    "neghi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_neghi2,
    &operand_data[493],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2073 */
  {
    "neghi2_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_neghi2_h8300,
    &operand_data[493],
    2,
    2,
    4,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2090 */
  {
    "negsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negsi2,
    &operand_data[499],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2103 */
  {
    "negsi2_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negsi2_h8300,
    &operand_data[499],
    2,
    2,
    4,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2120 */
  {
    "negsf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negsf2,
    &operand_data[556],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2144 */
  {
    "abssf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_abssf2,
    &operand_data[556],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2168 */
  {
    "one_cmplqi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplqi2,
    &operand_data[526],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2182 */
  {
    "one_cmplhi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplhi2,
    &operand_data[493],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2203 */
  {
    "one_cmplsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplsi2,
    &operand_data[499],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2230 */
  {
    "cbranchqi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cbranchqi4,
    &operand_data[558],
    4,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2238 */
  {
    "cbranchhi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cbranchhi4,
    &operand_data[562],
    4,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2254 */
  {
    "cbranchsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cbranchsi4,
    &operand_data[566],
    4,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2426 */
  {
    "tablejump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tablejump,
    &operand_data[570],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2458 */
  {
    "indirect_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jump,
    &operand_data[572],
    1,
    1,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2541 */
  {
    "push_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_push_h8300,
    &operand_data[491],
    1,
    1,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2547 */
  {
    "push_h8300hs_advanced",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_push_h8300hs_advanced,
    &operand_data[239],
    1,
    1,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2553 */
  {
    "push_h8300hs_normal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_push_h8300hs_normal,
    &operand_data[239],
    1,
    1,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2559 */
  {
    "pop_h8300",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pop_h8300,
    &operand_data[491],
    1,
    1,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2565 */
  {
    "pop_h8300hs_advanced",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pop_h8300hs_advanced,
    &operand_data[239],
    1,
    1,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2571 */
  {
    "pop_h8300hs_normal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pop_h8300hs_normal,
    &operand_data[239],
    1,
    1,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2621 */
  {
    "return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_return,
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2640 */
  {
    "prologue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_prologue,
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2645 */
  {
    "epilogue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2669 */
  {
    "zero_extendqihi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqihi2,
    &operand_data[573],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2699 */
  {
    "zero_extendqihi2+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[573],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2709 */
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqisi2,
    &operand_data[575],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2733 */
  {
    "zero_extendqisi2+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[575],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2748 */
  {
    "zero_extendhisi2-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[575],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2768 */
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2,
    &operand_data[547],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2793 */
  {
    "extendqihi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqihi2,
    &operand_data[544],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2816 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2,
    &operand_data[577],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2835 */
  {
    "extendqisi2+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[577],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2855 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendhisi2,
    &operand_data[547],
    2,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2899 */
  {
    "ashlqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlqi3,
    &operand_data[578],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2906 */
  {
    "ashrqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrqi3,
    &operand_data[578],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2913 */
  {
    "lshrqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrqi3,
    &operand_data[578],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2955 */
  {
    "ashlhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlhi3,
    &operand_data[581],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2962 */
  {
    "lshrhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrhi3,
    &operand_data[581],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:2969 */
  {
    "ashrhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrhi3,
    &operand_data[581],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3011 */
  {
    "ashlsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlsi3,
    &operand_data[584],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3018 */
  {
    "lshrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrsi3,
    &operand_data[584],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3025 */
  {
    "ashrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrsi3,
    &operand_data[584],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3068 */
  {
    "ashrsi3+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[587],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3099 */
  {
    "rotlqi3-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[587],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3136 */
  {
    "rotlqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotlqi3,
    &operand_data[578],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3152 */
  {
    "rotlhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotlhi3,
    &operand_data[581],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3168 */
  {
    "rotlsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotlsi3,
    &operand_data[584],
    3,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3279 */
  {
    "insv",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_insv,
    &operand_data[591],
    4,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3354 */
  {
    "extzv",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extzv,
    &operand_data[595],
    4,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3470 */
  {
    "cstoreqi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cstoreqi4,
    &operand_data[599],
    4,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3478 */
  {
    "cstorehi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cstorehi4,
    &operand_data[603],
    4,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3486 */
  {
    "cstoresi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cstoresi4,
    &operand_data[607],
    4,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3501 */
  {
    "cstoresi4+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[611],
    0,
    5,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3543 */
  {
    "cstoresi4+2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[616],
    0,
    6,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3579 */
  {
    "cstoresi4+3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[622],
    0,
    6,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3615 */
  {
    "cstoresi4+4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[628],
    0,
    6,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3656 */
  {
    "cstoresi4+5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[628],
    0,
    6,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3793 */
  {
    "cstoresi4+6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[499],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3815 */
  {
    "cstoresi4+7",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[499],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3835 */
  {
    "cstoresi4+8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[634],
    0,
    5,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3871 */
  {
    "cstoresi4+9",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[499],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3909 */
  {
    "cstoresi4+10",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[512],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:3932 */
  {
    "cstoresi4+11",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[512],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4044 */
  {
    "cstoresi4+12",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[639],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4067 */
  {
    "cstoresi4+13",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[642],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4095 */
  {
    "cstoresi4+14",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[577],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4218 */
  {
    "cstoresi4+15",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[512],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4238 */
  {
    "cstoresi4+16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[512],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4270 */
  {
    "cstoresi4+17",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[512],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4290 */
  {
    "cstoresi4+18",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[642],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4321 */
  {
    "cstoresi4+19",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[512],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4341 */
  {
    "cstoresi4+20",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[512],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4365 */
  {
    "cstoresi4+21",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[577],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4426 */
  {
    "cstoresi4+22",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[477],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4446 */
  {
    "cstoresi4+23",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[477],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4472 */
  {
    "cstoresi4+24",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[645],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4493 */
  {
    "cstoresi4+25",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[645],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4514 */
  {
    "cstoresi4+26",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[649],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4535 */
  {
    "cstoresi4+27",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[649],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4556 */
  {
    "cstoresi4+28",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[649],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4577 */
  {
    "cstoresi4+29",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[649],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4599 */
  {
    "cstoresi4+30",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[477],
    0,
    1,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4609 */
  {
    "cstoresi4+31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[477],
    0,
    1,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4622 */
  {
    "cstoresi4+32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[491],
    0,
    1,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4632 */
  {
    "cstoresi4+33",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[491],
    0,
    1,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4644 */
  {
    "cstoresi4+34",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[653],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4672 */
  {
    "cstoresi4+35",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[653],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4702 */
  {
    "cstoresi4+36",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[512],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4725 */
  {
    "cstoresi4+37",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[512],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4750 */
  {
    "cstoresi4+38",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[499],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4768 */
  {
    "cstoresi4+39",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[499],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4796 */
  {
    "cstoresi4+40",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[491],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4825 */
  {
    "cstoresi4+41",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[656],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4854 */
  {
    "cstoresi4+42",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[655],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4887 */
  {
    "cstoresi4+43",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[659],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4913 */
  {
    "cstoresi4+44",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[663],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4937 */
  {
    "cstoresi4+45",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[667],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4971 */
  {
    "cstoresi4+46",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[670],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:4986 */
  {
    "cstoresi4+47",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[672],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5003 */
  {
    "cstoresi4+48",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[674],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5033 */
  {
    "cstoresi4+49",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[499],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5053 */
  {
    "cstoresi4+50",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[678],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5074 */
  {
    "cstoresi4+51",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[681],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5086 */
  {
    "cstoresi4+52",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[683],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5098 */
  {
    "cstoresi4+53",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[685],
    0,
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5142 */
  {
    "cstoresi4+54",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[687],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5176 */
  {
    "cstoresi4+55",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[691],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5211 */
  {
    "cstoresi4+56",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[695],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5252 */
  {
    "cstoresi4+57",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[699],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5281 */
  {
    "cstoresi4+58",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[702],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5377 */
  {
    "cstoresi4+59",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[705],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5411 */
  {
    "cstoresi4+60",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[709],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5448 */
  {
    "cstoresi4+61",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[709],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5487 */
  {
    "cstoresi4+62",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[709],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5526 */
  {
    "cstoresi4+63",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[709],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5568 */
  {
    "cstoresi4+64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[713],
    0,
    5,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5611 */
  {
    "cstoresi4+65",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[718],
    0,
    5,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5656 */
  {
    "cstoresi4+66",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[713],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5691 */
  {
    "cstoresi4+67",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[718],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5733 */
  {
    "cstoresi4+68",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[713],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5773 */
  {
    "cstoresi4+69",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[718],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5818 */
  {
    "cstoresi4+70",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[723],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5847 */
  {
    "cstoresi4+71",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[726],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5885 */
  {
    "cstoresi4+72",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[729],
    0,
    5,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5915 */
  {
    "cstoresi4+73",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[734],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5939 */
  {
    "cstoresi4+74",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[738],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5963 */
  {
    "cstoresi4+75",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[742],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:5987 */
  {
    "cstoresi4+76",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[746],
    0,
    5,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:6027 */
  {
    "cstoresi4+77",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[239],
    0,
    1,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:6044 */
  {
    "cstoresi4+78",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[239],
    0,
    1,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:6134 */
  {
    "cstoresi4+79",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[751],
    0,
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:6163 */
  {
    "cstoresi4+80",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[755],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:6178 */
  {
    "cstoresi4+81",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[758],
    0,
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/h8300/h8300.md:6192 */
  {
    "cstoresi4+82",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[758],
    0,
    3,
    0,
    0,
    0
  },
};


const char *
get_insn_name (int code)
{
  if (code == NOOP_MOVE_INSN_CODE)
    return "NOOP_MOVE";
  else
    return insn_data[code].name;
}
