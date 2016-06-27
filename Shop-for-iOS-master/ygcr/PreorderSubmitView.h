//
//  PreorderSubmitView.h
//  ygcr
//
//  Created by 黄治华(Tony Wong) on 15/11/01.
//  Copyright © 2015年 黄治华. All rights reserved.
//
//  @email 908601756@qq.com
//
//  @license The MIT License (MIT)
//

#import <UIKit/UIKit.h>
#import "PreorderEntity.h"

@protocol PreorderSubmitViewDelegate <NSObject>

- (void)doClickSubmitBtn;

@end


@interface PreorderSubmitView : UIView

@property (nonatomic, weak) id<PreorderSubmitViewDelegate> delegate;

+ (CGFloat)height;

- (void)fillContentWithPreorder:(PreorderEntity *)preorder;

@end
