//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface LFResourceSignalStack : NSObject
{
    NSNumber *_tempSignal;
}

+ (id)currentStack;
@property(retain, nonatomic) NSNumber *tempSignal; // @synthesize tempSignal=_tempSignal;
- (void).cxx_destruct;
- (id)init;

@end

