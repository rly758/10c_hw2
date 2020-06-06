#include "grade_calculator.h"
#include "ui_grade_calculator.h"

grade_calculator::grade_calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::grade_calculator)
{
    ui->setupUi(this);
}

grade_calculator::~grade_calculator()
{
    delete ui;
}


void grade_calculator::on_hw_slider_1_valueChanged(int value)
{
    if(value != hw_grade_1){
        ui->hw_sbox_1->setValue(value);
    }
}

void grade_calculator::on_hw_sbox_1_valueChanged(int value)
{
    if(value != hw_grade_1){
        ui->hw_slider_1->setValue(value);
    }
}

void grade_calculator::on_hw_slider_2_valueChanged(int value)
{
    if(value != hw_grade_2){
        ui->hw_sbox_2->setValue(value);
    }
}

void grade_calculator::on_hw_sbox_2_valueChanged(int value)
{
    if(value != hw_grade_2){
        ui->hw_slider_2->setValue(value);
    }
}

void grade_calculator::on_hw_slider_3_valueChanged(int value)
{
    if(value != hw_grade_3){
        ui->hw_sbox_3->setValue(value);
    }
}

void grade_calculator::on_hw_sbox_3_valueChanged(int value)
{
    if(value != hw_grade_3){
        ui->hw_slider_3->setValue(value);
    }
}

void grade_calculator::on_hw_slider_4_valueChanged(int value)
{
    if(value != hw_grade_4){
        ui->hw_sbox_4->setValue(value);
    }
}

void grade_calculator::on_hw_sbox_4_valueChanged(int value)
{
    if(value != hw_grade_4){
        ui->hw_slider_4->setValue(value);
    }
}

void grade_calculator::on_hw_slider_5_valueChanged(int value)
{
    if(value != hw_grade_5){
        ui->hw_sbox_5->setValue(value);
    }
}

void grade_calculator::on_hw_sbox_5_valueChanged(int value)
{
    if(value != hw_grade_5){
        ui->hw_slider_5->setValue(value);
    }
}

void grade_calculator::on_hw_slider_6_valueChanged(int value)
{
    if(value != hw_grade_6){
        ui->hw_sbox_6->setValue(value);
    }
}

void grade_calculator::on_hw_sbox_6_valueChanged(int value)
{
    if(value != hw_grade_6){
        ui->hw_slider_6->setValue(value);
    }
}

void grade_calculator::on_hw_slider_7_valueChanged(int value)
{
    if(value != hw_grade_7){
        ui->hw_sbox_7->setValue(value);
    }
}

void grade_calculator::on_hw_sbox_7_valueChanged(int value)
{
    if(value != hw_grade_7){
        ui->hw_slider_7->setValue(value);
    }
}

void grade_calculator::on_hw_slider_8_valueChanged(int value)
{
    if(value != hw_grade_8){
        ui->hw_sbox_8->setValue(value);
    }
}

void grade_calculator::on_hw_sbox_8_valueChanged(int value)
{
    if(value != hw_grade_8){
        ui->hw_slider_8->setValue(value);
    }
}

void grade_calculator::on_midterm_slider_1_valueChanged(int value){
    if(value != midterm_grade_1){
        ui->midterm_sbox_1->setValue(value);
    }
}

void grade_calculator::on_midterm_sbox_1_valueChanged(int value){
    if(value != midterm_grade_1){
        ui->midterm_slider_1->setValue(value);
    }
}

void grade_calculator::on_midterm_slider_2_valueChanged(int value){
    if(value != midterm_grade_2){
        ui->midterm_sbox_2->setValue(value);
    }
}

void grade_calculator::on_midterm_sbox_2_valueChanged(int value){
    if(value != midterm_grade_2){
        ui->midterm_slider_2->setValue(value);
    }
}

void grade_calculator::on_final_slider_valueChanged(int value){
    if(value != final_grade){
        ui->final_sbox->setValue(value);
    }
}

void grade_calculator::on_final_sbox_valueChanged(int value){
    if(value != final_grade){
        ui->final_slider->setValue(value);
    }
}
