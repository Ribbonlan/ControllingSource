//
//  DetailViewController.h
//  ControllingSource
//
//  Created by CA on 14-2-2.
//  Copyright (c) 2014年 CA. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
