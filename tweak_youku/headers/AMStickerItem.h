//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMPlayMethodConfigModel, NSNumber, NSString, UIImage;

@interface AMStickerItem : NSObject
{
    _Bool _cached;
    UIImage *_icon;
    NSString *_title;
    NSString *_name;
    NSString *_logoUrl;
    NSString *_triggerTip;
    NSString *_cachePath;
    NSString *_triggerImg;
    NSString *_from;
    AMPlayMethodConfigModel *_playMethod;
    NSNumber *_tid;
    NSNumber *_materialType;
    NSString *_downloadUrl;
}

@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(retain, nonatomic) NSNumber *materialType; // @synthesize materialType=_materialType;
@property(retain, nonatomic) NSNumber *tid; // @synthesize tid=_tid;
@property(nonatomic) _Bool cached; // @synthesize cached=_cached;
@property(retain, nonatomic) AMPlayMethodConfigModel *playMethod; // @synthesize playMethod=_playMethod;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *triggerImg; // @synthesize triggerImg=_triggerImg;
@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(retain, nonatomic) NSString *triggerTip; // @synthesize triggerTip=_triggerTip;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)downloadResourceWithBlock:(CDUnknownBlockType)arg1;

@end

