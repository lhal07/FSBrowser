#include <QApplication>
#include <QWebView>
#include <QWebFrame>
#include <QWebSettings>
#include <QDesktopWidget>


Q_DECL_EXPORT int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
	
	if(argc > 1)
	{
		QWebView view;
		view.page()->mainFrame()->setScrollBarPolicy( Qt::Vertical, Qt::ScrollBarAlwaysOff ); 
		view.page()->mainFrame()->setScrollBarPolicy( Qt::Horizontal, Qt::ScrollBarAlwaysOff );
		view.settings()->globalSettings()->setFontFamily(QWebSettings::StandardFont, "Arial");
		QRect screen_size = QApplication::desktop()->screenGeometry();
		view.resize(screen_size.size());
		view.showFullScreen();
		printf("Trying to set url: %s\n",argv[1]);
		view.load(QUrl(argv[1]));
		return a.exec();
	}

	fprintf(stderr,"Usage: FSbrowser <url>\n");
	return 0;
}

