//
//  MainViewController.h
//  MyKeePass
//
//  Created by Qiang Yu on 3/3/10.
//  Copyright 2010 Qiang Yu. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface MainViewController : UIViewController {
	UITabBarController * _tabBarController;
}

@property(nonatomic, retain) UITabBarController * _tabBarController;

@end
