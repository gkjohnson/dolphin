// Copyright 2017 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#pragma once

#include <QSortFilterProxyModel>

// This subclass of QSortFilterProxyModel allows the data to be filtered by the view.
class TableProxyModel final : public QSortFilterProxyModel
{
  Q_OBJECT

public:
  explicit TableProxyModel(QObject* parent = nullptr);
  bool filterAcceptsRow(int source_row, const QModelIndex& source_parent) const override;
};
