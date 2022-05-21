#include "mainwindow.h"
#include "main.h"

/*
void Test_QObj::set_fixed_val(QLineEdit& line_to_set)
{
    line_to_set.setText((const QString) "42");
}
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QMainWindow w;
    QWidget w;

    //QVector<QWidget*> vect_0_label;
    //QVector<QLineEdit*> vect_1_line_edit;

    //QBoxLayout column_0(QBoxLayout::TopToBottom);
    QIntValidator validator_0_dates (0, 100, NULL);

    QLabel label_0_month_payment;//("Hello world");
    label_0_month_payment.setText("Сумма ежемесячного взноса: ");

    QLineEdit test_line_0;
    test_line_0.setText("test text 0");

    QFormLayout form_layout_0;
    form_layout_0.addRow("monthly installment", &test_line_0);

    w.setLayout(&form_layout_0);

    /*
    QLabel label_1_number_of_month;
    label_1_number_of_month.setText("Количество месяцев: ");

    QLabel label_2_year_percent;
    label_2_year_percent.setText("Процент годовых: ");

    QLabel label_3_investment_sum;
    label_3_investment_sum.setText("Сумма вложений: ");

    QLabel label_3_1_value;
    label_3_1_value.setText("0");

    QLabel label_4_percent_sum;
    label_4_percent_sum.setText("Прибыль: ");

    QLabel label_4_1_value;
    label_4_1_value.setText("0");

    QLabel label_5_total_amount;
    label_5_total_amount.setText("Общая сумма: ");

    QLabel label_5_1_value;
    label_5_1_value.setText("0");

    vect_0_label.push_back(&label_0_month_payment);
    vect_0_label.push_back(&label_1_number_of_month);
    vect_0_label.push_back(&label_2_year_percent);
    vect_0_label.push_back(&label_3_investment_sum);
    vect_0_label.push_back(&label_3_1_value);
    vect_0_label.push_back(&label_4_percent_sum);
    vect_0_label.push_back(&label_4_1_value);
    vect_0_label.push_back(&label_5_total_amount);
    vect_0_label.push_back(&label_5_1_value);

    for (int i = 0; i < vect_0_label.size(); ++i)
    {
        vect_0_label[i]->adjustSize();
    }

    //Test_QObj tmp_obj_0;

    QLineEdit line_0_month_payment;

    //QObject::connect(&line_0_month_payment, SIGNAL(QEvent::FocusOut), &line_0_month_payment, SLOT(setText(( QString) "42")));

    QLineEdit line_1_number_of_month;
    QLineEdit line_2_year_percent;
    vect_1_line_edit.push_back(&line_0_month_payment);
    vect_1_line_edit.push_back(&line_1_number_of_month);
    vect_1_line_edit.push_back(&line_2_year_percent);

    for (int i = 0; i < vect_1_line_edit.size(); ++i)
    {
       vect_1_line_edit[i]->setValidator(&validator_0_dates);
    }

    QPushButton btn_0_calculate("Вычислить профит");


    QVector<QWidget*> vect_2_all_layout_0;
    vect_2_all_layout_0.push_back(&label_0_month_payment);
    vect_2_all_layout_0.push_back(&line_0_month_payment);
    vect_2_all_layout_0.push_back(&label_1_number_of_month);
    vect_2_all_layout_0.push_back(&line_1_number_of_month);
    vect_2_all_layout_0.push_back(&label_2_year_percent);
    vect_2_all_layout_0.push_back(&line_2_year_percent);
    vect_2_all_layout_0.push_back(&btn_0_calculate);

    for (int i = 0; i < vect_2_all_layout_0.size(); ++i)
    {
       //QObject::connect(vect_2_all_layout_0[i], SIGNAL(QEvent::FocusOut), vect_2_all_layout_0[i], SLOT(setNum(42)));
       column_0.addWidget(vect_2_all_layout_0[i]);
    }

    QBoxLayout column_1(QBoxLayout::TopToBottom);
    QBoxLayout string_0_main(QBoxLayout::LeftToRight);
    QBoxLayout string_1_investment_sum(QBoxLayout::LeftToRight);
    QBoxLayout string_2_percent_sum(QBoxLayout::LeftToRight);
    QBoxLayout string_3_total_amount(QBoxLayout::LeftToRight);

    string_1_investment_sum.addWidget(&label_3_investment_sum);
    string_1_investment_sum.addWidget(&label_3_1_value);

    string_2_percent_sum.addWidget(&label_4_percent_sum);
    string_2_percent_sum.addWidget(&label_4_1_value);

    string_3_total_amount.addWidget(&label_5_total_amount);
    string_3_total_amount.addWidget(&label_5_1_value);

    column_1.addLayout(&string_1_investment_sum);
    column_1.addLayout(&string_2_percent_sum);
    column_1.addLayout(&string_3_total_amount);

    string_0_main.addLayout(&column_0);
    string_0_main.addLayout(&column_1);

    w.setLayout(&string_0_main);
    */
    w.show();

    return a.exec();
}
