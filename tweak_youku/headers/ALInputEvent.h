//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALBaseEvent.h"

@class NSString;

@interface ALInputEvent : ALBaseEvent
{
    NSString *_identifier;
    NSString *_text;
}

- (void).cxx_destruct;
- (id)toJSON;
- (id)initWithIdentifier:(id)arg1 text:(id)arg2;

@end

