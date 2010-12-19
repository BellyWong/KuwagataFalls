/*
 *  ContactListener.h
 *  KuwagataFalls
 *
 *  Created by jari on 12/19/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#import "Box2D.h"

class ContactListener : public b2ContactListener
{
private:
	void BeginContact(b2Contact* contact);
	void EndContact(b2Contact* contact);
};
