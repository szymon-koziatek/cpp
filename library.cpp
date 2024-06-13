#include <iostream>
#include <fstream>
#include <string>
#define LINE_MAX 1000

class Book{
    public:
    std::string title;
    std::string author;
    std::string genre;
    std::string body;
    void saveBookToFile(){
        std::cout << "Title:";
        std::cin.ignore();
        std::getline(std::cin, title);;
        std::cout << "Author:";
        std::getline(std::cin, author);
        std::cout << "Genre:";
        std::getline(std::cin, genre);
        std::cout << "Now write your book:";
        std::getline(std::cin, body);
        std::ofstream save_o(title + ".txt");
        save_o <<"Title:"+title+'\n'+"Author:"+author+'\n'+"Genre:"+genre+'\n'+body;
        save_o.close();
        std::fstream index;
        index.open("index.json", std::ios::app);
        if(index.is_open()){
            index << title << '\n';
            index.close();
        }
    }
    void listBooks(){
        std::ifstream index;
        index.open("index.json");
        if(index.fail()){
            std::cout << "Failed to read index!\n";
        }
        else{
            std::string array[LINE_MAX];
            int line = 0;
            while (!index.eof()){
            getline(index, array[line]);
            line++;
            }
            for(int i = 0; i < line; i++){
                std::cout << array[i] << '\n';
            }
        }
    }
    void readBook(){
        std::cout << "Enter the title of the book to open:";
        std::cin.ignore();
        std::getline(std::cin, title);
        std::ifstream save_i;
        save_i.open(title+".txt");
        if(save_i.fail()){
            std::cout << "failed to read file";
        }
        else{
            std::string array[LINE_MAX];
            int line = 0;
            while (!save_i.eof()){
            getline(save_i, array[line]);
            line++;
            }
            for(int i = 0; i < line; i++){
                std::cout << array[i] << '\n';
            }
        }
    }
    Book(std::string title, std::string author, std::string genre, std::string body){
        this->title = title;
        this->author = author;
        this->genre = genre;
        this->body = body;
    }
};


int main(){
    bool quit = false;
    while(quit == false){
        int choice;
        //book write var
        std::string iTitle = "title";
        std::string iAuthor = "author";
        std::string iGenre = "genre";
        std::string iBody = "body";
        Book book1(iTitle, iAuthor, iGenre, iBody);
        //console out start
        std::cout << "~~~~~~LIBRARY~~~~~~\n";
        std::cout << "To create a book enter 1\nTo open a book enter 2\nTo view book list enter 3\n";
        std::cin >> choice;
    
        if(choice == 1){
            book1.saveBookToFile();
        }
        else if(choice == 2){
            book1.readBook();
        }
        else if(choice == 3){
            book1.listBooks();
        }
        else{
            std::cout << "invalid number";
        }
    }
    return 0;
}
