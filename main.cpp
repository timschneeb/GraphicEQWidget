#include <GraphicEQFilterGUI.h>
#include <QApplication>
#include <QStyle>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qApp->setStyle("Fusion");
    qApp->setPalette(qApp->style()->standardPalette());

    GraphicEQFilterGUI* g = new GraphicEQFilterGUI();
    g->load("GraphicEQ: 25 24.18; 40 34.28; 63 -10.78; 100 39.69; 160 23.66; 250 12.77; 400 3.19; 630 48.33; 1000 35.76; 1600 22.98; 2500 8.84; 4000 1.64; 6300 9.71; 10000 17.91; 16000 26.25");
    g->show();

    return a.exec();
}
