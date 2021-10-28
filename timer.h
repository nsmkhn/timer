#pragma once
#include <iostream>
#include <chrono>

using namespace std::chrono;

struct Timer
{
    Timer(const char *label) : m_label(label), m_start(steady_clock::now())
    {
    }

    ~Timer()
    {
        duration<float, std::milli> duration = steady_clock::now() - m_start;
        std::cout << "[" << m_label << "]: " << duration.count() << " ms\n";
    }

private:
	const char *m_label;
	time_point<steady_clock> m_start;
};
