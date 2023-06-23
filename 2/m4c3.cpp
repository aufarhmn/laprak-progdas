/*
    Modul 4 Chekpoint 3
    By: Aufa N R
*/

#include <iostream>
#include <cstring>

using namespace std;

struct Action {
    char title[50];
    int duration;
};

struct Drama {
    char title[50];
    int releaseYear;
};

struct Comedy {
    char title[50];
    float rating;
};

union Film {
    Action action;
    Drama drama;
    Comedy comedy;
};

int main() {
    Film film;
    strcpy(film.action.title, "Avengers");
    film.action.duration = 150;

    cout << "Data Film Action:" << endl;
    cout << "Judul: " << film.action.title << endl;
    cout << "Durasi: " << film.action.duration << " menit" << endl;
    cout << "Ukuran byte judul: " << sizeof(film.action.title) << endl;
    cout << "Ukuran byte durasi: " << sizeof(film.action.duration) << endl;
    cout << endl;

    strcpy(film.drama.title, "The Shawshank Redemption");
    film.drama.releaseYear = 1994;

    cout << "Data Film Drama:" << endl;
    cout << "Judul: " << film.drama.title << endl;
    cout << "Tahun Rilis: " << film.drama.releaseYear << endl;
    cout << "Ukuran byte judul: " << sizeof(film.drama.title) << endl;
    cout << "Ukuran byte tahun rilis: " << sizeof(film.drama.releaseYear) << endl;
    cout << endl;

    strcpy(film.comedy.title, "Superbad");
    film.comedy.rating = 7.6;

    cout << "Data Film Comedy:" << endl;
    cout << "Judul: " << film.comedy.title << endl;
    cout << "Rating: " << film.comedy.rating << endl;
    cout << "Ukuran byte judul: " << sizeof(film.comedy.title) << endl;
    cout << "Ukuran byte rating: " << sizeof(film.comedy.rating) << endl;
    cout << endl;

    cout << "Ukuran byte variabel union Film: " << sizeof(film) << endl;

    return 0;
}