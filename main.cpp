#include <stdio.h>
#include <QApplication>
#include <QWebView>
#include <QWebFrame>


Q_DECL_EXPORT int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
	
	if(argc > 1){
		QWebView view;
		view.page()->mainFrame()->setScrollBarPolicy( Qt::Vertical, Qt::ScrollBarAlwaysOff ); 
		view.page()->mainFrame()->setScrollBarPolicy( Qt::Horizontal, Qt::ScrollBarAlwaysOff );
		view.showFullScreen();
		printf("Trying to set url: %s\n",argv[1]);
		view.load(QUrl(argv[1]));
		return a.exec();
	}

	fprintf(stderr,"Usage: webbrowser <url>\n");
	return 0;
}

