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

#include "callback.hpp"

//function for output info
void info_callback(Fl_Widget *w, void *)
{
    Fl_Window *info_W = new Fl_Window(600, 200, "Info");
    info_W->color(fl_rgb_color(25, 25, 25));

    Fl_Box *info = new Fl_Box(0, 0, 600, 200, "Creator of the program\nhttps://github.com/git-user-cpp");
    info->labelsize(20);
    info->labelcolor(fl_rgb_color(255, 255, 255));

    info_W->end();
    info_W->show();
}

//function to quit the program
void exit_callback(Fl_Widget *w, void *)
{
    Fl_Widget *p;

    do
    {
        p = w->parent();
        if(p)
        {
            w = p;
        }
    } while (p);
    
    w->hide();
}