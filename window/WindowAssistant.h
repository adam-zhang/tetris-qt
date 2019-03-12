#ifndef __WINDOWASSISTANT__H
#define __WINDOWASSISTANT__H

class QWidget; 

class WindowAssistant
{
	private:
		WindowAssistant();
		~WindowAssistant();
	public:
		static void setBackgroundColor(QWidget*, int color);
};
#endif//__WINDOWASSISTANT__H
