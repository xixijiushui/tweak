//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ChangeSkinManager;

@interface YKUserCenterSkinManager : NSObject
{
    ChangeSkinManager *_manager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) ChangeSkinManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (id)defaultHeaderBgImage;
- (id)defaultNavBgImage;
- (id)defaultNavBgColor;
- (id)defaultUserSubTitleColor;
- (id)defaultUserTitleColor;
- (id)defaultUserLevelBorderColor;
- (id)defaultUserLevelBgColor;
- (_Bool)isDefaultSkin;
- (id)coverImage;
- (id)avatarFrameImage;
- (id)themeColor;
- (id)statusBarColor;

@end

