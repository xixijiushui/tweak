//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YKUDCompositeURLHandler : NSObject
{
    id <YKUDURLHandler> _dnsHandler;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <YKUDURLHandler> dnsHandler; // @synthesize dnsHandler=_dnsHandler;
- (void).cxx_destruct;
- (id)defalutHandlers;
- (id)init;

@end
