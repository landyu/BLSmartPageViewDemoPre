//
//  AppDelegate.h
//  BLSmartPageViewDemo
//
//  Created by Landyu on 15/8/7.
//  Copyright (c) 2015年 Landyu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    UINavigationItem *viewControllerNavigationItemSharedInstance;
}

@property(strong, nonatomic) UINavigationItem *viewControllerNavigationItemSharedInstance;
@property (strong, nonatomic) UIWindow *window;


@end
