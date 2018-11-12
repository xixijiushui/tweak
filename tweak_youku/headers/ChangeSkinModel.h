//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSMutableArray, NSString;

@interface ChangeSkinModel : NSObject <NSCopying, NSMutableCopying>
{
    long long _skinId;
    NSString *_coverImg;
    NSString *_iphoneTimes2Url;
    NSString *_iphoneTimes3Url;
    NSString *_iphonexUrl;
    NSMutableArray *_previewImgList;
    long long _state;
    NSString *_title;
    NSString *_type;
    NSString *_validDays;
    NSString *_skinFilePath;
    NSString *_iphoneVipGuide;
    NSString *_iphoneVipUrl;
    NSString *_androidVipGuide;
    NSString *_androidVipUrl;
    NSString *_androidUrl;
    NSString *_androidImmersionUrl;
    NSString *_iphoneNewUrl;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *iphoneNewUrl; // @synthesize iphoneNewUrl=_iphoneNewUrl;
@property(copy, nonatomic) NSString *androidImmersionUrl; // @synthesize androidImmersionUrl=_androidImmersionUrl;
@property(copy, nonatomic) NSString *androidUrl; // @synthesize androidUrl=_androidUrl;
@property(copy, nonatomic) NSString *androidVipUrl; // @synthesize androidVipUrl=_androidVipUrl;
@property(copy, nonatomic) NSString *androidVipGuide; // @synthesize androidVipGuide=_androidVipGuide;
@property(copy, nonatomic) NSString *iphoneVipUrl; // @synthesize iphoneVipUrl=_iphoneVipUrl;
@property(copy, nonatomic) NSString *iphoneVipGuide; // @synthesize iphoneVipGuide=_iphoneVipGuide;
@property(copy, nonatomic) NSString *skinFilePath; // @synthesize skinFilePath=_skinFilePath;
@property(copy, nonatomic) NSString *validDays; // @synthesize validDays=_validDays;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *previewImgList; // @synthesize previewImgList=_previewImgList;
@property(copy, nonatomic) NSString *iphonexUrl; // @synthesize iphonexUrl=_iphonexUrl;
@property(copy, nonatomic) NSString *iphoneTimes3Url; // @synthesize iphoneTimes3Url=_iphoneTimes3Url;
@property(copy, nonatomic) NSString *iphoneTimes2Url; // @synthesize iphoneTimes2Url=_iphoneTimes2Url;
@property(copy, nonatomic) NSString *coverImg; // @synthesize coverImg=_coverImg;
@property(nonatomic) long long skinId; // @synthesize skinId=_skinId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)currentModelToDic;
- (id)currentJsonModel;
- (void)configSiknWithInfor:(id)arg1;

@end

