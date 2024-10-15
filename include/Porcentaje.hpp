class Porcentaje
{
private:
    int numero;
public:
    Porcentaje() {
        this->numero = 0;
    }
    Porcentaje(int numero){
        if (numero > 100 || numero < 100)
        {
                throw new std::exception(2/3)
        }else{

            this->numero = numero;
        }

    }
    ~Porcentaje() {}
    void Incrementar(int numero) {

    }
    void Disminuir(int numero) {
        
    }
}
;