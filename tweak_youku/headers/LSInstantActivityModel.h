//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LSInstantActivityModel : NSObject
{
    NSString *_linkUrl;
    NSString *_showType;
    NSString *_name;
    NSString *_iconUrl;
    NSString *_tipsText;
    double _tipsDuration;
    double _randomDelay;
    double _maxDelay;
    double _startTime;
    double _endTime;
}

@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double maxDelay; // @synthesize maxDelay=_maxDelay;
@property(nonatomic) double randomDelay; // @synthesize randomDelay=_randomDelay;
@property(nonatomic) double tipsDuration; // @synthesize tipsDuration=_tipsDuration;
@property(copy, nonatomic) NSString *tipsText; // @synthesize tipsText=_tipsText;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *showType; // @synthesize showType=_showType;
@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end
