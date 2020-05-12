#ifndef DOCKRDS_H
#define DOCKRDS_H
#include <QDockWidget>
#include <QSettings>

namespace Ui {
    class DockRDS;
}


class DockRDS : public QDockWidget
{
    Q_OBJECT

public:
    explicit DockRDS(QWidget *parent = 0);
    ~DockRDS();

public slots:
    void updateRDS(QString text, int type);
    void showEnabled();
    void showDisabled();
    void setEnabled();
    void setDisabled();
    void setState(bool state);

private:
    void ClearTextFields();
    bool disabled;

signals:
    void rdsDecoderToggled(bool);
    void stationChanged(QString);
    void radiotextChanged(QString);

private slots:
    void on_rdsCheckbox_toggled(bool checked);

private:
    Ui::DockRDS *ui;        /*! The Qt designer UI file. */
};

#endif // DOCKRDS_H
