//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YYMediaPlayerUrlItem.h"

@class NSString;

@interface GPPlaySequenceItem : NSObject <YYMediaPlayerUrlItem>
{
    NSString *url;
    long long itemid;
    double seconds;
}

@property(nonatomic) double seconds; // @synthesize seconds;
@property(nonatomic) long long itemid; // @synthesize itemid;
@property(copy, nonatomic) NSString *url; // @synthesize url;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *fileId;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long isFlowAd;
@property(copy, nonatomic) NSString *serverMd5;
@property(nonatomic) long long size;
@property(copy, nonatomic) NSString *sliceId;
@property(readonly) Class superclass;

@end
