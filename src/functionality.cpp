/*
MIT License

Copyright (c) 2022 Andrew Kushyk

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

//NEED TO BE IMPLEMENTED
//function for testing
void test(std::vector<Word> &vec)
{
    Fl_Window *words_W = new Fl_Window(600, 115, "Test");
    words_W->color(fl_rgb_color(25, 25, 25));

    Fl_Text_Display *disp = new Fl_Text_Display(0, 0, 600, 75);
    Fl_Text_Buffer *buff = new Fl_Text_Buffer;

    Fl_Input *inp = new Fl_Input(215, 75, 300, 25, "Your answer:");
    inp->color((fl_rgb_color(255, 255, 255)));
    inp->labelcolor(fl_rgb_color(255, 255, 255));
    inp->labelsize(15);
    inp->labelfont(FL_COURIER);
    inp->labelfont(FL_BOLD);

    buff->text("Text");

    disp->box(FL_FLAT_BOX);
    disp->buffer(buff);
    disp->color(fl_rgb_color(25, 25, 25));
    disp->textsize(15);
    disp->textfont(FL_COURIER);
    disp->textfont(FL_BOLD);
    disp->textcolor(fl_rgb_color(255, 255, 255));

    words_W->end();
    words_W->show();
}
