//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KKFeedRecommendModel;

@interface KKFeedItemResult : NSObject
{
    _Bool _isRecommend;
    KKFeedRecommendModel *_item;
}

+ (id)parseJson:(id)arg1;
@property(nonatomic) _Bool isRecommend; // @synthesize isRecommend=_isRecommend;
@property(retain, nonatomic) KKFeedRecommendModel *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)init;

@end
