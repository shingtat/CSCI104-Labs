#include <QApplication>
#include <QHBoxLayout>
#include <QLabel>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv); //every application needs an object like this


  QLabel helloWorldLabel("Hello world!");
  helloWorldLabel.show();

  return app.exec(); //while true loop then keeps running until app quits and returns to main
}

//qmake to get makefile
//qmake -project to get project file