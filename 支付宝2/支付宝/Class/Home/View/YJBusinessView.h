//
//  YJBusinessView.h
//  支付宝
//
//  Created by admin on 16/3/9.
//  Copyright © 2016年 小码哥. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YJBusinessView : UICollectionView

+ (YJBusinessView *)businessView;

@property (nonatomic, strong) NSArray *imageArray;

@end
