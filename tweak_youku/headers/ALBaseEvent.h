//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ALBaseEvent : NSObject
{
    double _beginTimeInterval;
    double _endTimeInterval;
    NSString *_previousPage;
}

@property(copy, nonatomic) NSString *previousPage; // @synthesize previousPage=_previousPage;
@property(nonatomic) double endTimeInterval; // @synthesize endTimeInterval=_endTimeInterval;
@property(nonatomic) double beginTimeInterval; // @synthesize beginTimeInterval=_beginTimeInterval;
- (void).cxx_destruct;
- (id)toJSON;
- (id)init;

@end

