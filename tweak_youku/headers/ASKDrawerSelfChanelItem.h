//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ASKDrawerSelfChanelItem : NSObject
{
    _Bool _isSubscribed;
    _Bool _isVerified;
    NSString *_identifier;
    NSString *_title;
    NSString *_detailTitle;
    NSString *_headImageLink;
    NSString *_scheme;
}

@property(nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(nonatomic) _Bool isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(copy, nonatomic) NSString *headImageLink; // @synthesize headImageLink=_headImageLink;
@property(copy, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)segueModel;
- (id)init;

@end

