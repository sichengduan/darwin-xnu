 * Copyright (c) 2003-2004 Apple Computer, Inc. All rights reserved.
#include <sys/vnode_internal.h>
#include <sys/ipc.h>
#include <kern/kalloc.h>
static void audit_sys_auditon(struct audit_record *ar, struct au_record *rec);

	bsm_audit_mutex = mutex_alloc(0);
			kfree(rec, sizeof(*rec));
int
kau_close(struct au_record *rec, struct timespec *ctime, short event)

	return(retval);
		kfree(tok, sizeof(*tok) + tok->len);

static void
	case A_SETPOLICY:
	case A_SETKMASK:
	case A_SETQCTRL:
	case A_SETUMASK:
	case A_SETSMASK:
	case A_SETCOND:
	case A_SETCLASS:
	case A_SETPMASK:
	case A_SETFSIZE:
	case AUE_LCHOWN:

		tok = au_to_arg32(1, "addr", (u_int32_t)ar->ar_arg_addr); /* LP64todo */
		tok = au_to_arg32(2, "len", ar->ar_arg_len); /* LP64todo */
		tok = au_to_arg32(3, "addr", (u_int32_t)ar->ar_arg_addr); /* LP64todo */
				tok = au_to_arg32(1, "setgroups", ar->ar_arg_groups.gidset[ctr]);
bsm_rec_verify(void* rec)