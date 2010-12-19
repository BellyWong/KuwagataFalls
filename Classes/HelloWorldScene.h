//
//  HelloWorldScene.h
//  KuwagataFalls
//
//  Created by jari on 12/19/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "Box2D.h"
#import "GLES-Render.h"

#import "ContactListener.h"

// HelloWorld Layer
@interface HelloWorld : CCLayer
{
	b2World* world;
		//GLESDebugDraw *m_debugDraw;
	
	ContactListener* contactListener;
}

// returns a Scene that contains the HelloWorld as the only child
+(id) scene;

// adds a new sprite at a given coordinate
-(void) addNewSpriteWithCoords:(CGPoint)p;

-(void) addSomeJoinedBodies:(CGPoint)pos;
-(void) addNewSpriteAt:(CGPoint)p;

@end
