//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface UGCSubtitleInfoView : UIView
{
    UILabel *_username;
    UILabel *_loadTime;
}

@property(retain, nonatomic) UILabel *loadTime; // @synthesize loadTime=_loadTime;
@property(retain, nonatomic) UILabel *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)setUserName:(id)arg1 time:(id)arg2;
- (id)createSubTitle;
- (id)init;

@end
