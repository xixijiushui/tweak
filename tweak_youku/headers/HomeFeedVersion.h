//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HomeFeedVersion : NSObject
{
    NSString *_feedTag;
}

+ (id)shared;
@property(copy, nonatomic) NSString *feedTag; // @synthesize feedTag=_feedTag;
- (void).cxx_destruct;
- (void)postFeedVersionChangedNotification;
- (_Bool)isFeedWithTag:(id)arg1;
- (id)feedGuideStatisticsArgEdition;
- (_Bool)isMixFeed;
- (_Bool)isDoubleFeed;
- (_Bool)isSingleFeed;
- (_Bool)isFeed;
- (_Bool)isOverSee;
- (void)saveVersion:(id)arg1;
- (id)init;

@end

