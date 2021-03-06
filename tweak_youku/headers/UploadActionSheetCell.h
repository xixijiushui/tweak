//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView, UploadActionSheetModel;

@interface UploadActionSheetCell : UITableViewCell
{
    UIImageView *_leftView;
    UILabel *_titleLabel;
    UIView *_separatorView;
    UploadActionSheetModel *_item;
}

@property(retain, nonatomic) UploadActionSheetModel *item; // @synthesize item=_item;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *leftView; // @synthesize leftView=_leftView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hideSeparatorView:(_Bool)arg1;
- (void)setData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

