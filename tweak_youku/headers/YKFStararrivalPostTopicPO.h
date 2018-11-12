//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFStararrivalPostTopicPO : YKFAPIModel
{
    _Bool _global;
    _Bool _hasAward;
    NSString *_tdescription;
    long long _discussCount;
    long long _fandomId;
    NSString *_fandomName;
    long long _gmtCreate;
    NSString *_icon;
    NSString *_name;
    NSString *_picUrl;
    long long _popularity;
    NSString *_schemaUrl;
    NSString *_sharedUrl;
    long long _status;
    long long _topicId;
    long long _type;
    long long _viewCount;
}

@property(nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long topicId; // @synthesize topicId=_topicId;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *sharedUrl; // @synthesize sharedUrl=_sharedUrl;
@property(retain, nonatomic) NSString *schemaUrl; // @synthesize schemaUrl=_schemaUrl;
@property(nonatomic) long long popularity; // @synthesize popularity=_popularity;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool hasAward; // @synthesize hasAward=_hasAward;
@property(nonatomic) long long gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(nonatomic) _Bool global; // @synthesize global=_global;
@property(retain, nonatomic) NSString *fandomName; // @synthesize fandomName=_fandomName;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
@property(nonatomic) long long discussCount; // @synthesize discussCount=_discussCount;
@property(retain, nonatomic) NSString *tdescription; // @synthesize tdescription=_tdescription;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end
