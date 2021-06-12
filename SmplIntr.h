class BaseUtil;
class SmplIntr : public BaseUtil
{
    double totalInr;

    public:
    SmplIntr():BaseUtil(), totalInr(0){}
    void Input() override;
    void Calculate() override;
    void Display() override;
    public:
};