//
//  ArticleDetailViewController.h
//  RSSParser_Sample
//
//  Created by Thibaut LE LEVIER on 2/13/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RSSItem.h"

@interface ArticleDetailViewController : UIViewController

@property (assign,nonatomic) RSSItem *item;
@property (weak, nonatomic) IBOutlet UITextView *myTextView;

@end
