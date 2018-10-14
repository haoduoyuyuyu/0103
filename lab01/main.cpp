#include <QCoreApplication>
#include <QDebug>
#include <QList>
#include <QString>
class student
{
public:
    int Number;
    QString Name;
    int lesson1;
    int lesson2;

};



bool Name_sort(const student t1, const student t2)                                 //实现姓名比较
{
    if (t1.Name>t2.Name)
        return 1;
    else
        return 0;
}

bool lesson1_sort(const student t1, const student t2)                                //实现课程1比较
{
    if (t1.lesson1>t2.lesson1)
        return 1;
    else
        return 0;
}

bool lesson2_sort(const student t1, const student t2)                                //实现课程2比较
{
    if (t1.lesson2>t2.lesson2)
        return 1;
    else
        return 0;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    student s[4];
        s[0].Number=1403130209; s[0].Name="鲁智深";  s[0].lesson1=80;s[0].lesson2=72;
        s[1].Number=1403140101; s[1].Name=" 林冲 ";  s[1].lesson1=82;s[1].lesson2=76;
        s[2].Number=1403140102; s[2].Name=" 宋江 ";  s[2].lesson1=76;s[2].lesson2=85;
        s[3].Number=1403140103; s[3].Name=" 武松 ";  s[3].lesson1=88;s[3].lesson2=80;

        QList <student> A;
          A<<s[0]<<s[1]<<s[2]<<s[3];
          //定义一个QList
          qDebug("*******原始成绩********");
          qDebug()<<"  学号\t"<<"\t   姓名\t"<<"\t课程1"<<"\t课程2";
          for(int i=0;i<4;i++)
          {
              qDebug()<<A[i].Number<<"\t"<<A[i].Name<<"\t"<<A[i].lesson1<<"\t"<<A[i].lesson2;
          }
          qDebug()<<endl;
              //输出原始成绩单
          std::sort(A.begin(),A.end(),Name_sort);
          qDebug("*******按姓名排序为*******");
          qDebug()<<"  学号\t"<<"\t   姓名\t"<<"\t课程1"<<"\t课程2";
          for(int i=0;i<4;i++)
          {
              qDebug()<<A[i].Number<<"\t"<<A[i].Name<<"\t"<<A[i].lesson1<<"\t"<<A[i].lesson2;
          }
           qDebug()<<endl;
              //输出按姓名排序成绩单
          std::sort(A.begin(),A.end(),lesson1_sort);
          qDebug("*******按成绩一降序为*******");
          qDebug()<<"  学号\t"<<"\t   姓名\t"<<"\t课程1"<<"\t课程2";
          for(int i=0;i<4;i++)
          {
              qDebug()<<A[i].Number<<"\t"<<A[i].Name<<"\t"<<A[i].lesson1<<"\t"<<A[i].lesson2;
          }
           qDebug()<<endl;
              //输出按成绩一降序排列后的成绩单
          std::sort(A.begin(),A.end(),lesson2_sort);
          qDebug("*******按成绩二降序为*******");
          qDebug()<<"  学号\t"<<"\t   姓名\t"<<"课程1"<<"\t课程2";
          for(int i=0;i<4;i++)
          {
              qDebug()<<A[i].Number<<"\t"<<A[i].Name<<"\t"<<A[i].lesson1<<"\t"<<A[i].lesson2;
          }
             //输出按成绩一降序排列后的成绩单
          return a.exec();
      }
