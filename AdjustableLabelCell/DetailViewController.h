//
//  DetailViewController.h
//  AdjustableLabelCell
//
//  Created by hiraya.shingo on 2014/05/02.
//
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
