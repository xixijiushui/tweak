//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OPPreVIPAdvStreamSegmentModel : NSObject
{
    NSString *_cdnURL;
    NSString *_rtmpeURL;
    double _totalMillisecondsVideo;
}

+ (id)parseItem:(id)arg1;
@property(nonatomic) double totalMillisecondsVideo; // @synthesize totalMillisecondsVideo=_totalMillisecondsVideo;
@property(copy, nonatomic) NSString *rtmpeURL; // @synthesize rtmpeURL=_rtmpeURL;
@property(copy, nonatomic) NSString *cdnURL; // @synthesize cdnURL=_cdnURL;
- (void).cxx_destruct;

@end
