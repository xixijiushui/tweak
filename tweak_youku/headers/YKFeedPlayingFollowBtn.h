//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface YKFeedPlayingFollowBtn : UIView
{
    _Bool _isFollow;
    NSString *_userImageUrl;
    UIImageView *_leftImageView;
    UILabel *_rightTitle;
    UILabel *_allTitle;
}

@property(retain, nonatomic) UILabel *allTitle; // @synthesize allTitle=_allTitle;
@property(retain, nonatomic) UILabel *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(copy, nonatomic) NSString *userImageUrl; // @synthesize userImageUrl=_userImageUrl;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
- (void).cxx_destruct;
- (void)setHidden:(_Bool)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

