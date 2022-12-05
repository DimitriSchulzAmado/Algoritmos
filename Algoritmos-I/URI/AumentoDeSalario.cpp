#include <iostream>
#include <iomanip>
using namespace std;

struct salary
{
    float salary;
    float reajuste;
    float NewSalary;
    int percent;
};

int main() {
    struct salary mon;
    
    //entrando com o salario
    cin >> mon.salary;
    
    //primeira condição
    if(mon.salary >= 0 && mon.salary <= 400)
    {
        mon.percent = 15;
        mon.reajuste = mon.salary * (mon.percent / 100.0);
        mon.NewSalary = mon.salary + mon.reajuste;
        
        //Exibindo resultados
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << mon.NewSalary << endl;
        cout << "Reajuste ganho: " << mon.reajuste << endl;
        cout << "Em percentual: " << mon.percent << " %" << endl;
    }
    
    //segunda condição
    else if(mon.salary > 400 && mon.salary <= 800)
    {
        mon.percent = 12;
        mon.reajuste = mon.salary * (mon.percent / 100.0);
        mon.NewSalary = mon.salary + mon.reajuste;
        
        //Exibindo resultados
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << mon.NewSalary << endl;
        cout << "Reajuste ganho: " << mon.reajuste << endl;
        cout << "Em percentual: " << mon.percent << " %" << endl;
    }

    //terceira condição
    else if(mon.salary > 800 && mon.salary <= 1200)
    {
        mon.percent = 10;
        mon.reajuste = mon.salary * (mon.percent / 100.0);
        mon.NewSalary = mon.salary + mon.reajuste;
        
        //Exibindo resultados
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << mon.NewSalary << endl;
        cout << "Reajuste ganho: " << mon.reajuste << endl;
        cout << "Em percentual: " << mon.percent << " %" << endl;
    }

    //quarta condição
    else if(mon.salary > 1200 && mon.salary <= 2000)
    {
        mon.percent = 7;
        mon.reajuste = mon.salary * (mon.percent / 100.0);
        mon.NewSalary = mon.salary + mon.reajuste;
        
        //Exibindo resultados
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << mon.NewSalary << endl;
        cout << "Reajuste ganho: " << mon.reajuste << endl;
        cout << "Em percentual: " << mon.percent << " %" << endl;
    }

    //Se for acima de 2000
    else if(mon.salary > 2000)
    {
        mon.percent = 4;
        mon.reajuste = mon.salary * (mon.percent / 100.0);
        mon.NewSalary = mon.salary + mon.reajuste;
        
        //Exibindo resultados
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << mon.NewSalary << endl;
        cout << "Reajuste ganho: " << mon.reajuste << endl;
        cout << "Em percentual: " << mon.percent << " %" << endl;
    }
    return 0;
}