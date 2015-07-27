//
//  DetailViewController.h
//  banki
//
//  Created by Daniel on 07.07.2015.
//  Copyright (c) 2015 Daniel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

