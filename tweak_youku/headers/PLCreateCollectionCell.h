//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface PLCreateCollectionCell : UITableViewCell
{
    UIImageView *_createIcon;
    UILabel *_createLabel;
    UIView *_separatorLine;
}

@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *createLabel; // @synthesize createLabel=_createLabel;
@property(retain, nonatomic) UIImageView *createIcon; // @synthesize createIcon=_createIcon;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

