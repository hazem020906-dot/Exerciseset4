#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>


int n=0;

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

     QWidget window;
     window.setWindowTitle("Exercise 1");


     QVBoxLayout* layout = new QVBoxLayout(&window);
     QLabel* label = new QLabel("0", &window);
     QPushButton* button = new QPushButton("Increment", &window);

     window.setLayout(layout);

     layout->addWidget(label);
     layout->addWidget(button);


     QObject::connect(button, &QPushButton::clicked, [label]() {
        n++;
        label->setText(QString::number(n));
    });

    window.show();

    return app.exec();
}
