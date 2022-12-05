#include <iostream>
#include <fstream> //biblioteca para  trabalhar com arquivos
using namespace std;

int main()
{
    ofstream arq_Battery_Report;    //Handle para leitura do arquivo da bateria

    //Abrindo arquivo para leitura
    arq_Battery_Report.open("ProjFet.vbs", ofstream::out);

    cout << arq_Battery_Report << endl;
    //Fechando o arquivo
    arq_Battery_Report.close();

    return 0;
}