#ifndef FLOATINGWIDGETTITLEBAR_H
#define FLOATINGWIDGETTITLEBAR_H
/*******************************************************************************
** Qt Advanced Docking System
** Copyright (C) 2017 Uwe Kindler
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License as published by the Free Software Foundation; either
** version 2.1 of the License, or (at your option) any later version.
**
** This library is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** Lesser General Public License for more details.
**
** You should have received a copy of the GNU Lesser General Public
** License along with this library; If not, see <http://www.gnu.org/licenses/>.
******************************************************************************/


//============================================================================
/// \file   FloatingWidgetTitleBar.h
/// \author Uwe Kindler
/// \date   13.05.2019
/// \brief  Declaration of CFloatingWidgetTitleBar class
//============================================================================

//============================================================================
//                                   INCLUDES
//============================================================================
#include <QWidget>

namespace ads
{
class CFloatingDockContainer;

struct FloatingWidgetTitleBarPrivate;

class CFloatingWidgetTitleBar : public QWidget
{
    Q_OBJECT
private:
   FloatingWidgetTitleBarPrivate* d; ///< private data (pimpl)

protected:
    virtual void mousePressEvent(QMouseEvent* ev) override;
    virtual void mouseReleaseEvent(QMouseEvent* ev) override;
    virtual void mouseMoveEvent(QMouseEvent* ev) override;

public:
   using Super = QWidget;
    explicit CFloatingWidgetTitleBar (CFloatingDockContainer *parent = nullptr);

   /**
    * Virtual Destructor
    */
   virtual ~CFloatingWidgetTitleBar();

   void enableCloseButton(bool Enable);

   void setTitle(const QString& Text);

signals:
   void closeRequested();
};
} // namespace ads
#endif // FLOATINGWIDGETTITLEBAR_H
