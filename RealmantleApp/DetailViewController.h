//
//  DetailViewController.h
//  RealmantleApp
//
//  Created by Mac Mini Beta on 28/12/16.
//  Copyright © 2016 ZupBraz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

