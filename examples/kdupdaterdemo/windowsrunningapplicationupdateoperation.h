/****************************************************************************
** Copyright (C) 2001-2012 Klaralvdalens Datakonsult AB.  All rights reserved.
**
** This file is part of the KD Tools library.
**
** Licensees holding valid commercial KD Tools licenses may use this file in
** accordance with the KD Tools Commercial License Agreement provided with
** the Software.
**
**
** This file may be distributed and/or modified under the terms of the GNU
** Lesser General Public License version 2 and version 3 as published by the
** Free Software Foundation and appearing in the file LICENSE.LGPL included.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** Contact info@kdab.net if any conditions of this licensing are not
** clear to you.
**
**********************************************************************/

#ifndef WINDOWSRUNNINGAPPLICATIONUPDATEOPERATION_H
#define WINDOWSRUNNINGAPPLICATIONUPDATEOPERATION_H

#include <KDUpdater/UpdateOperation>

class WindowsRunningApplicationUpdateOperation : public KDUpdater::UpdateOperation
{
public:
    WindowsRunningApplicationUpdateOperation();
    ~WindowsRunningApplicationUpdateOperation();
    /*reimpl*/ void backup();
    /*reimpl*/ bool performOperation();
    /*reimpl*/ bool undoOperation();
    /*reimpl*/ bool testOperation();
    /*reimpl*/ UpdateOperation* clone() const;


};

#endif // WINDOWSRUNNINGAPPLICATIONUPDATEOPERATION_H
