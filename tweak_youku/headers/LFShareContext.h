//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LFSocketConnection, NSString;

@interface LFShareContext : NSObject
{
    _Bool _isAnchor;
    NSString *_roomID;
    NSString *_replayID;
    NSString *_shortVideoID;
    NSString *_theme;
    NSString *_topicID;
    NSString *_topicName;
    NSString *_nickName;
    NSString *_anchorId;
    NSString *_headUrl;
    id _shareImage;
    NSString *_giftName;
    long long _shareFromType;
    LFSocketConnection *_socketConnect;
}

@property(nonatomic) __weak LFSocketConnection *socketConnect; // @synthesize socketConnect=_socketConnect;
@property(nonatomic) long long shareFromType; // @synthesize shareFromType=_shareFromType;
@property(copy, nonatomic) NSString *giftName; // @synthesize giftName=_giftName;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(retain, nonatomic) id shareImage; // @synthesize shareImage=_shareImage;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(copy, nonatomic) NSString *anchorId; // @synthesize anchorId=_anchorId;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(copy, nonatomic) NSString *topicID; // @synthesize topicID=_topicID;
@property(copy, nonatomic) NSString *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) NSString *shortVideoID; // @synthesize shortVideoID=_shortVideoID;
@property(copy, nonatomic) NSString *replayID; // @synthesize replayID=_replayID;
@property(copy, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
- (void).cxx_destruct;

@end

