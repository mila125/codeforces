#include <iostream>   // Librería para entrada y salida
#include <vector>
using namespace std;  // Evita escribir std:: en cada línea

// Función principal
std::string  yes_no() {
    // Tu código empieza aquí
    int t = 0;

    int n = 0;
    int m = 0; 
    int j = 0;
    cin >> t;
    int i = 0;
    while (i < t)
    {
        cin >> n >> m;
        std::vector<int> volunteers(n);
        std::vector<char> hector_trayecto(n);

        //Relleno el array de los voluntarios
        for (int k = 0; k < n; k++)
        {
            cin >> volunteers[k];
        }
        i++;
        int second = 0;
        int k = 0;
        while (!(hector_trayecto.at(n-1) == 'H'))
        {
            second++;
            for (int l = 0; l < n; l++)
            {
                volunteers.at(l)++;
                if(second==m)
                { 
                    second = 0;
                    volunteers.at(l) = 0;
                }
            }
            if (volunteers.at(j) == 0)
            {
                 
                if (!(volunteers.at(j + 1) == 0))
                {
                    hector_trayecto.at(j + 1) = 'H';
                    hector_trayecto.at(j) = ' ';
                    j = j + 1;

                }
                else if (!(volunteers[j - 1] == 0) && (n > 0))
                {
                    hector_trayecto.at(j - 1) = 'H';
                    hector_trayecto.at(j) = ' ';
                    j = j - 1;

                }
                else
                {
                    return("NO");
                }

            }
            
        }
    }



    // Fin del programa
    return("YES");
}
int main()
{
    std::string  resultado = yes_no();
    std::cout <<resultado;
    return 0;
}