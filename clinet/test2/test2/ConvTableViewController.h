//
//  ConvTableViewController.h
//  test2
//
//  Created by Mohammad Saberian on 5/11/15.
//  Copyright (c) 2015 Mohammad Saberian. All rights reserved.
//

#import <UIKit/UIKit.h>

NSInputStream *inputStream;
NSOutputStream *outputStream;

@interface ConvTableViewController : UITableViewController <NSStreamDelegate>
@property (weak, nonatomic) IBOutlet UITextField *msgField;

- (IBAction)sendKey:(id)sender;
@property NSMutableArray *messages;

@end
