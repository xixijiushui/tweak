//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALBaseEvent.h"

@class NSString;

@interface ALVerifyTextEvent : ALBaseEvent
{
    NSString *_text;
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)toJSON;
- (id)initWithID:(id)arg1 text:(id)arg2;

@end

