//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface MFMessageBulletinsFilter : NSObject
{
    NSDate *_cutoffDate;
}

@property(retain, nonatomic) NSDate *cutoffDate; // @synthesize cutoffDate=_cutoffDate;
- (_Bool)messagePassTest:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCutoffDate:(id)arg1;

@end

