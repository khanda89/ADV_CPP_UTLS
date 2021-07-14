

class BaseUtil;
class PerformanceUtil : public BaseUtil
{
    public:
    virtual void Calculate() override;
    virtual void Display() override;
    virtual void Input() override;
    void Start_util() override;
};