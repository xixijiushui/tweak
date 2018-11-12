//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKShareObject.h"

#import "WeiboSDKDelegate.h"

@class NSArray, NSString;

@interface YKSinaShare : YKShareObject <WeiboSDKDelegate>
{
    NSArray *_errorArray;
}

@property(retain, nonatomic) NSArray *errorArray; // @synthesize errorArray=_errorArray;
- (void).cxx_destruct;
- (void)didReceiveWeiboResponse:(id)arg1;
- (_Bool)isInstall;
- (_Bool)isShowInstall;
- (_Bool)handleOpenURL:(id)arg1 application:(id)arg2;
- (_Bool)sendOpenPlatform:(int)arg1 withCallback:(CDUnknownBlockType)arg2;
- (_Bool)sendShareInfo:(id)arg1 withOpenPlatform:(int)arg2 withCallback:(CDUnknownBlockType)arg3;
- (id)initWithScene:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

