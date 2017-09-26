#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  QWidget window;

  QPushButton *button1 = new QPushButton("Button 1");
	QPushButton *button2 = new QPushButton("Button 2");
  QPushButton *button3 = new QPushButton("Button 3");
  QPushButton *button4 = new QPushButton("Button 4");
  QPushButton *button5 = new QPushButton("Button 5");
  QPushButton *button6 = new QPushButton("Button 6");
  QPushButton *button7 = new QPushButton("Button 7");


  // QHBoxLayout *row1 = new QHBoxLayout();
  // QHBoxLayout *row2 = new QHBoxLayout();
  // QVBoxLayout *layout = new QVBoxLayout();

  QVBoxLayout *col1 = new QVBoxLayout();
  QVBoxLayout *col2 = new QVBoxLayout();
  QVBoxLayout *col3 = new QVBoxLayout();
  QHBoxLayout *layout = new QHBoxLayout();

  col1->addWidget(button1);
  col1->addWidget(button3);
  col2->addWidget(button2);
  col2->addWidget(button4);
  col3->addWidget(button5);
  col3->addWidget(button6);
  col3->addWidget(button7);

  layout->addLayout(col1);
  layout->addLayout(col2);
  layout->addLayout(col3);

  // row1->addWidget(button1);
  // row1->addWidget(button2);
  // row2->addWidget(button3);
  // row2->addWidget(button4);
  // layout->addLayout(row1);
  // layout->addLayout(row2);

  // layout->addWidget(button1);
  // layout->addWidget(button2);
  // layout->addWidget(button3);
  // layout->addWidget(button4);

  window.setLayout(layout);
  window.show();

  return app.exec();
}

