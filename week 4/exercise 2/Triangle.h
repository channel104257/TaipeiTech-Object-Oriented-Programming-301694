#pragma once
class Triangle
{
	public:

		enum Type
		{
			Equilateral,	//正三角形
			Isosceles,		//等腰三角形
			Right,			  //直角三角形
			Normal,			  //一般三角形
			Invaild			  //無法構成三角形
		};

		Triangle(float L1, float L2, float L3);
		Type GetType();
		float* GetSideLength();

	private:

		float side_length[3];
};

