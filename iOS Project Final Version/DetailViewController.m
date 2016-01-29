//
//  DetailViewController.m
//  iOS Project Final Version
//
//  Created by Guest User on 29/01/16.
//  Copyright (c) 2016 DC. All rights reserved.
//

#import "DetailViewController.h"

@interface DetailViewController ()

@end

@implementation DetailViewController

- (void)viewDidLoad {
    
    [super viewDidLoad];
    
    _detailViewControllerLabel.text = _detailViewControllerTitle;
    
    _detailViewControllerLabel.numberOfLines = 5;
    
    NSURL * imageURL = [NSURL URLWithString : self.detailViewControllerImage];
    
    NSData * imageData = [NSData dataWithContentsOfURL : imageURL];
    
    UIImage * image = [UIImage imageWithData : imageData];
    
    if ( [self.detailViewControllerImage isEqualToString:@""] ) {
        _imageView.image = [UIImage imageNamed:@"default.png"];
    } else {
        _imageView.image = image;
    }
    
    NSURL * myURL = [NSURL URLWithString : self.detailViewControllerLink];
    
    NSURLRequest *request = [NSURLRequest requestWithURL : myURL];
    
    [self.webView loadRequest : request];
}

- (void)didReceiveMemoryWarning {
    
    [super didReceiveMemoryWarning];
    
}

@end
