/* -*- Mode: C; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*- */
/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright 2013 Red Hat, Inc.
 */

#ifndef NMT_NEWT_STACK_H
#define NMT_NEWT_STACK_H

#include "nmt-newt-container.h"

#define NMT_TYPE_NEWT_STACK            (nmt_newt_stack_get_type ())
#define NMT_NEWT_STACK(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), NMT_TYPE_NEWT_STACK, NmtNewtStack))
#define NMT_NEWT_STACK_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), NMT_TYPE_NEWT_STACK, NmtNewtStackClass))
#define NMT_IS_NEWT_STACK(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), NMT_TYPE_NEWT_STACK))
#define NMT_IS_NEWT_STACK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), NMT_TYPE_NEWT_STACK))
#define NMT_NEWT_STACK_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), NMT_TYPE_NEWT_STACK, NmtNewtStackClass))

struct _NmtNewtStack {
	NmtNewtContainer parent;

};

typedef struct {
	NmtNewtContainerClass parent;

} NmtNewtStackClass;

GType nmt_newt_stack_get_type (void);

NmtNewtWidget *nmt_newt_stack_new           (void);

void           nmt_newt_stack_add           (NmtNewtStack  *stack,
                                             const char    *id,
                                             NmtNewtWidget *widget);

void           nmt_newt_stack_set_active    (NmtNewtStack  *stack,
                                             guint          active);
guint          nmt_newt_stack_get_active    (NmtNewtStack  *stack);

void           nmt_newt_stack_set_active_id (NmtNewtStack  *stack,
                                             const char    *id);
const char *   nmt_newt_stack_get_active_id (NmtNewtStack  *stack);

#endif /* NMT_NEWT_STACK_H */
