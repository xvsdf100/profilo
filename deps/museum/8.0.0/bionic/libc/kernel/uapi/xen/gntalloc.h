/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_PUBLIC_GNTALLOC_H__
#define __LINUX_PUBLIC_GNTALLOC_H__
#include <museum/8.0.0/bionic/libc/linux/types.h>
#define IOCTL_GNTALLOC_ALLOC_GREF _IOC(_IOC_NONE, 'G', 5, sizeof(struct ioctl_gntalloc_alloc_gref))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ioctl_gntalloc_alloc_gref {
  __u16 domid;
  __u16 flags;
  __u32 count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 index;
  __u32 gref_ids[1];
};
#define GNTALLOC_FLAG_WRITABLE 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IOCTL_GNTALLOC_DEALLOC_GREF _IOC(_IOC_NONE, 'G', 6, sizeof(struct ioctl_gntalloc_dealloc_gref))
struct ioctl_gntalloc_dealloc_gref {
  __u64 index;
  __u32 count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IOCTL_GNTALLOC_SET_UNMAP_NOTIFY _IOC(_IOC_NONE, 'G', 7, sizeof(struct ioctl_gntalloc_unmap_notify))
struct ioctl_gntalloc_unmap_notify {
  __u64 index;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 action;
  __u32 event_channel_port;
};
#define UNMAP_NOTIFY_CLEAR_BYTE 0x1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UNMAP_NOTIFY_SEND_EVENT 0x2
#endif
