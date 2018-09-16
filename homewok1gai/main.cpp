#include<QDebug>
#include<QStringList>

#define SHUZI 0x12345678
typedef quint8 byte;
typedef quint32 word;

#define LLO(xxx) ((byte)((word)(xxx)&255))  //取最低8位
#define HLO(xxx) ((byte)((word)(xxx)>>8))   //取次低8位
#define LHI(xxx) ((byte)((word)(xxx)>>16))  //取次高8位
#define HHI(xxx) ((byte)((word)(xxx)>>24))  //取最高8位
#define MAX(x,y) (((x)>(y))?(x):(y))        //x,y中取最大值
#define MIN(x,y) (((x)<(y))?(x):(y))        //x,y中取最小值

int main()

{
    quint32 SHUZIA;
    QList<quint8> values;
    values<<HHI(SHUZI)<<LHI(SHUZI)<<HLO(SHUZI)<<LLO(SHUZI);
    qDebug()<<"原始值：0x12345678=="<<SHUZI;                                                              //输出原始值
    qDebug("0x%x==%d 0x%x==%d 0x%x==%d 0x%x==%d ",HHI(SHUZI),HHI(SHUZI),LHI(SHUZI),LHI(SHUZI),HLO(SHUZI),HLO(SHUZI),LLO(SHUZI),LLO(SHUZI));
    //输出最高8位，次高8位，次低8位，最低8位
    qDebug("最高8位和次高八位最大值：0x%x<%d>",MAX(HHI(SHUZI),LHI(SHUZI)),MAX(HHI(SHUZI),LHI(SHUZI)));       //输出最高8位，次高8位最大值
    qDebug("次低8位和最低八位最大值：0x%x<%d>",MIN(HLO(SHUZI),LLO(SHUZI)),MIN(HLO(SHUZI),LLO(SHUZI)));       //输出次低8位，最低8位最小值
    SHUZIA=(LHI(SHUZI))+(LLO(SHUZI)<<8)+(HHI(SHUZI)<<16)+(HLO(SHUZI)<<24);                              //组合新的数
    qDebug("重新组合后数值:0x%x<%d>",SHUZIA,SHUZIA);                                                       //输出重组后的数
    qDebug()<<"排序前："<<values;                                                                         //输出排序前的values里的数
    std::sort(values.begin(),values.end(),std::greater<quint8>());                                      //从大到小排序
    qDebug()<<"排序后："<<values;                                                                         //输出排序后的values里的数
    return 0;
}
