//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFCommunityCreatePostTopicRO : YKFAPIModel
{
    NSString *_tdescription;
    long long _fandomId;
    NSString *_name;
    NSString *_picUrl;
}

@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
@property(retain, nonatomic) NSString *tdescription; // @synthesize tdescription=_tdescription;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end
