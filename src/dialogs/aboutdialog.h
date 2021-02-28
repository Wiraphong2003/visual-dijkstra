/*          Visual Dijkstra
 *    Copyright (C) 2021 Samuele Girgenti
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * 	     --  CONTACTS --
 *   Email:      samuele.girgenti458@gmail.com
 *   Github:     https://github.com/Samuele458
 */

#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QDesktopServices>
#include <QUrl>

#include "dialogs/licensedialog.h"

class AboutDialog : public QDialog
{
    Q_OBJECT
public:
    explicit AboutDialog(QWidget *parent = nullptr);

    ~AboutDialog();

protected slots:
    void ok_button_clicked();
    void official_page_button_clicked();
    void license_button_clicked();

protected:


    //widgets
    QVBoxLayout* MainLayout;

    QGridLayout* InfoLayout;
    QLabel* VersionLeftLabel;
    QLabel* VersionRightLabel;
    QLabel* DateLeftLabel;
    QLabel* DateRightLabel;
    QLabel* LicenseLeftLabel;
    QLabel* LicenseRightLabel;
    QLabel* AuthorLeftLabel;
    QLabel* AuthorRightLabel;
    QLabel* EmailLeftLabel;
    QLabel* EmailRightLabel;
    QLabel* GithubLeftLabel;
    QLabel* GithubRightLabel;

    QHBoxLayout* ButtonsLayout;
    QPushButton* OfficialPageButton;
    QPushButton* LicenseButton;
    QPushButton* OkButton;

};

#endif // ABOUTDIALOG_H
