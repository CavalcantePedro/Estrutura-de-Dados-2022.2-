class No
{
private:
    int dado;
    No *prox;
public:
    No();
    ~No();

    int getDado();
    No *getProx();
    void setDado(int d);
    void setProx(No *p);
};
