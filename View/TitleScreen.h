#ifndef TITLESCREEN_H
#define TITLESCREEN_H
#include "TTTCommonTypes.h"
#include "ui_titlescreen.h"
#include <QMainWindow>
#include <memory>

/**
 * The TitleScreen class is responsible for the GUI of the title screen,
 * its main functionality is to gather game options set by the user,
 * then starting a game by creating a Tic Tac Toe controller with the user options.
 */

class TitleScreen final : public QMainWindow
{
    Q_OBJECT

public:
    void choose_min_max_depth();
    /**
     * TitleScreen constructs the view of the title screen.
     *  parent is a QWidget type parent that owns this instance of the controller.
     */
    explicit TitleScreen(QWidget *parent = nullptr);

private:
    /**
     * ui is a reference to the ui object of the tic tac toe game.
     */
    std::unique_ptr<Ui::TitleScreen> ui;
    /**
     *  setConnections sets connections to gather game options from the GUI elements.
     */
    void setConnections();
    /**
     *  options are the values and flags that control a tic tac toe game.
     */
    TTTOptions options_;
    /**
     *  closeEvent manually handles the closing event defined in the base class QWidget.
     *  event: the closing event.
     */
    void closeEvent(QCloseEvent *event) override;

public slots:
    /**
     *  updateBoardSize updates the board size in the current options.
     *  size: the number of rows or columns in the board.
     */
    void updateBoardSize(int size);
    void update_number_of_winning_char(int number);
    void update_who_player(bool who_player_temp);

    void startGame();


signals:
    /**
     *  exited is emitted to manually handle the close functionality.
     */
    void exited();
};

#endif // TITLESCREEN_H
