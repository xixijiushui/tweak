//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKMemberCell.h"

@class UIImageView;

@interface YKMemberCellActivate : YKMemberCell
{
    UIImageView *_memberImageView;
    UIImageView *_rightImageView;
}

@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIImageView *memberImageView; // @synthesize memberImageView=_memberImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layoutSelf;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
