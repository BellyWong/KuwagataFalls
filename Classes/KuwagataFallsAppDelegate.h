//
//  KuwagataFallsAppDelegate.h
//  KuwagataFalls
//
//  Created by jari on 12/19/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface KuwagataFallsAppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
