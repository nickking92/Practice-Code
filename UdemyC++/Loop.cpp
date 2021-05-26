#include "Loop.h"

namespace Loop {

    void Loop::NestedCalculate()
    {
        int result = 0;

        std::vector<int>vec = { 1,2,3};
        if (vec.size() > 1) {
            for (size_t i = 0; i < vec.size()-1; i++)
                for (size_t j = i + 1; j < vec.size(); j++)
                {
                    result += (vec[i] * vec[j]);
                    std::cout << result << std::endl;

                }
        }
    }

    void Loop::Histogram()
    {
        int num_items;

        std::cout << "Enter number of items" << std::endl;
        std::cin >> num_items;

        std::vector<int> data;

        for (int i = 1; i <= num_items; ++i)
        {
            int data_Item;
            std::cin >> data_Item;
            data.push_back(data_Item);
        }
        for (auto val : data)
        {
            for (int i = 1; i <= val; ++i)
            {
                if (i % 5 == 0)
                {
                    std::cout << "*";
                }else
                {
                    std::cout << "-";
                }
            }
            std::cout << std::endl;
        }
        //std::cout << std::endl;
    }

    
    void Loop::vektorChar()
    {
        std::vector<char> ime{ 'N', 'i','n','a' };
        ime[0] = 'K';
        ime.at(0) = 'K';
        for (char slovo : ime)
        {
            std::cout << slovo<<std::endl;
        }
        std::cout << "" << std::endl;
        for (size_t i = 0; i < ime.size(); i++)
        {
            std::cout << ime[i];
        }
    }



    void Loop::MultidimensionalVector()
    {
        std::vector<std::vector<std::string>> cars =
        {
            {"BMW","m3"},
            {"Audi","A3"},
            {"Porsche","911 Turbo"},
            {"Ferari","LaFerrari"}
        };

        for (auto i = cars.begin(); i < cars.end(); i++)
        {
            for (auto j = i->begin(); j < i->end(); j++)
                std::cout << *j << " ";
            std::cout << "\n";

        }
    }

    void Loop::DualVektor()
    {
        std::vector<int> vector1 = {};
        std::vector<int> vector2 = {};

        vector1.push_back(10);
        vector1.push_back(20);
        vector2.push_back(100);
        vector2.push_back(200);
        std::cout << "Size of vector 1 is " << vector1.size() << \
            " and values are " << vector1.at(0) << " and " << vector1.at(1) << std::endl;

        std::cout << "Size of vector 2 is " << vector2.size() << \
            " and values are " << vector2.at(0) << " and " << vector2.at(1) << std::endl;

        std::vector<std::vector<int>>DualV;
        DualV.push_back(vector1);
        DualV.push_back(vector2);

        for (auto i = DualV.begin(); i < DualV.end(); i++)
        {
            for (auto j = i->begin(); j < i->end(); j++)
                std::cout << *j << " ";
            std::cout << "\n";
        }
    }

    void Loop::NestedVector() {
        std::vector <std::vector<int>> vector_2D
        {
         {1,2,3},
        {10,20,30,40},
        {100,200,300,400,500}
        };
        for (const auto& vec : vector_2D)
        {
            for (const auto& val : vec)
            {
                std::cout << val << std::endl;
            }
            std::cout << " " << std::endl;
        }
    }

    void Loop::contBreak()
    {
        std::vector<int>someinputbers = { 1,2,3,4,5,7,8,9,10 };
        for (auto input : someinputbers)
        {
            if (input == 3) {
                continue;
            }
            if (input == 8) {
                break;
            }
            std::cout << input << std::endl;
        }
    }

    void Loop::devidedBy3or5()
    {
        std::vector<int> vec{ 1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700 };
        for (auto count : vec)
        {
            if (count % 3 == 0 || count % 5 == 0)
            {
                std::cout << vec[count];
            }
        }
    }

    void Loop::someOddinputbers() {
        int sum{};
        for (int i = 0; i < 16; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
                std::cout << sum << std::endl;
            }
        }
    }
    void Loop::tenInRow() {
        for (int i = 1; i <= 100; ++i)
        {
            std::cout << i << ((i % 10 == 0) ? "\n" : " "); // every 10 (i) output new line
        }
    }

    void Loop::doubleValueOneLoop()
    {
        for (int i = 0, j = 0; i < 5; i++, j++)

        {
            int result = i * j;
            std::cout << i << "*" << j << " = " << result << std::endl;
        }
    }
    void Loop::eveninputbers() {
        const int size = 100;;
        int eveninputbers[size];
        for (int x = 0; x < size; x++)
        {
            eveninputbers[x] = x;
            if (x % 2 != 0)
            {
                std::cout << eveninputbers[x] << std::endl;
            }
        }
    }
    void Loop::whileLoop() {
        int input;

        while (std::cin >> input)
        {
            switch (input)
            {
            case Ponedeljak:
                std::cout << "Danas je ponedeljak!" << std::endl;
                break;
            case Utorak:
                std::cout << "Danas je utorak!" << std::endl;
                break;
            case Sreda:
                std::cout << "Danas je sreda!" << std::endl;
                break;
            case Cetvrtak:
                std::cout << "Danas je cetvrtak!" << std::endl;
                break;
            case Petak:
                std::cout << "Danas je petak!" << std::endl;
                break;
            case Subota:
                std::cout << "Danas je subota!" << std::endl;
                break;
            case Nedelja:
                std::cout << "Danas je nedelja!" << std::endl;
                break;
            default:
                std::cout << "Pogresan izbor! :)" << std::endl;
                break;
            }
        }
    }
    void Loop::doWhile()
    {
        int input = 0;
        do {
            switch (input)
            {
            case 0:
                std::cout << "Hello" << std::endl;
            case 1:
                std::cout << "Hi" << std::endl;
                break;
            case 2:
                std::cout << "Zdravo" << std::endl;
                break;
            case 3:
                std::cout << "Heeej" << std::endl;
                break;
            case 34:
                std::cout << "Hola" << std::endl;
                break;
            default:
                std::cout << "Goodbye" << std::endl;
                break;
            }
        } while (std::cin >> input);
    }


    void Loop::Table()
    {
        int row=5;
      int column=2;
      std::string names[5][2] = {
      { "Nikola","Krstic" },
      { "Nina", "Spanovic" },
      { "Helena", "Ajvaz" },
      { "Andrijana", "Magdic" },
      { "Teodora", "Joksimovic"}
      };
      std::cin>>names[0][0];
      std::cin >> names[0][1];
      for(int i=0;i <row;i++)
      {
          for (int j = 0; j <column; j++)
          {
              std::cout <<names[i][j] << std::endl;
          }
          std::cout << "" << std::endl;
      }
    }

    void Loop::pointerCharLoop()
    {
        char characters[4] = { 'N','i','n','a'};

      for (char* i = &characters[0]; i < &characters[4]; i++)
      {
          std::cout << *i << std::endl;
      }
    }
}
