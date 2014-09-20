//
//  ViewController.h
//  PageViewDemo
//
//  Created by Anuj Katiyal on 21/09/14.
//  Copyright (c) 2014 Katiyals. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageContentViewController.h"

@interface ViewController : UIViewController <UIPageViewControllerDataSource>

- (IBAction)startWalkThrough:(id)sender;
@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (strong, nonatomic) NSArray *pageTitles;
@property (strong, nonatomic) NSArray *pageImages;

@end

