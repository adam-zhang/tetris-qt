#ifndef __ABOUTDIALOG__H
#define __ABOUTDIALOG__H
#include <QDialog>

class AboutDialog : public QDialog
{
public:
	explicit AboutDialog(QWidget* parent );
	~AboutDialog();
private:
	void initialize();
	void createWidgets();
};
#endif//__ABOUTDIALOG__H
