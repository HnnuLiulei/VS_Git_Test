#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VS_Git.h"

class VS_Git : public QMainWindow
{
	Q_OBJECT

public:
	VS_Git(QWidget *parent = Q_NULLPTR);

private:
	Ui::VS_GitClass ui;
};
