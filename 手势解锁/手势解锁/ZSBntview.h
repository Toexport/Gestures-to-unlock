//
//  ViewController.m
//  Gesturestounlock
//
//  Created by Summer on 17/4/21.
//  Copyright © 2017年 Summer. All rights reserved.
//


#import <UIKit/UIKit.h>
@class ZSBntview;
//设置代理
@protocol ZSBntviewDelegate <NSObject>

-(void)zsbntview:(ZSBntview *)bntview :(NSString *)strM;

@end
@interface ZSBntview : UIView
@property(nonatomic)id<ZSBntviewDelegate> delegate;
@end
