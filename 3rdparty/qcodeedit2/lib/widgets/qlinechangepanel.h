/****************************************************************************
**
** Copyright (C) 2006-2009 fullmetalcoder <fullmetalcoder@hotmail.fr>
**
** This file is part of the Edyuk project <http://edyuk.org>
**
** This file may be used under the terms of the GNU General Public License
** version 3 as published by the Free Software Foundation and appearing in the
** file GPL.txt included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
****************************************************************************/

#ifndef _QLINE_CHANGE_PANEL_H_
#define _QLINE_CHANGE_PANEL_H_

/*!
        \file qlinechangepanel.h
        \brief Definition of the QLineChangePanel class.

        \see QLineChangePanel
*/

#include "qpanel.h"

#include <QHash>
#include <QIcon>

class QDocumentLine;

class QCE_EXPORT QLineChangePanel : public QPanel {
    Q_OBJECT

public:
    Q_PANEL(QLineChangePanel, "Line Change Panel")

    QLineChangePanel(QWidget *p = nullptr);
    virtual ~QLineChangePanel();

    virtual QString type() const;
    virtual QString name() const;

protected:
    virtual void paint(QPainter *p, QEditor *e);
};

QCE_AUTO_REGISTER(QLineChangePanel)

#endif // _QLINE_CHANGE_PANEL_H_
