/*==============================================================================
** Copyright (C) 2024-2027 WingSummer
**
** This program is free software: you can redistribute it and/or modify it under
** the terms of the GNU Affero General Public License as published by the Free
** Software Foundation, version 3.
**
** This program is distributed in the hope that it will be useful, but WITHOUT
** ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
** FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for more
** details.
**
** You should have received a copy of the GNU Affero General Public License
** along with this program. If not, see <https://www.gnu.org/licenses/>.
**
** The original License is MIT from Dax89/QHexView. I have modified a lot so I
** decide to change the Open Source License. You can use the original library
** under MIT. Thanks for Dax89's efforts.
** =============================================================================
*/

#include "hexcommand.h"

HexCommand::HexCommand(QHexDocument *doc, QHexCursor *cursor, int nibbleindex,
                       QUndoCommand *parent)
    : QUndoCommand(parent), m_doc(doc), m_cursor(cursor), m_offset(0),
      m_length(0), m_nibbleindex(nibbleindex) {}

void HexCommand::undo() {
    Q_ASSERT(m_doc->m_bytesModFlag > 0);
    m_doc->m_bytesModFlag--;
}

void HexCommand::redo() { m_doc->m_bytesModFlag++; }
