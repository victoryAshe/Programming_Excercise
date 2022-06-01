using namespace std;

typedef double element;
class Vector
{
	element x, y;
public:
	Vector(double x, double y)
	{
		this->x = x; this-> y= y;
	}
	//TODO: 프렌드 선언
	friend Vector operator*(const Vector &v1, const Vector&v2);
};

// TODO: 연산자 중복
Vector operator*(const Vector& v1, const Vector& v2)
{
	Vector v(0.0, 0.0);
	v.x = v1.x * v2.x; 
	v.y = v1.y * v2.y;
	return v;
}