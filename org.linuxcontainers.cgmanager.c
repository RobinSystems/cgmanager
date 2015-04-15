/* cgmanager
 *
 * org.linuxcontainers.cgmanager.c - auto-generated D-Bus bindings
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
#include <nih-dbus/dbus_object.h>
#include <nih-dbus/errors.h>

#include "org.linuxcontainers.cgmanager.h"


/* Prototypes for static functions */
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_Ping_method                 (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupScm_method      (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroup_method         (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbsScm_method   (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbs_method      (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_CreateScm_method            (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_Create_method               (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_ChownScm_method             (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_Chown_method                (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_ChmodScm_method             (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_Chmod_method                (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_MovePidScm_method           (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_MovePid_method              (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbsScm_method        (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbs_method           (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_GetValueScm_method          (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_GetValue_method             (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_SetValueScm_method          (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_SetValue_method             (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_RemoveScm_method            (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_Remove_method               (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksScm_method          (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_GetTasks_method             (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursiveScm_method (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursive_method    (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_ListChildrenScm_method      (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_ListChildren_method         (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmptyScm_method     (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmpty_method        (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_PruneScm_method             (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_Prune_method                (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_ListControllers_method      (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_ListKeysScm_method          (NihDBusObject *object, NihDBusMessage *message);
static DBusHandlerResult cgmanager_org_linuxcontainers_cgmanager0_0_ListKeys_method             (NihDBusObject *object, NihDBusMessage *message);
static int               cgmanager_org_linuxcontainers_cgmanager0_0_api_version_get             (NihDBusObject *object, NihDBusMessage *message, DBusMessageIter *iter);


/* Prototypes for externally implemented handler functions */
extern int cgmanager_ping                    (void *data, NihDBusMessage *message, int32_t junk)
	__attribute__ ((warn_unused_result));
extern int cgmanager_get_pid_cgroup_scm      (void *data, NihDBusMessage *message, const char *controller, int sockfd)
	__attribute__ ((warn_unused_result));
extern int cgmanager_get_pid_cgroup          (void *data, NihDBusMessage *message, const char *controller, int32_t pid, char **output)
	__attribute__ ((warn_unused_result));
extern int cgmanager_get_pid_cgroup_abs_scm  (void *data, NihDBusMessage *message, const char *controller, int sockfd)
	__attribute__ ((warn_unused_result));
extern int cgmanager_get_pid_cgroup_abs      (void *data, NihDBusMessage *message, const char *controller, int32_t pid, char **output)
	__attribute__ ((warn_unused_result));
extern int cgmanager_create_scm              (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int sockfd)
	__attribute__ ((warn_unused_result));
extern int cgmanager_create                  (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int32_t *existed)
	__attribute__ ((warn_unused_result));
extern int cgmanager_chown_scm               (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int sockfd)
	__attribute__ ((warn_unused_result));
extern int cgmanager_chown                   (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int32_t uid, int32_t gid)
	__attribute__ ((warn_unused_result));
extern int cgmanager_chmod_scm               (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, const char *file, int32_t mode, int sockfd)
	__attribute__ ((warn_unused_result));
extern int cgmanager_chmod                   (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, const char *file, int32_t mode)
	__attribute__ ((warn_unused_result));
extern int cgmanager_move_pid_scm            (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int sockfd)
	__attribute__ ((warn_unused_result));
extern int cgmanager_move_pid                (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int32_t pid)
	__attribute__ ((warn_unused_result));
extern int cgmanager_move_pid_abs_scm        (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int sockfd)
	__attribute__ ((warn_unused_result));
extern int cgmanager_move_pid_abs            (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int32_t pid)
	__attribute__ ((warn_unused_result));
extern int cgmanager_get_value_scm           (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, const char *key, int sockfd)
	__attribute__ ((warn_unused_result));
extern int cgmanager_get_value               (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, const char *key, char **value)
	__attribute__ ((warn_unused_result));
extern int cgmanager_set_value_scm           (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, const char *key, const char *value, int sockfd)
	__attribute__ ((warn_unused_result));
extern int cgmanager_set_value               (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, const char *key, const char *value)
	__attribute__ ((warn_unused_result));
extern int cgmanager_remove_scm              (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int32_t recursive, int sockfd)
	__attribute__ ((warn_unused_result));
extern int cgmanager_remove                  (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int32_t recursive, int32_t *existed)
	__attribute__ ((warn_unused_result));
extern int cgmanager_get_tasks_scm           (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int sockfd)
	__attribute__ ((warn_unused_result));
extern int cgmanager_get_tasks               (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int32_t **output, size_t *output_len)
	__attribute__ ((warn_unused_result));
extern int cgmanager_get_tasks_recursive_scm (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int sockfd)
	__attribute__ ((warn_unused_result));
extern int cgmanager_get_tasks_recursive     (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int32_t **output, size_t *output_len)
	__attribute__ ((warn_unused_result));
extern int cgmanager_list_children_scm       (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int sockfd)
	__attribute__ ((warn_unused_result));
extern int cgmanager_list_children           (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, char ***output)
	__attribute__ ((warn_unused_result));
extern int cgmanager_remove_on_empty_scm     (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int sockfd)
	__attribute__ ((warn_unused_result));
extern int cgmanager_remove_on_empty         (void *data, NihDBusMessage *message, const char *controller, const char *cgroup)
	__attribute__ ((warn_unused_result));
extern int cgmanager_prune_scm               (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int sockfd)
	__attribute__ ((warn_unused_result));
extern int cgmanager_prune                   (void *data, NihDBusMessage *message, const char *controller, const char *cgroup)
	__attribute__ ((warn_unused_result));
extern int cgmanager_list_controllers        (void *data, NihDBusMessage *message, char ***output)
	__attribute__ ((warn_unused_result));
extern int cgmanager_list_keys_scm           (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, int sockfd)
	__attribute__ ((warn_unused_result));
extern int cgmanager_list_keys               (void *data, NihDBusMessage *message, const char *controller, const char *cgroup, CgmanagerListKeysOutputElement ***output)
	__attribute__ ((warn_unused_result));
extern int cgmanager_get_api_version         (void *data, NihDBusMessage *message, int32_t *value)
	__attribute__ ((warn_unused_result));


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
	{ "Ping",                 cgmanager_org_linuxcontainers_cgmanager0_0_Ping_method_args,                 cgmanager_org_linuxcontainers_cgmanager0_0_Ping_method                 },
	{ "GetPidCgroupScm",      cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupScm_method_args,      cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupScm_method      },
	{ "GetPidCgroup",         cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroup_method_args,         cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroup_method         },
	{ "GetPidCgroupAbsScm",   cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbsScm_method_args,   cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbsScm_method   },
	{ "GetPidCgroupAbs",      cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbs_method_args,      cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbs_method      },
	{ "CreateScm",            cgmanager_org_linuxcontainers_cgmanager0_0_CreateScm_method_args,            cgmanager_org_linuxcontainers_cgmanager0_0_CreateScm_method            },
	{ "Create",               cgmanager_org_linuxcontainers_cgmanager0_0_Create_method_args,               cgmanager_org_linuxcontainers_cgmanager0_0_Create_method               },
	{ "ChownScm",             cgmanager_org_linuxcontainers_cgmanager0_0_ChownScm_method_args,             cgmanager_org_linuxcontainers_cgmanager0_0_ChownScm_method             },
	{ "Chown",                cgmanager_org_linuxcontainers_cgmanager0_0_Chown_method_args,                cgmanager_org_linuxcontainers_cgmanager0_0_Chown_method                },
	{ "ChmodScm",             cgmanager_org_linuxcontainers_cgmanager0_0_ChmodScm_method_args,             cgmanager_org_linuxcontainers_cgmanager0_0_ChmodScm_method             },
	{ "Chmod",                cgmanager_org_linuxcontainers_cgmanager0_0_Chmod_method_args,                cgmanager_org_linuxcontainers_cgmanager0_0_Chmod_method                },
	{ "MovePidScm",           cgmanager_org_linuxcontainers_cgmanager0_0_MovePidScm_method_args,           cgmanager_org_linuxcontainers_cgmanager0_0_MovePidScm_method           },
	{ "MovePid",              cgmanager_org_linuxcontainers_cgmanager0_0_MovePid_method_args,              cgmanager_org_linuxcontainers_cgmanager0_0_MovePid_method              },
	{ "MovePidAbsScm",        cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbsScm_method_args,        cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbsScm_method        },
	{ "MovePidAbs",           cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbs_method_args,           cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbs_method           },
	{ "GetValueScm",          cgmanager_org_linuxcontainers_cgmanager0_0_GetValueScm_method_args,          cgmanager_org_linuxcontainers_cgmanager0_0_GetValueScm_method          },
	{ "GetValue",             cgmanager_org_linuxcontainers_cgmanager0_0_GetValue_method_args,             cgmanager_org_linuxcontainers_cgmanager0_0_GetValue_method             },
	{ "SetValueScm",          cgmanager_org_linuxcontainers_cgmanager0_0_SetValueScm_method_args,          cgmanager_org_linuxcontainers_cgmanager0_0_SetValueScm_method          },
	{ "SetValue",             cgmanager_org_linuxcontainers_cgmanager0_0_SetValue_method_args,             cgmanager_org_linuxcontainers_cgmanager0_0_SetValue_method             },
	{ "RemoveScm",            cgmanager_org_linuxcontainers_cgmanager0_0_RemoveScm_method_args,            cgmanager_org_linuxcontainers_cgmanager0_0_RemoveScm_method            },
	{ "Remove",               cgmanager_org_linuxcontainers_cgmanager0_0_Remove_method_args,               cgmanager_org_linuxcontainers_cgmanager0_0_Remove_method               },
	{ "GetTasksScm",          cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksScm_method_args,          cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksScm_method          },
	{ "GetTasks",             cgmanager_org_linuxcontainers_cgmanager0_0_GetTasks_method_args,             cgmanager_org_linuxcontainers_cgmanager0_0_GetTasks_method             },
	{ "GetTasksRecursiveScm", cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursiveScm_method_args, cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursiveScm_method },
	{ "GetTasksRecursive",    cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursive_method_args,    cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursive_method    },
	{ "ListChildrenScm",      cgmanager_org_linuxcontainers_cgmanager0_0_ListChildrenScm_method_args,      cgmanager_org_linuxcontainers_cgmanager0_0_ListChildrenScm_method      },
	{ "ListChildren",         cgmanager_org_linuxcontainers_cgmanager0_0_ListChildren_method_args,         cgmanager_org_linuxcontainers_cgmanager0_0_ListChildren_method         },
	{ "RemoveOnEmptyScm",     cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmptyScm_method_args,     cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmptyScm_method     },
	{ "RemoveOnEmpty",        cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmpty_method_args,        cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmpty_method        },
	{ "PruneScm",             cgmanager_org_linuxcontainers_cgmanager0_0_PruneScm_method_args,             cgmanager_org_linuxcontainers_cgmanager0_0_PruneScm_method             },
	{ "Prune",                cgmanager_org_linuxcontainers_cgmanager0_0_Prune_method_args,                cgmanager_org_linuxcontainers_cgmanager0_0_Prune_method                },
	{ "ListControllers",      cgmanager_org_linuxcontainers_cgmanager0_0_ListControllers_method_args,      cgmanager_org_linuxcontainers_cgmanager0_0_ListControllers_method      },
	{ "ListKeysScm",          cgmanager_org_linuxcontainers_cgmanager0_0_ListKeysScm_method_args,          cgmanager_org_linuxcontainers_cgmanager0_0_ListKeysScm_method          },
	{ "ListKeys",             cgmanager_org_linuxcontainers_cgmanager0_0_ListKeys_method_args,             cgmanager_org_linuxcontainers_cgmanager0_0_ListKeys_method             },
	{ NULL }
};

static const NihDBusSignal cgmanager_org_linuxcontainers_cgmanager0_0_signals[] = {
	{ NULL }
};

static const NihDBusProperty cgmanager_org_linuxcontainers_cgmanager0_0_properties[] = {
	{ "api_version", "i", NIH_DBUS_READ, cgmanager_org_linuxcontainers_cgmanager0_0_api_version_get, NULL },
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


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_Ping_method (NihDBusObject * object,
                                                        NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	int32_t         junk;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a int32_t from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INT32) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Ping method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &junk);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Ping method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_ping (object->data, message, junk) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupScm_method (NihDBusObject * object,
                                                                   NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	int             sockfd;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetPidCgroupScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_UNIX_FD) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetPidCgroupScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &sockfd);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetPidCgroupScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_get_pid_cgroup_scm (object->data, message, controller, sockfd) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroup_method (NihDBusObject * object,
                                                                NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	int32_t         pid;
	char *          output;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetPidCgroup method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int32_t from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INT32) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetPidCgroup method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &pid);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetPidCgroup method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_get_pid_cgroup (object->data, message, controller, pid, &output) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);

		/* Marshal a char * onto the message */
		if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &output)) {
			dbus_message_unref (reply);
			reply = NULL;
			goto enomem;
		}
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbsScm_method (NihDBusObject * object,
                                                                      NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	int             sockfd;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetPidCgroupAbsScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_UNIX_FD) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetPidCgroupAbsScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &sockfd);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetPidCgroupAbsScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_get_pid_cgroup_abs_scm (object->data, message, controller, sockfd) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_GetPidCgroupAbs_method (NihDBusObject * object,
                                                                   NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	int32_t         pid;
	char *          output;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetPidCgroupAbs method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int32_t from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INT32) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetPidCgroupAbs method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &pid);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetPidCgroupAbs method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_get_pid_cgroup_abs (object->data, message, controller, pid, &output) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);

		/* Marshal a char * onto the message */
		if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &output)) {
			dbus_message_unref (reply);
			reply = NULL;
			goto enomem;
		}
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_CreateScm_method (NihDBusObject * object,
                                                             NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int             sockfd;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to CreateScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to CreateScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_UNIX_FD) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to CreateScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &sockfd);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to CreateScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_create_scm (object->data, message, controller, cgroup, sockfd) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_Create_method (NihDBusObject * object,
                                                          NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int32_t         existed;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Create method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Create method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Create method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_create (object->data, message, controller, cgroup, &existed) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);

		/* Marshal a int32_t onto the message */
		if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &existed)) {
			dbus_message_unref (reply);
			reply = NULL;
			goto enomem;
		}
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_ChownScm_method (NihDBusObject * object,
                                                            NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int             sockfd;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ChownScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ChownScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_UNIX_FD) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ChownScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &sockfd);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ChownScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_chown_scm (object->data, message, controller, cgroup, sockfd) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_Chown_method (NihDBusObject * object,
                                                         NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int32_t         uid;
	int32_t         gid;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Chown method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Chown method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int32_t from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INT32) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Chown method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &uid);

	dbus_message_iter_next (&iter);

	/* Demarshal a int32_t from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INT32) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Chown method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &gid);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Chown method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_chown (object->data, message, controller, cgroup, uid, gid) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_ChmodScm_method (NihDBusObject * object,
                                                            NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	char *          file;
	const char *    file_dbus;
	int32_t         mode;
	int             sockfd;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ChmodScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ChmodScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ChmodScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &file_dbus);

	file = nih_strdup (message, file_dbus);
	if (! file) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int32_t from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INT32) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ChmodScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &mode);

	dbus_message_iter_next (&iter);

	/* Demarshal a int from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_UNIX_FD) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ChmodScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &sockfd);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ChmodScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_chmod_scm (object->data, message, controller, cgroup, file, mode, sockfd) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_Chmod_method (NihDBusObject * object,
                                                         NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	char *          file;
	const char *    file_dbus;
	int32_t         mode;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Chmod method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Chmod method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Chmod method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &file_dbus);

	file = nih_strdup (message, file_dbus);
	if (! file) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int32_t from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INT32) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Chmod method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &mode);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Chmod method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_chmod (object->data, message, controller, cgroup, file, mode) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_MovePidScm_method (NihDBusObject * object,
                                                              NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int             sockfd;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to MovePidScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to MovePidScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_UNIX_FD) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to MovePidScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &sockfd);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to MovePidScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_move_pid_scm (object->data, message, controller, cgroup, sockfd) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_MovePid_method (NihDBusObject * object,
                                                           NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int32_t         pid;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to MovePid method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to MovePid method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int32_t from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INT32) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to MovePid method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &pid);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to MovePid method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_move_pid (object->data, message, controller, cgroup, pid) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbsScm_method (NihDBusObject * object,
                                                                 NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int             sockfd;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to MovePidAbsScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to MovePidAbsScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_UNIX_FD) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to MovePidAbsScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &sockfd);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to MovePidAbsScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_move_pid_abs_scm (object->data, message, controller, cgroup, sockfd) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_MovePidAbs_method (NihDBusObject * object,
                                                              NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int32_t         pid;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to MovePidAbs method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to MovePidAbs method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int32_t from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INT32) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to MovePidAbs method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &pid);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to MovePidAbs method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_move_pid_abs (object->data, message, controller, cgroup, pid) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_GetValueScm_method (NihDBusObject * object,
                                                               NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	char *          key;
	const char *    key_dbus;
	int             sockfd;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetValueScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetValueScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetValueScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &key_dbus);

	key = nih_strdup (message, key_dbus);
	if (! key) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_UNIX_FD) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetValueScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &sockfd);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetValueScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_get_value_scm (object->data, message, controller, cgroup, key, sockfd) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_GetValue_method (NihDBusObject * object,
                                                            NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	char *          key;
	const char *    key_dbus;
	char *          value;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetValue method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetValue method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetValue method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &key_dbus);

	key = nih_strdup (message, key_dbus);
	if (! key) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetValue method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_get_value (object->data, message, controller, cgroup, key, &value) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);

		/* Marshal a char * onto the message */
		if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_STRING, &value)) {
			dbus_message_unref (reply);
			reply = NULL;
			goto enomem;
		}
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_SetValueScm_method (NihDBusObject * object,
                                                               NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	char *          key;
	const char *    key_dbus;
	char *          value;
	const char *    value_dbus;
	int             sockfd;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to SetValueScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to SetValueScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to SetValueScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &key_dbus);

	key = nih_strdup (message, key_dbus);
	if (! key) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to SetValueScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &value_dbus);

	value = nih_strdup (message, value_dbus);
	if (! value) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_UNIX_FD) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to SetValueScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &sockfd);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to SetValueScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_set_value_scm (object->data, message, controller, cgroup, key, value, sockfd) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_SetValue_method (NihDBusObject * object,
                                                            NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	char *          key;
	const char *    key_dbus;
	char *          value;
	const char *    value_dbus;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to SetValue method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to SetValue method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to SetValue method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &key_dbus);

	key = nih_strdup (message, key_dbus);
	if (! key) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to SetValue method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &value_dbus);

	value = nih_strdup (message, value_dbus);
	if (! value) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to SetValue method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_set_value (object->data, message, controller, cgroup, key, value) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_RemoveScm_method (NihDBusObject * object,
                                                             NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int32_t         recursive;
	int             sockfd;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to RemoveScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to RemoveScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int32_t from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INT32) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to RemoveScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &recursive);

	dbus_message_iter_next (&iter);

	/* Demarshal a int from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_UNIX_FD) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to RemoveScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &sockfd);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to RemoveScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_remove_scm (object->data, message, controller, cgroup, recursive, sockfd) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_Remove_method (NihDBusObject * object,
                                                          NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int32_t         recursive;
	int32_t         existed;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Remove method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Remove method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int32_t from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INT32) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Remove method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &recursive);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Remove method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_remove (object->data, message, controller, cgroup, recursive, &existed) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);

		/* Marshal a int32_t onto the message */
		if (! dbus_message_iter_append_basic (&iter, DBUS_TYPE_INT32, &existed)) {
			dbus_message_unref (reply);
			reply = NULL;
			goto enomem;
		}
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksScm_method (NihDBusObject * object,
                                                               NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int             sockfd;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetTasksScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetTasksScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_UNIX_FD) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetTasksScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &sockfd);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetTasksScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_get_tasks_scm (object->data, message, controller, cgroup, sockfd) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_GetTasks_method (NihDBusObject * object,
                                                            NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int32_t *       output;
	size_t          output_len;
	DBusMessageIter output_iter;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetTasks method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetTasks method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetTasks method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_get_tasks (object->data, message, controller, cgroup, &output, &output_len) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);

		/* Marshal an array onto the message */
		if (! dbus_message_iter_open_container (&iter, DBUS_TYPE_ARRAY, "i", &output_iter)) {
			dbus_message_unref (reply);
			reply = NULL;
			goto enomem;
		}

		for (size_t output_i = 0; output_i < output_len; output_i++) {
			int32_t output_element;

			output_element = output[output_i];

			/* Marshal a int32_t onto the message */
			if (! dbus_message_iter_append_basic (&output_iter, DBUS_TYPE_INT32, &output_element)) {
				dbus_message_iter_abandon_container (&iter, &output_iter);
				dbus_message_unref (reply);
				reply = NULL;
				goto enomem;
			}
		}

		if (! dbus_message_iter_close_container (&iter, &output_iter)) {
			dbus_message_unref (reply);
			reply = NULL;
			goto enomem;
		}
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursiveScm_method (NihDBusObject * object,
                                                                        NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int             sockfd;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetTasksRecursiveScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetTasksRecursiveScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_UNIX_FD) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetTasksRecursiveScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &sockfd);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetTasksRecursiveScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_get_tasks_recursive_scm (object->data, message, controller, cgroup, sockfd) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_GetTasksRecursive_method (NihDBusObject * object,
                                                                     NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int32_t *       output;
	size_t          output_len;
	DBusMessageIter output_iter;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetTasksRecursive method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetTasksRecursive method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to GetTasksRecursive method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_get_tasks_recursive (object->data, message, controller, cgroup, &output, &output_len) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);

		/* Marshal an array onto the message */
		if (! dbus_message_iter_open_container (&iter, DBUS_TYPE_ARRAY, "i", &output_iter)) {
			dbus_message_unref (reply);
			reply = NULL;
			goto enomem;
		}

		for (size_t output_i = 0; output_i < output_len; output_i++) {
			int32_t output_element;

			output_element = output[output_i];

			/* Marshal a int32_t onto the message */
			if (! dbus_message_iter_append_basic (&output_iter, DBUS_TYPE_INT32, &output_element)) {
				dbus_message_iter_abandon_container (&iter, &output_iter);
				dbus_message_unref (reply);
				reply = NULL;
				goto enomem;
			}
		}

		if (! dbus_message_iter_close_container (&iter, &output_iter)) {
			dbus_message_unref (reply);
			reply = NULL;
			goto enomem;
		}
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_ListChildrenScm_method (NihDBusObject * object,
                                                                   NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int             sockfd;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ListChildrenScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ListChildrenScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_UNIX_FD) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ListChildrenScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &sockfd);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ListChildrenScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_list_children_scm (object->data, message, controller, cgroup, sockfd) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_ListChildren_method (NihDBusObject * object,
                                                                NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	char **         output;
	DBusMessageIter output_iter;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ListChildren method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ListChildren method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ListChildren method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_list_children (object->data, message, controller, cgroup, &output) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);

		/* Marshal an array onto the message */
		if (! dbus_message_iter_open_container (&iter, DBUS_TYPE_ARRAY, "s", &output_iter)) {
			dbus_message_unref (reply);
			reply = NULL;
			goto enomem;
		}

		if (output) {
			for (size_t output_i = 0; output[output_i]; output_i++) {
				const char *output_element;

				output_element = output[output_i];

				/* Marshal a char * onto the message */
				if (! dbus_message_iter_append_basic (&output_iter, DBUS_TYPE_STRING, &output_element)) {
					dbus_message_iter_abandon_container (&iter, &output_iter);
					dbus_message_unref (reply);
					reply = NULL;
					goto enomem;
				}
			}
		}

		if (! dbus_message_iter_close_container (&iter, &output_iter)) {
			dbus_message_unref (reply);
			reply = NULL;
			goto enomem;
		}
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmptyScm_method (NihDBusObject * object,
                                                                    NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int             sockfd;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to RemoveOnEmptyScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to RemoveOnEmptyScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_UNIX_FD) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to RemoveOnEmptyScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &sockfd);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to RemoveOnEmptyScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_remove_on_empty_scm (object->data, message, controller, cgroup, sockfd) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_RemoveOnEmpty_method (NihDBusObject * object,
                                                                 NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to RemoveOnEmpty method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to RemoveOnEmpty method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to RemoveOnEmpty method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_remove_on_empty (object->data, message, controller, cgroup) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_PruneScm_method (NihDBusObject * object,
                                                            NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int             sockfd;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to PruneScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to PruneScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_UNIX_FD) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to PruneScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &sockfd);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to PruneScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_prune_scm (object->data, message, controller, cgroup, sockfd) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_Prune_method (NihDBusObject * object,
                                                         NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Prune method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Prune method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to Prune method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_prune (object->data, message, controller, cgroup) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_ListControllers_method (NihDBusObject * object,
                                                                   NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char **         output;
	DBusMessageIter output_iter;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ListControllers method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_list_controllers (object->data, message, &output) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);

		/* Marshal an array onto the message */
		if (! dbus_message_iter_open_container (&iter, DBUS_TYPE_ARRAY, "s", &output_iter)) {
			dbus_message_unref (reply);
			reply = NULL;
			goto enomem;
		}

		if (output) {
			for (size_t output_i = 0; output[output_i]; output_i++) {
				const char *output_element;

				output_element = output[output_i];

				/* Marshal a char * onto the message */
				if (! dbus_message_iter_append_basic (&output_iter, DBUS_TYPE_STRING, &output_element)) {
					dbus_message_iter_abandon_container (&iter, &output_iter);
					dbus_message_unref (reply);
					reply = NULL;
					goto enomem;
				}
			}
		}

		if (! dbus_message_iter_close_container (&iter, &output_iter)) {
			dbus_message_unref (reply);
			reply = NULL;
			goto enomem;
		}
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_ListKeysScm_method (NihDBusObject * object,
                                                               NihDBusMessage *message)
{
	DBusMessageIter iter;
	DBusMessage *   reply;
	char *          controller;
	const char *    controller_dbus;
	char *          cgroup;
	const char *    cgroup_dbus;
	int             sockfd;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ListKeysScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ListKeysScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a int from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_UNIX_FD) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ListKeysScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &sockfd);

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ListKeysScm method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_list_keys_scm (object->data, message, controller, cgroup, sockfd) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static DBusHandlerResult
cgmanager_org_linuxcontainers_cgmanager0_0_ListKeys_method (NihDBusObject * object,
                                                            NihDBusMessage *message)
{
	DBusMessageIter                  iter;
	DBusMessage *                    reply;
	char *                           controller;
	const char *                     controller_dbus;
	char *                           cgroup;
	const char *                     cgroup_dbus;
	CgmanagerListKeysOutputElement **output;
	DBusMessageIter                  output_iter;

	nih_assert (object != NULL);
	nih_assert (message != NULL);

	/* Iterate the arguments to the message and demarshal into arguments
	 * for our own function call.
	 */
	dbus_message_iter_init (message->message, &iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ListKeys method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &controller_dbus);

	controller = nih_strdup (message, controller_dbus);
	if (! controller) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	/* Demarshal a char * from the message */
	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_STRING) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ListKeys method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	dbus_message_iter_get_basic (&iter, &cgroup_dbus);

	cgroup = nih_strdup (message, cgroup_dbus);
	if (! cgroup) {
		return DBUS_HANDLER_RESULT_NEED_MEMORY;
	}

	dbus_message_iter_next (&iter);

	if (dbus_message_iter_get_arg_type (&iter) != DBUS_TYPE_INVALID) {
		reply = dbus_message_new_error (message->message, DBUS_ERROR_INVALID_ARGS,
		                                "Invalid arguments to ListKeys method");
		if (! reply)
			return DBUS_HANDLER_RESULT_NEED_MEMORY;

		if (! dbus_connection_send (message->connection, reply, NULL)) {
			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		}

		dbus_message_unref (reply);
		return DBUS_HANDLER_RESULT_HANDLED;
	}

	/* Call the handler function */
	nih_error_push_context ();
	if (cgmanager_list_keys (object->data, message, controller, cgroup, &output) < 0) {
		NihError *err;

		err = nih_error_get ();
		if (err->number == ENOMEM) {
			nih_free (err);
			nih_error_pop_context ();

			return DBUS_HANDLER_RESULT_NEED_MEMORY;
		} else if (err->number == NIH_DBUS_ERROR) {
			NihDBusError *dbus_err = (NihDBusError *)err;

			reply = NIH_MUST (dbus_message_new_error (message->message, dbus_err->name, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		} else {
			reply = NIH_MUST (dbus_message_new_error (message->message, DBUS_ERROR_FAILED, err->message));
			nih_free (err);
			nih_error_pop_context ();

			NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

			dbus_message_unref (reply);
			return DBUS_HANDLER_RESULT_HANDLED;
		}
	}
	nih_error_pop_context ();

	/* If the sender doesn't care about a reply, don't bother wasting
	 * effort constructing and sending one.
	 */
	if (dbus_message_get_no_reply (message->message))
		return DBUS_HANDLER_RESULT_HANDLED;

	do {
		__label__ enomem;

		/* Construct the reply message. */
		reply = dbus_message_new_method_return (message->message);
		if (! reply)
			goto enomem;

		dbus_message_iter_init_append (reply, &iter);

		/* Marshal an array onto the message */
		if (! dbus_message_iter_open_container (&iter, DBUS_TYPE_ARRAY, "(suuu)", &output_iter)) {
			dbus_message_unref (reply);
			reply = NULL;
			goto enomem;
		}

		if (output) {
			for (size_t output_i = 0; output[output_i]; output_i++) {
				DBusMessageIter                       output_element_iter;
				const char *                          output_element_item0;
				uint32_t                              output_element_item1;
				uint32_t                              output_element_item2;
				uint32_t                              output_element_item3;
				const CgmanagerListKeysOutputElement *output_element;

				output_element = output[output_i];

				/* Marshal a structure onto the message */
				if (! dbus_message_iter_open_container (&output_iter, DBUS_TYPE_STRUCT, NULL, &output_element_iter)) {
					dbus_message_iter_abandon_container (&iter, &output_iter);
					dbus_message_unref (reply);
					reply = NULL;
					goto enomem;
				}

				output_element_item0 = output_element->item0;

				/* Marshal a char * onto the message */
				if (! dbus_message_iter_append_basic (&output_element_iter, DBUS_TYPE_STRING, &output_element_item0)) {
					dbus_message_iter_abandon_container (&output_iter, &output_element_iter);
					dbus_message_iter_abandon_container (&iter, &output_iter);
					dbus_message_unref (reply);
					reply = NULL;
					goto enomem;
				}

				output_element_item1 = output_element->item1;

				/* Marshal a uint32_t onto the message */
				if (! dbus_message_iter_append_basic (&output_element_iter, DBUS_TYPE_UINT32, &output_element_item1)) {
					dbus_message_iter_abandon_container (&output_iter, &output_element_iter);
					dbus_message_iter_abandon_container (&iter, &output_iter);
					dbus_message_unref (reply);
					reply = NULL;
					goto enomem;
				}

				output_element_item2 = output_element->item2;

				/* Marshal a uint32_t onto the message */
				if (! dbus_message_iter_append_basic (&output_element_iter, DBUS_TYPE_UINT32, &output_element_item2)) {
					dbus_message_iter_abandon_container (&output_iter, &output_element_iter);
					dbus_message_iter_abandon_container (&iter, &output_iter);
					dbus_message_unref (reply);
					reply = NULL;
					goto enomem;
				}

				output_element_item3 = output_element->item3;

				/* Marshal a uint32_t onto the message */
				if (! dbus_message_iter_append_basic (&output_element_iter, DBUS_TYPE_UINT32, &output_element_item3)) {
					dbus_message_iter_abandon_container (&output_iter, &output_element_iter);
					dbus_message_iter_abandon_container (&iter, &output_iter);
					dbus_message_unref (reply);
					reply = NULL;
					goto enomem;
				}

				if (! dbus_message_iter_close_container (&output_iter, &output_element_iter)) {
					dbus_message_iter_abandon_container (&iter, &output_iter);
					dbus_message_unref (reply);
					reply = NULL;
					goto enomem;
				}
			}
		}

		if (! dbus_message_iter_close_container (&iter, &output_iter)) {
			dbus_message_unref (reply);
			reply = NULL;
			goto enomem;
		}
	enomem: __attribute__ ((unused));
	} while (! reply);

	/* Send the reply, appending it to the outgoing queue. */
	NIH_MUST (dbus_connection_send (message->connection, reply, NULL));

	dbus_message_unref (reply);

	return DBUS_HANDLER_RESULT_HANDLED;
}


static int
cgmanager_org_linuxcontainers_cgmanager0_0_api_version_get (NihDBusObject *  object,
                                                            NihDBusMessage * message,
                                                            DBusMessageIter *iter)
{
	DBusMessageIter variter;
	int32_t         value;

	nih_assert (object != NULL);
	nih_assert (message != NULL);
	nih_assert (iter != NULL);

	/* Call the handler function */
	if (cgmanager_get_api_version (object->data, message, &value) < 0)
		return -1;

	/* Append a variant onto the message to contain the property value. */
	if (! dbus_message_iter_open_container (iter, DBUS_TYPE_VARIANT, "i", &variter)) {
		nih_error_raise_no_memory ();
		return -1;
	}

	/* Marshal a int32_t onto the message */
	if (! dbus_message_iter_append_basic (&variter, DBUS_TYPE_INT32, &value)) {
		dbus_message_iter_abandon_container (iter, &variter);
		nih_error_raise_no_memory ();
		return -1;
	}

	/* Finish the variant */
	if (! dbus_message_iter_close_container (iter, &variter)) {
		nih_error_raise_no_memory ();
		return -1;
	}

	return 0;
}
