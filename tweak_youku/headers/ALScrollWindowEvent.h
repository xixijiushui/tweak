//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALBaseEvent.h"

@interface ALScrollWindowEvent : ALBaseEvent
{
    struct CGPoint _percent;
    struct CGPoint _offset;
}

@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) struct CGPoint percent; // @synthesize percent=_percent;
- (id)toJSON;
- (id)initWithPercent:(struct CGPoint)arg1 offset:(struct CGPoint)arg2;

@end

