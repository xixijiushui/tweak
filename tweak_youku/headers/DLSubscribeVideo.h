//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DLSubscribeShow, NSString;

@interface DLSubscribeVideo : NSObject
{
    _Bool _hadSynced;
    NSString *_vid;
    NSString *_sid;
    NSString *_title;
    NSString *_imageUrl;
    NSString *_showName;
    NSString *_stage;
    DLSubscribeShow *_show;
}

@property(nonatomic) __weak DLSubscribeShow *show; // @synthesize show=_show;
@property(nonatomic) _Bool hadSynced; // @synthesize hadSynced=_hadSynced;
@property(copy, nonatomic) NSString *stage; // @synthesize stage=_stage;
@property(copy, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;

@end

