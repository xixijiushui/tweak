//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class HCFooterItem, UIImageView, UILabel;

@interface DCFooterCell : UITableViewCell
{
    HCFooterItem *_footerItem;
    UILabel *_titleLabel;
    UIImageView *_arrowImage;
}

@property(retain, nonatomic) UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) HCFooterItem *footerItem; // @synthesize footerItem=_footerItem;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

