//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CPInterruption : NSObject
{
    id <CPInterruptionDelegate> _delegate;
}

@property(nonatomic) id <CPInterruptionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endInterruptionWithFlags:(unsigned long long)arg1;
- (void)beginInterruption;
- (void)endInterrupt;
- (void)beginInterrupt;
- (void)interrupt:(id)arg1;
- (void)unobserver;
- (void)observeInterruption:(id)arg1;

@end

