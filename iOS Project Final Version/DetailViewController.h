//
//  DetailViewController.h
//  iOS Project Final Version
//
//  Created by Guest User on 29/01/16.
//  Copyright (c) 2016 DC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (nonatomic, retain) NSMutableString * detailViewControllerTitle;

@property (nonatomic, retain) NSMutableString * detailViewControllerLink;

@property (nonatomic, retain) NSMutableString * detailViewControllerPubDate;

@property (nonatomic, retain) NSMutableString * detailViewControllerImage;

@property (nonatomic, retain) IBOutlet UILabel * detailViewControllerLabel;

@property (copy, nonatomic) NSString * url;

@property (strong, nonatomic) IBOutlet UIImageView * imageView;

@property (strong, nonatomic) IBOutlet UIWebView * webView;

@end