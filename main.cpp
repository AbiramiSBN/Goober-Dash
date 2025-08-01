#include <QApplication>
#include <QWebEngineView>
#include <QWebEngineSettings>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Create the view
    QWebEngineView view;

    // Optional: disable context menu (so user can’t navigate away)
    view.setContextMenuPolicy(Qt::NoContextMenu);

    // Load your target URL
    view.setUrl(QUrl("https://gooberdash.winterpixel.io/"));

    // Set a sensible default window size
    view.resize(1024, 768);
    view.show();

    return app.exec();
}
