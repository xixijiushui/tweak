//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface OutstationWebViewUrlManager : NSObject
{
    NSMutableArray *_supportedList;
    NSMutableArray *_notSupportedList;
}

+ (id)sharedInstence;
@property(retain, nonatomic) NSMutableArray *notSupportedList; // @synthesize notSupportedList=_notSupportedList;
@property(retain, nonatomic) NSMutableArray *supportedList; // @synthesize supportedList=_supportedList;
- (void).cxx_destruct;
- (void)requestWebViewCanOpenProtocolData;
- (_Bool)canOpenURL:(id)arg1;

@end
