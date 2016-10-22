// stuff goes here

#ifndef chrisstepper
#define chrisstepper

class ChrisStepper {
  public:
    int StepperNo;
    ChrisStepper(int steppin, int dirpin, int enablepin);
    void SetSpeed(int StepperNo, int speed);
    void Step(int StepperNo, int dir, int steps);
  private:
}

#endif // chrisstepper
