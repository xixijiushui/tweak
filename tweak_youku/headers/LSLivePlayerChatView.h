//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSCommponentView.h"

@interface LSLivePlayerChatView : LSCommponentView
{
    _Bool _chatEnable;
    _Bool _ignoreBottomToolBar;
}

+ (id)createWithPlayer:(id)arg1 viewManager:(id)arg2;
@property(nonatomic) _Bool ignoreBottomToolBar; // @synthesize ignoreBottomToolBar=_ignoreBottomToolBar;
@property(nonatomic) _Bool chatEnable; // @synthesize chatEnable=_chatEnable;
- (void)endPlayCode:(long long)arg1;
- (void)layout:(_Bool)arg1;
- (void)preload;

@end

