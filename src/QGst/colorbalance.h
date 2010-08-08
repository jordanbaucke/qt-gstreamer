/*
    Copyright (C) 2010  George Kiagiadakis <kiagiadakis.george@gmail.com>

    This library is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef QGST_COLORBALANCE_H
#define QGST_COLORBALANCE_H

#include "element.h"

namespace QGst {

/*! \headerfile colorbalance.h <QGst/ColorBalance>
 * \brief Wrapper class for GstColorBalanceChannel
 */
class ColorBalanceChannel : public QGlib::Object
{
    QGST_WRAPPER(ColorBalanceChannel)
public:
    QString label() const;
    int minValue() const;
    int maxValue() const;
};

/*! \headerfile colorbalance.h <QGst/ColorBalance>
 * \brief Wrapper class for GstColorBalance
 */
class ColorBalance : public Element
{
    QGST_WRAPPER(ColorBalance)
public:
    ColorBalanceType type() const;
    QList<ColorBalanceChannelPtr> channels() const;
    int value(const ColorBalanceChannelPtr & channel) const;
    void setValue(const ColorBalanceChannelPtr & channel, int value);
};

} //namespace QGst

QGLIB_REGISTER_TYPE(QGst::ColorBalanceChannel)
QGLIB_REGISTER_TYPE(QGst::ColorBalance)

#endif // QGST_COLORBALANCE_H
