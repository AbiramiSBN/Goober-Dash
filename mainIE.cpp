#include <QApplication>
#include <QWidget>
#include <QAxWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;

    // Embed the IE WebBrowser ActiveX control
    QAxWidget *browser = new QAxWidget(&window);
    browser->setControl(QStringLiteral("{8856F961-340A-11D0-A96B-00C04FD705A2}"));
    browser->dynamicCall("Navigate(const QString&)", QString("https://gooberdash.winterpixel.io/"));
    browser->setGeometry(0,0,1024,768);

    window.resize(1024,768);
    window.show();
    return app.exec();
}
