//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HYTaobaoRelationUserInfo : NSObject
{
    NSString *_mobile;
    NSString *_region;
    NSString *_thirdpartyAvatar;
    NSString *_thirdpartyNickname;
    NSString *_tuid;
}

+ (id)buildFromJsonDict:(id)arg1;
@property(retain, nonatomic) NSString *tuid; // @synthesize tuid=_tuid;
@property(retain, nonatomic) NSString *thirdpartyNickname; // @synthesize thirdpartyNickname=_thirdpartyNickname;
@property(retain, nonatomic) NSString *thirdpartyAvatar; // @synthesize thirdpartyAvatar=_thirdpartyAvatar;
@property(retain, nonatomic) NSString *region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
- (void).cxx_destruct;

@end

