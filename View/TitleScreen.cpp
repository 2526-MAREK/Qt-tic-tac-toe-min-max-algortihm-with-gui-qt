#include "TitleScreen.h"
#include "TTTController.h"

TitleScreen::TitleScreen(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::TitleScreen)
{
    ui->setupUi(this);
    setConnections();
}

void TitleScreen::setConnections()
{
    connect(ui->choose_size_of_board, SIGNAL(currentIndexChanged(int)), SLOT(updateBoardSize(int)));
    connect(ui->choose_number_of_winning_char, SIGNAL(currentIndexChanged(int)), SLOT(update_number_of_winning_char(int)));
    connect(ui->who_start, SIGNAL(toggled(bool)), SLOT(update_who_player(bool)));
    connect(ui->start_game, SIGNAL(clicked()), SLOT(startGame()));
}

void TitleScreen::updateBoardSize(int size)
{
    options_.boardSize = static_cast<size_t>(size)+3;
    choose_min_max_depth();
}

void TitleScreen::choose_min_max_depth()
{
    switch(options_.boardSize)
    {
        case 3 :
    {
            options_.miniMaxDepth = 5;
            break;
    }
        case 4 :
    {
            options_.miniMaxDepth = 4;
            break;
    }
        case 5 :
            {
            options_.miniMaxDepth = 3;
            break;
            }
        default :
            {
            options_.miniMaxDepth = 2;
            break;
    }
    }
}

void TitleScreen::update_number_of_winning_char(int number)
{
    options_.number_of_winning_char = static_cast<size_t>(number)+3;
}

 void TitleScreen::update_who_player(bool who_player_temp)
 {
     options_.AIstarts = !who_player_temp;
 }
void TitleScreen::startGame()
{
    this->hide();
    TTTController ttt(options_);
    ttt.startGame();
    this->show();
}

void TitleScreen::closeEvent(QCloseEvent *event)
{
    QMainWindow::closeEvent(event);
    emit exited();
}
