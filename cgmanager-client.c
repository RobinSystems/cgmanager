/* cgmanager
 *
 * cgmanager-client.c - auto-generated D-Bus bindings
 *
 * Copyright (C) 2010 Scott James Remnant <scott@netsplit.com>.
 *
 * This file was automatically generated; see the source for copying
 * conditions.
 */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif /* HAVE_CONFIG_H */


#include <dbus/dbus.h>

#include <stdint.h>
#include <string.h>

#include <nih/macros.h>
#include <nih/alloc.h>
#include <nih/string.h>
#include <nih/logging.h>
#include <nih/error.h>

#include <nih-dbus/dbus_error.h>
#include <nih-dbus/dbus_message.h>
#include <nih-dbus/dbus_pending_data.h>
#include <nih-dbus/dbus_proxy.h>
#include <nih-dbus/errors.h>

#include "cgmanager-client.h"


/* Prototypes for static functions */
static void cgmanager_org_linuxcontainers_cgmanager0_0_Ping_notify                 (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupScm_notify      (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroup_notify         (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbsScm_notify   (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbs_notify      (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_CreateScm_notify            (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_Create_notify               (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_ChownScm_notify             (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_Chown_notify                (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_ChmodScm_notify             (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_Chmod_notify                (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_MovePidScm_notify           (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_MovePid_notify              (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbsScm_notify        (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbs_notify           (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_GetValueScm_notify          (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_GetValue_notify             (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_SetValueScm_notify          (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_SetValue_notify             (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_RemoveScm_notify            (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_Remove_notify               (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksScm_notify          (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_GetTasks_notify             (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursiveScm_notify (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursive_notify    (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_ListChildrenScm_notify      (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_ListChildren_notify         (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmptyScm_notify     (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmpty_notify        (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_PruneScm_notify             (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_Prune_notify                (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_ListControllers_notify      (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_ListKeysScm_notify          (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_ListKeys_notify             (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_api_version_get_notify      (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);
static void cgmanager_org_linuxcontainers_cgmanager0_0_get_all_notify              (DBusPendingCall *pending_call, NihDBusPendingData *pending_data);


static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_Ping_method_args[] = {
	{ "junk", "i", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupScm_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "sockfd",     "h", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroup_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "pid",        "i", NIH_DBUS_ARG_IN  },
	{ "output",     "s", NIH_DBUS_ARG_OUT },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbsScm_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "sockfd",     "h", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbs_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "pid",        "i", NIH_DBUS_ARG_IN  },
	{ "output",     "s", NIH_DBUS_ARG_OUT },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_CreateScm_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "sockfd",     "h", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_Create_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "existed",    "i", NIH_DBUS_ARG_OUT },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_ChownScm_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "sockfd",     "h", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_Chown_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "uid",        "i", NIH_DBUS_ARG_IN  },
	{ "gid",        "i", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_ChmodScm_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "file",       "s", NIH_DBUS_ARG_IN  },
	{ "mode",       "i", NIH_DBUS_ARG_IN  },
	{ "sockfd",     "h", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_Chmod_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "file",       "s", NIH_DBUS_ARG_IN  },
	{ "mode",       "i", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_MovePidScm_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "sockfd",     "h", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_MovePid_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "pid",        "i", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbsScm_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "sockfd",     "h", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbs_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "pid",        "i", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_GetValueScm_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "key",        "s", NIH_DBUS_ARG_IN  },
	{ "sockfd",     "h", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_GetValue_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "key",        "s", NIH_DBUS_ARG_IN  },
	{ "value",      "s", NIH_DBUS_ARG_OUT },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_SetValueScm_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "key",        "s", NIH_DBUS_ARG_IN  },
	{ "value",      "s", NIH_DBUS_ARG_IN  },
	{ "sockfd",     "h", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_SetValue_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "key",        "s", NIH_DBUS_ARG_IN  },
	{ "value",      "s", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_RemoveScm_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "recursive",  "i", NIH_DBUS_ARG_IN  },
	{ "sockfd",     "h", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_Remove_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "recursive",  "i", NIH_DBUS_ARG_IN  },
	{ "existed",    "i", NIH_DBUS_ARG_OUT },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksScm_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "sockfd",     "h", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_GetTasks_method_args[] = {
	{ "controller", "s",  NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s",  NIH_DBUS_ARG_IN  },
	{ "output",     "ai", NIH_DBUS_ARG_OUT },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursiveScm_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "sockfd",     "h", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursive_method_args[] = {
	{ "controller", "s",  NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s",  NIH_DBUS_ARG_IN  },
	{ "output",     "ai", NIH_DBUS_ARG_OUT },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_ListChildrenScm_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "sockfd",     "h", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_ListChildren_method_args[] = {
	{ "controller", "s",  NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s",  NIH_DBUS_ARG_IN  },
	{ "output",     "as", NIH_DBUS_ARG_OUT },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmptyScm_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "sockfd",     "h", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmpty_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_PruneScm_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "sockfd",     "h", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_Prune_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_ListControllers_method_args[] = {
	{ "output", "as", NIH_DBUS_ARG_OUT },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_ListKeysScm_method_args[] = {
	{ "controller", "s", NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s", NIH_DBUS_ARG_IN  },
	{ "sockfd",     "h", NIH_DBUS_ARG_IN  },
	{ NULL }
};

static const NihDBusArg cgmanager_org_linuxcontainers_cgmanager0_0_ListKeys_method_args[] = {
	{ "controller", "s",       NIH_DBUS_ARG_IN  },
	{ "cgroup",     "s",       NIH_DBUS_ARG_IN  },
	{ "output",     "a(suuu)", NIH_DBUS_ARG_OUT },
	{ NULL }
};

static const NihDBusMethod cgmanager_org_linuxcontainers_cgmanager0_0_methods[] = {
	{ "Ping",                 cgmanager_org_linuxcontainers_cgmanager0_0_Ping_method_args,                 NULL },
	{ "GetPidCgroupScm",      cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupScm_method_args,      NULL },
	{ "GetPidCgroup",         cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroup_method_args,         NULL },
	{ "GetPidCgroupAbsScm",   cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbsScm_method_args,   NULL },
	{ "GetPidCgroupAbs",      cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbs_method_args,      NULL },
	{ "CreateScm",            cgmanager_org_linuxcontainers_cgmanager0_0_CreateScm_method_args,            NULL },
	{ "Create",               cgmanager_org_linuxcontainers_cgmanager0_0_Create_method_args,               NULL },
	{ "ChownScm",             cgmanager_org_linuxcontainers_cgmanager0_0_ChownScm_method_args,             NULL },
	{ "Chown",                cgmanager_org_linuxcontainers_cgmanager0_0_Chown_method_args,                NULL },
	{ "ChmodScm",             cgmanager_org_linuxcontainers_cgmanager0_0_ChmodScm_method_args,             NULL },
	{ "Chmod",                cgmanager_org_linuxcontainers_cgmanager0_0_Chmod_method_args,                NULL },
	{ "MovePidScm",           cgmanager_org_linuxcontainers_cgmanager0_0_MovePidScm_method_args,           NULL },
	{ "MovePid",              cgmanager_org_linuxcontainers_cgmanager0_0_MovePid_method_args,              NULL },
	{ "MovePidAbsScm",        cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbsScm_method_args,        NULL },
	{ "MovePidAbs",           cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbs_method_args,           NULL },
	{ "GetValueScm",          cgmanager_org_linuxcontainers_cgmanager0_0_GetValueScm_method_args,          NULL },
	{ "GetValue",             cgmanager_org_linuxcontainers_cgmanager0_0_GetValue_method_args,             NULL },
	{ "SetValueScm",          cgmanager_org_linuxcontainers_cgmanager0_0_SetValueScm_method_args,          NULL },
	{ "SetValue",             cgmanager_org_linuxcontainers_cgmanager0_0_SetValue_method_args,             NULL },
	{ "RemoveScm",            cgmanager_org_linuxcontainers_cgmanager0_0_RemoveScm_method_args,            NULL },
	{ "Remove",               cgmanager_org_linuxcontainers_cgmanager0_0_Remove_method_args,               NULL },
	{ "GetTasksScm",          cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksScm_method_args,          NULL },
	{ "GetTasks",             cgmanager_org_linuxcontainers_cgmanager0_0_GetTasks_method_args,             NULL },
	{ "GetTasksRecursiveScm", cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursiveScm_method_args, NULL },
	{ "GetTasksRecursive",    cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursive_method_args,    NULL },
	{ "ListChildrenScm",      cgmanager_org_linuxcontainers_cgmanager0_0_ListChildrenScm_method_args,      NULL },
	{ "ListChildren",         cgmanager_org_linuxcontainers_cgmanager0_0_ListChildren_method_args,         NULL },
	{ "RemoveOnEmptyScm",     cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmptyScm_method_args,     NULL },
	{ "RemoveOnEmpty",        cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmpty_method_args,        NULL },
	{ "PruneScm",             cgmanager_org_linuxcontainers_cgmanager0_0_PruneScm_method_args,             NULL },
	{ "Prune",                cgmanager_org_linuxcontainers_cgmanager0_0_Prune_method_args,                NULL },
	{ "ListControllers",      cgmanager_org_linuxcontainers_cgmanager0_0_ListControllers_method_args,      NULL },
	{ "ListKeysScm",          cgmanager_org_linuxcontainers_cgmanager0_0_ListKeysScm_method_args,          NULL },
	{ "ListKeys",             cgmanager_org_linuxcontainers_cgmanager0_0_ListKeys_method_args,             NULL },
	{ NULL }
};

static const NihDBusSignal cgmanager_org_linuxcontainers_cgmanager0_0_signals[] = {
	{ NULL }
};

static const NihDBusProperty cgmanager_org_linuxcontainers_cgmanager0_0_properties[] = {
	{ "api_version", "i", NIH_DBUS_READ, NULL, NULL },
	{ NULL }
};

const NihDBusInterface cgmanager_org_linuxcontainers_cgmanager0_0 = {
	"org.linuxcontainers.cgmanager0_0",
	cgmanager_org_linuxcontainers_cgmanager0_0_methods,
	cgmanager_org_linuxcontainers_cgmanager0_0_signals,
	cgmanager_org_linuxcontainers_cgmanager0_0_properties
};

const NihDBusInterface *cgmanager_interfaces[] = {
	&cgmanager_org_linuxcontainers_cgmanager0_0,
	NULL
};


DBusPendingCall *
cgmanager_ping (NihDBusProxy *      proxy,
                int32_t             junk,
                CgmanagerPingReply  handler,
                NihDBusErrorHandler error_handler,
                void *              data,
                int                 timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "Ping");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &junk)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_Ping_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_Ping_notify (DBusPendingCall *   pending_call,
                                                        NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerPingReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_ping_sync (const void *  parent,
                     NihDBusProxy *proxy,
                     int32_t       junk)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "Ping");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &junk)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_get_pid_cgroup_scm (NihDBusProxy *                proxy,
                              const char *                  controller,
                              int                           sockfd,
                              CgmanagerGetPidCgroupScmReply handler,
                              NihDBusErrorHandler           error_handler,
                              void *                        data,
                              int                           timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetPidCgroupScm");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupScm_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupScm_notify (DBusPendingCall *   pending_call,
                                                                   NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerGetPidCgroupScmReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_get_pid_cgroup_scm_sync (const void *  parent,
                                   NihDBusProxy *proxy,
                                   const char *  controller,
                                   int           sockfd)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetPidCgroupScm");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_get_pid_cgroup (NihDBusProxy *             proxy,
                          const char *               controller,
                          int32_t                    pid,
                          CgmanagerGetPidCgroupReply handler,
                          NihDBusErrorHandler        error_handler,
                          void *                     data,
                          int                        timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetPidCgroup");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &pid)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroup_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroup_notify (DBusPendingCall *   pending_call,
                                                                NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;
	char *          output;
	const char *    output_dbus;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		/* Demarshal a char * from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

		dbus_message_iter_get_basic (&iter, &output_dbus);

		output = nih_strdup (message, output_dbus);
		if (! output) {
			nih_free (message);
			message = NULL;
			goto enomem;
		}

		dbus_message_iter_next (&iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerGetPidCgroupReply)pending_data->handler) (pending_data->data, message, output);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_get_pid_cgroup_sync (const void *  parent,
                               NihDBusProxy *proxy,
                               const char *  controller,
                               int32_t       pid,
                               char **       output)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;
	char *          output_local;
	const char *    output_local_dbus;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (output != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetPidCgroup");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &pid)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	do {
		__label__ enomem;

		/* Demarshal a char * from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
			dbus_message_unref (reply);
			nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
			                  _(NIH_DBUS_INVALID_ARGS_STR));
		}

		dbus_message_iter_get_basic (&iter, &output_local_dbus);

		output_local = nih_strdup (parent, output_local_dbus);
		if (! output_local) {
			*output = NULL;
			goto enomem;
		}

		dbus_message_iter_next (&iter);

		*output = output_local;
	enomem: __attribute__ ((unused));
	} while (! *output);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		nih_free (output_local);
		*output = NULL;
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_get_pid_cgroup_abs_scm (NihDBusProxy *                   proxy,
                                  const char *                     controller,
                                  int                              sockfd,
                                  CgmanagerGetPidCgroupAbsScmReply handler,
                                  NihDBusErrorHandler              error_handler,
                                  void *                           data,
                                  int                              timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetPidCgroupAbsScm");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbsScm_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbsScm_notify (DBusPendingCall *   pending_call,
                                                                      NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerGetPidCgroupAbsScmReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_get_pid_cgroup_abs_scm_sync (const void *  parent,
                                       NihDBusProxy *proxy,
                                       const char *  controller,
                                       int           sockfd)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetPidCgroupAbsScm");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_get_pid_cgroup_abs (NihDBusProxy *                proxy,
                              const char *                  controller,
                              int32_t                       pid,
                              CgmanagerGetPidCgroupAbsReply handler,
                              NihDBusErrorHandler           error_handler,
                              void *                        data,
                              int                           timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetPidCgroupAbs");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &pid)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbs_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbs_notify (DBusPendingCall *   pending_call,
                                                                   NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;
	char *          output;
	const char *    output_dbus;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		/* Demarshal a char * from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

		dbus_message_iter_get_basic (&iter, &output_dbus);

		output = nih_strdup (message, output_dbus);
		if (! output) {
			nih_free (message);
			message = NULL;
			goto enomem;
		}

		dbus_message_iter_next (&iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerGetPidCgroupAbsReply)pending_data->handler) (pending_data->data, message, output);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_get_pid_cgroup_abs_sync (const void *  parent,
                                   NihDBusProxy *proxy,
                                   const char *  controller,
                                   int32_t       pid,
                                   char **       output)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;
	char *          output_local;
	const char *    output_local_dbus;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (output != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetPidCgroupAbs");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &pid)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	do {
		__label__ enomem;

		/* Demarshal a char * from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
			dbus_message_unref (reply);
			nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
			                  _(NIH_DBUS_INVALID_ARGS_STR));
		}

		dbus_message_iter_get_basic (&iter, &output_local_dbus);

		output_local = nih_strdup (parent, output_local_dbus);
		if (! output_local) {
			*output = NULL;
			goto enomem;
		}

		dbus_message_iter_next (&iter);

		*output = output_local;
	enomem: __attribute__ ((unused));
	} while (! *output);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		nih_free (output_local);
		*output = NULL;
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_create_scm (NihDBusProxy *          proxy,
                      const char *            controller,
                      const char *            cgroup,
                      int                     sockfd,
                      CgmanagerCreateScmReply handler,
                      NihDBusErrorHandler     error_handler,
                      void *                  data,
                      int                     timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "CreateScm");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_CreateScm_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_CreateScm_notify (DBusPendingCall *   pending_call,
                                                             NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerCreateScmReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_create_scm_sync (const void *  parent,
                           NihDBusProxy *proxy,
                           const char *  controller,
                           const char *  cgroup,
                           int           sockfd)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "CreateScm");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_create (NihDBusProxy *       proxy,
                  const char *         controller,
                  const char *         cgroup,
                  CgmanagerCreateReply handler,
                  NihDBusErrorHandler  error_handler,
                  void *               data,
                  int                  timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "Create");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_Create_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_Create_notify (DBusPendingCall *   pending_call,
                                                          NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;
	int32_t         existed;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		/* Demarshal a int32_t from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INT32) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

		dbus_message_iter_get_basic (&iter, &existed);

		dbus_message_iter_next (&iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerCreateReply)pending_data->handler) (pending_data->data, message, existed);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_create_sync (const void *  parent,
                       NihDBusProxy *proxy,
                       const char *  controller,
                       const char *  cgroup,
                       int32_t *     existed)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;
	int32_t         existed_local;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (existed != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "Create");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	do {
		__label__ enomem;

		/* Demarshal a int32_t from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INT32) {
			dbus_message_unref (reply);
			nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
			                  _(NIH_DBUS_INVALID_ARGS_STR));
		}

		dbus_message_iter_get_basic (&iter, &existed_local);

		dbus_message_iter_next (&iter);

		*existed = existed_local;
	enomem: __attribute__ ((unused));
	} while (! *existed);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_chown_scm (NihDBusProxy *         proxy,
                     const char *           controller,
                     const char *           cgroup,
                     int                    sockfd,
                     CgmanagerChownScmReply handler,
                     NihDBusErrorHandler    error_handler,
                     void *                 data,
                     int                    timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "ChownScm");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_ChownScm_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_ChownScm_notify (DBusPendingCall *   pending_call,
                                                            NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerChownScmReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_chown_scm_sync (const void *  parent,
                          NihDBusProxy *proxy,
                          const char *  controller,
                          const char *  cgroup,
                          int           sockfd)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "ChownScm");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_chown (NihDBusProxy *      proxy,
                 const char *        controller,
                 const char *        cgroup,
                 int32_t             uid,
                 int32_t             gid,
                 CgmanagerChownReply handler,
                 NihDBusErrorHandler error_handler,
                 void *              data,
                 int                 timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "Chown");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &uid)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &gid)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_Chown_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_Chown_notify (DBusPendingCall *   pending_call,
                                                         NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerChownReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_chown_sync (const void *  parent,
                      NihDBusProxy *proxy,
                      const char *  controller,
                      const char *  cgroup,
                      int32_t       uid,
                      int32_t       gid)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "Chown");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &uid)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &gid)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_chmod_scm (NihDBusProxy *         proxy,
                     const char *           controller,
                     const char *           cgroup,
                     const char *           file,
                     int32_t                mode,
                     int                    sockfd,
                     CgmanagerChmodScmReply handler,
                     NihDBusErrorHandler    error_handler,
                     void *                 data,
                     int                    timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (file != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "ChmodScm");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &file)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &mode)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_ChmodScm_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_ChmodScm_notify (DBusPendingCall *   pending_call,
                                                            NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerChmodScmReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_chmod_scm_sync (const void *  parent,
                          NihDBusProxy *proxy,
                          const char *  controller,
                          const char *  cgroup,
                          const char *  file,
                          int32_t       mode,
                          int           sockfd)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (file != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "ChmodScm");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &file)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &mode)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_chmod (NihDBusProxy *      proxy,
                 const char *        controller,
                 const char *        cgroup,
                 const char *        file,
                 int32_t             mode,
                 CgmanagerChmodReply handler,
                 NihDBusErrorHandler error_handler,
                 void *              data,
                 int                 timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (file != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "Chmod");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &file)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &mode)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_Chmod_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_Chmod_notify (DBusPendingCall *   pending_call,
                                                         NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerChmodReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_chmod_sync (const void *  parent,
                      NihDBusProxy *proxy,
                      const char *  controller,
                      const char *  cgroup,
                      const char *  file,
                      int32_t       mode)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (file != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "Chmod");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &file)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &mode)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_move_pid_scm (NihDBusProxy *           proxy,
                        const char *             controller,
                        const char *             cgroup,
                        int                      sockfd,
                        CgmanagerMovePidScmReply handler,
                        NihDBusErrorHandler      error_handler,
                        void *                   data,
                        int                      timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "MovePidScm");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_MovePidScm_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_MovePidScm_notify (DBusPendingCall *   pending_call,
                                                              NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerMovePidScmReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_move_pid_scm_sync (const void *  parent,
                             NihDBusProxy *proxy,
                             const char *  controller,
                             const char *  cgroup,
                             int           sockfd)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "MovePidScm");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_move_pid (NihDBusProxy *        proxy,
                    const char *          controller,
                    const char *          cgroup,
                    int32_t               pid,
                    CgmanagerMovePidReply handler,
                    NihDBusErrorHandler   error_handler,
                    void *                data,
                    int                   timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "MovePid");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &pid)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_MovePid_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_MovePid_notify (DBusPendingCall *   pending_call,
                                                           NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerMovePidReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_move_pid_sync (const void *  parent,
                         NihDBusProxy *proxy,
                         const char *  controller,
                         const char *  cgroup,
                         int32_t       pid)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "MovePid");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &pid)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_move_pid_abs_scm (NihDBusProxy *              proxy,
                            const char *                controller,
                            const char *                cgroup,
                            int                         sockfd,
                            CgmanagerMovePidAbsScmReply handler,
                            NihDBusErrorHandler         error_handler,
                            void *                      data,
                            int                         timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "MovePidAbsScm");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbsScm_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbsScm_notify (DBusPendingCall *   pending_call,
                                                                 NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerMovePidAbsScmReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_move_pid_abs_scm_sync (const void *  parent,
                                 NihDBusProxy *proxy,
                                 const char *  controller,
                                 const char *  cgroup,
                                 int           sockfd)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "MovePidAbsScm");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_move_pid_abs (NihDBusProxy *           proxy,
                        const char *             controller,
                        const char *             cgroup,
                        int32_t                  pid,
                        CgmanagerMovePidAbsReply handler,
                        NihDBusErrorHandler      error_handler,
                        void *                   data,
                        int                      timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "MovePidAbs");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &pid)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbs_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbs_notify (DBusPendingCall *   pending_call,
                                                              NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerMovePidAbsReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_move_pid_abs_sync (const void *  parent,
                             NihDBusProxy *proxy,
                             const char *  controller,
                             const char *  cgroup,
                             int32_t       pid)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "MovePidAbs");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &pid)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_get_value_scm (NihDBusProxy *            proxy,
                         const char *              controller,
                         const char *              cgroup,
                         const char *              key,
                         int                       sockfd,
                         CgmanagerGetValueScmReply handler,
                         NihDBusErrorHandler       error_handler,
                         void *                    data,
                         int                       timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (key != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetValueScm");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &key)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_GetValueScm_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_GetValueScm_notify (DBusPendingCall *   pending_call,
                                                               NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerGetValueScmReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_get_value_scm_sync (const void *  parent,
                              NihDBusProxy *proxy,
                              const char *  controller,
                              const char *  cgroup,
                              const char *  key,
                              int           sockfd)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (key != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetValueScm");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &key)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_get_value (NihDBusProxy *         proxy,
                     const char *           controller,
                     const char *           cgroup,
                     const char *           key,
                     CgmanagerGetValueReply handler,
                     NihDBusErrorHandler    error_handler,
                     void *                 data,
                     int                    timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (key != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetValue");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &key)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_GetValue_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_GetValue_notify (DBusPendingCall *   pending_call,
                                                            NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;
	char *          value;
	const char *    value_dbus;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		/* Demarshal a char * from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

		dbus_message_iter_get_basic (&iter, &value_dbus);

		value = nih_strdup (message, value_dbus);
		if (! value) {
			nih_free (message);
			message = NULL;
			goto enomem;
		}

		dbus_message_iter_next (&iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerGetValueReply)pending_data->handler) (pending_data->data, message, value);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_get_value_sync (const void *  parent,
                          NihDBusProxy *proxy,
                          const char *  controller,
                          const char *  cgroup,
                          const char *  key,
                          char **       value)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;
	char *          value_local;
	const char *    value_local_dbus;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (key != NULL);
	nih_assert (value != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetValue");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &key)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	do {
		__label__ enomem;

		/* Demarshal a char * from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
			dbus_message_unref (reply);
			nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
			                  _(NIH_DBUS_INVALID_ARGS_STR));
		}

		dbus_message_iter_get_basic (&iter, &value_local_dbus);

		value_local = nih_strdup (parent, value_local_dbus);
		if (! value_local) {
			*value = NULL;
			goto enomem;
		}

		dbus_message_iter_next (&iter);

		*value = value_local;
	enomem: __attribute__ ((unused));
	} while (! *value);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		nih_free (value_local);
		*value = NULL;
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_set_value_scm (NihDBusProxy *            proxy,
                         const char *              controller,
                         const char *              cgroup,
                         const char *              key,
                         const char *              value,
                         int                       sockfd,
                         CgmanagerSetValueScmReply handler,
                         NihDBusErrorHandler       error_handler,
                         void *                    data,
                         int                       timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (key != NULL);
	nih_assert (value != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "SetValueScm");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &key)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &value)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_SetValueScm_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_SetValueScm_notify (DBusPendingCall *   pending_call,
                                                               NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerSetValueScmReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_set_value_scm_sync (const void *  parent,
                              NihDBusProxy *proxy,
                              const char *  controller,
                              const char *  cgroup,
                              const char *  key,
                              const char *  value,
                              int           sockfd)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (key != NULL);
	nih_assert (value != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "SetValueScm");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &key)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &value)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_set_value (NihDBusProxy *         proxy,
                     const char *           controller,
                     const char *           cgroup,
                     const char *           key,
                     const char *           value,
                     CgmanagerSetValueReply handler,
                     NihDBusErrorHandler    error_handler,
                     void *                 data,
                     int                    timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (key != NULL);
	nih_assert (value != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "SetValue");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &key)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &value)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_SetValue_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_SetValue_notify (DBusPendingCall *   pending_call,
                                                            NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerSetValueReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_set_value_sync (const void *  parent,
                          NihDBusProxy *proxy,
                          const char *  controller,
                          const char *  cgroup,
                          const char *  key,
                          const char *  value)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (key != NULL);
	nih_assert (value != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "SetValue");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &key)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &value)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_remove_scm (NihDBusProxy *          proxy,
                      const char *            controller,
                      const char *            cgroup,
                      int32_t                 recursive,
                      int                     sockfd,
                      CgmanagerRemoveScmReply handler,
                      NihDBusErrorHandler     error_handler,
                      void *                  data,
                      int                     timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "RemoveScm");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &recursive)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_RemoveScm_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_RemoveScm_notify (DBusPendingCall *   pending_call,
                                                             NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerRemoveScmReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_remove_scm_sync (const void *  parent,
                           NihDBusProxy *proxy,
                           const char *  controller,
                           const char *  cgroup,
                           int32_t       recursive,
                           int           sockfd)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "RemoveScm");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &recursive)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_remove (NihDBusProxy *       proxy,
                  const char *         controller,
                  const char *         cgroup,
                  int32_t              recursive,
                  CgmanagerRemoveReply handler,
                  NihDBusErrorHandler  error_handler,
                  void *               data,
                  int                  timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "Remove");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &recursive)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_Remove_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_Remove_notify (DBusPendingCall *   pending_call,
                                                          NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;
	int32_t         existed;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		/* Demarshal a int32_t from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INT32) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

		dbus_message_iter_get_basic (&iter, &existed);

		dbus_message_iter_next (&iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerRemoveReply)pending_data->handler) (pending_data->data, message, existed);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_remove_sync (const void *  parent,
                       NihDBusProxy *proxy,
                       const char *  controller,
                       const char *  cgroup,
                       int32_t       recursive,
                       int32_t *     existed)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;
	int32_t         existed_local;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (existed != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "Remove");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &recursive)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	do {
		__label__ enomem;

		/* Demarshal a int32_t from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INT32) {
			dbus_message_unref (reply);
			nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
			                  _(NIH_DBUS_INVALID_ARGS_STR));
		}

		dbus_message_iter_get_basic (&iter, &existed_local);

		dbus_message_iter_next (&iter);

		*existed = existed_local;
	enomem: __attribute__ ((unused));
	} while (! *existed);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_get_tasks_scm (NihDBusProxy *            proxy,
                         const char *              controller,
                         const char *              cgroup,
                         int                       sockfd,
                         CgmanagerGetTasksScmReply handler,
                         NihDBusErrorHandler       error_handler,
                         void *                    data,
                         int                       timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetTasksScm");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksScm_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksScm_notify (DBusPendingCall *   pending_call,
                                                               NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerGetTasksScmReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_get_tasks_scm_sync (const void *  parent,
                              NihDBusProxy *proxy,
                              const char *  controller,
                              const char *  cgroup,
                              int           sockfd)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetTasksScm");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_get_tasks (NihDBusProxy *         proxy,
                     const char *           controller,
                     const char *           cgroup,
                     CgmanagerGetTasksReply handler,
                     NihDBusErrorHandler    error_handler,
                     void *                 data,
                     int                    timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetTasks");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_GetTasks_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_GetTasks_notify (DBusPendingCall *   pending_call,
                                                            NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;
	int32_t *       output;
	size_t          output_len;
	DBusMessageIter output_iter;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		/* Demarshal an array from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_ARRAY) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

		dbus_message_iter_recurse (&iter, &output_iter);

		output_len = 0;
		output = NULL;

		while (dbus_message_iter_get_arg_type (&output_iter) != DBUS_TYPE_INVALID) {
			int32_t *output_tmp;
			int32_t  output_element;

			/* Demarshal a int32_t from the message */
			if (dbus_message_iter_get_arg_type (&output_iter) != DBUS_TYPE_INT32) {
				if (output)
					nih_free (output);
				nih_error_push_context ();
				nih_error_raise (NIH_DBUS_INVALID_ARGS,
				                 _(NIH_DBUS_INVALID_ARGS_STR));
				pending_data->error_handler (pending_data->data, message);
				nih_error_pop_context ();

				nih_free (message);
				dbus_message_unref (reply);
				return;
			}

			dbus_message_iter_get_basic (&output_iter, &output_element);

			dbus_message_iter_next (&output_iter);

			if (output_len + 1 > SIZE_MAX / sizeof (int32_t)) {
				if (output)
					nih_free (output);
				nih_error_push_context ();
				nih_error_raise (NIH_DBUS_INVALID_ARGS,
				                 _(NIH_DBUS_INVALID_ARGS_STR));
				pending_data->error_handler (pending_data->data, message);
				nih_error_pop_context ();

				nih_free (message);
				dbus_message_unref (reply);
				return;
			}

			output_tmp = nih_realloc (output, message, sizeof (int32_t) * (output_len + 1));
			if (! output_tmp) {
				if (output)
					nih_free (output);
				nih_free (message);
				message = NULL;
				goto enomem;
			}

			output = output_tmp;
			output[output_len] = output_element;

			output_len++;
		}

		dbus_message_iter_next (&iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerGetTasksReply)pending_data->handler) (pending_data->data, message, output, output_len);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_get_tasks_sync (const void *  parent,
                          NihDBusProxy *proxy,
                          const char *  controller,
                          const char *  cgroup,
                          int32_t **    output,
                          size_t *      output_len)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;
	int32_t *       output_local;
	size_t          output_local_len;
	DBusMessageIter output_local_iter;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (output != NULL);
	nih_assert (output_len != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetTasks");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	do {
		__label__ enomem;

		/* Demarshal an array from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_ARRAY) {
			dbus_message_unref (reply);
			nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
			                  _(NIH_DBUS_INVALID_ARGS_STR));
		}

		dbus_message_iter_recurse (&iter, &output_local_iter);

		output_local_len = 0;
		output_local = NULL;

		while (dbus_message_iter_get_arg_type (&output_local_iter) != DBUS_TYPE_INVALID) {
			int32_t *output_local_tmp;
			int32_t  output_local_element;

			/* Demarshal a int32_t from the message */
			if (dbus_message_iter_get_arg_type (&output_local_iter) != DBUS_TYPE_INT32) {
				if (output_local)
					nih_free (output_local);
				dbus_message_unref (reply);
				nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
				                  _(NIH_DBUS_INVALID_ARGS_STR));
			}

			dbus_message_iter_get_basic (&output_local_iter, &output_local_element);

			dbus_message_iter_next (&output_local_iter);

			if (output_local_len + 1 > SIZE_MAX / sizeof (int32_t)) {
				if (output_local)
					nih_free (output_local);
				dbus_message_unref (reply);
				nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
				                  _(NIH_DBUS_INVALID_ARGS_STR));
			}

			output_local_tmp = nih_realloc (output_local, parent, sizeof (int32_t) * (output_local_len + 1));
			if (! output_local_tmp) {
				if (output_local)
					nih_free (output_local);
				*output = NULL;
				goto enomem;
			}

			output_local = output_local_tmp;
			output_local[output_local_len] = output_local_element;

			output_local_len++;
		}

		dbus_message_iter_next (&iter);

		*output = output_local;
		*output_len = output_local_len;
	enomem: __attribute__ ((unused));
	} while (! *output);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		nih_free (output_local);
		*output = NULL;
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_get_tasks_recursive_scm (NihDBusProxy *                     proxy,
                                   const char *                       controller,
                                   const char *                       cgroup,
                                   int                                sockfd,
                                   CgmanagerGetTasksRecursiveScmReply handler,
                                   NihDBusErrorHandler                error_handler,
                                   void *                             data,
                                   int                                timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetTasksRecursiveScm");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursiveScm_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursiveScm_notify (DBusPendingCall *   pending_call,
                                                                        NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerGetTasksRecursiveScmReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_get_tasks_recursive_scm_sync (const void *  parent,
                                        NihDBusProxy *proxy,
                                        const char *  controller,
                                        const char *  cgroup,
                                        int           sockfd)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetTasksRecursiveScm");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_get_tasks_recursive (NihDBusProxy *                  proxy,
                               const char *                    controller,
                               const char *                    cgroup,
                               CgmanagerGetTasksRecursiveReply handler,
                               NihDBusErrorHandler             error_handler,
                               void *                          data,
                               int                             timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetTasksRecursive");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursive_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursive_notify (DBusPendingCall *   pending_call,
                                                                     NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;
	int32_t *       output;
	size_t          output_len;
	DBusMessageIter output_iter;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		/* Demarshal an array from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_ARRAY) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

		dbus_message_iter_recurse (&iter, &output_iter);

		output_len = 0;
		output = NULL;

		while (dbus_message_iter_get_arg_type (&output_iter) != DBUS_TYPE_INVALID) {
			int32_t *output_tmp;
			int32_t  output_element;

			/* Demarshal a int32_t from the message */
			if (dbus_message_iter_get_arg_type (&output_iter) != DBUS_TYPE_INT32) {
				if (output)
					nih_free (output);
				nih_error_push_context ();
				nih_error_raise (NIH_DBUS_INVALID_ARGS,
				                 _(NIH_DBUS_INVALID_ARGS_STR));
				pending_data->error_handler (pending_data->data, message);
				nih_error_pop_context ();

				nih_free (message);
				dbus_message_unref (reply);
				return;
			}

			dbus_message_iter_get_basic (&output_iter, &output_element);

			dbus_message_iter_next (&output_iter);

			if (output_len + 1 > SIZE_MAX / sizeof (int32_t)) {
				if (output)
					nih_free (output);
				nih_error_push_context ();
				nih_error_raise (NIH_DBUS_INVALID_ARGS,
				                 _(NIH_DBUS_INVALID_ARGS_STR));
				pending_data->error_handler (pending_data->data, message);
				nih_error_pop_context ();

				nih_free (message);
				dbus_message_unref (reply);
				return;
			}

			output_tmp = nih_realloc (output, message, sizeof (int32_t) * (output_len + 1));
			if (! output_tmp) {
				if (output)
					nih_free (output);
				nih_free (message);
				message = NULL;
				goto enomem;
			}

			output = output_tmp;
			output[output_len] = output_element;

			output_len++;
		}

		dbus_message_iter_next (&iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerGetTasksRecursiveReply)pending_data->handler) (pending_data->data, message, output, output_len);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_get_tasks_recursive_sync (const void *  parent,
                                    NihDBusProxy *proxy,
                                    const char *  controller,
                                    const char *  cgroup,
                                    int32_t **    output,
                                    size_t *      output_len)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;
	int32_t *       output_local;
	size_t          output_local_len;
	DBusMessageIter output_local_iter;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (output != NULL);
	nih_assert (output_len != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "GetTasksRecursive");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	do {
		__label__ enomem;

		/* Demarshal an array from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_ARRAY) {
			dbus_message_unref (reply);
			nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
			                  _(NIH_DBUS_INVALID_ARGS_STR));
		}

		dbus_message_iter_recurse (&iter, &output_local_iter);

		output_local_len = 0;
		output_local = NULL;

		while (dbus_message_iter_get_arg_type (&output_local_iter) != DBUS_TYPE_INVALID) {
			int32_t *output_local_tmp;
			int32_t  output_local_element;

			/* Demarshal a int32_t from the message */
			if (dbus_message_iter_get_arg_type (&output_local_iter) != DBUS_TYPE_INT32) {
				if (output_local)
					nih_free (output_local);
				dbus_message_unref (reply);
				nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
				                  _(NIH_DBUS_INVALID_ARGS_STR));
			}

			dbus_message_iter_get_basic (&output_local_iter, &output_local_element);

			dbus_message_iter_next (&output_local_iter);

			if (output_local_len + 1 > SIZE_MAX / sizeof (int32_t)) {
				if (output_local)
					nih_free (output_local);
				dbus_message_unref (reply);
				nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
				                  _(NIH_DBUS_INVALID_ARGS_STR));
			}

			output_local_tmp = nih_realloc (output_local, parent, sizeof (int32_t) * (output_local_len + 1));
			if (! output_local_tmp) {
				if (output_local)
					nih_free (output_local);
				*output = NULL;
				goto enomem;
			}

			output_local = output_local_tmp;
			output_local[output_local_len] = output_local_element;

			output_local_len++;
		}

		dbus_message_iter_next (&iter);

		*output = output_local;
		*output_len = output_local_len;
	enomem: __attribute__ ((unused));
	} while (! *output);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		nih_free (output_local);
		*output = NULL;
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_list_children_scm (NihDBusProxy *                proxy,
                             const char *                  controller,
                             const char *                  cgroup,
                             int                           sockfd,
                             CgmanagerListChildrenScmReply handler,
                             NihDBusErrorHandler           error_handler,
                             void *                        data,
                             int                           timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "ListChildrenScm");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_ListChildrenScm_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_ListChildrenScm_notify (DBusPendingCall *   pending_call,
                                                                   NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerListChildrenScmReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_list_children_scm_sync (const void *  parent,
                                  NihDBusProxy *proxy,
                                  const char *  controller,
                                  const char *  cgroup,
                                  int           sockfd)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "ListChildrenScm");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_list_children (NihDBusProxy *             proxy,
                         const char *               controller,
                         const char *               cgroup,
                         CgmanagerListChildrenReply handler,
                         NihDBusErrorHandler        error_handler,
                         void *                     data,
                         int                        timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "ListChildren");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_ListChildren_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_ListChildren_notify (DBusPendingCall *   pending_call,
                                                                NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;
	char **         output;
	DBusMessageIter output_iter;
	size_t          output_size;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		/* Demarshal an array from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_ARRAY) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

		dbus_message_iter_recurse (&iter, &output_iter);

		output_size = 0;
		output = NULL;

		output = nih_alloc (message, sizeof (char *));
		if (! output) {
			nih_free (message);
			message = NULL;
			goto enomem;
		}

		output[output_size] = NULL;

		while (dbus_message_iter_get_arg_type (&output_iter) != DBUS_TYPE_INVALID) {
			const char *output_element_dbus;
			char **     output_tmp;
			char *      output_element;

			/* Demarshal a char * from the message */
			if (dbus_message_iter_get_arg_type (&output_iter) != DBUS_TYPE_STRING) {
				if (output)
					nih_free (output);
				nih_error_push_context ();
				nih_error_raise (NIH_DBUS_INVALID_ARGS,
				                 _(NIH_DBUS_INVALID_ARGS_STR));
				pending_data->error_handler (pending_data->data, message);
				nih_error_pop_context ();

				nih_free (message);
				dbus_message_unref (reply);
				return;
			}

			dbus_message_iter_get_basic (&output_iter, &output_element_dbus);

			output_element = nih_strdup (output, output_element_dbus);
			if (! output_element) {
				if (output)
					nih_free (output);
				nih_free (message);
				message = NULL;
				goto enomem;
			}

			dbus_message_iter_next (&output_iter);

			if (output_size + 2 > SIZE_MAX / sizeof (char *)) {
				if (output)
					nih_free (output);
				nih_error_push_context ();
				nih_error_raise (NIH_DBUS_INVALID_ARGS,
				                 _(NIH_DBUS_INVALID_ARGS_STR));
				pending_data->error_handler (pending_data->data, message);
				nih_error_pop_context ();

				nih_free (message);
				dbus_message_unref (reply);
				return;
			}

			output_tmp = nih_realloc (output, message, sizeof (char *) * (output_size + 2));
			if (! output_tmp) {
				if (output)
					nih_free (output);
				nih_free (message);
				message = NULL;
				goto enomem;
			}

			output = output_tmp;
			output[output_size] = output_element;
			output[output_size + 1] = NULL;

			output_size++;
		}

		dbus_message_iter_next (&iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerListChildrenReply)pending_data->handler) (pending_data->data, message, output);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_list_children_sync (const void *  parent,
                              NihDBusProxy *proxy,
                              const char *  controller,
                              const char *  cgroup,
                              char ***      output)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;
	char **         output_local;
	DBusMessageIter output_local_iter;
	size_t          output_local_size;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (output != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "ListChildren");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	do {
		__label__ enomem;

		/* Demarshal an array from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_ARRAY) {
			dbus_message_unref (reply);
			nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
			                  _(NIH_DBUS_INVALID_ARGS_STR));
		}

		dbus_message_iter_recurse (&iter, &output_local_iter);

		output_local_size = 0;
		output_local = NULL;

		output_local = nih_alloc (parent, sizeof (char *));
		if (! output_local) {
			*output = NULL;
			goto enomem;
		}

		output_local[output_local_size] = NULL;

		while (dbus_message_iter_get_arg_type (&output_local_iter) != DBUS_TYPE_INVALID) {
			const char *output_local_element_dbus;
			char **     output_local_tmp;
			char *      output_local_element;

			/* Demarshal a char * from the message */
			if (dbus_message_iter_get_arg_type (&output_local_iter) != DBUS_TYPE_STRING) {
				if (output_local)
					nih_free (output_local);
				dbus_message_unref (reply);
				nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
				                  _(NIH_DBUS_INVALID_ARGS_STR));
			}

			dbus_message_iter_get_basic (&output_local_iter, &output_local_element_dbus);

			output_local_element = nih_strdup (output_local, output_local_element_dbus);
			if (! output_local_element) {
				if (output_local)
					nih_free (output_local);
				*output = NULL;
				goto enomem;
			}

			dbus_message_iter_next (&output_local_iter);

			if (output_local_size + 2 > SIZE_MAX / sizeof (char *)) {
				if (output_local)
					nih_free (output_local);
				dbus_message_unref (reply);
				nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
				                  _(NIH_DBUS_INVALID_ARGS_STR));
			}

			output_local_tmp = nih_realloc (output_local, parent, sizeof (char *) * (output_local_size + 2));
			if (! output_local_tmp) {
				if (output_local)
					nih_free (output_local);
				*output = NULL;
				goto enomem;
			}

			output_local = output_local_tmp;
			output_local[output_local_size] = output_local_element;
			output_local[output_local_size + 1] = NULL;

			output_local_size++;
		}

		dbus_message_iter_next (&iter);

		*output = output_local;
	enomem: __attribute__ ((unused));
	} while (! *output);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		nih_free (output_local);
		*output = NULL;
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_remove_on_empty_scm (NihDBusProxy *                 proxy,
                               const char *                   controller,
                               const char *                   cgroup,
                               int                            sockfd,
                               CgmanagerRemoveOnEmptyScmReply handler,
                               NihDBusErrorHandler            error_handler,
                               void *                         data,
                               int                            timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "RemoveOnEmptyScm");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmptyScm_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmptyScm_notify (DBusPendingCall *   pending_call,
                                                                    NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerRemoveOnEmptyScmReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_remove_on_empty_scm_sync (const void *  parent,
                                    NihDBusProxy *proxy,
                                    const char *  controller,
                                    const char *  cgroup,
                                    int           sockfd)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "RemoveOnEmptyScm");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_remove_on_empty (NihDBusProxy *              proxy,
                           const char *                controller,
                           const char *                cgroup,
                           CgmanagerRemoveOnEmptyReply handler,
                           NihDBusErrorHandler         error_handler,
                           void *                      data,
                           int                         timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "RemoveOnEmpty");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmpty_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmpty_notify (DBusPendingCall *   pending_call,
                                                                 NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerRemoveOnEmptyReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_remove_on_empty_sync (const void *  parent,
                                NihDBusProxy *proxy,
                                const char *  controller,
                                const char *  cgroup)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "RemoveOnEmpty");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_prune_scm (NihDBusProxy *         proxy,
                     const char *           controller,
                     const char *           cgroup,
                     int                    sockfd,
                     CgmanagerPruneScmReply handler,
                     NihDBusErrorHandler    error_handler,
                     void *                 data,
                     int                    timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "PruneScm");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_PruneScm_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_PruneScm_notify (DBusPendingCall *   pending_call,
                                                            NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerPruneScmReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_prune_scm_sync (const void *  parent,
                          NihDBusProxy *proxy,
                          const char *  controller,
                          const char *  cgroup,
                          int           sockfd)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "PruneScm");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_prune (NihDBusProxy *      proxy,
                 const char *        controller,
                 const char *        cgroup,
                 CgmanagerPruneReply handler,
                 NihDBusErrorHandler error_handler,
                 void *              data,
                 int                 timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "Prune");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_Prune_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_Prune_notify (DBusPendingCall *   pending_call,
                                                         NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerPruneReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_prune_sync (const void *  parent,
                      NihDBusProxy *proxy,
                      const char *  controller,
                      const char *  cgroup)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "Prune");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_list_controllers (NihDBusProxy *                proxy,
                            CgmanagerListControllersReply handler,
                            NihDBusErrorHandler           error_handler,
                            void *                        data,
                            int                           timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "ListControllers");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_ListControllers_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_ListControllers_notify (DBusPendingCall *   pending_call,
                                                                   NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;
	char **         output;
	DBusMessageIter output_iter;
	size_t          output_size;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		/* Demarshal an array from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_ARRAY) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

		dbus_message_iter_recurse (&iter, &output_iter);

		output_size = 0;
		output = NULL;

		output = nih_alloc (message, sizeof (char *));
		if (! output) {
			nih_free (message);
			message = NULL;
			goto enomem;
		}

		output[output_size] = NULL;

		while (dbus_message_iter_get_arg_type (&output_iter) != DBUS_TYPE_INVALID) {
			const char *output_element_dbus;
			char **     output_tmp;
			char *      output_element;

			/* Demarshal a char * from the message */
			if (dbus_message_iter_get_arg_type (&output_iter) != DBUS_TYPE_STRING) {
				if (output)
					nih_free (output);
				nih_error_push_context ();
				nih_error_raise (NIH_DBUS_INVALID_ARGS,
				                 _(NIH_DBUS_INVALID_ARGS_STR));
				pending_data->error_handler (pending_data->data, message);
				nih_error_pop_context ();

				nih_free (message);
				dbus_message_unref (reply);
				return;
			}

			dbus_message_iter_get_basic (&output_iter, &output_element_dbus);

			output_element = nih_strdup (output, output_element_dbus);
			if (! output_element) {
				if (output)
					nih_free (output);
				nih_free (message);
				message = NULL;
				goto enomem;
			}

			dbus_message_iter_next (&output_iter);

			if (output_size + 2 > SIZE_MAX / sizeof (char *)) {
				if (output)
					nih_free (output);
				nih_error_push_context ();
				nih_error_raise (NIH_DBUS_INVALID_ARGS,
				                 _(NIH_DBUS_INVALID_ARGS_STR));
				pending_data->error_handler (pending_data->data, message);
				nih_error_pop_context ();

				nih_free (message);
				dbus_message_unref (reply);
				return;
			}

			output_tmp = nih_realloc (output, message, sizeof (char *) * (output_size + 2));
			if (! output_tmp) {
				if (output)
					nih_free (output);
				nih_free (message);
				message = NULL;
				goto enomem;
			}

			output = output_tmp;
			output[output_size] = output_element;
			output[output_size + 1] = NULL;

			output_size++;
		}

		dbus_message_iter_next (&iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerListControllersReply)pending_data->handler) (pending_data->data, message, output);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_list_controllers_sync (const void *  parent,
                                 NihDBusProxy *proxy,
                                 char ***      output)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;
	char **         output_local;
	DBusMessageIter output_local_iter;
	size_t          output_local_size;

	nih_assert (proxy != NULL);
	nih_assert (output != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "ListControllers");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	do {
		__label__ enomem;

		/* Demarshal an array from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_ARRAY) {
			dbus_message_unref (reply);
			nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
			                  _(NIH_DBUS_INVALID_ARGS_STR));
		}

		dbus_message_iter_recurse (&iter, &output_local_iter);

		output_local_size = 0;
		output_local = NULL;

		output_local = nih_alloc (parent, sizeof (char *));
		if (! output_local) {
			*output = NULL;
			goto enomem;
		}

		output_local[output_local_size] = NULL;

		while (dbus_message_iter_get_arg_type (&output_local_iter) != DBUS_TYPE_INVALID) {
			const char *output_local_element_dbus;
			char **     output_local_tmp;
			char *      output_local_element;

			/* Demarshal a char * from the message */
			if (dbus_message_iter_get_arg_type (&output_local_iter) != DBUS_TYPE_STRING) {
				if (output_local)
					nih_free (output_local);
				dbus_message_unref (reply);
				nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
				                  _(NIH_DBUS_INVALID_ARGS_STR));
			}

			dbus_message_iter_get_basic (&output_local_iter, &output_local_element_dbus);

			output_local_element = nih_strdup (output_local, output_local_element_dbus);
			if (! output_local_element) {
				if (output_local)
					nih_free (output_local);
				*output = NULL;
				goto enomem;
			}

			dbus_message_iter_next (&output_local_iter);

			if (output_local_size + 2 > SIZE_MAX / sizeof (char *)) {
				if (output_local)
					nih_free (output_local);
				dbus_message_unref (reply);
				nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
				                  _(NIH_DBUS_INVALID_ARGS_STR));
			}

			output_local_tmp = nih_realloc (output_local, parent, sizeof (char *) * (output_local_size + 2));
			if (! output_local_tmp) {
				if (output_local)
					nih_free (output_local);
				*output = NULL;
				goto enomem;
			}

			output_local = output_local_tmp;
			output_local[output_local_size] = output_local_element;
			output_local[output_local_size + 1] = NULL;

			output_local_size++;
		}

		dbus_message_iter_next (&iter);

		*output = output_local;
	enomem: __attribute__ ((unused));
	} while (! *output);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		nih_free (output_local);
		*output = NULL;
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_list_keys_scm (NihDBusProxy *            proxy,
                         const char *              controller,
                         const char *              cgroup,
                         int                       sockfd,
                         CgmanagerListKeysScmReply handler,
                         NihDBusErrorHandler       error_handler,
                         void *                    data,
                         int                       timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "ListKeysScm");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_ListKeysScm_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_ListKeysScm_notify (DBusPendingCall *   pending_call,
                                                               NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	NihDBusMessage *message;
	DBusError       error;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerListKeysScmReply)pending_data->handler) (pending_data->data, message);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_list_keys_scm_sync (const void *  parent,
                              NihDBusProxy *proxy,
                              const char *  controller,
                              const char *  cgroup,
                              int           sockfd)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusError       error;
	DBusMessage *   reply;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "ListKeysScm");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a int onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_UNIX_FD, &sockfd)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_list_keys (NihDBusProxy *         proxy,
                     const char *           controller,
                     const char *           cgroup,
                     CgmanagerListKeysReply handler,
                     NihDBusErrorHandler    error_handler,
                     void *                 data,
                     int                    timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert ((handler == NULL) || (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "ListKeys");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Handle a fire-and-forget message */
	if (! error_handler) {
		dbus_message_set_no_reply (method_call, TRUE);
		if (! dbus_connection_send (proxy->connection, method_call, NULL)) {
			dbus_message_unref (method_call);
			nih_return_no_memory_error (NULL);
		}

		dbus_message_unref (method_call);
		return (DBusPendingCall *)TRUE;
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_ListKeys_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_ListKeys_notify (DBusPendingCall *   pending_call,
                                                            NihDBusPendingData *pending_data)
{
	DBusMessage *                    reply;
	DBusMessageIter                  iter;
	NihDBusMessage *                 message;
	DBusError                        error;
	CgmanagerListKeysOutputElement **output;
	DBusMessageIter                  output_iter;
	size_t                           output_size;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over its arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		/* Demarshal an array from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_ARRAY) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

		dbus_message_iter_recurse (&iter, &output_iter);

		output_size = 0;
		output = NULL;

		output = nih_alloc (message, sizeof (CgmanagerListKeysOutputElement *));
		if (! output) {
			nih_free (message);
			message = NULL;
			goto enomem;
		}

		output[output_size] = NULL;

		while (dbus_message_iter_get_arg_type (&output_iter) != DBUS_TYPE_INVALID) {
			DBusMessageIter                  output_element_iter;
			const char *                     output_element_item0_dbus;
			char *                           output_element_item0;
			uint32_t                         output_element_item1;
			uint32_t                         output_element_item2;
			uint32_t                         output_element_item3;
			CgmanagerListKeysOutputElement **output_tmp;
			CgmanagerListKeysOutputElement * output_element;

			/* Demarshal a structure from the message */
			if (dbus_message_iter_get_arg_type (&output_iter) != DBUS_TYPE_STRUCT) {
				if (output)
					nih_free (output);
				nih_error_push_context ();
				nih_error_raise (NIH_DBUS_INVALID_ARGS,
				                 _(NIH_DBUS_INVALID_ARGS_STR));
				pending_data->error_handler (pending_data->data, message);
				nih_error_pop_context ();

				nih_free (message);
				dbus_message_unref (reply);
				return;
			}

			dbus_message_iter_recurse (&output_iter, &output_element_iter);

			output_element = nih_new (output, CgmanagerListKeysOutputElement);
			if (! output_element) {
				if (output)
					nih_free (output);
				nih_free (message);
				message = NULL;
				goto enomem;
			}

			/* Demarshal a char * from the message */
			if (dbus_message_iter_get_arg_type (&output_element_iter) != DBUS_TYPE_STRING) {
				nih_free (output_element);
				if (output)
					nih_free (output);
				nih_error_push_context ();
				nih_error_raise (NIH_DBUS_INVALID_ARGS,
				                 _(NIH_DBUS_INVALID_ARGS_STR));
				pending_data->error_handler (pending_data->data, message);
				nih_error_pop_context ();

				nih_free (message);
				dbus_message_unref (reply);
				return;
			}

			dbus_message_iter_get_basic (&output_element_iter, &output_element_item0_dbus);

			output_element_item0 = nih_strdup (output_element, output_element_item0_dbus);
			if (! output_element_item0) {
				nih_free (output_element);
				if (output)
					nih_free (output);
				nih_free (message);
				message = NULL;
				goto enomem;
			}

			dbus_message_iter_next (&output_element_iter);

			output_element->item0 = output_element_item0;

			/* Demarshal a uint32_t from the message */
			if (dbus_message_iter_get_arg_type (&output_element_iter) != DBUS_TYPE_UINT32) {
				nih_free (output_element);
				if (output)
					nih_free (output);
				nih_error_push_context ();
				nih_error_raise (NIH_DBUS_INVALID_ARGS,
				                 _(NIH_DBUS_INVALID_ARGS_STR));
				pending_data->error_handler (pending_data->data, message);
				nih_error_pop_context ();

				nih_free (message);
				dbus_message_unref (reply);
				return;
			}

			dbus_message_iter_get_basic (&output_element_iter, &output_element_item1);

			dbus_message_iter_next (&output_element_iter);

			output_element->item1 = output_element_item1;

			/* Demarshal a uint32_t from the message */
			if (dbus_message_iter_get_arg_type (&output_element_iter) != DBUS_TYPE_UINT32) {
				nih_free (output_element);
				if (output)
					nih_free (output);
				nih_error_push_context ();
				nih_error_raise (NIH_DBUS_INVALID_ARGS,
				                 _(NIH_DBUS_INVALID_ARGS_STR));
				pending_data->error_handler (pending_data->data, message);
				nih_error_pop_context ();

				nih_free (message);
				dbus_message_unref (reply);
				return;
			}

			dbus_message_iter_get_basic (&output_element_iter, &output_element_item2);

			dbus_message_iter_next (&output_element_iter);

			output_element->item2 = output_element_item2;

			/* Demarshal a uint32_t from the message */
			if (dbus_message_iter_get_arg_type (&output_element_iter) != DBUS_TYPE_UINT32) {
				nih_free (output_element);
				if (output)
					nih_free (output);
				nih_error_push_context ();
				nih_error_raise (NIH_DBUS_INVALID_ARGS,
				                 _(NIH_DBUS_INVALID_ARGS_STR));
				pending_data->error_handler (pending_data->data, message);
				nih_error_pop_context ();

				nih_free (message);
				dbus_message_unref (reply);
				return;
			}

			dbus_message_iter_get_basic (&output_element_iter, &output_element_item3);

			dbus_message_iter_next (&output_element_iter);

			output_element->item3 = output_element_item3;

			if (dbus_message_iter_get_arg_type (&output_element_iter) != DBUS_TYPE_INVALID) {
				nih_free (output_element);
				if (output)
					nih_free (output);
				nih_error_push_context ();
				nih_error_raise (NIH_DBUS_INVALID_ARGS,
				                 _(NIH_DBUS_INVALID_ARGS_STR));
				pending_data->error_handler (pending_data->data, message);
				nih_error_pop_context ();

				nih_free (message);
				dbus_message_unref (reply);
				return;
			}

			dbus_message_iter_next (&output_iter);

			if (output_size + 2 > SIZE_MAX / sizeof (CgmanagerListKeysOutputElement *)) {
				if (output)
					nih_free (output);
				nih_error_push_context ();
				nih_error_raise (NIH_DBUS_INVALID_ARGS,
				                 _(NIH_DBUS_INVALID_ARGS_STR));
				pending_data->error_handler (pending_data->data, message);
				nih_error_pop_context ();

				nih_free (message);
				dbus_message_unref (reply);
				return;
			}

			output_tmp = nih_realloc (output, message, sizeof (CgmanagerListKeysOutputElement *) * (output_size + 2));
			if (! output_tmp) {
				if (output)
					nih_free (output);
				nih_free (message);
				message = NULL;
				goto enomem;
			}

			output = output_tmp;
			output[output_size] = output_element;
			output[output_size + 1] = NULL;

			output_size++;
		}

		dbus_message_iter_next (&iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	if (pending_data->handler) {
		nih_error_push_context ();
		((CgmanagerListKeysReply)pending_data->handler) (pending_data->data, message, output);
		nih_error_pop_context ();
	}

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_list_keys_sync (const void *                      parent,
                          NihDBusProxy *                    proxy,
                          const char *                      controller,
                          const char *                      cgroup,
                          CgmanagerListKeysOutputElement ***output)
{
	DBusMessage *                    method_call;
	DBusMessageIter                  iter;
	DBusError                        error;
	DBusMessage *                    reply;
	CgmanagerListKeysOutputElement **output_local;
	DBusMessageIter                  output_local_iter;
	size_t                           output_local_size;

	nih_assert (proxy != NULL);
	nih_assert (controller != NULL);
	nih_assert (cgroup != NULL);
	nih_assert (output != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.linuxcontainers.cgmanager0_0", "ListKeys");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &controller)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Marshal a char * onto the message */
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &cgroup)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the arguments of the reply */
	dbus_message_iter_init (reply, &iter);

	do {
		__label__ enomem;

		/* Demarshal an array from the message */
		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_ARRAY) {
			dbus_message_unref (reply);
			nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
			                  _(NIH_DBUS_INVALID_ARGS_STR));
		}

		dbus_message_iter_recurse (&iter, &output_local_iter);

		output_local_size = 0;
		output_local = NULL;

		output_local = nih_alloc (parent, sizeof (CgmanagerListKeysOutputElement *));
		if (! output_local) {
			*output = NULL;
			goto enomem;
		}

		output_local[output_local_size] = NULL;

		while (dbus_message_iter_get_arg_type (&output_local_iter) != DBUS_TYPE_INVALID) {
			DBusMessageIter                  output_local_element_iter;
			const char *                     output_local_element_item0_dbus;
			char *                           output_local_element_item0;
			uint32_t                         output_local_element_item1;
			uint32_t                         output_local_element_item2;
			uint32_t                         output_local_element_item3;
			CgmanagerListKeysOutputElement **output_local_tmp;
			CgmanagerListKeysOutputElement * output_local_element;

			/* Demarshal a structure from the message */
			if (dbus_message_iter_get_arg_type (&output_local_iter) != DBUS_TYPE_STRUCT) {
				if (output_local)
					nih_free (output_local);
				dbus_message_unref (reply);
				nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
				                  _(NIH_DBUS_INVALID_ARGS_STR));
			}

			dbus_message_iter_recurse (&output_local_iter, &output_local_element_iter);

			output_local_element = nih_new (output_local, CgmanagerListKeysOutputElement);
			if (! output_local_element) {
				if (output_local)
					nih_free (output_local);
				*output = NULL;
				goto enomem;
			}

			/* Demarshal a char * from the message */
			if (dbus_message_iter_get_arg_type (&output_local_element_iter) != DBUS_TYPE_STRING) {
				nih_free (output_local_element);
				if (output_local)
					nih_free (output_local);
				dbus_message_unref (reply);
				nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
				                  _(NIH_DBUS_INVALID_ARGS_STR));
			}

			dbus_message_iter_get_basic (&output_local_element_iter, &output_local_element_item0_dbus);

			output_local_element_item0 = nih_strdup (output_local_element, output_local_element_item0_dbus);
			if (! output_local_element_item0) {
				nih_free (output_local_element);
				if (output_local)
					nih_free (output_local);
				*output = NULL;
				goto enomem;
			}

			dbus_message_iter_next (&output_local_element_iter);

			output_local_element->item0 = output_local_element_item0;

			/* Demarshal a uint32_t from the message */
			if (dbus_message_iter_get_arg_type (&output_local_element_iter) != DBUS_TYPE_UINT32) {
				nih_free (output_local_element);
				if (output_local)
					nih_free (output_local);
				dbus_message_unref (reply);
				nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
				                  _(NIH_DBUS_INVALID_ARGS_STR));
			}

			dbus_message_iter_get_basic (&output_local_element_iter, &output_local_element_item1);

			dbus_message_iter_next (&output_local_element_iter);

			output_local_element->item1 = output_local_element_item1;

			/* Demarshal a uint32_t from the message */
			if (dbus_message_iter_get_arg_type (&output_local_element_iter) != DBUS_TYPE_UINT32) {
				nih_free (output_local_element);
				if (output_local)
					nih_free (output_local);
				dbus_message_unref (reply);
				nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
				                  _(NIH_DBUS_INVALID_ARGS_STR));
			}

			dbus_message_iter_get_basic (&output_local_element_iter, &output_local_element_item2);

			dbus_message_iter_next (&output_local_element_iter);

			output_local_element->item2 = output_local_element_item2;

			/* Demarshal a uint32_t from the message */
			if (dbus_message_iter_get_arg_type (&output_local_element_iter) != DBUS_TYPE_UINT32) {
				nih_free (output_local_element);
				if (output_local)
					nih_free (output_local);
				dbus_message_unref (reply);
				nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
				                  _(NIH_DBUS_INVALID_ARGS_STR));
			}

			dbus_message_iter_get_basic (&output_local_element_iter, &output_local_element_item3);

			dbus_message_iter_next (&output_local_element_iter);

			output_local_element->item3 = output_local_element_item3;

			if (dbus_message_iter_get_arg_type (&output_local_element_iter) != DBUS_TYPE_INVALID) {
				nih_free (output_local_element);
				if (output_local)
					nih_free (output_local);
				dbus_message_unref (reply);
				nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
				                  _(NIH_DBUS_INVALID_ARGS_STR));
			}

			dbus_message_iter_next (&output_local_iter);

			if (output_local_size + 2 > SIZE_MAX / sizeof (CgmanagerListKeysOutputElement *)) {
				if (output_local)
					nih_free (output_local);
				dbus_message_unref (reply);
				nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
				                  _(NIH_DBUS_INVALID_ARGS_STR));
			}

			output_local_tmp = nih_realloc (output_local, parent, sizeof (CgmanagerListKeysOutputElement *) * (output_local_size + 2));
			if (! output_local_tmp) {
				if (output_local)
					nih_free (output_local);
				*output = NULL;
				goto enomem;
			}

			output_local = output_local_tmp;
			output_local[output_local_size] = output_local_element;
			output_local[output_local_size + 1] = NULL;

			output_local_size++;
		}

		dbus_message_iter_next (&iter);

		*output = output_local;
	enomem: __attribute__ ((unused));
	} while (! *output);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		nih_free (output_local);
		*output = NULL;
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_get_api_version (NihDBusProxy *              proxy,
                           CgmanagerGetApiVersionReply handler,
                           NihDBusErrorHandler         error_handler,
                           void *                      data,
                           int                         timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;
	const char *        interface;
	const char *        property;

	nih_assert (proxy != NULL);
	nih_assert ((handler != NULL) && (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.freedesktop.DBus.Properties", "Get");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	interface = "org.linuxcontainers.cgmanager0_0";
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &interface)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	property = "api_version";
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &property)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_api_version_get_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_api_version_get_notify (DBusPendingCall *   pending_call,
                                                                   NihDBusPendingData *pending_data)
{
	DBusMessage *   reply;
	DBusMessageIter iter;
	DBusMessageIter variter;
	NihDBusMessage *message;
	DBusError       error;
	int32_t         value;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	do {
		__label__ enomem;

		/* Create a message context for the reply, and iterate
		 * over and recurse into the arguments.
		 */
		message = nih_dbus_message_new (pending_data, pending_data->connection, reply);
		if (! message)
			goto enomem;

		dbus_message_iter_init (message->message, &iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_VARIANT) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

		dbus_message_iter_recurse (&iter, &variter);

		/* Demarshal a int32_t from the message */
		if (dbus_message_iter_get_arg_type (&variter) != DBUS_TYPE_INT32) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

		dbus_message_iter_get_basic (&variter, &value);

		dbus_message_iter_next (&variter);

		dbus_message_iter_next (&iter);

		if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

	enomem: __attribute__ ((unused));
	} while (! message);

	/* Call the handler function */
	nih_error_push_context ();
	((CgmanagerGetApiVersionReply)pending_data->handler) (pending_data->data, message, value);
	nih_error_pop_context ();

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_get_api_version_sync (const void *  parent,
                                NihDBusProxy *proxy,
                                int32_t *     value)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusMessageIter variter;
	DBusError       error;
	DBusMessage *   reply;
	const char *    interface;
	const char *    property;
	int32_t         local;

	nih_assert (proxy != NULL);
	nih_assert (value != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.freedesktop.DBus.Properties", "Get");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	interface = "org.linuxcontainers.cgmanager0_0";
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &interface)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	property = "api_version";
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &property)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the method arguments, recursing into the variant */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_VARIANT) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_iter_recurse (&iter, &variter);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	do {
		__label__ enomem;

		/* Demarshal a int32_t from the message */
		if (dbus_message_iter_get_arg_type (&variter) != DBUS_TYPE_INT32) {
			dbus_message_unref (reply);
			nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
			                  _(NIH_DBUS_INVALID_ARGS_STR));
		}

		dbus_message_iter_get_basic (&variter, &local);

		dbus_message_iter_next (&variter);

		*value = local;
	enomem: __attribute__ ((unused));
	} while (! *value);

	dbus_message_unref (reply);

	return 0;
}


DBusPendingCall *
cgmanager_get_all (NihDBusProxy *       proxy,
                   CgmanagerGetAllReply handler,
                   NihDBusErrorHandler  error_handler,
                   void *               data,
                   int                  timeout)
{
	DBusMessage *       method_call;
	DBusMessageIter     iter;
	DBusPendingCall *   pending_call;
	NihDBusPendingData *pending_data;
	const char *        interface;

	nih_assert (proxy != NULL);
	nih_assert ((handler != NULL) && (error_handler != NULL));

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.freedesktop.DBus.Properties", "GetAll");
	if (! method_call)
		nih_return_no_memory_error (NULL);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	interface = "org.linuxcontainers.cgmanager0_0";
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &interface)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	/* Send the message and set up the reply notification. */
	pending_data = nih_dbus_pending_data_new (NULL, proxy->connection,
	                                          (NihDBusReplyHandler)handler,
	                                          error_handler, data);
	if (! pending_data) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (NULL);
	}

	pending_call = NULL;
	if (! dbus_connection_send_with_reply (proxy->connection, method_call,
	                                       &pending_call, timeout)) {
		dbus_message_unref (method_call);
		nih_free (pending_data);
		nih_return_no_memory_error (NULL);
	}

	dbus_message_unref (method_call);

	if (! pending_call) {
		nih_dbus_error_raise (DBUS_ERROR_DISCONNECTED,
		                      "Connection is closed");
		nih_free (pending_data);
		return NULL;
	}

	NIH_MUST (dbus_pending_call_set_notify (pending_call, (DBusPendingCallNotifyFunction)cgmanager_org_linuxcontainers_cgmanager0_0_get_all_notify,
	                                        pending_data, (DBusFreeFunction)nih_discard));

	return pending_call;
}

static void
cgmanager_org_linuxcontainers_cgmanager0_0_get_all_notify (DBusPendingCall *   pending_call,
                                                           NihDBusPendingData *pending_data)
{
	DBusMessage *        reply;
	DBusMessageIter      iter;
	DBusMessageIter      arrayiter;
	DBusMessageIter      dictiter;
	DBusMessageIter      variter;
	NihDBusMessage *     message;
	DBusError            error;
	const char *         property;
	CgmanagerProperties *properties;
	size_t               property_count;
	int32_t              api_version;

	nih_assert (pending_call != NULL);
	nih_assert (pending_data != NULL);

	nih_assert (dbus_pending_call_get_completed (pending_call));

	/* Steal the reply from the pending call. */
	reply = dbus_pending_call_steal_reply (pending_call);
	nih_assert (reply != NULL);

	/* Handle error replies */
	if (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_ERROR) {
		message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

		dbus_error_init (&error);
		dbus_set_error_from_message (&error, message->message);

		nih_error_push_context ();
		nih_dbus_error_raise (error.name, error.message);
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		dbus_error_free (&error);
		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	nih_assert (dbus_message_get_type (reply) == DBUS_MESSAGE_TYPE_METHOD_RETURN);

	/* Create a message context for the reply, and iterate
	 * over and recurse into the arguments.
	 */
	message = NIH_MUST (nih_dbus_message_new (pending_data, pending_data->connection, reply));

	/* Iterate the method arguments, recursing into the array */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_ARRAY) {
		nih_error_push_context ();
		nih_error_raise (NIH_DBUS_INVALID_ARGS,
		                 _(NIH_DBUS_INVALID_ARGS_STR));
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	properties = NIH_MUST (nih_new (message, CgmanagerProperties));
	property_count = 0;

	dbus_message_iter_recurse (&iter, &arrayiter);

	while (dbus_message_iter_get_arg_type (&arrayiter) != DBUS_TYPE_INVALID) {
		__label__ enomem;

		if (dbus_message_iter_get_arg_type (&arrayiter) != DBUS_TYPE_DICT_ENTRY) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

		dbus_message_iter_recurse (&arrayiter, &dictiter);

		if (dbus_message_iter_get_arg_type (&dictiter) != DBUS_TYPE_STRING) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

		dbus_message_iter_get_basic (&dictiter, &property);

		dbus_message_iter_next (&dictiter);

		if (dbus_message_iter_get_arg_type (&dictiter) != DBUS_TYPE_VARIANT) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

		dbus_message_iter_recurse (&dictiter, &variter);

		if (! strcmp (property, "api_version")) {
			/* Demarshal a int32_t from the message */
			if (dbus_message_iter_get_arg_type (&variter) != DBUS_TYPE_INT32) {
				nih_error_push_context ();
				nih_error_raise (NIH_DBUS_INVALID_ARGS,
				                 _(NIH_DBUS_INVALID_ARGS_STR));
				pending_data->error_handler (pending_data->data, message);
				nih_error_pop_context ();

				nih_free (message);
				dbus_message_unref (reply);
				return;
			}

			dbus_message_iter_get_basic (&variter, &api_version);

			dbus_message_iter_next (&variter);

			properties->api_version = api_version;

			nih_assert (++property_count);
		}

		dbus_message_iter_next (&dictiter);

		if (dbus_message_iter_get_arg_type (&dictiter) != DBUS_TYPE_INVALID) {
			nih_error_push_context ();
			nih_error_raise (NIH_DBUS_INVALID_ARGS,
			                 _(NIH_DBUS_INVALID_ARGS_STR));
			pending_data->error_handler (pending_data->data, message);
			nih_error_pop_context ();

			nih_free (message);
			dbus_message_unref (reply);
			return;
		}

		dbus_message_iter_next (&arrayiter);
	enomem: __attribute__ ((unused));
	}

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		nih_error_push_context ();
		nih_error_raise (NIH_DBUS_INVALID_ARGS,
		                 _(NIH_DBUS_INVALID_ARGS_STR));
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	if (property_count < 1) {
		nih_error_push_context ();
		nih_error_raise (NIH_DBUS_INVALID_ARGS,
		                 _(NIH_DBUS_INVALID_ARGS_STR));
		pending_data->error_handler (pending_data->data, message);
		nih_error_pop_context ();

		nih_free (message);
		dbus_message_unref (reply);
		return;
	}

	/* Call the handler function */
	nih_error_push_context ();
	((CgmanagerGetAllReply)pending_data->handler) (pending_data->data, message, properties);
	nih_error_pop_context ();

	nih_free (message);
	dbus_message_unref (reply);
}

int
cgmanager_get_all_sync (const void *          parent,
                        NihDBusProxy *        proxy,
                        CgmanagerProperties **properties)
{
	DBusMessage *   method_call;
	DBusMessageIter iter;
	DBusMessageIter arrayiter;
	DBusMessageIter dictiter;
	DBusMessageIter variter;
	DBusError       error;
	DBusMessage *   reply;
	size_t          property_count;
	const char *    interface;
	const char *    property;
	int32_t         api_version;

	nih_assert (proxy != NULL);
	nih_assert (properties != NULL);

	/* Construct the method call message. */
	method_call = dbus_message_new_method_call (proxy->name, proxy->path, "org.freedesktop.DBus.Properties", "GetAll");
	if (! method_call)
		nih_return_no_memory_error (-1);

	dbus_message_set_auto_start (method_call, proxy->auto_start);

	dbus_message_iter_init_append (method_call, &iter);

	interface = "org.linuxcontainers.cgmanager0_0";
	if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &interface)) {
		dbus_message_unref (method_call);
		nih_return_no_memory_error (-1);
	}

	/* Send the message, and wait for the reply. */
	dbus_error_init (&error);

	reply = dbus_connection_send_with_reply_and_block (proxy->connection, method_call, -1, &error);
	if (! reply) {
		dbus_message_unref (method_call);

		if (dbus_error_has_name (&error, DBUS_ERROR_NO_MEMORY)) {
			nih_error_raise_no_memory ();
		} else {
			nih_dbus_error_raise (error.name, error.message);
		}

		dbus_error_free (&error);
		return -1;
	}

	dbus_message_unref (method_call);

	/* Iterate the method arguments, recursing into the array */
	dbus_message_iter_init (reply, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_ARRAY) {
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	*properties = NIH_MUST (nih_new (parent, CgmanagerProperties));
	property_count = 0;

	dbus_message_iter_recurse (&iter, &arrayiter);

	while (dbus_message_iter_get_arg_type (&arrayiter) != DBUS_TYPE_INVALID) {
		__label__ enomem;

		if (dbus_message_iter_get_arg_type (&arrayiter) != DBUS_TYPE_DICT_ENTRY) {
			nih_free (*properties);
			*properties = NULL;
			dbus_message_unref (reply);
			nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
			                  _(NIH_DBUS_INVALID_ARGS_STR));
		}

		dbus_message_iter_recurse (&arrayiter, &dictiter);

		if (dbus_message_iter_get_arg_type (&dictiter) != DBUS_TYPE_STRING) {
			nih_free (*properties);
			*properties = NULL;
			dbus_message_unref (reply);
			nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
			                  _(NIH_DBUS_INVALID_ARGS_STR));
		}

		dbus_message_iter_get_basic (&dictiter, &property);

		dbus_message_iter_next (&dictiter);

		if (dbus_message_iter_get_arg_type (&dictiter) != DBUS_TYPE_VARIANT) {
			nih_free (*properties);
			*properties = NULL;
			dbus_message_unref (reply);
			nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
			                  _(NIH_DBUS_INVALID_ARGS_STR));
		}

		dbus_message_iter_recurse (&dictiter, &variter);

		if (! strcmp (property, "api_version")) {
			/* Demarshal a int32_t from the message */
			if (dbus_message_iter_get_arg_type (&variter) != DBUS_TYPE_INT32) {
				nih_free (*properties);
				*properties = NULL;
				dbus_message_unref (reply);
				nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
				                  _(NIH_DBUS_INVALID_ARGS_STR));
			}

			dbus_message_iter_get_basic (&variter, &api_version);

			dbus_message_iter_next (&variter);

			(*properties)->api_version = api_version;

			nih_assert (++property_count);
		}

		dbus_message_iter_next (&dictiter);

		if (dbus_message_iter_get_arg_type (&dictiter) != DBUS_TYPE_INVALID) {
			nih_free (*properties);
			*properties = NULL;
			dbus_message_unref (reply);
			nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
			                  _(NIH_DBUS_INVALID_ARGS_STR));
		}

		dbus_message_iter_next (&arrayiter);
	enomem: __attribute__ ((unused));
	}

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		nih_free (*properties);
		*properties = NULL;
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	if (property_count < 1) {
		nih_free (*properties);
		*properties = NULL;
		dbus_message_unref (reply);
		nih_return_error (-1, NIH_DBUS_INVALID_ARGS,
		                  _(NIH_DBUS_INVALID_ARGS_STR));
	}

	dbus_message_unref (reply);

	return 0;
}
