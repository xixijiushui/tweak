//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OrangeTLogBizProtocol.h"

@class NSString;

@interface OrangeLogAvatar : NSObject <OrangeTLogBizProtocol>
{
}

- (void)error:(id)arg1;
- (void)info:(id)arg1;
- (void)debug:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

