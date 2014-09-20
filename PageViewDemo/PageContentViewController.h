//
//  PageContentViewController.h
//  PageViewDemo
//
//  Created by Anuj Katiyal on 21/09/14.
//  Copyright (c) 2014 Katiyals. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageContentViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

@property NSUInteger pageIndex;
@property NSString *titleText;
@property NSString *imageFile;

@end
