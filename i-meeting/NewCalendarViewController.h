//
//  NewCalendarViewController.h
//  i-meeting
//
//  Created by Sanchit Bahal on 24/10/12.
//  Copyright (c) 2012 ThoughtWorks Technologies (India) Pvt. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NewCalendarViewController : UITableViewController

@property (nonatomic) NSArray *events;
@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end