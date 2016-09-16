/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../.././gcc/config/h8300/h8300.md'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef HAVE_MACHINE_MODES
extern int general_operand (rtx, enum machine_mode);
extern int address_operand (rtx, enum machine_mode);
extern int register_operand (rtx, enum machine_mode);
extern int pmode_register_operand (rtx, enum machine_mode);
extern int scratch_operand (rtx, enum machine_mode);
extern int immediate_operand (rtx, enum machine_mode);
extern int const_int_operand (rtx, enum machine_mode);
extern int const_double_operand (rtx, enum machine_mode);
extern int nonimmediate_operand (rtx, enum machine_mode);
extern int nonmemory_operand (rtx, enum machine_mode);
extern int push_operand (rtx, enum machine_mode);
extern int pop_operand (rtx, enum machine_mode);
extern int memory_operand (rtx, enum machine_mode);
extern int indirect_operand (rtx, enum machine_mode);
extern int ordered_comparison_operator (rtx, enum machine_mode);
extern int comparison_operator (rtx, enum machine_mode);
extern int general_operand_src (rtx, enum machine_mode);
extern int general_operand_dst (rtx, enum machine_mode);
extern int h8300_src_operand (rtx, enum machine_mode);
extern int h8300_dst_operand (rtx, enum machine_mode);
extern int nibble_operand (rtx, enum machine_mode);
extern int reg_or_nibble_operand (rtx, enum machine_mode);
extern int h8sx_unary_shift_operator (rtx, enum machine_mode);
extern int h8sx_binary_shift_operator (rtx, enum machine_mode);
extern int h8sx_binary_memory_operator (rtx, enum machine_mode);
extern int h8sx_unary_memory_operator (rtx, enum machine_mode);
extern int h8300_ldm_parallel (rtx, enum machine_mode);
extern int h8300_stm_parallel (rtx, enum machine_mode);
extern int h8300_return_parallel (rtx, enum machine_mode);
extern int single_one_operand (rtx, enum machine_mode);
extern int single_zero_operand (rtx, enum machine_mode);
extern int call_insn_operand (rtx, enum machine_mode);
extern int small_call_insn_operand (rtx, enum machine_mode);
extern int jump_address_operand (rtx, enum machine_mode);
extern int two_insn_adds_subs_operand (rtx, enum machine_mode);
extern int bit_operand (rtx, enum machine_mode);
extern int bit_memory_operand (rtx, enum machine_mode);
extern int bit_register_indirect_operand (rtx, enum machine_mode);
extern int stack_pointer_operand (rtx, enum machine_mode);
extern int register_no_sp_elim_operand (rtx, enum machine_mode);
extern int const_int_gt_2_operand (rtx, enum machine_mode);
extern int const_int_ge_8_operand (rtx, enum machine_mode);
extern int const_int_qi_operand (rtx, enum machine_mode);
extern int const_int_hi_operand (rtx, enum machine_mode);
extern int incdec_operand (rtx, enum machine_mode);
extern int bit_operator (rtx, enum machine_mode);
extern int nshift_operator (rtx, enum machine_mode);
extern int eqne_operator (rtx, enum machine_mode);
extern int gtle_operator (rtx, enum machine_mode);
extern int gtuleu_operator (rtx, enum machine_mode);
extern int iorxor_operator (rtx, enum machine_mode);
#endif /* HAVE_MACHINE_MODES */

#define CONSTRAINT_NUM_DEFINED_P 1
enum constraint_num
{
  CONSTRAINT__UNKNOWN = 0,
  CONSTRAINT_a,
  CONSTRAINT_c,
  CONSTRAINT_d,
  CONSTRAINT_D,
  CONSTRAINT_f,
  CONSTRAINT_I,
  CONSTRAINT_J,
  CONSTRAINT_L,
  CONSTRAINT_M,
  CONSTRAINT_N,
  CONSTRAINT_O,
  CONSTRAINT_P1_gX,
  CONSTRAINT_P3_gX,
  CONSTRAINT_P4_gX,
  CONSTRAINT_P5_gX,
  CONSTRAINT_P8_gX,
  CONSTRAINT_P3_lX,
  CONSTRAINT_G,
  CONSTRAINT_Q,
  CONSTRAINT_R,
  CONSTRAINT_S,
  CONSTRAINT_T,
  CONSTRAINT_U,
  CONSTRAINT_WU,
  CONSTRAINT_Y0,
  CONSTRAINT_Y2,
  CONSTRAINT_Z,
  CONSTRAINT__LIMIT
};

extern enum constraint_num lookup_constraint (const char *);
extern bool constraint_satisfied_p (rtx, enum constraint_num);

static inline size_t
insn_constraint_len (char fc, const char *str ATTRIBUTE_UNUSED)
{
  switch (fc)
    {
    case 'P': return 4;
    case 'W': return 2;
    case 'Y': return 2;
    default: break;
    }
  return 1;
}

#define CONSTRAINT_LEN(c_,s_) insn_constraint_len (c_,s_)

extern enum reg_class regclass_for_constraint (enum constraint_num);
#define REG_CLASS_FROM_CONSTRAINT(c_,s_) \
    regclass_for_constraint (lookup_constraint (s_))
#define REG_CLASS_FOR_CONSTRAINT(x_) \
    regclass_for_constraint (x_)

extern bool insn_const_int_ok_for_constraint (HOST_WIDE_INT, enum constraint_num);
#define CONST_OK_FOR_CONSTRAINT_P(v_,c_,s_) \
    insn_const_int_ok_for_constraint (v_, lookup_constraint (s_))

#define CONST_DOUBLE_OK_FOR_CONSTRAINT_P(v_,c_,s_) \
    constraint_satisfied_p (v_, lookup_constraint (s_))

#define EXTRA_CONSTRAINT_STR(v_,c_,s_) \
    constraint_satisfied_p (v_, lookup_constraint (s_))

extern bool insn_extra_memory_constraint (enum constraint_num);
#define EXTRA_MEMORY_CONSTRAINT(c_,s_) insn_extra_memory_constraint (lookup_constraint (s_))

#define EXTRA_ADDRESS_CONSTRAINT(c_,s_) false

#endif /* tm-preds.h */
