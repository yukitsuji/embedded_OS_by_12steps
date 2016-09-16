/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "expr.h"
#include "optabs.h"
#include "dfp.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"
#include "hard-reg-set.h"
#include "recog.h"
#include "resource.h"
#include "reload.h"
#include "diagnostic-core.h"
#include "regs.h"
#include "tm-constrs.h"
#include "ggc.h"
#include "basic-block.h"
#include "integrate.h"

#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)

/* ../.././gcc/config/h8300/h8300.md:248 */
rtx
gen_movstrictqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	operand1);
}

/* ../.././gcc/config/h8300/h8300.md:317 */
rtx
gen_movstricthi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	operand1);
}

/* ../.././gcc/config/h8300/h8300.md:555 */
rtx
gen_movmd_internal_normal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	gen_rtx_MEM (BLKmode,
	operand4)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (2,
		operand5,
		operand6),
	100),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx)));
}

/* ../.././gcc/config/h8300/h8300.md:572 */
rtx
gen_movmd_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	gen_rtx_MEM (BLKmode,
	operand4)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (2,
		operand5,
		operand6),
	100),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx)));
}

/* ../.././gcc/config/h8300/h8300.md:684 */
rtx
gen_stpcpy_internal_normal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		gen_rtx_MEM (BLKmode,
	operand4)),
	101)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* ../.././gcc/config/h8300/h8300.md:698 */
rtx
gen_stpcpy_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		gen_rtx_MEM (BLKmode,
	operand4)),
	101)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* ../.././gcc/config/h8300/h8300.md:1090 */
rtx
gen_cmpsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1));
}

/* ../.././gcc/config/h8300/h8300.md:1488 */
rtx
gen_mulhi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1497 */
rtx
gen_mulsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1506 */
rtx
gen_smulsi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
}

/* ../.././gcc/config/h8300/h8300.md:1519 */
rtx
gen_umulsi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
}

/* ../.././gcc/config/h8300/h8300.md:1568 */
rtx
gen_udivhi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1577 */
rtx
gen_divhi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1586 */
rtx
gen_udivsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1595 */
rtx
gen_divsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1604 */
rtx
gen_udivmodqi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (QImode,
	gen_rtx_UDIV (HImode,
	operand1,
	gen_rtx_ZERO_EXTEND (HImode,
	operand2)))),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_TRUNCATE (QImode,
	gen_rtx_UMOD (HImode,
	copy_rtx (operand1),
	gen_rtx_ZERO_EXTEND (HImode,
	copy_rtx (operand2)))))));
}

/* ../.././gcc/config/h8300/h8300.md:1625 */
rtx
gen_divmodqi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (QImode,
	gen_rtx_DIV (HImode,
	operand1,
	gen_rtx_SIGN_EXTEND (HImode,
	operand2)))),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_TRUNCATE (QImode,
	gen_rtx_MOD (HImode,
	copy_rtx (operand1),
	gen_rtx_SIGN_EXTEND (HImode,
	copy_rtx (operand2)))))));
}

/* ../.././gcc/config/h8300/h8300.md:1646 */
rtx
gen_udivmodhi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_UDIV (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2)))),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_UMOD (SImode,
	copy_rtx (operand1),
	gen_rtx_ZERO_EXTEND (SImode,
	copy_rtx (operand2)))))));
}

/* ../.././gcc/config/h8300/h8300.md:1667 */
rtx
gen_divmodhi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_DIV (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2)))),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_MOD (SImode,
	copy_rtx (operand1),
	gen_rtx_SIGN_EXTEND (SImode,
	copy_rtx (operand2)))))));
}

/* ../.././gcc/config/h8300/h8300.md:1691 */
rtx
gen_bclrqi_msx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1722 */
rtx
gen_bclrhi_msx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1743 */
rtx
gen_andqi3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1835 */
rtx
gen_bsetqi_msx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1866 */
rtx
gen_bsethi_msx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1874 */
rtx
gen_iorqi3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1912 */
rtx
gen_bnotqi_msx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1943 */
rtx
gen_bnothi_msx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1951 */
rtx
gen_xorqi3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:2262 */
rtx
gen_branch_true (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* ../.././gcc/config/h8300/h8300.md:2291 */
rtx
gen_branch_false (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		cc0_rtx,
		const0_rtx),
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0)));
}

/* ../.././gcc/config/h8300/h8300.md:2380 */
rtx
gen_jump (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* ../.././gcc/config/h8300/h8300.md:2488 */
rtx
gen_call (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_CALL (VOIDmode,
	operand0,
	operand1);
}

/* ../.././gcc/config/h8300/h8300.md:2511 */
rtx
gen_call_value (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:2530 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* ../.././gcc/config/h8300/h8300.md:2577 */
rtx
gen_ldm_h8300sx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return operand0;
}

/* ../.././gcc/config/h8300/h8300.md:2590 */
rtx
gen_stm_h8300sx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return operand0;
}

/* ../.././gcc/config/h8300/h8300.md:2603 */
rtx
gen_return_h8sx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return operand0;
}

/* ../.././gcc/config/h8300/h8300.md:2650 */
rtx
gen_monitor_prologue (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	1);
}

/* ../.././gcc/config/h8300/h8300.md:3143 */
rtx
gen_rotlqi3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:3159 */
rtx
gen_rotlhi3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:3175 */
rtx
gen_rotlsi3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:3440 */
rtx
gen_bfld (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (QImode,
	operand1,
	operand2,
	operand3));
}

/* ../.././gcc/config/h8300/h8300.md:3455 */
rtx
gen_bfst (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (QImode,
	operand0,
	operand2,
	operand3),
	operand1);
}

/* ../.././gcc/config/h8300/h8300.md:238 */
rtx
gen_movqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 242 "../.././gcc/config/h8300/h8300.md"
{
  /* One of the ops has to be in a register.  */
  if (!TARGET_H8300SX && !h8300_move_ok (operands[0], operands[1]))
    operands[1] = copy_to_mode_reg (QImode, operands[1]);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:307 */
rtx
gen_movhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 311 "../.././gcc/config/h8300/h8300.md"
{
  /* One of the ops has to be in a register.  */
  if (!h8300_move_ok (operands[0], operands[1]))
    operands[1] = copy_to_mode_reg (HImode, operand1);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:331 */
rtx
gen_movsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 335 "../.././gcc/config/h8300/h8300.md"
{
  if (TARGET_H8300)
    {
      if (h8300_expand_movsi (operands))
	DONE;
    }
  else if (!TARGET_H8300SX)
    {
      /* One of the ops has to be in a register.  */
      if (!h8300_move_ok (operands[0], operands[1]))
	operands[1] = copy_to_mode_reg (SImode, operand1);
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:519 */
rtx
gen_movmemsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 525 "../.././gcc/config/h8300/h8300.md"
{
    if (h8sx_emit_movmd (operands[0], operands[1], operands[2],
			 INTVAL (operands[3])))
      DONE;
    else
      FAIL;
  }
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:536 */
rtx
gen_movmd (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 547 "../.././gcc/config/h8300/h8300.md"
{
    operands[4] = copy_rtx (XEXP (operands[0], 0));
    operands[5] = copy_rtx (XEXP (operands[1], 0));
  }
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
    operand4 = operands[4];
    (void) operand4;
    operand5 = operands[5];
    (void) operand5;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (2,
		operand2,
		operand3),
	100),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand5),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:600 */
extern rtx gen_split_309 (rtx, rtx *);
rtx
gen_split_309 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 613 "../.././gcc/config/h8300/h8300.md"
{
    rtx dest;

    h8300_swap_into_er6 (XEXP (operands[0], 0));
    dest = replace_equiv_address (operands[0], hard_frame_pointer_rtx);
    emit_insn (gen_movmd (dest, operands[1], operands[2], operands[3]));
    h8300_swap_out_of_er6 (operands[4]);
    DONE;
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:623 */
extern rtx gen_split_310 (rtx, rtx *);
rtx
gen_split_310 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 636 "../.././gcc/config/h8300/h8300.md"
{
    rtx dest;

    h8300_swap_into_er6 (XEXP (operands[0], 0));
    dest = replace_equiv_address (operands[0], hard_frame_pointer_rtx);
    emit_insn (gen_movmd (dest, operands[1], operands[2], operands[3]));
    h8300_swap_out_of_er6 (operands[4]);
    DONE;
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:649 */
rtx
gen_movstr (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 654 "../.././gcc/config/h8300/h8300.md"
{
    operands[1] = replace_equiv_address
      (operands[1], copy_to_mode_reg (Pmode, XEXP (operands[1], 0)));
    operands[2] = replace_equiv_address
      (operands[2], copy_to_mode_reg (Pmode, XEXP (operands[2], 0)));
    emit_insn (gen_movsd (operands[1], operands[2], gen_reg_rtx (Pmode)));
    emit_insn (gen_add3_insn (operands[0],
			      XEXP (operands[1], 0),
			      constm1_rtx));
    DONE;
  }
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:669 */
rtx
gen_movsd (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 678 "../.././gcc/config/h8300/h8300.md"
{
    operands[3] = copy_rtx (XEXP (operands[0], 0));
    operands[4] = copy_rtx (XEXP (operands[1], 0));
  }
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
    operand4 = operands[4];
    (void) operand4;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand1),
	101)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:714 */
extern rtx gen_split_313 (rtx, rtx *);
rtx
gen_split_313 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 724 "../.././gcc/config/h8300/h8300.md"
{
    rtx dest;

    h8300_swap_into_er6 (XEXP (operands[0], 0));
    dest = replace_equiv_address (operands[0], hard_frame_pointer_rtx);
    emit_insn (gen_movsd (dest, operands[1], operands[4]));
    h8300_swap_out_of_er6 (operands[2]);
    DONE;
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:734 */
extern rtx gen_split_314 (rtx, rtx *);
rtx
gen_split_314 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 744 "../.././gcc/config/h8300/h8300.md"
{
    rtx dest;

    h8300_swap_into_er6 (XEXP (operands[0], 0));
    dest = replace_equiv_address (operands[0], hard_frame_pointer_rtx);
    emit_insn (gen_movsd (dest, operands[1], operands[4]));
    h8300_swap_out_of_er6 (operands[2]);
    DONE;
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:756 */
rtx
gen_movsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 760 "../.././gcc/config/h8300/h8300.md"

{
  if (TARGET_H8300)
    {
      if (h8300_expand_movsi (operands))
	DONE;
    }
  else if (!TARGET_H8300SX)
    {
      /* One of the ops has to be in a register.  */
      if (!register_operand (operand1, SFmode)
	  && !register_operand (operand0, SFmode))
	{
	  operands[1] = copy_to_mode_reg (SFmode, operand1);
	}
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:911 */
extern rtx gen_split_316 (rtx, rtx *);
rtx
gen_split_316 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 932 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand2),
	const1_rtx,
	operand1),
	const0_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:947 */
extern rtx gen_split_317 (rtx, rtx *);
rtx
gen_split_317 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 966 "../.././gcc/config/h8300/h8300.md"
operands[3] = GEN_INT (INTVAL (operands[1]) - 16);
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_IOR (SImode,
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	GEN_INT (-65536L)),
	gen_rtx_LSHIFTRT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (16)]))));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand2),
	const1_rtx,
	operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:979 */
extern rtx gen_split_318 (rtx, rtx *);
rtx
gen_split_318 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 1003 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	copy_rtx (operand2)),
	const1_rtx,
	gen_rtx_AND (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (7)])),
	const0_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:1118 */
rtx
gen_addqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1134 */
rtx
gen_addhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1163 */
extern rtx gen_split_321 (rtx, rtx *);
rtx
gen_split_321 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1169 "../.././gcc/config/h8300/h8300.md"
split_adds_subs (HImode, operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:1171 */
extern rtx gen_peephole2_322 (rtx, rtx *);
rtx
gen_peephole2_322 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 1182 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:1224 */
extern rtx gen_split_323 (rtx, rtx *);
rtx
gen_split_323 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1230 "../.././gcc/config/h8300/h8300.md"
split_adds_subs (HImode, operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:1232 */
rtx
gen_addsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1273 */
extern rtx gen_split_325 (rtx, rtx *);
rtx
gen_split_325 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1279 "../.././gcc/config/h8300/h8300.md"
split_adds_subs (SImode, operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:1285 */
rtx
gen_subqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1301 */
rtx
gen_subhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1330 */
rtx
gen_subsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1335 "../.././gcc/config/h8300/h8300.md"
{
  if (TARGET_H8300)
    operands[2] = force_reg (SImode, operands[2]);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:1365 */
rtx
gen_mulqihi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1371 "../.././gcc/config/h8300/h8300.md"

{
  if (GET_MODE (operands[2]) != VOIDmode)
    operands[2] = gen_rtx_SIGN_EXTEND (HImode, operands[2]);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:1395 */
rtx
gen_mulhisi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1401 "../.././gcc/config/h8300/h8300.md"

{
  if (GET_MODE (operands[2]) != VOIDmode)
    operands[2] = gen_rtx_SIGN_EXTEND (SImode, operands[2]);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:1425 */
rtx
gen_umulqihi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1431 "../.././gcc/config/h8300/h8300.md"

{
  if (GET_MODE (operands[2]) != VOIDmode)
    operands[2] = gen_rtx_ZERO_EXTEND (HImode, operands[2]);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:1455 */
rtx
gen_umulhisi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1461 "../.././gcc/config/h8300/h8300.md"

{
  if (GET_MODE (operands[2]) != VOIDmode)
    operands[2] = gen_rtx_ZERO_EXTEND (SImode, operands[2]);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:1700 */
extern rtx gen_split_333 (rtx, rtx *);
rtx
gen_split_333 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 1708 "../.././gcc/config/h8300/h8300.md"
{
  if (abs (INTVAL (operands[2])) > 0xFF)
    {
      operands[0] = adjust_address (operands[0], QImode, 0);
      operands[1] = adjust_address (operands[1], QImode, 0);
      operands[2] = GEN_INT ((INTVAL (operands[2])) >> 8);
    }
  else
    {
      operands[0] = adjust_address (operands[0], QImode, 1);
      operands[1] = adjust_address (operands[1], QImode, 1);
    }
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:1755 */
rtx
gen_andqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1762 */
rtx
gen_andhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1824 */
rtx
gen_andsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1844 */
extern rtx gen_split_337 (rtx, rtx *);
rtx
gen_split_337 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 1852 "../.././gcc/config/h8300/h8300.md"
{
  if (abs (INTVAL (operands[2])) > 0xFF)
    {
      operands[0] = adjust_address (operands[0], QImode, 0);
      operands[1] = adjust_address (operands[1], QImode, 0);
      operands[2] = GEN_INT ((INTVAL (operands[2])) >> 8);
    }
  else
    {
      operands[0] = adjust_address (operands[0], QImode, 1);
      operands[1] = adjust_address (operands[1], QImode, 1);
    }
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:1888 */
rtx
gen_iorqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1895 */
rtx
gen_iorhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1902 */
rtx
gen_iorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1921 */
extern rtx gen_split_341 (rtx, rtx *);
rtx
gen_split_341 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 1929 "../.././gcc/config/h8300/h8300.md"
{
  if (abs (INTVAL (operands[2])) > 0xFF)
    {
      operands[0] = adjust_address (operands[0], QImode, 0);
      operands[1] = adjust_address (operands[1], QImode, 0);
      operands[2] = GEN_INT ((INTVAL (operands[2])) >> 8);
    }
  else
    {
      operands[0] = adjust_address (operands[0], QImode, 1);
      operands[1] = adjust_address (operands[1], QImode, 1);
    }
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:1965 */
rtx
gen_xorqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1972 */
rtx
gen_xorhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:1979 */
rtx
gen_xorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/h8300/h8300.md:2046 */
rtx
gen_negqi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (QImode,
	operand1));
}

/* ../.././gcc/config/h8300/h8300.md:2060 */
rtx
gen_neghi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2064 "../.././gcc/config/h8300/h8300.md"

{
  if (TARGET_H8300)
    {
      emit_insn (gen_neghi2_h8300 (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2073 */
rtx
gen_neghi2_h8300 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2080 "../.././gcc/config/h8300/h8300.md"
operands[2] = gen_reg_rtx (HImode);
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NOT (HImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_PLUS (HImode,
	copy_rtx (operand2),
	const1_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2090 */
rtx
gen_negsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2094 "../.././gcc/config/h8300/h8300.md"

{
  if (TARGET_H8300)
    {
      emit_insn (gen_negsi2_h8300 (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2103 */
rtx
gen_negsi2_h8300 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2110 "../.././gcc/config/h8300/h8300.md"
operands[2] = gen_reg_rtx (SImode);
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NOT (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand2),
	const1_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2120 */
rtx
gen_negsf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1));
}

/* ../.././gcc/config/h8300/h8300.md:2144 */
rtx
gen_abssf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1));
}

/* ../.././gcc/config/h8300/h8300.md:2168 */
rtx
gen_one_cmplqi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (QImode,
	operand1));
}

/* ../.././gcc/config/h8300/h8300.md:2182 */
rtx
gen_one_cmplhi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (HImode,
	operand1));
}

/* ../.././gcc/config/h8300/h8300.md:2203 */
rtx
gen_one_cmplsi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1));
}

/* ../.././gcc/config/h8300/h8300.md:2230 */
rtx
gen_cbranchqi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2236 "../.././gcc/config/h8300/h8300.md"
h8300_expand_branch (operands); DONE;
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2238 */
rtx
gen_cbranchhi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2244 "../.././gcc/config/h8300/h8300.md"

{
  /* Force operand1 into a register if we're compiling
     for the H8/300.  */
  if ((GET_CODE (operands[2]) != REG && operands[2] != const0_rtx)
      && TARGET_H8300)
    operands[2] = force_reg (HImode, operands[2]);
  h8300_expand_branch (operands); DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2254 */
rtx
gen_cbranchsi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2260 "../.././gcc/config/h8300/h8300.md"
h8300_expand_branch (operands); DONE;
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2426 */
rtx
gen_tablejump (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

/* ../.././gcc/config/h8300/h8300.md:2458 */
rtx
gen_indirect_jump (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* ../.././gcc/config/h8300/h8300.md:2541 */
rtx
gen_push_h8300 (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (HImode,
	gen_rtx_PRE_DEC (HImode,
	gen_rtx_REG (HImode,
	7))),
	operand0);
}

/* ../.././gcc/config/h8300/h8300.md:2547 */
rtx
gen_push_h8300hs_advanced (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	operand0);
}

/* ../.././gcc/config/h8300/h8300.md:2553 */
rtx
gen_push_h8300hs_normal (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (HImode,
	gen_rtx_REG (HImode,
	7))),
	operand0);
}

/* ../.././gcc/config/h8300/h8300.md:2559 */
rtx
gen_pop_h8300 (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (HImode,
	gen_rtx_POST_INC (HImode,
	gen_rtx_REG (HImode,
	7))));
}

/* ../.././gcc/config/h8300/h8300.md:2565 */
rtx
gen_pop_h8300hs_advanced (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_POST_INC (SImode,
	gen_rtx_REG (SImode,
	7))));
}

/* ../.././gcc/config/h8300/h8300.md:2571 */
rtx
gen_pop_h8300hs_normal (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_POST_INC (HImode,
	gen_rtx_REG (HImode,
	7))));
}

/* ../.././gcc/config/h8300/h8300.md:2621 */
rtx
gen_return (void)
{
  return ret_rtx;
}

/* ../.././gcc/config/h8300/h8300.md:2640 */
rtx
gen_prologue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 2643 "../.././gcc/config/h8300/h8300.md"
h8300_expand_prologue (); DONE;
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2645 */
rtx
gen_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 2648 "../.././gcc/config/h8300/h8300.md"
h8300_expand_epilogue (); DONE;
  }
  emit_jump_insn (ret_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2669 */
rtx
gen_zero_extendqihi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1));
}

/* ../.././gcc/config/h8300/h8300.md:2699 */
extern rtx gen_split_370 (rtx, rtx *);
rtx
gen_split_370 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2707 "../.././gcc/config/h8300/h8300.md"
operands[2] = gen_rtx_REG (QImode, REGNO (operands[0]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2709 */
rtx
gen_zero_extendqisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2713 "../.././gcc/config/h8300/h8300.md"
{
    if (TARGET_H8300SX)
      operands[1] = force_reg (QImode, operands[1]);
  }
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2733 */
extern rtx gen_split_372 (rtx, rtx *);
rtx
gen_split_372 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 2745 "../.././gcc/config/h8300/h8300.md"
operands[2] = gen_lowpart (QImode, operands[0]);
   operands[3] = gen_lowpart (HImode, operands[0]);
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ZERO_EXTEND (HImode,
	copy_rtx (operand2))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2748 */
extern rtx gen_split_373 (rtx, rtx *);
rtx
gen_split_373 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2758 "../.././gcc/config/h8300/h8300.md"
operands[2] = gen_rtx_REG (QImode, REGNO (operands[0]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand2),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2768 */
rtx
gen_zero_extendhisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* ../.././gcc/config/h8300/h8300.md:2793 */
rtx
gen_extendqihi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1));
}

/* ../.././gcc/config/h8300/h8300.md:2816 */
rtx
gen_extendqisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* ../.././gcc/config/h8300/h8300.md:2835 */
extern rtx gen_split_377 (rtx, rtx *);
rtx
gen_split_377 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2845 "../.././gcc/config/h8300/h8300.md"
operands[2] = gen_rtx_REG (HImode, REGNO (operands[0]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2855 */
rtx
gen_extendhisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* ../.././gcc/config/h8300/h8300.md:2899 */
rtx
gen_ashlqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2904 "../.././gcc/config/h8300/h8300.md"
if (expand_a_shift (QImode, ASHIFT, operands)) DONE;
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2906 */
rtx
gen_ashrqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2911 "../.././gcc/config/h8300/h8300.md"
if (expand_a_shift (QImode, ASHIFTRT, operands)) DONE;
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2913 */
rtx
gen_lshrqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2918 "../.././gcc/config/h8300/h8300.md"
if (expand_a_shift (QImode, LSHIFTRT, operands)) DONE;
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2955 */
rtx
gen_ashlhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2960 "../.././gcc/config/h8300/h8300.md"
if (expand_a_shift (HImode, ASHIFT, operands)) DONE;
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2962 */
rtx
gen_lshrhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2967 "../.././gcc/config/h8300/h8300.md"
if (expand_a_shift (HImode, LSHIFTRT, operands)) DONE;
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:2969 */
rtx
gen_ashrhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2974 "../.././gcc/config/h8300/h8300.md"
if (expand_a_shift (HImode, ASHIFTRT, operands)) DONE;
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3011 */
rtx
gen_ashlsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3016 "../.././gcc/config/h8300/h8300.md"
if (expand_a_shift (SImode, ASHIFT, operands)) DONE;
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3018 */
rtx
gen_lshrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3023 "../.././gcc/config/h8300/h8300.md"
if (expand_a_shift (SImode, LSHIFTRT, operands)) DONE;
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3025 */
rtx
gen_ashrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3030 "../.././gcc/config/h8300/h8300.md"
if (expand_a_shift (SImode, ASHIFTRT, operands)) DONE;
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3068 */
extern rtx gen_split_388 (rtx, rtx *);
rtx
gen_split_388 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 3096 "../.././gcc/config/h8300/h8300.md"
operands[4] = gen_label_rtx ();
   operands[5] = gen_label_rtx ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand1,
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand5),
	pc_rtx)));
  emit (operand4);
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		copy_rtx (operand0),
		const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_PLUS (QImode,
	copy_rtx (operand1),
	constm1_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand1),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	copy_rtx (operand4)),
	pc_rtx)));
  emit (copy_rtx (operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3099 */
extern rtx gen_split_389 (rtx, rtx *);
rtx
gen_split_389 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 3129 "../.././gcc/config/h8300/h8300.md"
operands[4] = gen_label_rtx ();
   operands[5] = gen_label_rtx ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand3),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand5),
	pc_rtx)));
  emit (operand4);
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		copy_rtx (operand0),
		const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_PLUS (QImode,
	copy_rtx (operand3),
	constm1_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand3),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	copy_rtx (operand4)),
	pc_rtx)));
  emit (copy_rtx (operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3136 */
rtx
gen_rotlqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3141 "../.././gcc/config/h8300/h8300.md"
if (expand_a_rotate (operands)) DONE;
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3152 */
rtx
gen_rotlhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3157 "../.././gcc/config/h8300/h8300.md"
if (expand_a_rotate (operands)) DONE;
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3168 */
rtx
gen_rotlsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3173 "../.././gcc/config/h8300/h8300.md"
if (expand_a_rotate (operands)) DONE;
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3279 */
rtx
gen_insv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3285 "../.././gcc/config/h8300/h8300.md"

{
  if (TARGET_H8300SX)
    {
      if (GET_CODE (operands[1]) == CONST_INT
          && GET_CODE (operands[2]) == CONST_INT
          && INTVAL (operands[1]) <= 8
          && INTVAL (operands[2]) >= 0
          && INTVAL (operands[1]) + INTVAL (operands[2]) <= 8
	  && memory_operand (operands[0], GET_MODE (operands[0])))
        {
	  /* If the source operand is zero, it's better to use AND rather
	     than BFST.  Likewise OR if the operand is all ones.  */
	  if (GET_CODE (operands[3]) == CONST_INT)
	    {
	      HOST_WIDE_INT mask = (1 << INTVAL (operands[1])) - 1;
	      if ((INTVAL (operands[3]) & mask) == 0)
		FAIL;
	      if ((INTVAL (operands[3]) & mask) == mask)
		FAIL;
	    }
          if (! bit_memory_operand (operands[0], GET_MODE (operands[0])))
	    {
	      if (!can_create_pseudo_p ())
		FAIL;
	      operands[0] =
	        replace_equiv_address (operands[0],
				       force_reg (Pmode,
						  XEXP (operands[0], 0)));
	    }
	  operands[3] = gen_lowpart (QImode, operands[3]);
	  if (! operands[3])
	    FAIL;
	  if (! register_operand (operands[3], QImode))
	    {
	      if (!can_create_pseudo_p ())
		FAIL;
	      operands[3] = force_reg (QImode, operands[3]);
	    }
	  emit_insn (gen_bfst (adjust_address (operands[0], QImode, 0),
			       operands[3], operands[1], operands[2]));
	  DONE;
        }

      FAIL;
    }

  /* We only have single bit bit-field instructions.  */
  if (INTVAL (operands[1]) != 1)
    FAIL;

  /* For now, we don't allow memory operands.  */
  if (GET_CODE (operands[0]) == MEM
      || GET_CODE (operands[3]) == MEM)
    FAIL;

  if (GET_CODE (operands[3]) != REG)
    operands[3] = force_reg (HImode, operands[3]);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (HImode,
	operand0,
	operand1,
	operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3354 */
rtx
gen_extzv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3360 "../.././gcc/config/h8300/h8300.md"

{
  if (TARGET_H8300SX)
    {
      if (GET_CODE (operands[2]) == CONST_INT
          && GET_CODE (operands[3]) == CONST_INT
          && INTVAL (operands[2]) <= 8
          && INTVAL (operands[3]) >= 0
          && INTVAL (operands[2]) + INTVAL (operands[3]) <= 8
	  && memory_operand (operands[1], QImode))
	{
	  rtx temp;

	  /* Optimize the case where we're extracting into a paradoxical
	     subreg.  It's only necessary to extend to the inner reg.  */
	  if (GET_CODE (operands[0]) == SUBREG
	      && subreg_lowpart_p (operands[0])
	      && (GET_MODE_SIZE (GET_MODE (SUBREG_REG (operands[0])))
		  < GET_MODE_SIZE (GET_MODE (operands[0])))
	      && (GET_MODE_CLASS (GET_MODE (SUBREG_REG (operands[0])))
		  == MODE_INT))
	    operands[0] = SUBREG_REG (operands[0]);

	  if (!can_create_pseudo_p ())
	    temp = gen_lowpart (QImode, operands[0]);
	  else
	    temp = gen_reg_rtx (QImode);
	  if (! temp)
	    FAIL;
          if (! bit_memory_operand (operands[1], QImode))
	    {
	      if (!can_create_pseudo_p ())
		FAIL;
	      operands[1] =
	        replace_equiv_address (operands[1],
				       force_reg (Pmode,
						  XEXP (operands[1], 0)));
	    }
	  emit_insn (gen_bfld (temp, operands[1], operands[2], operands[3]));
	  convert_move (operands[0], temp, 1);
	  DONE;
        }
      FAIL;
    }

  /* We only have single bit bit-field instructions.  */
  if (INTVAL (operands[2]) != 1)
    FAIL;

  /* For now, we don't allow memory operands.  */
  if (GET_CODE (operands[1]) == MEM)
    FAIL;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (HImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3470 */
rtx
gen_cstoreqi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3476 "../.././gcc/config/h8300/h8300.md"
h8300_expand_store (operands); DONE;
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand2,
		operand3)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3478 */
rtx
gen_cstorehi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3484 "../.././gcc/config/h8300/h8300.md"
h8300_expand_store (operands); DONE;
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand2,
		operand3)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3486 */
rtx
gen_cstoresi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3492 "../.././gcc/config/h8300/h8300.md"
h8300_expand_store (operands); DONE;
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand2,
		operand3)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3501 */
extern rtx gen_split_398 (rtx, rtx *);
rtx
gen_split_398 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 3520 "../.././gcc/config/h8300/h8300.md"
operands[5] = gen_rtx_COMPARE (VOIDmode, operands[3], operands[4]);
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand5));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (QImode,
	operand0,
	const1_rtx,
	operand1),
	gen_rtx_fmt_ee (GET_CODE (operand2), QImode,
		cc0_rtx,
		const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3543 */
extern rtx gen_split_399 (rtx, rtx *);
rtx
gen_split_399 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 3562 "../.././gcc/config/h8300/h8300.md"
operands[6] = gen_rtx_COMPARE (VOIDmode, operands[2], operands[3]);
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  operand6 = operands[6];
  (void) operand6;
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand6));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		cc0_rtx,
		const0_rtx),
	gen_rtx_IOR (QImode,
	operand4,
	operand5),
	copy_rtx (operand4))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3579 */
extern rtx gen_split_400 (rtx, rtx *);
rtx
gen_split_400 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 3598 "../.././gcc/config/h8300/h8300.md"
operands[6] = gen_rtx_COMPARE (VOIDmode, operands[2], operands[3]);
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  operand6 = operands[6];
  (void) operand6;
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand6));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		cc0_rtx,
		const0_rtx),
	gen_rtx_AND (QImode,
	operand4,
	operand5),
	copy_rtx (operand4))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3615 */
extern rtx gen_split_401 (rtx, rtx *);
rtx
gen_split_401 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 3638 "../.././gcc/config/h8300/h8300.md"
operands[6] = gen_rtx_COMPARE (VOIDmode, operands[2], operands[3]);
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  operand6 = operands[6];
  (void) operand6;
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand6));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		cc0_rtx,
		const0_rtx),
	gen_rtx_IOR (QImode,
	operand4,
	gen_rtx_ASHIFT (QImode,
	const1_rtx,
	operand5)),
	copy_rtx (operand4))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3656 */
extern rtx gen_split_402 (rtx, rtx *);
rtx
gen_split_402 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 3679 "../.././gcc/config/h8300/h8300.md"
operands[6] = gen_rtx_COMPARE (VOIDmode, operands[2], operands[3]);
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  operand6 = operands[6];
  (void) operand6;
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand6));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		cc0_rtx,
		const0_rtx),
	gen_rtx_AND (QImode,
	operand4,
	gen_rtx_ASHIFT (QImode,
	const1_rtx,
	operand5)),
	copy_rtx (operand4))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3793 */
extern rtx gen_split_403 (rtx, rtx *);
rtx
gen_split_403 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 3809 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (24)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3815 */
extern rtx gen_split_404 (rtx, rtx *);
rtx
gen_split_404 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 3831 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3835 */
extern rtx gen_split_405 (rtx, rtx *);
rtx
gen_split_405 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 3852 "../.././gcc/config/h8300/h8300.md"
operands[5] = gen_rtx_REG (HImode, REGNO (operands[0]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_ASHIFT (HImode,
	copy_rtx (operand5),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	copy_rtx (operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3871 */
extern rtx gen_split_406 (rtx, rtx *);
rtx
gen_split_406 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 3887 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (25)]),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)])));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3909 */
extern rtx gen_split_407 (rtx, rtx *);
rtx
gen_split_407 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 3930 "../.././gcc/config/h8300/h8300.md"
operands[3] = gen_label_rtx ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const1_rtx,
	const0_rtx),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_EQ (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand2),
	const1_rtx)));
  emit (copy_rtx (operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:3932 */
extern rtx gen_split_408 (rtx, rtx *);
rtx
gen_split_408 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 3953 "../.././gcc/config/h8300/h8300.md"
operands[3] = gen_label_rtx ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const1_rtx,
	const0_rtx),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand2),
	const1_rtx)));
  emit (copy_rtx (operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4044 */
extern rtx gen_split_409 (rtx, rtx *);
rtx
gen_split_409 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4054 "../.././gcc/config/h8300/h8300.md"
operands[3] = gen_rtx_MEM (HImode, XEXP (operands[2], 0));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4067 */
extern rtx gen_split_410 (rtx, rtx *);
rtx
gen_split_410 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4083 "../.././gcc/config/h8300/h8300.md"
operands[3] = gen_rtx_REG (HImode, REGNO (operands[0]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IOR (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1),
	gen_rtx_ASHIFT (HImode,
	gen_rtx_SUBREG (HImode,
	operand2,
	0),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4095 */
extern rtx gen_split_411 (rtx, rtx *);
rtx
gen_split_411 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4109 "../.././gcc/config/h8300/h8300.md"
operands[3] = gen_rtx_REG (HImode, REGNO (operands[0]));
   operands[4] = gen_rtx_REG (HImode, REGNO (operands[2]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IOR (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1),
	gen_rtx_ASHIFT (HImode,
	operand4,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4218 */
extern rtx gen_split_412 (rtx, rtx *);
rtx
gen_split_412 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4236 "../.././gcc/config/h8300/h8300.md"
operands[3] = gen_rtx_REG (HImode, REGNO (operands[1]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFT (HImode,
	copy_rtx (operand3),
	const_int_rtx[MAX_SAVED_CONST_INT + (7)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (16)]),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4238 */
extern rtx gen_split_413 (rtx, rtx *);
rtx
gen_split_413 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4258 "../.././gcc/config/h8300/h8300.md"
operands[3] = gen_rtx_REG (HImode, REGNO (operands[2]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFT (HImode,
	copy_rtx (operand3),
	const_int_rtx[MAX_SAVED_CONST_INT + (7)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)]),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4270 */
extern rtx gen_split_414 (rtx, rtx *);
rtx
gen_split_414 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4287 "../.././gcc/config/h8300/h8300.md"
operands[3] = gen_rtx_REG (HImode, REGNO (operands[0]));
   operands[4] = gen_rtx_REG (HImode, REGNO (operands[2]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IOR (HImode,
	gen_rtx_ASHIFT (HImode,
	operand4,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	copy_rtx (operand3))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4290 */
extern rtx gen_split_415 (rtx, rtx *);
rtx
gen_split_415 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4308 "../.././gcc/config/h8300/h8300.md"
operands[3] = gen_rtx_REG (HImode, REGNO (operands[0]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IOR (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1),
	gen_rtx_ASHIFT (HImode,
	gen_rtx_SUBREG (HImode,
	operand2,
	0),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4321 */
extern rtx gen_split_416 (rtx, rtx *);
rtx
gen_split_416 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4339 "../.././gcc/config/h8300/h8300.md"
operands[3] = gen_rtx_REG (HImode, REGNO (operands[1]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFT (HImode,
	copy_rtx (operand3),
	const_int_rtx[MAX_SAVED_CONST_INT + (7)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	GEN_INT (65536L)),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4341 */
extern rtx gen_split_417 (rtx, rtx *);
rtx
gen_split_417 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4361 "../.././gcc/config/h8300/h8300.md"
operands[3] = gen_rtx_REG (HImode, REGNO (operands[2]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFT (HImode,
	copy_rtx (operand3),
	const_int_rtx[MAX_SAVED_CONST_INT + (7)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	copy_rtx (operand2),
	GEN_INT (65536L)),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4365 */
extern rtx gen_split_418 (rtx, rtx *);
rtx
gen_split_418 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4382 "../.././gcc/config/h8300/h8300.md"
operands[2] = gen_rtx_REG (HImode, REGNO (operands[0]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFT (HImode,
	copy_rtx (operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	copy_rtx (operand2))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4426 */
extern rtx gen_split_419 (rtx, rtx *);
rtx
gen_split_419 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 4444 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4446 */
extern rtx gen_split_420 (rtx, rtx *);
rtx
gen_split_420 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 4464 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LT (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4472 */
extern rtx gen_peephole2_421 (rtx, rtx *);
rtx
gen_peephole2_421 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4489 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	copy_rtx (operand0),
	GEN_INT (255L))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (HImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4493 */
extern rtx gen_peephole2_422 (rtx, rtx *);
rtx
gen_peephole2_422 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4510 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	copy_rtx (operand0),
	GEN_INT (255L))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (HImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4514 */
extern rtx gen_peephole2_423 (rtx, rtx *);
rtx
gen_peephole2_423 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4531 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (255L))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4535 */
extern rtx gen_peephole2_424 (rtx, rtx *);
rtx
gen_peephole2_424 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4552 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (255L))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4556 */
extern rtx gen_peephole2_425 (rtx, rtx *);
rtx
gen_peephole2_425 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4573 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (65535L))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4577 */
extern rtx gen_peephole2_426 (rtx, rtx *);
rtx
gen_peephole2_426 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4594 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (65535L))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4599 */
extern rtx gen_peephole2_427 (rtx, rtx *);
rtx
gen_peephole2_427 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 4607 "../.././gcc/config/h8300/h8300.md"
operands[0] = gen_rtx_REG (SImode, REGNO (operands[0]));
  operand0 = operands[0];
  (void) operand0;
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4609 */
extern rtx gen_peephole2_428 (rtx, rtx *);
rtx
gen_peephole2_428 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 4617 "../.././gcc/config/h8300/h8300.md"
operands[0] = gen_rtx_REG (SImode, REGNO (operands[0]));
  operand0 = operands[0];
  (void) operand0;
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (HImode,
	gen_rtx_REG (HImode,
	7))),
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4622 */
extern rtx gen_peephole2_429 (rtx, rtx *);
rtx
gen_peephole2_429 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 4630 "../.././gcc/config/h8300/h8300.md"
operands[0] = gen_rtx_REG (SImode, REGNO (operands[0]));
  operand0 = operands[0];
  (void) operand0;
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4632 */
extern rtx gen_peephole2_430 (rtx, rtx *);
rtx
gen_peephole2_430 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 4640 "../.././gcc/config/h8300/h8300.md"
operands[0] = gen_rtx_REG (SImode, REGNO (operands[0]));
  operand0 = operands[0];
  (void) operand0;
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (HImode,
	gen_rtx_REG (HImode,
	7))),
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4644 */
extern rtx gen_peephole2_431 (rtx, rtx *);
rtx
gen_peephole2_431 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4670 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-4)])),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-12)])),
	operand2),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-16)])),
	operand3),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-16)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4672 */
extern rtx gen_peephole2_432 (rtx, rtx *);
rtx
gen_peephole2_432 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4698 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-4)])),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-12)])),
	operand2),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-16)])),
	operand3),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	7),
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-16)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4702 */
extern rtx gen_peephole2_433 (rtx, rtx *);
rtx
gen_peephole2_433 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4723 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-4)])),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-12)])),
	operand2),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-12)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4725 */
extern rtx gen_peephole2_434 (rtx, rtx *);
rtx
gen_peephole2_434 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4746 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-4)])),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-12)])),
	operand2),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	7),
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-12)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4750 */
extern rtx gen_peephole2_435 (rtx, rtx *);
rtx
gen_peephole2_435 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 4766 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-4)])),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4768 */
extern rtx gen_peephole2_436 (rtx, rtx *);
rtx
gen_peephole2_436 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 4784 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-4)])),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	7),
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4796 */
extern rtx gen_peephole2_437 (rtx, rtx *);
rtx
gen_peephole2_437 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4812 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (HImode,
	copy_rtx (operand0),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4825 */
extern rtx gen_peephole2_438 (rtx, rtx *);
rtx
gen_peephole2_438 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4841 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4854 */
extern rtx gen_peephole2_439 (rtx, rtx *);
rtx
gen_peephole2_439 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4874 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4887 */
extern rtx gen_peephole2_440 (rtx, rtx *);
rtx
gen_peephole2_440 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4909 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		operand1),
	0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand0),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4913 */
extern rtx gen_peephole2_441 (rtx, rtx *);
rtx
gen_peephole2_441 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4935 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		operand1),
	0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand0),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4937 */
extern rtx gen_peephole2_442 (rtx, rtx *);
rtx
gen_peephole2_442 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4956 "../.././gcc/config/h8300/h8300.md"
operands[3] = ((GET_CODE (operands[1]) == EQ)
		  ? gen_rtx_GE (VOIDmode, cc0_rtx, const0_rtx)
		  : gen_rtx_LT (VOIDmode, cc0_rtx, const0_rtx));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4971 */
extern rtx gen_peephole2_443 (rtx, rtx *);
rtx
gen_peephole2_443 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4984 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:4986 */
extern rtx gen_peephole2_444 (rtx, rtx *);
rtx
gen_peephole2_444 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 5000 "../.././gcc/config/h8300/h8300.md"
operands[2] = gen_lowpart (QImode, operands[0]);
   operands[3] = gen_lowpart (QImode, operands[1]);
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5003 */
extern rtx gen_peephole2_445 (rtx, rtx *);
rtx
gen_peephole2_445 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 5029 "../.././gcc/config/h8300/h8300.md"
operands[4] = gen_lowpart (QImode, operands[0]);
   operands[5] = gen_lowpart (QImode, operands[1]);
   operands[6] = GEN_INT (~0xff | INTVAL (operands[3]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  operand6 = operands[6];
  (void) operand6;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand4),
	operand5));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	operand6)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5033 */
extern rtx gen_peephole2_446 (rtx, rtx *);
rtx
gen_peephole2_446 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 5048 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5053 */
extern rtx gen_peephole2_447 (rtx, rtx *);
rtx
gen_peephole2_447 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5069 "../.././gcc/config/h8300/h8300.md"
operands[3] = gen_lowpart (HImode, operands[0]);
   operands[4] = gen_lowpart (HImode, operands[1]);
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5074 */
extern rtx gen_peephole2_448 (rtx, rtx *);
rtx
gen_peephole2_448 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "r", QImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 5084 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand1),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5086 */
extern rtx gen_peephole2_449 (rtx, rtx *);
rtx
gen_peephole2_449 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 5096 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand1),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5098 */
extern rtx gen_peephole2_450 (rtx, rtx *);
rtx
gen_peephole2_450 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 5108 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand1),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5142 */
extern rtx gen_peephole2_451 (rtx, rtx *);
rtx
gen_peephole2_451 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5164 "../.././gcc/config/h8300/h8300.md"
operands[4] = GEN_INT (- INTVAL (operands[1]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		operand4),
	0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand0),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5176 */
extern rtx gen_peephole2_452 (rtx, rtx *);
rtx
gen_peephole2_452 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5199 "../.././gcc/config/h8300/h8300.md"
operands[4] = GEN_INT (exact_log2 (INTVAL (operands[1]) + 1));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (HImode,
	copy_rtx (operand0),
	operand4)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand0),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand2,
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5211 */
extern rtx gen_peephole2_453 (rtx, rtx *);
rtx
gen_peephole2_453 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 5234 "../.././gcc/config/h8300/h8300.md"
{
  operands[4] = GEN_INT (exact_log2 (INTVAL (operands[1]) + 1));
  operands[5] = gen_rtx_fmt_ee (GET_CODE (operands[2]) == GTU ? NE : EQ,
				VOIDmode,
				cc0_rtx,
				const0_rtx);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (HImode,
	copy_rtx (operand0),
	operand4)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand0),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand5,
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5252 */
extern rtx gen_peephole2_454 (rtx, rtx *);
rtx
gen_peephole2_454 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 5269 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_AND (HImode,
	operand0,
	GEN_INT (-256L)),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5281 */
extern rtx gen_peephole2_455 (rtx, rtx *);
rtx
gen_peephole2_455 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 5298 "../.././gcc/config/h8300/h8300.md"
{
  operands[3] = gen_rtx_fmt_ee (GET_CODE (operands[1]) == GTU ? NE : EQ,
				VOIDmode,
				cc0_rtx,
				const0_rtx);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_AND (HImode,
	operand0,
	GEN_INT (-256L)),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand3,
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5377 */
extern rtx gen_peephole2_456 (rtx, rtx *);
rtx
gen_peephole2_456 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5399 "../.././gcc/config/h8300/h8300.md"
operands[4] = GEN_INT (- INTVAL (operands[1]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		operand4),
	0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand0),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5411 */
extern rtx gen_peephole2_457 (rtx, rtx *);
rtx
gen_peephole2_457 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5435 "../.././gcc/config/h8300/h8300.md"
operands[4] = GEN_INT (- INTVAL (operands[1]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand0),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5448 */
extern rtx gen_peephole2_458 (rtx, rtx *);
rtx
gen_peephole2_458 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 5474 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand0),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5487 */
extern rtx gen_peephole2_459 (rtx, rtx *);
rtx
gen_peephole2_459 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5513 "../.././gcc/config/h8300/h8300.md"
operands[4] = GEN_INT (INTVAL (operands[1]) ^ -1);
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	copy_rtx (operand0),
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_NOT (SImode,
	copy_rtx (operand0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand0),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5526 */
extern rtx gen_peephole2_460 (rtx, rtx *);
rtx
gen_peephole2_460 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5552 "../.././gcc/config/h8300/h8300.md"
operands[4] = GEN_INT (INTVAL (operands[1]) == -2147483647 - 1 ? 1 : 2);
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (SImode,
	copy_rtx (operand0),
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		constm1_rtx),
	0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand0),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5568 */
extern rtx gen_peephole2_461 (rtx, rtx *);
rtx
gen_peephole2_461 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[4] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 5595 "../.././gcc/config/h8300/h8300.md"
operands[5] = GEN_INT (exact_log2 (INTVAL (operands[1]) + 1));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand4),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand4),
	operand5)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand4),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand2,
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5611 */
extern rtx gen_peephole2_462 (rtx, rtx *);
rtx
gen_peephole2_462 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[4] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 5638 "../.././gcc/config/h8300/h8300.md"
{
  operands[5] = GEN_INT (exact_log2 (INTVAL (operands[1]) + 1));
  operands[6] = gen_rtx_fmt_ee (GET_CODE (operands[2]) == GTU ? NE : EQ,
				VOIDmode,
				cc0_rtx,
				const0_rtx);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  operand6 = operands[6];
  (void) operand6;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand4),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand4),
	operand5)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand4),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand6,
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5656 */
extern rtx gen_peephole2_463 (rtx, rtx *);
rtx
gen_peephole2_463 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5679 "../.././gcc/config/h8300/h8300.md"
operands[4] = GEN_INT (exact_log2 (INTVAL (operands[1]) + 1));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	operand4)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand0),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand2,
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5691 */
extern rtx gen_peephole2_464 (rtx, rtx *);
rtx
gen_peephole2_464 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 5714 "../.././gcc/config/h8300/h8300.md"
{
  operands[4] = GEN_INT (exact_log2 (INTVAL (operands[1]) + 1));
  operands[5] = gen_rtx_fmt_ee (GET_CODE (operands[2]) == GTU ? NE : EQ,
				VOIDmode,
				cc0_rtx,
				const0_rtx);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	operand4)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand0),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand5,
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5733 */
extern rtx gen_peephole2_465 (rtx, rtx *);
rtx
gen_peephole2_465 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5760 "../.././gcc/config/h8300/h8300.md"
operands[4] = GEN_INT (~INTVAL (operands[1]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand0),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand2,
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5773 */
extern rtx gen_peephole2_466 (rtx, rtx *);
rtx
gen_peephole2_466 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 5800 "../.././gcc/config/h8300/h8300.md"
{
  operands[4] = GEN_INT (~INTVAL (operands[1]));
  operands[5] = gen_rtx_fmt_ee (GET_CODE (operands[2]) == GTU ? NE : EQ,
				VOIDmode,
				cc0_rtx,
				const0_rtx);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand0),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand5,
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5818 */
extern rtx gen_peephole2_467 (rtx, rtx *);
rtx
gen_peephole2_467 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 5835 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_AND (SImode,
	operand0,
	GEN_INT (-65536L)),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5847 */
extern rtx gen_peephole2_468 (rtx, rtx *);
rtx
gen_peephole2_468 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 5864 "../.././gcc/config/h8300/h8300.md"
{
  operands[3] = gen_rtx_fmt_ee (GET_CODE (operands[1]) == GTU ? NE : EQ,
				VOIDmode,
				cc0_rtx,
				const0_rtx);
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_AND (SImode,
	operand0,
	GEN_INT (-65536L)),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand3,
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5885 */
extern rtx gen_peephole2_469 (rtx, rtx *);
rtx
gen_peephole2_469 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[4] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 5911 "../.././gcc/config/h8300/h8300.md"
operands[5] = GEN_INT (- INTVAL (operands[1]));
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand4),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		copy_rtx (operand4),
		operand5),
	0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand4),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5915 */
extern rtx gen_peephole2_470 (rtx, rtx *);
rtx
gen_peephole2_470 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 5936 "../.././gcc/config/h8300/h8300.md"
operands[4] = gen_rtx_REG (QImode, REGNO (operands[0]));
   operands[5] = gen_int_mode (INTVAL (operands[1]), QImode);
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_AND (QImode,
	copy_rtx (operand4),
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand4),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5939 */
extern rtx gen_peephole2_471 (rtx, rtx *);
rtx
gen_peephole2_471 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 5960 "../.././gcc/config/h8300/h8300.md"
operands[4] = gen_rtx_REG (QImode, REGNO (operands[0]));
   operands[5] = gen_int_mode (INTVAL (operands[1]), QImode);
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_AND (QImode,
	copy_rtx (operand4),
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand4),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5963 */
extern rtx gen_peephole2_472 (rtx, rtx *);
rtx
gen_peephole2_472 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 5984 "../.././gcc/config/h8300/h8300.md"
operands[4] = gen_rtx_REG (HImode, REGNO (operands[0]));
   operands[5] = gen_int_mode (INTVAL (operands[1]), HImode);
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_AND (HImode,
	copy_rtx (operand4),
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand4),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:5987 */
extern rtx gen_peephole2_473 (rtx, rtx *);
rtx
gen_peephole2_473 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
#line 6015 "../.././gcc/config/h8300/h8300.md"
operands[5] = gen_rtx_REG (QImode, REGNO (operands[0]));
   operands[6] = gen_int_mode (INTVAL (operands[1]), QImode);
   operands[7] = gen_int_mode (INTVAL (operands[2]), QImode);
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  operand6 = operands[6];
  (void) operand6;
  operand7 = operands[7];
  (void) operand7;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_AND (QImode,
	copy_rtx (operand5),
	operand6)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand5),
	gen_rtx_XOR (QImode,
	copy_rtx (operand5),
	operand7)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	copy_rtx (operand5),
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), GET_MODE (operand4),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:6027 */
extern rtx gen_peephole2_474 (rtx, rtx *);
rtx
gen_peephole2_474 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 6037 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:6044 */
extern rtx gen_peephole2_475 (rtx, rtx *);
rtx
gen_peephole2_475 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 6060 "../.././gcc/config/h8300/h8300.md"

  operand0 = operands[0];
  (void) operand0;
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-4)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-4)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:6134 */
extern rtx gen_peephole2_476 (rtx, rtx *);
rtx
gen_peephole2_476 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 6148 "../.././gcc/config/h8300/h8300.md"
{
    operands[4] = shallow_copy_rtx (operands[2]);
    XEXP (operands[4], 0) = operands[1];
  }
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:6163 */
extern rtx gen_peephole2_477 (rtx, rtx *);
rtx
gen_peephole2_477 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:6178 */
extern rtx gen_peephole2_478 (rtx, rtx *);
rtx
gen_peephole2_478 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand2,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/h8300/h8300.md:6192 */
extern rtx gen_peephole2_479 (rtx, rtx *);
rtx
gen_peephole2_479 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 291:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode));
      break;

    case 301:
    case 300:
    case 296:
    case 292:
    case 262:
    case 110:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 265:
    case 228:
    case 225:
    case 222:
    case 112:
    case 108:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode));
      break;

    default:
      gcc_unreachable ();
    }
}


int
added_clobbers_hard_reg_p (int insn_code_number)
{
  switch (insn_code_number)
    {
    case 291:
    case 301:
    case 300:
    case 296:
    case 292:
    case 262:
    case 110:
    case 265:
    case 228:
    case 225:
    case 222:
    case 112:
    case 108:
      return 0;

    default:
      gcc_unreachable ();
    }
}
