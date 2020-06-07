#ifndef GRADE_CALCULATOR_H
#define GRADE_CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class grade_calculator; }
QT_END_NAMESPACE

class grade_calculator : public QMainWindow
{
    Q_OBJECT

public:
    grade_calculator(QWidget *parent = nullptr);
    ~grade_calculator();

    void set_hw_value(int value);
    void set_midterm_value(int value);
    void set_final_value(int value);
    void calculate_overall_grade(bool grading_scheme_A, bool pic10b);

private slots:
    void on_hw_slider_1_valueChanged(int value);

    void on_hw_sbox_1_valueChanged(int value);

    void on_hw_slider_2_valueChanged(int value);

    void on_hw_sbox_2_valueChanged(int value);

    void on_hw_slider_3_valueChanged(int value);

    void on_hw_sbox_3_valueChanged(int value);

    void on_hw_slider_4_valueChanged(int value);

    void on_hw_sbox_4_valueChanged(int value);

    void on_hw_slider_5_valueChanged(int value);

    void on_hw_sbox_5_valueChanged(int value);

    void on_hw_slider_6_valueChanged(int value);

    void on_hw_sbox_6_valueChanged(int value);

    void on_hw_slider_7_valueChanged(int value);

    void on_hw_sbox_7_valueChanged(int value);

    void on_hw_slider_8_valueChanged(int value);

    void on_hw_sbox_8_valueChanged(int value);

    void on_midterm_slider_1_valueChanged(int value);

    void on_midterm_sbox_1_valueChanged(int value);

    void on_midterm_slider_2_valueChanged(int value);

    void on_midterm_sbox_2_valueChanged(int value);

    void on_final_slider_valueChanged(int value);

    void on_final_sbox_valueChanged(int value);

    void on_radio_A_clicked();

    void on_radio_B_clicked();

    void on_course_selection_currentIndexChanged(int index);

private:
    Ui::grade_calculator *ui;
    int hw_grade_1 = 0;
    int hw_grade_2 = 0;
    int hw_grade_3 = 0;
    int hw_grade_4 = 0;
    int hw_grade_5 = 0;
    int hw_grade_6 = 0;
    int hw_grade_7 = 0;
    int hw_grade_8 = 0;
    int midterm_grade_1 = 0;
    int midterm_grade_2 = 0;
    int final_grade = 0;
    int project_grade = 0;
    double overall_grade = 0.0;
    bool grading_scheme_A = true;
    bool pic10b = true;
};
#endif // GRADE_CALCULATOR_H
