#include "Command_by_James.h"

Forward :: Forward(): CommandBase("Forward") {
    Requires (practice);
    motorA = new Victor(1);
}

Forward :: ~Forward(){
    delete motorA
}
void Forward :: Initialize() {
    motorA->Set(1.0);
}

void Forward :: Execute() {
    motorA->Set(1.0);
}

void Forward :: End() {
    
}

bool Forward :: IsFinished() {
  return false;  
}

void Forward :: Interrupted() {
    motorA->Set(0.0);
}