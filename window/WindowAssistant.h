#ifndef __WINDOWASSISTANT__H
#define __WINDOWASSISTANT__H
#include <QWidget>


class WindowAssistant
{
	private:
		WindowAssistant();
		~WindowAssistant();
	public:
		static void setBackgroundColor(QWidget* window, const QColor& color);
};
#endif//__WINDOWASSISTANT__H
