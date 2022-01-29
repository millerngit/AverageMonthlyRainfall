// Noah Miller


#include <iostream>

int main()
{
    int const arraySize = 12;
    double monthArray[arraySize];
    const char* nameMonthArray[arraySize] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    int startMonth;
    double averageMonthlyRainfall;
    int dataPresentation;
    int repeat = 1;


    std::cout << "This program will detemine the average monthly rainfall\n";

    std::cout << "What is the current month? enter(1-12)\n";
    std::cin >> startMonth;
    startMonth = startMonth - 1;

    std::cout << "What was the rainfall for " << nameMonthArray[startMonth] << "\n";
    std::cin >> monthArray[startMonth];



    for (int i = startMonth - 1; i > -1; i--) {
        std::cout << "What was the rainfall for " << nameMonthArray[i] << "\n";
        std::cin >> monthArray[i];
    }


    for (int i = 11; startMonth < i; i--) {
        std::cout << "What was the rainfall for " << nameMonthArray[i] << "\n";
        std::cin >> monthArray[i];

    }

    averageMonthlyRainfall = (monthArray[0] + monthArray[1] + monthArray[2] + monthArray[3] + monthArray[4] +
        monthArray[5] + monthArray[6] + monthArray[7] + monthArray[8] + monthArray[9] + monthArray[10] +
        monthArray[11]) / 12;


    while (repeat == 1) {
        std::cout << "\nHow would you like you data presented? (1 = numbers, 2 = graph) \n";
        std::cin >> dataPresentation;

        // pure data
        if (dataPresentation == 1) {

            std::cout << "Month" << " " << "Rainfall" << "\n";

            std::cout << nameMonthArray[startMonth] << " " << monthArray[startMonth] << "\n";

            for (int i = startMonth - 1; i > -1; i--) {
                std::cout << nameMonthArray[i] << " " << monthArray[i];
                std::cout << "\n";
            }


            for (int i = 11; startMonth < i; i--) {
                std::cout << nameMonthArray[i] << " " << monthArray[i];
                std::cout << "\n";

            }

            std::cout << "Average Monthly Rainfall = " << averageMonthlyRainfall;


        }
        // graph
        double m = 0;
        if (dataPresentation == 2) {

            std::cout << "Month" << " " << "Rainfall" << "\n";

            std::cout << nameMonthArray[startMonth] << " " << monthArray[startMonth] << " ";
            int y = 0;
            int z = monthArray[startMonth];
            while (y < z) {


                std::cout << "*";
                y++;
            }
            std::cout << "\n";
            for (int i = startMonth - 1; i > -1; i--) {

                std::cout << nameMonthArray[i] << " " << monthArray[i] << " ";
                m = monthArray[i];

                int x = 0;
                while (x < m) {


                    std::cout << "*";
                    x++;
                }

                std::cout << "\n";
            }


            for (int i = 11; startMonth < i; i--) {

                std::cout << nameMonthArray[i] << " " << monthArray[i] << " ";
                m = monthArray[i];

                int x = 0;
                while (x < m) {


                    std::cout << "*";
                    x++;
                }

                std::cout << "\n";

            }

            std::cout << "Average Monthly Rainfall = " << averageMonthlyRainfall << " ";

            int a = 0;
            while (a < averageMonthlyRainfall) {


                std::cout << "*";
                a++;
            }
        }
      std::cout << "\n Would you like to repeat the previous operation(0 = no, 1 = yes) \n";
      std::cin >> repeat;
    }//repeat brackets
}