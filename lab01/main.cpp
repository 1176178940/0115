#include<QCoreApplication>
#include<QDebug>

 int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int i,j;
    QList<QString> zong1,zong2,zong3;
    QList<QString> xuehao;
      xuehao <<"1403130209"<<"1403140101"<<"1403140102"<<"1403140103";//将数据输入链表
    QList<QString> xingming;
      xingming <<"鲁智深" <<"林冲"<<"宋江"<<"武松"  ;
    QList<QString> kecheng1;
      kecheng1 <<"80"<<"82"<<"76"<<"88";
    QList<QString> kecheng2;
      kecheng2 <<"72"<<"76"<<"85"<<"80";
    QList< QList<QString> > zong;
      zong<<xuehao<<xingming<<kecheng1<<kecheng2; 


    qDebug()<<"    学号"<<"\t  姓名"<<"\t\t课程1"<<"课程2";//输出初始表格
    for( i=0;i<=3;i++)
      qDebug()<<xuehao.at(i)<<"\t"<<xingming.at(i)<<"\t"<<kecheng1.at(i)<<kecheng2.at(i);

    qDebug()<<"\n按姓名排序：";//输出按姓名排序的表格
    qDebug()<<"    学号"<<"      姓名"<<"  课程1"<<"课程2";
    zong1=zong.at(1);
    std::sort(zong1.begin(),zong1.end(),std::greater<QString>());//将姓名进行排序
    for( i=0;i<=3;i++)    //通过比对输出正确的数据
    {
        for( j=0;j<=3;j++)
            if(zong1.at(i)==zong.at(1).at(j))
            {
                qDebug()<<zong.at(0).at(j)<<"\t"<<zong.at(1).at(j)<<"\t"<<zong.at(2).at(j)<<zong.at(3).at(j);
            }


    }
    qDebug()<<"\n按课程1成绩排序：";//输出按课程1成绩排序的表格
    qDebug()<<"    学号"<<"\t  姓名"<<"\t\t课程1"<<"课程2";
    zong2=zong.at(2);
    std::sort(zong2.begin(),zong2.end(),std::greater<QString>());
    for( i=0;i<=3;i++)
    {
        for( j=0;j<=3;j++)
            if(zong2.at(i)==zong.at(2).at(j))
            {
                qDebug()<<zong.at(0).at(j)<<"\t"<<zong.at(1).at(j)<<"\t"<<zong.at(2).at(j)<<zong.at(3).at(j);
            }

    }


    qDebug()<<"\n按课程2成绩排序：";//输出按课程2成绩排序的表格
    qDebug()<<"    学号"<<"\t  姓名"<<"\t\t课程1"<<"课程2";
    zong3=zong.at(3);
    std::sort(zong3.begin(),zong3.end(),std::greater<QString>());
    for( i=0;i<=3;i++)
    {
        for( j=0;j<=3;j++)
            if(zong3.at(i)==zong.at(3).at(j))
            {
                qDebug()<<zong.at(0).at(j)<<"\t"<<zong.at(1).at(j)<<"\t"<<zong.at(2).at(j)<<zong.at(3).at(j);
            }

    }
    return a.exec();
}
