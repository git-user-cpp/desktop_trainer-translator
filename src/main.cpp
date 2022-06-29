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

#include "inc.hpp"

int main()
{
    enum
    {
        spacing = 20,
        button_w = 700,
        button_h = 100,
        Lfont_size = 20
    };

    int win_weight = button_w + spacing * 2;
    int win_height = button_h * 5 + spacing * 6;

    //window
    Fl_Window *win = new Fl_Window(win_weight, win_height, "Trainer-translator");
    win->color(fl_rgb_color(25, 25, 25));

    //test button
    Fl_Button *test = new Fl_Button(spacing, spacing, button_w, button_h, "Start test");
    test->color(fl_rgb_color(125, 255, 125));
    test->labelfont(FL_COURIER);
    test->labelfont(FL_BOLD);
    test->labelsize(Lfont_size);

    //input button
    Fl_Button *new_words = new Fl_Button(spacing, spacing * 2 + button_h, button_w, button_h, "Entry new words");
    new_words->color(fl_rgb_color(125, 255, 125));
    new_words->labelfont(FL_COURIER);
    new_words->labelfont(FL_BOLD);
    new_words->labelsize(Lfont_size);

    //output button
    Fl_Button *output_words = new Fl_Button(spacing, spacing * 3 + button_h * 2, button_w, button_h, "Read the words");
    output_words->color(fl_rgb_color(125, 255, 125));
    output_words->labelfont(FL_COURIER);
    output_words->labelfont(FL_BOLD);
    output_words->labelsize(Lfont_size);

    //info button
    Fl_Button *info = new Fl_Button(spacing, spacing * 4 + button_h * 3, button_w, button_h, "Info about the creator and license");
    info->color(fl_rgb_color(125, 255, 125));
    info->labelfont(FL_COURIER);
    info->labelfont(FL_BOLD);
    info->labelsize(Lfont_size);

    //exit button
    Fl_Button *exit_b = new Fl_Button(spacing, spacing * 5 + button_h * 4, button_w, button_h, "Exit");
    exit_b->color(fl_rgb_color(255, 125, 125));
    exit_b->labelfont(FL_COURIER);
    exit_b->labelfont(FL_BOLD);
    exit_b->labelsize(Lfont_size);

    win->end();
    win->show();

    return Fl::run();
}