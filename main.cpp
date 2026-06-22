#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    
    QWidget window;
    window.setWindowTitle("Exercise 1");

    
    QLabel* label = new QLabel("0", &window);
    label->setAlignment(Qt::AlignCenter);

    

    QPushButton* button = new QPushButton("Increment", &window);

    
    QVBoxLayout* layout = new QVBoxLayout(&window);
    layout->addWidget(label);
    layout->addWidget(button);

    
    static int n = 0;

    
    QObject::connect(button, &QPushButton::clicked, [label]() {
        n++;
        label->setText(QString::number(n));
    });

   
    window.show();

    return app.exec();
}
