//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PLShow : NSObject
{
    _Bool _completed;
    NSString *_category;
    NSString *_title;
    NSString *_thumbMid;
    NSString *_thumbHD;
    long long _episodeTotal;
    long long _episodeLast;
    NSString *_showid;
    NSString *_subtitle;
}

@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *showid; // @synthesize showid=_showid;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic) long long episodeLast; // @synthesize episodeLast=_episodeLast;
@property(nonatomic) long long episodeTotal; // @synthesize episodeTotal=_episodeTotal;
@property(copy, nonatomic) NSString *thumbHD; // @synthesize thumbHD=_thumbHD;
@property(copy, nonatomic) NSString *thumbMid; // @synthesize thumbMid=_thumbMid;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
- (void).cxx_destruct;

@end
