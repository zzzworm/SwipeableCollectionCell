//
//  ZASwipeCollectionCell.h
//  SwipeCellKit
//
//  Created by CPU11713 on 4/21/17.
//  Copyright © 2017 CPU11713. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZASwipeable.h"

@interface ZASwipeCollectionCell : UICollectionViewCell <ZASwipeable>

@property (nonatomic, readwrite, weak) id<ZASwipeViewCellDelegate> delegate;
@property (nonatomic, readwrite, weak) UIView<ZASwipeCellParentViewProtocol> *parentView;

@property (nonatomic, readwrite) ZASwipeCellContext *context;

@end
