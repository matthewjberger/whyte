#pragma once

#include <vector>
#include "State.h"
#include "Event.h"

namespace whyte 
{
    class StateMachine : public Subject<Event, EventInfo>
    {
    public:
        ~StateMachine();

        void clear_states();
        void change_state(State*);
        void push_state(State*);
        void pop_state();
        void handle_events(SDL_Event*);
        void update();

    private:
        std::vector<State*> states_;
    };
}
