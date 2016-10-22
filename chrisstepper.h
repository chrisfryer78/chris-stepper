// stuff goes here

#ifndef chrisstepper
#define chrisstepper

class ChrisStepper {
  public:
    ChrisStepper(int steppin, int dirpin, int enablepin);
    void SetSpeed(int speed);
    void Step(int dir, int steps);
}

#endif // chrisstepper
