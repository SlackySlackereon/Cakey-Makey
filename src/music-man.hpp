#ifndef HEADER_MUSICMAN_HPP
#define HEADER_MUSICMAN_HPP

#include <thread>

class MusicMan{
private:
    bool initialized;
    void playmusic();
public:
    MusicMan();
};

extern MusicMan* music_man;

#endif // HEADER_MUSICMAN_HPP
