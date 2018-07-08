#pragma once
#include "subject.h"
class RealSource :
	public subject
{
public:
	RealSource();
	~RealSource();

public:
	void GiveTextMail();
	void GiveCall();
	void GiveVideo();

};

