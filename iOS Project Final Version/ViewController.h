//
//  ViewController.h
//  iOS Project Final Version
//
//  Created by Guest User on 29/01/16.
//  Copyright (c) 2016 DC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, NSXMLParserDelegate> {
    
    NSXMLParser * parser;
    NSMutableArray * feeds;
    NSMutableDictionary * item;
    NSMutableString * title;
    NSMutableString * link;
    NSString * element;
    NSMutableString * pubDate;
    NSMutableString * image;
}

@property (nonatomic, retain) NSArray * list;

@property (nonatomic, retain) IBOutlet UITableView * tableView;

@end

