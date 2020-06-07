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


void grade_calculator::calculate_overall_grade(bool grading_scheme_A, bool pic10b){
    if(pic10b){
        if(grading_scheme_A){
            overall_grade = 0.25 * (1.0/ 8) * (hw_grade_1 + hw_grade_2 + hw_grade_3 + hw_grade_3 + hw_grade_4 + hw_grade_5 + hw_grade_6 + hw_grade_7 + hw_grade_8);
            overall_grade += 0.20 * midterm_grade_1 + 0.20 * midterm_grade_2 + 0.35 * final_grade;
        }
        else{
            overall_grade = 0.25 * (1.0/ 8) * (hw_grade_1 + hw_grade_2 + hw_grade_3 + hw_grade_3 + hw_grade_4 + hw_grade_5 + hw_grade_6 + hw_grade_7 + hw_grade_8);
            if(midterm_grade_1 >= midterm_grade_2){
                overall_grade += 0.30 * midterm_grade_1 + 0.44 * final_grade;
            }
            else{
                overall_grade += 0.30 * midterm_grade_2 + 0.44 * final_grade;
            }
        }
    }
    else{
        if(grading_scheme_A){
            overall_grade = 0.15 * (1.0/ 8) * (hw_grade_1 + hw_grade_2 + hw_grade_3 + hw_grade_3 + hw_grade_4 + hw_grade_5 + hw_grade_6 + hw_grade_7 + hw_grade_8);
            overall_grade += 0.25 * midterm_grade_1 + 0.35 * final_grade + 0.35 * project_grade;
        }
        else{
            overall_grade = 0.15 * (1.0/ 8) * (hw_grade_1 + hw_grade_2 + hw_grade_3 + hw_grade_3 + hw_grade_4 + hw_grade_5 + hw_grade_6 + hw_grade_7 + hw_grade_8);
            overall_grade += .50 * final_grade + 0.35 * project_grade;
        }
    }

    ui->overall_grade_label->setText(QString::number(overall_grade));
}

void grade_calculator::on_hw_slider_1_valueChanged(int value)
{
    if(value != hw_grade_1){
        ui->hw_sbox_1->setValue(value);
    }

    hw_grade_1 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_hw_sbox_1_valueChanged(int value)
{
    if(value != hw_grade_1){
        ui->hw_slider_1->setValue(value);
    }

    hw_grade_1 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_hw_slider_2_valueChanged(int value)
{
    if(value != hw_grade_2){
        ui->hw_sbox_2->setValue(value);
    }

    hw_grade_2 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_hw_sbox_2_valueChanged(int value)
{
    if(value != hw_grade_2){
        ui->hw_slider_2->setValue(value);
    }

    hw_grade_2 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_hw_slider_3_valueChanged(int value)
{
    if(value != hw_grade_3){
        ui->hw_sbox_3->setValue(value);
    }

    hw_grade_3 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_hw_sbox_3_valueChanged(int value)
{
    if(value != hw_grade_3){
        ui->hw_slider_3->setValue(value);
    }

    hw_grade_3 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_hw_slider_4_valueChanged(int value)
{
    if(value != hw_grade_4){
        ui->hw_sbox_4->setValue(value);
    }

    hw_grade_4 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_hw_sbox_4_valueChanged(int value)
{
    if(value != hw_grade_4){
        ui->hw_slider_4->setValue(value);
    }

    hw_grade_4 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_hw_slider_5_valueChanged(int value)
{
    if(value != hw_grade_5){
        ui->hw_sbox_5->setValue(value);
    }

    hw_grade_5 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_hw_sbox_5_valueChanged(int value)
{
    if(value != hw_grade_5){
        ui->hw_slider_5->setValue(value);
    }

    hw_grade_5 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_hw_slider_6_valueChanged(int value)
{
    if(value != hw_grade_6){
        ui->hw_sbox_6->setValue(value);
    }

    hw_grade_6 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_hw_sbox_6_valueChanged(int value)
{
    if(value != hw_grade_6){
        ui->hw_slider_6->setValue(value);
    }

    hw_grade_6 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_hw_slider_7_valueChanged(int value)
{
    if(value != hw_grade_7){
        ui->hw_sbox_7->setValue(value);
    }

    hw_grade_7 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_hw_sbox_7_valueChanged(int value)
{
    if(value != hw_grade_7){
        ui->hw_slider_7->setValue(value);
    }

    hw_grade_7 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_hw_slider_8_valueChanged(int value)
{
    if(value != hw_grade_8){
        ui->hw_sbox_8->setValue(value);
    }

    hw_grade_8 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_hw_sbox_8_valueChanged(int value)
{
    if(value != hw_grade_8){
        ui->hw_slider_8->setValue(value);
    }

    hw_grade_8 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_midterm_slider_1_valueChanged(int value){
    if(value != midterm_grade_1){
        ui->midterm_sbox_1->setValue(value);
    }

    midterm_grade_1 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_midterm_sbox_1_valueChanged(int value){
    if(value != midterm_grade_1){
        ui->midterm_slider_1->setValue(value);
    }

    midterm_grade_1 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_midterm_slider_2_valueChanged(int value){
    if(value != midterm_grade_2){
        ui->midterm_sbox_2->setValue(value);
    }

    midterm_grade_2 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_midterm_sbox_2_valueChanged(int value){
    if(value != midterm_grade_2){
        ui->midterm_slider_2->setValue(value);
    }

    midterm_grade_2 = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_final_slider_valueChanged(int value){
    if(value != final_grade){
        ui->final_sbox->setValue(value);
    }

    final_grade = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_final_sbox_valueChanged(int value){
    if(value != final_grade){
        ui->final_slider->setValue(value);
    }

    final_grade = value;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_radio_A_clicked()
{
    grading_scheme_A = true;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_radio_B_clicked()
{
    grading_scheme_A = false;

    calculate_overall_grade(grading_scheme_A, pic10b);
}

void grade_calculator::on_course_selection_currentIndexChanged(int index)
{
    if(index == 1){
        pic10b = true;
        midterm_grade_2 = project_grade;
        project_grade = 0;
        ui->midterm_project_label->setText("Midterm 2");
    }
    else{
        pic10b = false;
        project_grade = midterm_grade_2;
        midterm_grade_2 = 0;
        ui->midterm_project_label->setText("Project");
    }

    calculate_overall_grade(grading_scheme_A, pic10b);
}
