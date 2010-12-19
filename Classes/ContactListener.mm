/*
 *  ContactListener.mm
 *  KuwagataFalls
 *
 *  Created by jari on 12/19/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */



#import "ContactListener.h"
#import "cocos2d.h"

void ContactListener::BeginContact(b2Contact* contact)
{
	b2Body* bodyA = contact->GetFixtureA()->GetBody();
	b2Body* bodyB = contact->GetFixtureB()->GetBody();
	CCSprite* spriteA = (CCSprite*)bodyA->GetUserData();
	CCSprite* spriteB = (CCSprite*)bodyB->GetUserData();
	
	if (spriteA != NULL && spriteB != NULL)
	{
			//spriteA.color = ccYELLOW;
			//spriteB.color = ccYELLOW;
	}
}


void ContactListener::EndContact(b2Contact* contact)
{
	b2Body* bodyA = contact->GetFixtureA()->GetBody();
	b2Body* bodyB = contact->GetFixtureB()->GetBody();
	CCSprite* spriteA = (CCSprite*)bodyA->GetUserData();
	CCSprite* spriteB = (CCSprite*)bodyB->GetUserData();
	
	if (spriteA != NULL && spriteB != NULL)
	{
		spriteA.color = ccWHITE;
		spriteB.color = ccWHITE;
	}
}
