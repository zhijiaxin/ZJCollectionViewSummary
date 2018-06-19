//
//  ZJWaterLayout.h
//  ZJCollectionViewSummary
//
//  Created by James on 2018/6/12.
//  Copyright © 2018年 James. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZJWaterLayout;

typedef NS_ENUM(NSInteger, ZJWaterDirection) {
    ZJWaterVertical,//竖直方向布局
    ZJWaterHorizontal//水平方向布局
};

@protocol ZJWaterLayoutDelegate <NSObject>

@required
/** 宽高转换：ZJWaterVertical根据宽算高，ZJWaterHorizontal根据高算宽 */
- (CGFloat)waterFlowLayout:(ZJWaterLayout *)layout hieghtForItemAtIndex:(NSUInteger)index itemwidth:(CGFloat)itemwidth;

@optional
/** 列数 */
- (NSInteger)waterFlowLayoutColumnCount:(ZJWaterLayout *)layout;
/** 列间距 */
- (CGFloat)waterFlowLayoutColumnSpacing:(ZJWaterLayout *)layout;
/** 行间距 */
- (CGFloat)waterFlowLayoutRowSpacing:(ZJWaterLayout *)layout;
/** 边距 */
- (UIEdgeInsets)waterFlowLayoutEdgeInsets:(ZJWaterLayout *)layout;

@end

@interface ZJWaterLayout : UICollectionViewLayout
/** 代理 */
@property (nonatomic,weak) id <ZJWaterLayoutDelegate> delegate;
/** 布局方向 */
@property (nonatomic, assign) ZJWaterDirection waterDirection;

@end
