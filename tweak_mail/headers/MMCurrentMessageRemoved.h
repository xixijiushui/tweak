//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

@class MFMailMessage;

@interface MMCurrentMessageRemoved : NSDictionary
{
    MFMailMessage *_messageToSelect;
}

@property(retain, nonatomic) MFMailMessage *messageToSelect; // @synthesize messageToSelect=_messageToSelect;
- (void)dealloc;

@end

