//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CMSCardFooterItem, NSMutableArray;

@interface CMSCardFooterCell : UITableViewCell
{
    NSMutableArray *_instanceArray;
    double _viewWidth;
    double _viewHeight;
    double _viewSpacing;
    double _padding;
    id <CMSCardFooterDelegate> _delegate;
    CMSCardFooterItem *_footerItem;
    long long _finishCount;
}

+ (double)defaultHeight;
@property(nonatomic) long long finishCount; // @synthesize finishCount=_finishCount;
@property(nonatomic) __weak CMSCardFooterItem *footerItem; // @synthesize footerItem=_footerItem;
@property(nonatomic) __weak id <CMSCardFooterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)refresh;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

