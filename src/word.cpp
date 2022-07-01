#include "word.hpp"

Word::Word()
{   words.word = "";
    words.w_translation = "";
};

//overloaded two-parameterized constructor for assigning variables
Word::Word(std::string str1, std::string str2)
{
    this->words.word = str1;
    this->words.w_translation = str2;
};

Word::~Word(){};

//for data entry
void Word::DataEntry(std::string str1, std::string str2)
{
    this->words.word = str1;
    this->words.w_translation = str2;
}

//for setting the word
void Word::Set_word(char w[])
{
    this->words.word = w;
}

//for setting the word translation
void Word::Set_translation(char w[])
{
    this->words.w_translation = w;
}

//for getting the word
std::string Word::Get_word()
{
    return words.word;
}

//for getting the word translation
std::string Word::Get_translation()
{
    return words.w_translation;
}