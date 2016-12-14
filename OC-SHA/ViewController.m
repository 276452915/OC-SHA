//
//  ViewController.m
//  OC-SHA
//
//  Created by 王亮 on 16/12/14.
//  Copyright © 2016年 com.reaal.Dichtbij. All rights reserved.
//

#import "ViewController.h"
#import "NSString+SHA.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    NSString * name = @"wangliang";
    NSString * sha256 = [name sha256];
    NSLog(@"原文：%@",name);
    NSLog(@"sha256:%@",sha256);
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
