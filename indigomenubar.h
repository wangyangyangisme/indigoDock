#ifndef INDIGOMENUBAR_H
#define INDIGOMENUBAR_H

#include <QMenuBar>

class QJsonObject;

class IndigoMenuBar : public QMenuBar
{
public:
    IndigoMenuBar();
private:
    bool loadSettings();
    void read(const QJsonObject &json);
    void fill(const QJsonArray menuMainEntries);

    QMenu* getMenuItemFromJson(const QJsonObject json);
    QAction* getActionFromJson(const QJsonObject json, QObject* parent);
    QString iconPath;

};
#endif // INDIGOMENUBAR_H
