class BaseUtil;

class CmpndIntr : public BaseUtil
{
    double cumm;
    public:
    CmpndIntr():cumm(0){}
    virtual void Calculate() override;
    virtual void Display() override;
};