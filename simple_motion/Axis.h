#ifndef AXIS_H
#define AXIS_H

class Axis
{
	public:

	Axis();

	float SetPosition(float pos);
	
	float SetVelocity(float v);

	float GetTarget();

	private:

	float Position;
	
	float Velocity;
	
};

#endif
