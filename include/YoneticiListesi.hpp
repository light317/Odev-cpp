

/* 
 * File:   YoneticiListesi.hpp
 * Author: HAKAN
 *
 * Created on November 1, 2022, 8:28 AM
 */

#ifndef YONETICILISTESI_HPP
#define YONETICILISTESI_HPP

#include <iostream>

#include "SatirListesi.hpp"
#include "YoneticiNode.hpp"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "IndexOutOfBounds.hpp"
#include "ConsolePosition.hpp"

class YoneticiListesi {
private:
    YoneticiNode *head;
    int size;

    YoneticiNode* FindPreviousByPosition(int index);

    YoneticiNode* FindPosition(int index);

public:

    YoneticiListesi();
    int Count()const;
    bool isEmpty()const;
    void add(SatirListesi*& item);
    void insert(int index, SatirListesi*& item);
    SatirListesi*& first();
    SatirListesi*& last();
    int indexOf(SatirListesi*& item);
    void remove(SatirListesi*& item);
    void randomRemoveAtSatirListesi(int index, int inlineIndex);
    void calculateAveragee(int index);
    int randomGenerator(int index);
    void removeAt(int index);
    void moveNode(int from, int to);
    bool find(SatirListesi*& item);
    void reverse();
    void sortByAverage();
    SatirListesi*& elementAt(int index);
    void clear();
    void printIndex(int index, int x, int y);
    ~YoneticiListesi();

};


#endif /* YONETICILISTESI_HPP */

