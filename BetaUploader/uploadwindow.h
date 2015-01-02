#ifndef UPLOADWINDOW_H
#define UPLOADWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonArray>
#include <QJsonObject>
#include <QFile>
#include <QDir>
#include <QSysInfo>
#include <QDirIterator>
#include <QFormLayout>
#include <QLabel>
#include <QCheckBox>
#include <QTextEdit>
#include <QLineEdit>
#include <QMimeType>
#include <QMimeDatabase>
#include <QHttpMultiPart>
#include <QHttpPart>
#include "uploadmanager.h"

namespace Ui {
class UploadWindow;
}

class UploadWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UploadWindow(QWidget *parent = 0);
    ~UploadWindow();
    QString dir;
    void startUpload();
private slots:
    void uploadFin();
    void uploadProgress(QString ulSpeed, QString timeRemaining, float percentage);
private:
    Ui::UploadWindow *ui;
    QJsonObject options;
    QJsonObject list;
    void setupFields();
    void addField(QString type, QJsonObject field, int& row, int& column);
    bool isInit;
    bool uploadFinished;
    void initUpload();
    void buildSubmit();
    QHash<QString, QLineEdit> lineEdits;
    QHash<QString, QCheckBox> checkboxes;
    QHash<QString, QTextEdit> textEdits;
};

#endif // UPLOADWINDOW_H