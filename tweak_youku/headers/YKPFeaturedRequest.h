//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface YKPFeaturedRequest : NSObject
{
    NSArray *_originWorks;
    long long _offset;
}

+ (id)featuredRequest;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSArray *originWorks; // @synthesize originWorks=_originWorks;
- (void).cxx_destruct;

@end
