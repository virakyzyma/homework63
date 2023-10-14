#pragma once

class Transport
{
protected:
    char* name;
    char* fuel;
public:
    void Set(const char* fuel, const char* name);

    virtual void Show() const;
};
