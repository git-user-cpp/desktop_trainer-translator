/*
MIT License

Copyright (c) 2022 m!haly4

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "functionality.hpp"

//function for reading the data
void readData(std::vector<Word> &vec)
{
    std::fstream file;
    file.open("text.txt", std::ios::in);

        if(file)
        {
            Word word;
            int counter = 0;
            int flag = 0;
            char str[510];

            while (file.getline(str, 510, '\n')) //reading each line of the file
            {
                counter++;

                if(counter == 0 || counter % 2 == 0) //separation of the word from its translation
                {
                    word.Set_translation(str);
                    flag++;
                }
                else
                {
                    word.Set_word(str);
                    flag++;
                }

                if(flag % 2 == 0) //if a word and its translation are found, insert them into the vector
                {
                    vec.push_back(word);
                }
            }

            file.close();
        }
        else
        {
            std::cout << "Error file" << std::endl;
        }
}

//function for testing
// void test(std::vector<Word> &vec)
// {
//     std::string answer;
//     int score = 0;

//     for(auto &element : vec)
//     {
//         std::cout << "| Write a word on English: ";
//         std::cout << element.Get_translation() << std::endl;
//         std::cout << "| Your answer: ";
//         getline(std::cin, answer);

//         //lambda function for evaluation
//         auto result = [&]()
//         {
//             if(answer == element.Get_word()) //if the answer is equivalent to a word, the score increases
//             {
//                 score++;
//             }
//         };
//         result(); //calling the lambda function
//     }
    
//     //derivation of the general estimation
//     std::cout   << " _____________________________________________________________" << std::endl
//                 << "| Your mark is: " << score << "/" << vec.size() << std::endl
//                 << "|_____________________________________________________________" << std::endl;
// }