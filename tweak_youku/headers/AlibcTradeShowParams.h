//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AlibcTradeShowParams : NSObject
{
    _Bool _isNeedPush;
    unsigned long long _openType;
    NSString *_backUrl;
    NSString *_linkKey;
}

@property(retain, nonatomic) NSString *linkKey; // @synthesize linkKey=_linkKey;
@property(retain, nonatomic) NSString *backUrl; // @synthesize backUrl=_backUrl;
@property(nonatomic) unsigned long long openType; // @synthesize openType=_openType;
@property(nonatomic) _Bool isNeedPush; // @synthesize isNeedPush=_isNeedPush;
- (void).cxx_destruct;
- (id)init;

@end
