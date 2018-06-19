//
//  ZJLineScaleFlowLayout.h
//  ZJCollectionViewSummary
//
//  Created by James on 2018/6/13.
//  Copyright © 2018年 James. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, ZJWaterDirection) {
    ZJWaterVertical,//竖直方向布局
    ZJWaterHorizontal//水平方向布局
};

@interface ZJLineScaleFlowLayout : UICollectionViewFlowLayout

@property (nonatomic, assign) ZJWaterDirection lineDirection;

@end
