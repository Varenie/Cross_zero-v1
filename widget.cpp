#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    
}

Widget::~Widget()
{
    delete ui;
}

//cross
void Widget::on_top_left_cross_button_clicked()
{
    ui->top_left_zero_button->setVisible(false);
    mass[0] = cross;
    check[0] = 1;
    count++;
    check_win();
}

void Widget::on_middle_left_cross_button_clicked()
{
    ui->middle_left_zero_button->setVisible(false);
    mass[1] = cross;
    check[1] = 1;
    count++;
    check_win();
}

void Widget::on_down_left_cross_button_clicked()
{
    ui->down_left_zero_button->setVisible(false);
    mass[2] = cross;
    check[2] = 1;
    count++;
    check_win();
}

void Widget::on_top_middle_cross_button_clicked()
{
    ui->top_middle_zero_button->setVisible(false);
    mass[3] = cross;
    check[3] = 1;
    count++;
    check_win();
}

void Widget::on_middle_middle_cross_button_clicked()
{
    ui->middle_middle_zero_button->setVisible(false);
    mass[4] = cross;
    check[4] = 1;
    count++;
    check_win();
}

void Widget::on_down_middle_cross_button_clicked()
{
    ui->down_middle_zero_button->setVisible(false);
    mass[5] = cross;
    check[5] = 1;
    count++;
    check_win();
}

void Widget::on_top_right_cross_button_clicked()
{
    ui->top_right_zero_button->setVisible(false);
    mass[6] = cross;
    check[6] = 1;
    count++;
    check_win();
}

void Widget::on_middle_right_cross_button_clicked()
{
    ui->middle_right_zero_button->setVisible(false);
    mass[7] = cross;
    check[7] = 1;
    count++;
    check_win();
}

void Widget::on_down_right_cross_button_clicked()
{
    ui->down_right_zero_button->setVisible(false);
    mass[8] = cross;
    check[8] = 1;
    count++;
    check_win();
}

//zero
void Widget::on_top_left_zero_button_clicked()
{
    ui->top_left_cross_button->setVisible(false);
    mass[0] = zero;
    check[9] = 1;
    count++;
    check_win();
}

void Widget::on_middle_left_zero_button_clicked()
{
    ui->middle_left_cross_button->setVisible(false);
    mass[1] = zero;
    check[10] = 1;
    count++;
    check_win();
}

void Widget::on_down_left_zero_button_clicked()
{
    ui->down_left_cross_button->setVisible(false);
    mass[2] = zero;
    check[11] = 1;
    count++;
    check_win();
}

void Widget::on_top_middle_zero_button_clicked()
{
    ui->top_middle_cross_button->setVisible(false);
    mass[3] = zero;
    check[12] = 1;
    count++;
    check_win();
}

void Widget::on_middle_middle_zero_button_clicked()
{
    ui->middle_middle_cross_button->setVisible(false);
    mass[4] = zero;
    check[13] = 1;
    count++;
    check_win();
}

void Widget::on_down_middle_zero_button_clicked()
{
    ui->down_middle_cross_button->setVisible(false);
    mass[5] = zero;
    check[14] = 1;
    count++;
    check_win();
}

void Widget::on_top_right_zero_button_clicked()
{
    ui->top_right_cross_button->setVisible(false);
    mass[6] = zero;
    check[15] = 1;
    count++;
    check_win();
}

void Widget::on_middle_right_zero_button_clicked()
{
    ui->middle_right_cross_button->setVisible(false);
    mass[7] = zero;
    check[16] = 1;
    count++;
    check_win();
}

void Widget::on_down_right_zero_button_clicked()
{
    ui->down_right_cross_button->setVisible(false);
    mass[8] = zero;
    check[17] = 1;
    count++;
    check_win();
}

void Widget::check_win()
{
    if(((mass[0] == cross) && (mass[1] == cross) && (mass[2] == cross)) || ((mass[3] == cross) && (mass[4] == cross) && (mass[5] == cross))
        || ((mass[6] == cross) && (mass[7] == cross) && (mass[8] == cross)) || ((mass[0] == cross) && (mass[3] == cross) && (mass[6] == cross))
        || ((mass[1] == cross) && (mass[4] == cross) && (mass[7] == cross)) || ((mass[2] == cross) && (mass[5] == cross) && (mass[8] == cross))
        || ((mass[0] == cross) && (mass[4] == cross) && (mass[8] == cross)) || ((mass[6] == cross) && (mass[4] == cross) && (mass[2] == cross)))
    {
        ui->textEdit->setText("Cross win");
        disable_buttons();
    }
    else if(((mass[0] == zero) && (mass[1] == zero) && (mass[2] == zero)) || ((mass[3] == zero) && (mass[4] == zero) && (mass[5] == zero))
            || ((mass[6] == zero) && (mass[7] == zero) && (mass[8] == zero)) || ((mass[0] == zero) && (mass[3] == zero) && (mass[6] == zero))
            || ((mass[1] == zero) && (mass[4] == zero) && (mass[7] == zero)) || ((mass[2] == zero) && (mass[5] == zero) && (mass[8] == zero))
            || ((mass[0] == zero) && (mass[4] == zero) && (mass[8] == zero)) || ((mass[6] == zero) && (mass[4] == zero) && (mass[2] == zero)))
    {
        ui->textEdit->setText("Zero win");
        disable_buttons();
    }
    else if(count == 9)
    {
        ui->textEdit->setText("Draw!");
        disable_buttons();
    }
}

void Widget::disable_buttons()
{
    //cross
    if(check[0] == 0)
        ui->top_left_cross_button->setVisible(false);
    if(check[1] == 0)
        ui->middle_left_cross_button->setVisible(false);
    if(check[2] == 0)
        ui->down_left_cross_button->setVisible(false);
    if(check[3] == 0)
        ui->top_middle_cross_button->setVisible(false);
    if(check[4] == 0)
        ui->middle_middle_cross_button->setVisible(false);
    if(check[5] == 0)
        ui->down_middle_cross_button->setVisible(false);
    if(check[6] == 0)
        ui->top_right_cross_button->setVisible(false);
    if(check[7] == 0)
        ui->middle_right_cross_button->setVisible(false);
    if(check[8] == 0)
        ui->down_right_cross_button->setVisible(false);
    //zero
    if(check[9] == 0)
        ui->top_left_zero_button->setVisible(false);
    if(check[10] == 0)
        ui->middle_left_zero_button->setVisible(false);
    if(check[11] == 0)
        ui->down_left_zero_button->setVisible(false);
    if(check[12] == 0)
        ui->top_middle_zero_button->setVisible(false);
    if(check[13] == 0)
        ui->middle_middle_zero_button->setVisible(false);
    if(check[14] == 0)
        ui->down_middle_zero_button->setVisible(false);
    if(check[15] == 0)
        ui->top_right_zero_button->setVisible(false);
    if(check[16] == 0)
        ui->middle_right_zero_button->setVisible(false);
    if(check[17] == 0)
        ui->down_right_zero_button->setVisible(false);
}
