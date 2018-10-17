#include <QCoreApplication>

#include <QDebug>
#include <QVector>
#include <QTextStream>
#include <QFile>

namespace SK {
enum SortKind{
    col01    =   0x00000001<<0,         //!< 第1列
    col02    =   0x00000001<<1,         //!< 第2列
    col03    =   0x00000001<<2,         //!< 第3列
    col04    =   0x00000001<<3,         //!< 第4列
    col05    =   0x00000001<<4,         //!< 第5列
    col06    =   0x00000001<<5,         //!< 第6列
    col07    =   0x00000001<<6,         //!< 第7列
    col08    =   0x00000001<<7,         //!< 第8列
    col09    =   0x00000001<<8,         //!< 第9列
    col10    =   0x00000001<<9,         //!< 第10列
    col11    =   0x00000001<<10,        //!< 第11列
    col12    =   0x00000001<<11,        //!< 第12列
    col13    =   0x00000001<<12,        //!< 第13列
    col14    =   0x00000001<<13,        //!< 第14列
    col15    =   0x00000001<<14,        //!< 第15列
    col16    =   0x00000001<<15,        //!< 第16列
    col17    =   0x00000001<<16,        //!< 第17列
    col18    =   0x00000001<<17,        //!< 第18列
    col19    =   0x00000001<<18,        //!< 第19列
    col20    =   0x00000001<<19,        //!< 第20列
    col21    =   0x00000001<<20,        //!< 第21列
    col22    =   0x00000001<<21,        //!< 第22列
    col23    =   0x00000001<<22,        //!< 第23列
    col24    =   0x00000001<<23,        //!< 第24列
    col25    =   0x00000001<<24,        //!< 第25列
    col26    =   0x00000001<<25,        //!< 第26列
    col27    =   0x00000001<<26,        //!< 第27列
    col28    =   0x00000001<<27,        //!< 第28列
    col29    =   0x00000001<<28,        //!< 第29列
    col30    =   0x00000001<<29,        //!< 第30列
    col31    =   0x00000001<<30,        //!< 第31列
    col32    =   0x00000001<<31,        //!< 第32列
};
}


typedef struct
{
    QStringList stud;          //定义字符串
} studData;

QDebug operator << (QDebug d, const studData &data)
{
    for(int i=0;i<data.stud.size();i++)
    d.noquote().nospace()<<QString(data.stud.at(i))<<"\t" ;  //输出一行的学生数据
    return d;
}

class myCmp
{
public:
    myCmp(int selectedColumn) { currentColumn = selectedColumn; }
    bool operator() (const studData& d1,const studData& d2) ;
private:
    int currentColumn;
};

bool myCmp::operator()(const studData &d1,const  studData &d2)
{
    bool result = false;
    quint32 sortedColumn = 0x00000001<<currentColumn;               //进行降序排序
    switch (sortedColumn)
    {
    case SK::col01:result=(d1.stud.at(1)>=d2.stud.at(1))? 1:0;break;
    case SK::col02:result=(d1.stud.at(2)>=d2.stud.at(2))? 1:0;break;
    case SK::col03:result=(d1.stud.at(3)>=d2.stud.at(3))? 1:0;break;
    case SK::col04:result=(d1.stud.at(4)>=d2.stud.at(4))? 1:0;break;
    case SK::col05:result=(d1.stud.at(5)>=d2.stud.at(5))? 1:0;break;
    case SK::col06:result=(d1.stud.at(6)>=d2.stud.at(6))? 1:0;break;
    case SK::col07:result=(d1.stud.at(7)>=d2.stud.at(7))? 1:0;break;
    case SK::col08:result=(d1.stud.at(8)>=d2.stud.at(8))? 1:0;break;
    case SK::col09:result=(d1.stud.at(9)>=d2.stud.at(9))? 1:0;break;
    case SK::col10:result=(d1.stud.at(10)>=d2.stud.at(10))? 1:0;break;
    case SK::col11:result=(d1.stud.at(11)>=d2.stud.at(11))? 1:0;break;
    case SK::col12:result=(d1.stud.at(12)>=d2.stud.at(12))? 1:0;break;
    case SK::col13:result=(d1.stud.at(13)>=d2.stud.at(13))? 1:0;break;
    case SK::col14:result=(d1.stud.at(14)>=d2.stud.at(14))? 1:0;break;
    case SK::col15:result=(d1.stud.at(15)>=d2.stud.at(15))? 1:0;break;
    case SK::col16:result=(d1.stud.at(16)>=d2.stud.at(16))? 1:0;break;
    case SK::col17:result=(d1.stud.at(17)>=d2.stud.at(17))? 1:0;break;
    case SK::col18:result=(d1.stud.at(18)>=d2.stud.at(18))? 1:0;break;
    case SK::col19:result=(d1.stud.at(19)>=d2.stud.at(19))? 1:0;break;
    case SK::col20:result=(d1.stud.at(20)>=d2.stud.at(20))? 1:0;break;
    case SK::col21:result=(d1.stud.at(21)>=d2.stud.at(21))? 1:0;break;
    case SK::col22:result=(d1.stud.at(22)>=d2.stud.at(22))? 1:0;break;
    case SK::col23:result=(d1.stud.at(23)>=d2.stud.at(23))? 1:0;break;
    case SK::col24:result=(d1.stud.at(24)>=d2.stud.at(24))? 1:0;break;
    case SK::col25:result=(d1.stud.at(25)>=d2.stud.at(25))? 1:0;break;
    case SK::col26:result=(d1.stud.at(26)>=d2.stud.at(26))? 1:0;break;
    case SK::col27:result=(d1.stud.at(27)>=d2.stud.at(27))? 1:0;break;
    case SK::col28:result=(d1.stud.at(28)>=d2.stud.at(28))? 1:0;break;
    case SK::col29:result=(d1.stud.at(29)>=d2.stud.at(29))? 1:0;break;
    case SK::col30:result=(d1.stud.at(30)>=d2.stud.at(30))? 1:0;break;
    case SK::col31:result=(d1.stud.at(31)>=d2.stud.at(31))? 1:0;break;
    case SK::col32:result=(d1.stud.at(32)>=d2.stud.at(32))? 1:0;break;
    }
    return result;
}



class ScoreSorter
{
public:
    ScoreSorter(QString dataFile);
    void readFile();                //读取文件
    void doSort();                  //实现排序功能
    friend QDebug operator << (QDebug d, const studData &data);
private:
    QString path;
    QList<studData > data;
    studData title;
    void expdata(quint8 list);     //实现将排序好后的数据写入文档
};


ScoreSorter::ScoreSorter(QString dataFile)
{
    path=dataFile;
}



void ScoreSorter::readFile()
{
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))      //判断是否能够打开
    {
        qDebug()<<"Can't open the file!"<<endl;
    }

    QString titile(file.readLine());
    title.stud = titile.split(" ", QString::SkipEmptyParts);
    if((title.stud).last() == "\n") title.stud.removeLast();
    studData eachdata;

    while(!file.atEnd())
    {
        QByteArray line = file.readLine();
        QString str(line);

        eachdata.stud = str.split(" ", QString::SkipEmptyParts);
        if((eachdata.stud).last() == "\n") eachdata.stud.removeLast();
        if(eachdata.stud.size()==0) continue;
        data.append(eachdata);
    }
    file.close();                                                            //关闭文件
}


void ScoreSorter::doSort()
{
    for(int i=1;i<this->title.stud.size();i++)
    {
        myCmp stducmp(i-1);
        std::sort(this->data.begin() , this->data.end() , stducmp );

        qDebug()<<"排序后输出，当前排序第 "<<i+1 <<" 列：";
        qDebug() << '\t'<< (this->title);

        for(int i=0;i<this->data.size();i++)  qDebug() << this->data.at(i);
        qDebug()<<"---------------------------------------------------------------\n";
        this->expdata(i+1);
    }
}


void ScoreSorter::expdata(quint8 list)
{
    QFile file("sorted_"+this->path);

    file.open(QIODevice::ReadWrite | QIODevice::Append);
    QTextStream stream(&file);
    stream.setCodec("UTF-8");
    stream<<QString("排序后输出，当前排序第 ")<<list <<QString(" 列：")<<"\r\n";
    stream<<"\t";


    for(int j=0;j<this->title.stud.size();j++)
        stream<<this->title.stud.at(j)<<"\t";
        stream<<"\r\n";
    for(int i=0;i<this->data.size();i++)
    {
        for(int j=0;j<this->title.stud.size();j++)
        stream<<this->data.at(i).stud.at(j)<<"\t";
        stream<<"\r\n";
    }


    stream<<"------------------------------------------------------------------"<<"\r\n\r\n";
    file.close();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //qInstallMessageHandler(myMessageOutput);

    QString datafile = "data.txt";
    QFile f("sorted_"+datafile);
    if (f.exists())  f.remove();
    ScoreSorter s(datafile);
    s.readFile();
    s.doSort();
    return a.exec();
}
