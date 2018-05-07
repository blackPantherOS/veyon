/*
 * UserGroupsBackendInterface.h - interface for a UserGroupsBackend
 *
 * Copyright (c) 2017-2018 Tobias Junghans <tobydox@veyon.io>
 *
 * This file is part of Veyon - http://veyon.io
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */

#ifndef USER_GROUPS_BACKEND_INTERFACE_H
#define USER_GROUPS_BACKEND_INTERFACE_H

#include "PluginInterface.h"

// clazy:excludeall=copyable-polymorphic

class UserGroupsBackendInterface
{
public:
	virtual QString userGroupsBackendName() const = 0;

	virtual void reloadConfiguration() = 0;

	virtual QStringList userGroups( bool queryDomainGroups ) = 0;
	virtual QStringList groupsOfUser( const QString& username, bool queryDomainGroups ) = 0;

};

typedef QList<UserGroupsBackendInterface> UserGroupsBackendInterfaceList;

#define UserGroupsBackendInterface_iid "org.veyon.Veyon.Plugins.UserGroupsBackendInterface"

Q_DECLARE_INTERFACE(UserGroupsBackendInterface, UserGroupsBackendInterface_iid)

#endif // USER_GROUPS_BACKEND_INTERFACE_H
