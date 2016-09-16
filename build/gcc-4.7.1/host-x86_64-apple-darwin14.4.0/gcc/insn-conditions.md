(define_conditions [
  (-1 "TARGET_H8300SX
   && (GET_MODE (operands[3]) == GET_MODE (operands[4])
       || GET_CODE (operands[4]) == CONST_INT)
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) <= 4")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) < 16")
  (-1 "((TARGET_H8300H || TARGET_H8300S)) && ( reload_completed)")
  (-1 "TARGET_H8300 || TARGET_H8300SX")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && !MEM_VOLATILE_P (operands[1])
   && offsettable_memref_p (operands[1])
   && (INTVAL (operands[2]) & ~0xffff) == 0
   && INTVAL (operands[2]) != 255")
  (-1 "TARGET_H8300H")
  (-1 "TARGET_H8300
   && INTVAL (operands[2]) < 16
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == -2147483647 - 1
       || (TARGET_H8300S && INTVAL (operands[1]) == 1073741824))")
  (-1 "(INTVAL (operands[3]) & 0xffff) != 0")
  (-1 "((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) >= 16) && ( reload_completed)")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && epilogue_completed
   && !(find_regno_note (insn, REG_DEAD, REGNO (operands[1]))
        && REGNO (operands[0]) != REGNO (operands[1]))")
  (-1 "TARGET_H8300S && TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[3])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && REGNO (operands[2]) == REGNO (operands[0]) + 2
       && REGNO (operands[3]) == REGNO (operands[0]) + 3
       && (TARGET_H8300SX || REGNO (operands[0]) == 0))")
  (-1 "TARGET_H8300SX || register_operand (operands[0], QImode)
   || single_one_operand (operands[2], QImode)")
  (-1 "(TARGET_H8300H || TARGET_H8300S) && h8300_operands_match_p (operands)")
  (-1 "TARGET_H8300H || TARGET_H8300S")
  (-1 "TARGET_H8300S && TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[1])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && (TARGET_H8300SX || (REGNO (operands[0]) & 1) == 0))")
  (-1 "(TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX")
  (-1 "(TARGET_H8300H || TARGET_H8300S) && (Pmode == HImode)")
  (-1 "INTVAL (operands[3]) == (255 >> INTVAL (operands[1]))")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((INTVAL (operands[1]) | 0x00ff) == -1
	|| (INTVAL (operands[1]) | 0xff00) == -1)
   && INTVAL (operands[1]) != -1
   && INTVAL (operands[1]) != -2")
  (-1 "((TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX) && ( reload_completed)")
  (-1 "TARGET_H8300SX && TARGET_NORMAL_MODE")
  (-1 "TARGET_H8300H && TARGET_H8300S && TARGET_NORMAL_MODE")
  (-1 "TARGET_H8300SX && reload_completed")
  (-1 "TARGET_H8300SX")
  (-1 "(TARGET_H8300H || TARGET_H8300S)")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) != REGNO (operands[1])
   && !satisfies_constraint_L (operands[2])
   && !satisfies_constraint_N (operands[2])
   && ((INTVAL (operands[2]) & 0xff) == INTVAL (operands[2])
       || (INTVAL (operands[2]) & 0xff00) == INTVAL (operands[2])
       || INTVAL (operands[2]) == 0xffff
       || INTVAL (operands[2]) == 0xfffe)")
  (-1 "(TARGET_H8300H || TARGET_H8300S) && !TARGET_NORMAL_MODE
   && REGNO (operands[0]) != SP_REG")
  (-1 "TARGET_H8300SX
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[3])
   && h8sx_mergeable_memrefs_p (operands[3], operands[1])")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) >= 16")
  (-1 "(TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX
   && reg_overlap_mentioned_p (operands[0], operands[1])
   && reload_completed")
  (-1 "epilogue_completed
   && !find_regno_note (insn, REG_DEAD, REGNO (operands[1]))")
  (-1 "epilogue_completed
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1]))")
  (-1 "(TARGET_H8300S || TARGET_H8300H) && !TARGET_H8300SX
   && h8300_move_ok (operands[0], operands[1])")
  (-1 "(TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX
   && h8300_move_ok (operands[0], operands[1])")
  (-1 "(TARGET_H8300S || TARGET_H8300H) && h8300_operands_match_p (operands)")
  (-1 "h8300_operands_match_p (operands)")
  (-1 "((TARGET_H8300H || TARGET_H8300S)) && ( reload_completed
   && !satisfies_constraint_U (operands[0]))")
  (-1 "TARGET_H8300S && TARGET_NORMAL_MODE && REGNO (operands[0]) != SP_REG")
  (-1 "TARGET_H8300 && epilogue_completed")
  (-1 "(TARGET_H8300 || TARGET_H8300SX)
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])")
  (-1 "TARGET_H8300SX && !TARGET_NORMAL_MODE")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((TARGET_H8300H && INTVAL (operands[1]) == 3)
       || INTVAL (operands[1]) == 7
       || INTVAL (operands[1]) == 15
       || INTVAL (operands[1]) == 31
       || INTVAL (operands[1]) == 63
       || INTVAL (operands[1]) == 127
       || INTVAL (operands[1]) == 255)")
  (-1 "(TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && reload_completed")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && exact_log2 (INTVAL (operands[3])) < 16
   && INTVAL (operands[2]) + exact_log2 (INTVAL (operands[3])) == 31")
  (-1 "TARGET_H8300H && TARGET_H8300S && !TARGET_NORMAL_MODE")
  (-1 "TARGET_H8300SX
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[2])")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) < 16")
  (-1 "TARGET_H8300SX && !TARGET_NORMAL_MODE
   && reload_completed
   && REGNO (operands[4]) != DESTINATION_REG")
  (-1 "TARGET_H8300
   && h8300_move_ok (operands[0], operands[1])")
  (-1 "TARGET_H8300SX && TARGET_NORMAL_MODE
   && reload_completed
   && REGNO (operands[2]) != DESTINATION_REG")
  (-1 "register_operand (operands[0], QImode)
   || single_zero_operand (operands[2], QImode)")
  (-1 "(TARGET_H8300H || TARGET_H8300S) && TARGET_NORMAL_MODE")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && epilogue_completed
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])")
  (-1 "TARGET_H8300SX
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && operands[2] != const0_rtx")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && ((INTVAL (operands[3]) << INTVAL (operands[2])) & ~0xffff) == 0")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) != 0
   && !peep2_reg_dead_p (1, operands[0])
   && !same_cmp_following_p (insn)")
  (-1 "((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) <= 15
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff)) && ( reload_completed)")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) < 16
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[0], operands[1])")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[2], operands[1])
   && REGNO (operands[0]) == REGNO (operands[2])")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((INTVAL (operands[1]) & 0x00ff) == INTVAL (operands[1])
       || (INTVAL (operands[1]) & 0xff00) == INTVAL (operands[1])
       || INTVAL (operands[1]) == 0x0000ffff)
   && INTVAL (operands[1]) != 0
   && INTVAL (operands[1]) != 1
   && INTVAL (operands[1]) != 2")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && reload_completed
   && byte_accesses_mergeable_p (XEXP (operands[2], 0), XEXP (operands[1], 0))")
  (-1 "TARGET_H8300SX && !TARGET_NORMAL_MODE
   && reload_completed
   && REGNO (operands[2]) != DESTINATION_REG")
  (-1 "TARGET_H8300
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode))")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && REG_P (operands[0]) && REG_P (operands[2])
   && REGNO (operands[0]) != REGNO (operands[2])
   && (satisfies_constraint_L (operands[1])
       || satisfies_constraint_N (operands[1]))")
  (-1 "h8300_can_use_return_insn_p ()")
  (-1 "(TARGET_H8300H || TARGET_H8300S) && !TARGET_H8300SX
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode))")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && !peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == 1
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))
   && !same_cmp_preceding_p (insn)")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !(GET_CODE (operands[1]) == MEM && !offsettable_memref_p (operands[1]))
   && !(GET_CODE (operands[1]) == MEM && MEM_VOLATILE_P (operands[1]))")
  (-1 "INTVAL (operands[3]) == (65535 << INTVAL (operands[1]))")
  (-1 "TARGET_H8300S && !TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[3])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && REGNO (operands[2]) == REGNO (operands[0]) + 2
       && REGNO (operands[3]) == REGNO (operands[0]) + 3
       && (TARGET_H8300SX || REGNO (operands[0]) == 0))")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) <= 15
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff)")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) <= 15")
  (-1 "TARGET_H8300S && TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[2])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && REGNO (operands[2]) == REGNO (operands[0]) + 2
       && (TARGET_H8300SX || (REGNO (operands[0]) & 3) == 0))")
  (-1 "TARGET_H8300SX && TARGET_NORMAL_MODE
   && reload_completed
   && REGNO (operands[4]) != DESTINATION_REG")
  (-1 "TARGET_H8300SX && INTVAL (operands[2]) + INTVAL (operands[3]) <= 8")
  (-1 "peep2_reg_dead_p (2, operands[0])")
  (0 "0 /* Disable because it breaks compiling fp-bit.c.  */
   && TARGET_H8300SX
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[4])
   && h8sx_mergeable_memrefs_p (operands[4], operands[1])")
  (-1 "INTVAL (operands[3]) == (65535 >> INTVAL (operands[1]))")
  (-1 "TARGET_H8300SX && h8300_operands_match_p (operands)")
  (-1 "TARGET_H8300S")
  (-1 "(TARGET_H8300H || TARGET_H8300S) && (Pmode == SImode)")
  (-1 "TARGET_MAC")
  (0 "0 /* Disable because it breaks compiling fp-bit.c.  */
   && TARGET_H8300SX
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[4])")
  (-1 "INTVAL (operands[3]) == (255 << INTVAL (operands[1]))")
  (-1 "TARGET_H8300
   && INTVAL (operands[2]) < 16")
  (-1 "TARGET_H8300SXMUL")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == -131072
       || INTVAL (operands[1]) == -65536
       || INTVAL (operands[1]) == 65536
       || INTVAL (operands[1]) == 131072)")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == 1
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))")
  (-1 "(TARGET_H8300H || TARGET_H8300S) && !TARGET_NORMAL_MODE")
  (-1 "peep2_reg_dead_p (3, operands[0])
   && (~INTVAL (operands[1]) & INTVAL (operands[2])) == 0")
  (-1 "TARGET_H8300SX
   && rtx_equal_p(operands[0], operands[1])")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) != 0
   && peep2_reg_dead_p (1, operands[0])")
  (-1 "TARGET_H8300")
  (-1 "TARGET_H8300S && !TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[2])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && REGNO (operands[2]) == REGNO (operands[0]) + 2
       && (TARGET_H8300SX || (REGNO (operands[0]) & 3) == 0))")
  (-1 "TARGET_H8300S && !TARGET_NORMAL_MODE && REGNO (operands[0]) != SP_REG")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
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
	&& MEM_VOLATILE_P (operands[1]))")
  (-1 "REG_P (operands[0]) && REG_P (operands[2])
   && REGNO (operands[0]) != REGNO (operands[2])
   && (satisfies_constraint_J (operands[1])
       || satisfies_constraint_L (operands[1])
       || satisfies_constraint_N (operands[1]))")
  (-1 "reload_completed")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && (INTVAL (operands[3]) & ~0xffff) == 0")
  (-1 "TARGET_H8300S && !TARGET_NORMAL_MODE
   && (REGNO_REG_CLASS (REGNO (operands[1])) == GENERAL_REGS
       && REGNO (operands[1]) == REGNO (operands[0]) + 1
       && (TARGET_H8300SX || (REGNO (operands[0]) & 1) == 0))")
  (-1 "(TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) < 16
   && INTVAL (operands[3]) < 16")
])
