#ifndef DARKSENDCONFIG_H
#define DARKSENDCONFIG_H

#include <QDialog>

namespace Ui {
    class SpySendConfig;
}
class WalletModel;

/** Multifunctional dialog to ask for passphrases. Used for encryption, unlocking, and changing the passphrase.
 */
class SpySendConfig : public QDialog
{
    Q_OBJECT

public:

    SpySendConfig(QWidget *parent = 0);
    ~SpySendConfig();

    void setModel(WalletModel *model);


private:
    Ui::SpySendConfig *ui;
    WalletModel *model;
    void configure(bool enabled, int coins, int rounds);

private Q_SLOTS:

    void clickBasic();
    void clickHigh();
    void clickMax();
};

#endif // DARKSENDCONFIG_H
