//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSParser.h"

@class NSArray, NSString;

@interface LSLiveListModel : NSObject <LSParser>
{
    NSArray *_liveList;
    long long _total_count;
    long long _total_page;
}

@property(nonatomic) long long total_page; // @synthesize total_page=_total_page;
@property(nonatomic) long long total_count; // @synthesize total_count=_total_count;
@property(retain, nonatomic) NSArray *liveList; // @synthesize liveList=_liveList;
- (void).cxx_destruct;
- (void)parseObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
