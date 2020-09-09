#ifndef REDIRECT_IO_H
#define REDIRECT_IO_H

// Created by Rubén Rivas

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class redirect_io_t {
    stringstream out;
    streambuf *buffer_out;
    streambuf *buffer_in;
    bool redirect_flag = false;
public:
    redirect_io_t() :out{ std::ios_base::app | std::ios_base::in | std::ios_base::out } {
        redirect();
    }

    template<typename T>
    stringstream &operator>>(T &&target) {
        out >> target;
        return out;
    }

    template<typename T>
    stringstream &operator<<(const T &target) {
        out << target;
        return out;
    }

    stringstream& getline(string& target) {
        std::getline(out, target);
        return out;
    }

    void redirect() {
        // Check if it was redirected before
        if (redirect_flag) return;
        // Backup buffer
        buffer_in = cin.rdbuf();
        buffer_out = cout.rdbuf();

        // Redirect to file buffer
        cin.rdbuf(out.rdbuf());
        cout.rdbuf(out.rdbuf());

        // Flagged as redirected
        redirect_flag = true;
    }
    void reestablish() {
        // Check if it was not redirected before
        if (!redirect_flag) return;
        // Clear 
        out.str("");
        out.clear();
        // Restore Buffers
        cin.rdbuf(buffer_in);
        cout.rdbuf(buffer_out);
        redirect_flag = false;
    }

    ~redirect_io_t() {
        if (redirect_flag) reestablish();
    }
};

#endif