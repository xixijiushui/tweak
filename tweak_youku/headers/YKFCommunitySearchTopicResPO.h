//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFCommunitySearchTopicResPO : YKFAPIModel
{
    _Bool _hasAward;
    NSString *_tdescription;
    long long _discussCount;
    NSString *_name;
    NSString *_picUrl;
    long long _topicId;
    long long _viewCount;
}

@property(nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) long long topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool hasAward; // @synthesize hasAward=_hasAward;
@property(nonatomic) long long discussCount; // @synthesize discussCount=_discussCount;
@property(retain, nonatomic) NSString *tdescription; // @synthesize tdescription=_tdescription;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

