#ifndef ABOUT_H
#define ABOUT_H

#include <QWidget>
#include <QTextBrowser>
#include <QLayout>
#include <QLabel>
#include <fstream>

class About : public QWidget
{
    Q_OBJECT
public:
    explicit About(QWidget *parent = 0);

private:
    QLayout *layout;
    std::ifstream f;
};

#endif // ABOUT_H