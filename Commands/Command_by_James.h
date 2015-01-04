#ifndef Forward_h
#define Forward_h

#include "../CommandBase.h"

class Forward: public CommandBase{
    public:
        Forward();
        virtual void Initialize();
        virtual void Execute();
        virtual void End();
        virtual bool IsFinished();
        virtual void Interrupted();
    private:
        Victor* motorA;
};

#endif