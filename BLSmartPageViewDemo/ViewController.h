//
//  ViewController.h
//  BLSmartPageViewDemo
//
//  Created by Landyu on 15/8/7.
//  Copyright (c) 2015年 Landyu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIPageViewControllerDataSource, UIPageViewControllerDelegate>
{
//    - (void)pageViewController:(UIPageViewController *)pageViewController didFinishAnimating:(BOOL)finished previousViewControllers:(NSArray *)previousViewControllers transitionCompleted:(BOOL)completed;
//    
//    - (UIPageViewControllerSpineLocation)pageViewController:(UIPageViewController *)pageViewController spineLocationForInterfaceOrientation:(UIInterfaceOrientation)orientation;
}




@property (strong, nonatomic) UIPageViewController *pageController;

@property (strong, nonatomic) IBOutlet UINavigationItem *viewControllerNavigationItem;
@property (strong, nonatomic) IBOutletCollection(UINavigationItem) NSArray *viewControllerNavigationItemCollection;

@end
