//
//  APPChildViewController.h
//  BLSmartPageViewDemo
//
//  Created by Landyu on 15/8/7.
//  Copyright (c) 2015年 Landyu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface APPChildViewController : UIViewController

//- (void)addChildViewController:(UIViewController *)childController;

@property (assign, nonatomic) NSInteger index;
@property (strong, nonatomic) IBOutlet UILabel *screenNumber;
- (IBAction)testButton:(UIButton *)sender;



@end