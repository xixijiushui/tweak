//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFeedCardNewHeader.h"

@class UIImage, YKFeedCardHeaderTopIcon;

@interface STFeedPictxtHeaderView : YKFeedCardNewHeader
{
    int _followState;
    UIImage *_placeholderImg;
    YKFeedCardHeaderTopIcon *_setTopTabIcon;
}

@property(retain, nonatomic) YKFeedCardHeaderTopIcon *setTopTabIcon; // @synthesize setTopTabIcon=_setTopTabIcon;
@property(retain, nonatomic) UIImage *placeholderImg; // @synthesize placeholderImg=_placeholderImg;
@property(nonatomic) int followState; // @synthesize followState=_followState;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)articleDetailParamsFromModel:(id)arg1;
- (id)articleParamsWithStartComment:(_Bool)arg1;
- (void)configWithModel:(id)arg1;
- (void)fillUI;

// Remaining properties
@property(nonatomic) _Bool isPCPage;

@end

