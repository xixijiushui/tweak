//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, YKBarrageInteractiveImage;

@interface YKBarrageInteractiveInfo : NSObject
{
    _Bool _show;
    long long _mode;
    NSNumber *_objectId;
    NSString *_iconTitle;
    NSString *_interactivityTitle;
    YKBarrageInteractiveImage *_image;
    NSString *_posUrlStr;
    NSString *_vid;
    NSString *_showId;
    NSString *_extension;
    unsigned long long _playAtSecond;
    NSString *_directoryUrl;
}

+ (id)buildFromJsonDict:(id)arg1 showId:(id)arg2 directoryUrl:(id)arg3;
+ (id)ykbarrage_addURL:(id)arg1 withQuery:(id)arg2;
@property(copy, nonatomic) NSString *directoryUrl; // @synthesize directoryUrl=_directoryUrl;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(nonatomic) unsigned long long playAtSecond; // @synthesize playAtSecond=_playAtSecond;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *posUrlStr; // @synthesize posUrlStr=_posUrlStr;
@property(retain, nonatomic) YKBarrageInteractiveImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *interactivityTitle; // @synthesize interactivityTitle=_interactivityTitle;
@property(copy, nonatomic) NSString *iconTitle; // @synthesize iconTitle=_iconTitle;
@property(copy, nonatomic) NSNumber *objectId; // @synthesize objectId=_objectId;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *interactivityUrl;
- (void)parseFromInteracitveTitle:(id)arg1 iconTitle:(id)arg2 imageUrl:(id)arg3;

@end

