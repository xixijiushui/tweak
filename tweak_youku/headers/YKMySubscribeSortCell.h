//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface YKMySubscribeSortCell : UITableViewCell
{
    CDUnknownBlockType _YKMySubscibeSortCallBack;
    UILabel *_titleLabel;
    UIImageView *_indicatorImageView;
}

@property(retain, nonatomic) UIImageView *indicatorImageView; // @synthesize indicatorImageView=_indicatorImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType YKMySubscibeSortCallBack; // @synthesize YKMySubscibeSortCallBack=_YKMySubscibeSortCallBack;
- (void).cxx_destruct;
- (void)configModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

