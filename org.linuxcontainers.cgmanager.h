/* cgmanager
 *
 * Copyright (C) 2010 Scott James Remnant <scott@netsplit.com>.
 *
 * This file was automatically generated; see the source for copying
 * conditions.
 */

#ifndef CGMANAGER_ORG_LINUXCONTAINERS_CGMANAGER_H
#define CGMANAGER_ORG_LINUXCONTAINERS_CGMANAGER_H

#include <dbus/dbus.h>

#include <stdint.h>

#include <nih/macros.h>

#include <nih-dbus/dbus_interface.h>
#include <nih-dbus/dbus_message.h>


typedef struct cgmanager_list_keys_output_element {
	char *   item0;
	uint32_t item1;
	uint32_t item2;
	uint32_t item3;
} CgmanagerListKeysOutputElement;


NIH_BEGIN_EXTERN

extern const NihDBusInterface  cgmanager_org_linuxcontainers_cgmanager0_0;
extern const NihDBusInterface *cgmanager_interfaces[];

NIH_END_EXTERN

#endif /* CGMANAGER_ORG_LINUXCONTAINERS_CGMANAGER_H */
