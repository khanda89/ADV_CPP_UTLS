class BaseUtil
{
    double p,in;
    int tn;

    public:
    BaseUtil():p(0), in(0), tn(0){}
    virtual void Input()=0;
    virtual void Calculate() = 0;
    virtual void Display() = 0;
    void Start_util();

    void SetPrincipal(double pr) {p = pr;}
    void SetInterest(double intr) {in = intr;}
    void SetTenor(int tnr = 1) {tn = tnr;}

    double GetPrincipal() { return p;}
    double GetInterest() { return in;}
    int GetTenor() { return tn;}
};