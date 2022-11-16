

/* 
 * File:   SatirListesi.hpp
 * Author: HAKAN
 *
 * Created on November 1, 2022, 6:59 AM
 */

#ifndef SATIRLISTESI_HPP
#define SATIRLISTESI_HPP



#include "SatirListesiNode.hpp"
#include "NoSuchElement.hpp"
#include <iomanip>

class SatirListesi {
private:
    SatirListesiNode *head;
    int size;

    SatirListesiNode* FindPreviousByPosition(int index);
public:
    SatirListesi();
    int Count()const;
    bool isEmpty()const;
    void add(const int& item);
    void insert(int index, const int& item);
    const int& first();
    const int& last();
    int indexOf(const int& item);
    void remove(const int& item);
    void removeAt(int index);
    bool find(const int& item);
    void reverse();
    const int& elementAt(int index);
    void clear();
    friend std::ostream& operator<<(std::ostream& screen, SatirListesi& rgt);
    void printNodesFromPositionInReverseOrder(int index);
    void printReverseOrder();
    void printSatirListesi(int x, int y);
    ~SatirListesi();

};


#endif /* SATIRLISTESI_HPP */

