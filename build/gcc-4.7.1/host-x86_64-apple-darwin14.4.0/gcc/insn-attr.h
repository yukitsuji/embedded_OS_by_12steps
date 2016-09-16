/* Generated automatically by the program `genattr'
   from the machine description file `md'.  */

#ifndef GCC_INSN_ATTR_H
#define GCC_INSN_ATTR_H

#include "insn-attr-common.h"

#define HAVE_ATTR_alternative
#define get_attr_alternative(insn) which_alternative
#define HAVE_ATTR_cpu
extern enum attr_cpu get_attr_cpu (void);

#define HAVE_ATTR_type
extern enum attr_type get_attr_type (rtx);

#define HAVE_ATTR_length_table
extern enum attr_length_table get_attr_length_table (rtx);

#define HAVE_ATTR_length
extern int get_attr_length (rtx);
extern void shorten_branches (rtx);
extern int insn_default_length (rtx);
extern int insn_min_length (rtx);
extern int insn_variable_length_p (rtx);
extern int insn_current_length (rtx);

#include "insn-addr.h"

#define HAVE_ATTR_cc
extern enum attr_cc get_attr_cc (rtx);

#define HAVE_ATTR_delay_slot
extern enum attr_delay_slot get_attr_delay_slot (rtx);

#define HAVE_ATTR_can_delay
extern enum attr_can_delay get_attr_can_delay (rtx);

extern int num_delay_slots (rtx);
extern int eligible_for_delay (rtx, int, rtx, int);

extern int const_num_delay_slots (rtx);

typedef void *state_t;


#define ATTR_FLAG_forward	0x1
#define ATTR_FLAG_backward	0x2
#define ATTR_FLAG_likely	0x4
#define ATTR_FLAG_very_likely	0x8
#define ATTR_FLAG_unlikely	0x10
#define ATTR_FLAG_very_unlikely	0x20

#endif /* GCC_INSN_ATTR_H */
