#ifndef TERRENO_H
#define TERRENO_H 

class Terreno : public Imovel{ 
	private:
		double area;
	public:
		void setArea();
		double getArea(){return area;}
		Terreno(double a, std:::string);
}

#endif